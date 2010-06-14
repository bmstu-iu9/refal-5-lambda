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
#ifdef OPTIMIZE_RESULT
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elems( res, n0, n5 );
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
  } while ( 0 );
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
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eProgName_b_1;
    refalrts::use( eProgName_b_1 );
    static refalrts::Iter eProgName_e_1;
    refalrts::use( eProgName_e_1 );
    static refalrts::Iter eConfig_b_1;
    refalrts::use( eConfig_b_1 );
    static refalrts::Iter eConfig_e_1;
    refalrts::use( eConfig_e_1 );
    // (~1 e.ProgName )~1 (~2 '@ e.Config )~2
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
    if( (n4 = refalrts::char_left( '@', bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eConfig_b_1 = bb_2;
    refalrts::use( eConfig_b_1 );
    eConfig_e_1 = be_2;
    refalrts::use( eConfig_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & LoadFile, "LoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n4 );
    refalrts::reinit_name( n3, & Main, "Main" );
    refalrts::reinit_open_call( n6 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_evar( res, eConfig_b_1, eConfig_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eProgName_b_1, eProgName_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eProgName_b_1;
    refalrts::use( eProgName_b_1 );
    static refalrts::Iter eProgName_e_1;
    refalrts::use( eProgName_e_1 );
    static refalrts::Iter eConfig_b_1;
    refalrts::use( eConfig_b_1 );
    static refalrts::Iter eConfig_e_1;
    refalrts::use( eConfig_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ProgName )~1 (~2 '@ e.Config )~2
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eConfig_b_1 = bb_2;
    refalrts::use( eConfig_b_1 );
    eConfig_e_1 = be_2;
    refalrts::use( eConfig_e_1 );
#else
    // (~1 e.ProgName )~1 (~2 '@ e.Config )~2
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
    if( (n4 = refalrts::char_left( '@', bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eConfig_b_1 = bb_2;
    refalrts::use( eConfig_b_1 );
    eConfig_e_1 = be_2;
    refalrts::use( eConfig_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Main, (void*) "Main"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eProgName_b_1, & eProgName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & LoadFile, (void*) "LoadFile"},
      {refalrts::icSpliceEVar, & eConfig_b_1, & eConfig_e_1},
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
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Main, "Main" ) )
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
    if( ! refalrts::alloc_name( n12, & LoadFile, "LoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eConfig_b_1, eConfig_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eProgName_b_1, eProgName_e_1 );
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
    static refalrts::Iter eProgName_b_1;
    refalrts::use( eProgName_b_1 );
    static refalrts::Iter eProgName_e_1;
    refalrts::use( eProgName_e_1 );
    static refalrts::Iter eArguments_b_1;
    refalrts::use( eArguments_b_1 );
    static refalrts::Iter eArguments_e_1;
    refalrts::use( eArguments_e_1 );
    // (~1 e.ProgName )~1 e.Arguments
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eArguments_b_1 = bb_0;
    refalrts::use( eArguments_b_1 );
    eArguments_e_1 = be_0;
    refalrts::use( eArguments_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & FindFiles_Compilers, "FindFiles_Compilers" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ParseCommandLine, "ParseCommandLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n0 );
    refalrts::reinit_name( n2, & Compile_And_Link, "Compile_And_Link" );
    //}}} REINITS
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elems( res, n8, n10 );
    res = refalrts::splice_evar( res, eArguments_b_1, eArguments_e_1 );
    res = refalrts::splice_elems( res, n4, n7 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eArguments_b_1;
    refalrts::use( eArguments_b_1 );
    static refalrts::Iter eArguments_e_1;
    refalrts::use( eArguments_e_1 );
    static refalrts::Iter eProgName_b_1;
    refalrts::use( eProgName_b_1 );
    static refalrts::Iter eProgName_e_1;
    refalrts::use( eProgName_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ProgName )~1 e.Arguments
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eArguments_b_1 = bb_0;
    refalrts::use( eArguments_b_1 );
    eArguments_e_1 = be_0;
    refalrts::use( eArguments_e_1 );
#else
    // (~1 e.ProgName )~1 e.Arguments
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eArguments_b_1 = bb_0;
    refalrts::use( eArguments_b_1 );
    eArguments_e_1 = be_0;
    refalrts::use( eArguments_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Compile_And_Link, (void*) "Compile_And_Link"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FindFiles_Compilers, (void*) "FindFiles_Compilers"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseCommandLine, (void*) "ParseCommandLine"},
      {refalrts::icSpliceEVar, & eArguments_b_1, & eArguments_e_1},
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Compile_And_Link, "Compile_And_Link" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & FindFiles_Compilers, "FindFiles_Compilers" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & ParseCommandLine, "ParseCommandLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eArguments_b_1, eArguments_e_1 );
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

extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FindFiles_Compilers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tCompilers_1;
    refalrts::use( tCompilers_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // t.Compilers (~1 e.Folders )~1 e.Files
    if( ! refalrts::tvar_left( tCompilers_1, bb_0, be_0 ) ) 
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
    eFolders_b_1 = bb_1;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_1;
    refalrts::use( eFolders_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & FindFiles, "FindFiles" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_stvar( res, tCompilers_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompilers_1;
    refalrts::use( tCompilers_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
#ifdef OLD_PATTERN
    // t.Compilers (~1 e.Folders )~1 e.Files
    if( ! refalrts::tvar_left( tCompilers_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eFolders_b_1 = bb_1;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_1;
    refalrts::use( eFolders_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#else
    // t.Compilers (~1 e.Folders )~1 e.Files
    if( ! refalrts::tvar_left( tCompilers_1, bb_0, be_0 ) ) 
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
    eFolders_b_1 = bb_1;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_1;
    refalrts::use( eFolders_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tCompilers_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FindFiles, (void*) "FindFiles"},
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
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & FindFiles, "FindFiles" ) )
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
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tCompilers_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eMessage_b_1;
    refalrts::use( eMessage_b_1 );
    static refalrts::Iter eMessage_e_1;
    refalrts::use( eMessage_e_1 );
    // (~1 & CmdLineError e.Message )~1
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
    if( (n1 = refalrts::function_left( & CmdLineError, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eMessage_b_1 = bb_1;
    refalrts::use( eMessage_b_1 );
    eMessage_e_1 = be_1;
    refalrts::use( eMessage_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    refalrts::reinit_name( n0, & WriteLine, "WriteLine" );
    refalrts::reinit_char( n3, 'C' );
    //}}} REINITS
    refalrts::push_stack( n23 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eMessage_b_1, eMessage_e_1 );
    res = refalrts::splice_elems( res, n4, n22 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eMessage_b_1;
    refalrts::use( eMessage_b_1 );
    static refalrts::Iter eMessage_e_1;
    refalrts::use( eMessage_e_1 );
#ifdef OLD_PATTERN
    // (~1 & CmdLineError e.Message )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdLineError, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eMessage_b_1 = bb_1;
    refalrts::use( eMessage_b_1 );
    eMessage_e_1 = be_1;
    refalrts::use( eMessage_e_1 );
#else
    // (~1 & CmdLineError e.Message )~1
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
    if( (n1 = refalrts::function_left( & CmdLineError, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eMessage_b_1 = bb_1;
    refalrts::use( eMessage_b_1 );
    eMessage_e_1 = be_1;
    refalrts::use( eMessage_e_1 );
#endif
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
      {refalrts::icSpliceEVar, & eMessage_b_1, & eMessage_e_1},
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
    if( ! refalrts::alloc_name( n5, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n26 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eMessage_b_1, eMessage_e_1 );
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
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    // t.Compiler e.Files_B (~1 & NotFound e.FileName )~1 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n2 ) ) 
        continue;
      refalrts::Iter n3;
      if( (n3 = refalrts::function_left( & NotFound, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eFiles_E_b_1 = bb_0;
      refalrts::use( eFiles_E_b_1 );
      eFiles_E_e_1 = be_0;
      refalrts::use( eFiles_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & Map, "Map" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & PrintNotFound, "PrintNotFound" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n2, n5 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n7 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
      res = refalrts::splice_elems( res, n2, n3 );
      res = refalrts::splice_elems( res, n7, n9 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler e.Files_B (~1 & NotFound e.FileName )~1 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & NotFound, bb_1, be_1 ) ) 
        continue;
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eFiles_E_b_1 = bb_0;
      refalrts::use( eFiles_E_b_1 );
      eFiles_E_e_1 = be_0;
      refalrts::use( eFiles_E_e_1 );
#else
    // t.Compiler e.Files_B (~1 & NotFound e.FileName )~1 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n2 ) ) 
        continue;
      refalrts::Iter n3;
      if( (n3 = refalrts::function_left( & NotFound, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eFiles_E_b_1 = bb_0;
      refalrts::use( eFiles_E_b_1 );
      eFiles_E_e_1 = be_0;
      refalrts::use( eFiles_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Map, (void*) "Map"},
        {refalrts::icFunc, (void*) & PrintNotFound, (void*) "PrintNotFound"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & NotFound, (void*) "NotFound"},
        {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eFiles_E_b_1, & eFiles_E_e_1},
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
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & Map, "Map" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & PrintNotFound, "PrintNotFound" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & NotFound, "NotFound" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n13 );
      refalrts::push_stack( n7 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
      refalrts::link_brackets( n10, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // t.Compiler e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ScanCollisions, "ScanCollisions" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & GetFileName, "GetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elems( res, n7, n8 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elems( res, n4, n6 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#else
    // t.Compiler e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & GetFileName, (void*) "GetFileName"},
      {refalrts::icSpliceEVar, & eFiles_b_1, & eFiles_e_1},
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ScanCollisions, "ScanCollisions" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & GetFileName, "GetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // (~1 & NotFound e.FileName )~1
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
    if( (n1 = refalrts::function_left( & NotFound, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    refalrts::reinit_name( n0, & WriteLine, "WriteLine" );
    refalrts::reinit_char( n3, 'C' );
    //}}} REINITS
    refalrts::push_stack( n38 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elems( res, n28, n38 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n4, n27 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // (~1 & NotFound e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & NotFound, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#else
    // (~1 & NotFound e.FileName )~1
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
    if( (n1 = refalrts::function_left( & NotFound, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#endif
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
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n41 );
    refalrts::push_stack( n4 );
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
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // (~1 & Output e.FileName )~1
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
    if( (n1 = refalrts::function_left( & Output, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );

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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // (~1 & Output e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & Output, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#else
    // (~1 & Output e.FileName )~1
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
    if( (n1 = refalrts::function_left( & Output, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
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
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    // (~1 & Source (~2 e.Source )~2 e.Output )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & Source, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_2;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_2;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_1;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_1;
    refalrts::use( eOutput_e_1 );

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
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
#ifdef OLD_PATTERN
    // (~1 & Source (~2 e.Source )~2 e.Output )~1
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_2;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_2;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_1;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_1;
    refalrts::use( eOutput_e_1 );
#else
    // (~1 & Source (~2 e.Source )~2 e.Output )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & Source, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_2;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_2;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_1;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_1;
    refalrts::use( eOutput_e_1 );
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // (~1 & Output e.FileName )~1
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
    if( (n1 = refalrts::function_left( & Output, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & GetFileName_Aux, "GetFileName_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_number( n7, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n9 );
    refalrts::link_brackets( n8, n3 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elems( res, n6, n8 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n4, n5 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
#ifdef OLD_PATTERN
    // (~1 & Output e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & Output, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#else
    // (~1 & Output e.FileName )~1
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
    if( (n1 = refalrts::function_left( & Output, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GetFileName_Aux, (void*) "GetFileName_Aux"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Output, (void*) "Output"},
      {refalrts::icCopyEVar, & eFileName_b_1, & eFileName_e_1},
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
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & GetFileName_Aux, "GetFileName_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_number( n8, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Output, "Output" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    // (~1 & Source (~2 e.Source )~2 e.Output )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & Source, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_2;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_2;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_1;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_1;
    refalrts::use( eOutput_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & GetFileName_Aux, "GetFileName_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_number( n10, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eOutput_b_2;
    refalrts::use( eOutput_b_2 );
    static refalrts::Iter eOutput_e_2;
    refalrts::use( eOutput_e_2 );
    if( ! refalrts::copy_evar( eOutput_b_2, eOutput_e_2, eOutput_b_1, eOutput_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n12 );
    refalrts::link_brackets( n2, n6 );
    refalrts::link_brackets( n11, n4 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eOutput_b_2, eOutput_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elems( res, n9, n10 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    res = refalrts::splice_elems( res, n7, n8 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eOutput_b_2;
    refalrts::use( eOutput_b_2 );
    static refalrts::Iter eOutput_e_2;
    refalrts::use( eOutput_e_2 );
#ifdef OLD_PATTERN
    // (~1 & Source (~2 e.Source )~2 e.Output )~1
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_2;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_2;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_1;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_1;
    refalrts::use( eOutput_e_1 );
#else
    // (~1 & Source (~2 e.Source )~2 e.Output )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & Source, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_2;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_2;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_1;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_1;
    refalrts::use( eOutput_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GetFileName_Aux, (void*) "GetFileName_Aux"},
      {refalrts::icSpliceEVar, & eOutput_b_1, & eOutput_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Source, (void*) "Source"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSource_b_1, & eSource_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & eOutput_b_1, & eOutput_e_1},
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
    if( ! refalrts::copy_evar( eOutput_b_2, eOutput_e_2, eOutput_b_1, eOutput_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & GetFileName_Aux, "GetFileName_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_number( n11, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & Source, "Source" ) )
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
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n12, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eOutput_b_2, eOutput_e_2 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GetFileName_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.FileName '. 'c 'p 'p'
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( 'c', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    refalrts::reinit_name( n2, & DoGetFileName, "DoGetFileName" );
    refalrts::reinit_close_call( n3 );
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // e.FileName '.cpp'
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'c', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( '.', bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName '. 'c 'p 'p'
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( 'c', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGetFileName, (void*) "DoGetFileName"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
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
    if( ! refalrts::alloc_name( n6, & DoGetFileName, "DoGetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.FileName '/'
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '/', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // e.FileName '/'
    if( ! refalrts::char_right( '/', bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName '/'
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '/', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.FileName '\\'
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '\\', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // e.FileName '\\'
    if( ! refalrts::char_right( '\\', bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName '\\'
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '\\', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
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
    static refalrts::Iter sLast_1;
    refalrts::use( sLast_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.FileName s.Last
    if( ! refalrts::svar_right( sLast_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & DoGetFileName, "DoGetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Lower, "Lower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sLast_1 );
    res = refalrts::splice_elems( res, n4, n6 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sLast_1;
    refalrts::use( sLast_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // e.FileName s.Last
    if( ! refalrts::svar_right( sLast_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName s.Last
    if( ! refalrts::svar_right( sLast_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGetFileName, (void*) "DoGetFileName"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lower, (void*) "Lower"},
      {refalrts::icSpliceSTVar, & sLast_1},
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & DoGetFileName, "DoGetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Lower, "Lower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sLast_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n3 );
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

static refalrts::FnResult DoLower(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & DoLower, "DoLower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'B' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'H' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'J' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'j' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'K' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'Q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'X' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'Y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'Z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_call( n55 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n55 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elems( res, n3, n55 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
#ifdef OLD_PATTERN
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLower, (void*) "DoLower"},
      {refalrts::icSpliceSTVar, & sChar_1},
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & DoLower, "DoLower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'B' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'H' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'J' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'j' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'K' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'Q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'X' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'Y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'Z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_call( n55 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n55 );
    refalrts::push_stack( n1 );
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
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sChar_1 );
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

static refalrts::FnResult DoLower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sUpper_1;
    refalrts::use( sUpper_1 );
    static refalrts::Iter sUpper_2;
    refalrts::use( sUpper_2 );
    static refalrts::Iter sLower_1;
    refalrts::use( sLower_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // s.Upper s.Upper s.Lower e.Tail
    if( ! refalrts::svar_left( sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::repeated_stvar_left( sUpper_2, sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLower_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, sLower_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sLower_1;
    refalrts::use( sLower_1 );
    static refalrts::Iter sUpper_1;
    refalrts::use( sUpper_1 );
    static refalrts::Iter sUpper_2;
    refalrts::use( sUpper_2 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
#ifdef OLD_PATTERN
    // s.Upper s.Upper s.Lower e.Tail
    if( ! refalrts::svar_left( sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::repeated_stvar_left( sUpper_2, sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLower_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // s.Upper s.Upper s.Lower e.Tail
    if( ! refalrts::svar_left( sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::repeated_stvar_left( sUpper_2, sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLower_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sLower_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sLower_1 );
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
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter sUpper_1;
    refalrts::use( sUpper_1 );
    static refalrts::Iter sLower_1;
    refalrts::use( sLower_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // s.Char s.Upper s.Lower e.Tail
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLower_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & DoLower, "DoLower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elems( res, n4, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sUpper_1;
    refalrts::use( sUpper_1 );
    static refalrts::Iter sLower_1;
    refalrts::use( sLower_1 );
#ifdef OLD_PATTERN
    // s.Char s.Upper s.Lower e.Tail
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLower_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // s.Char s.Upper s.Lower e.Tail
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUpper_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLower_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLower, (void*) "DoLower"},
      {refalrts::icSpliceSTVar, & sChar_1},
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & DoLower, "DoLower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sChar_1 );
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
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, sChar_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
#ifdef OLD_PATTERN
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
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
    res = refalrts::splice_stvar( res, sChar_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Renumerate(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult DelAccummulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eOutput1_b_1;
    refalrts::use( eOutput1_b_1 );
    static refalrts::Iter eOutput1_e_1;
    refalrts::use( eOutput1_e_1 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eOutput2_b_1;
    refalrts::use( eOutput2_b_1 );
    static refalrts::Iter eOutput2_e_1;
    refalrts::use( eOutput2_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & Output e.Output1 )~2 )~1 e.Files_M (~3 e.FileName 0 (~4 & Output e.Output2 )~4 )~3 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n2 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eOutput1_b_1 = bb_2;
      refalrts::use( eOutput1_b_1 );
      eOutput1_e_1 = be_2;
      refalrts::use( eOutput1_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n11;
        if( (n11 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter n18 = 0; // Right
        if( ! refalrts::brackets_match( n18, n11 ) ) 
          continue;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n14;
        if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n14 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n14 ) ) 
          continue;
        refalrts::Iter n15;
        if( (n15 = refalrts::function_left( & Output, bb_4, be_4 )) == 0 ) 
          continue;
        refalrts::use( n15 );
        refalrts::Iter n13;
        if( (n13 = refalrts::number_right( 0UL, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        eOutput2_b_1 = bb_4;
        refalrts::use( eOutput2_b_1 );
        eOutput2_e_1 = be_4;
        refalrts::use( eOutput2_e_1 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_char( n20, 'L' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_char( n21, 'I' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, 'N' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_char( n23, 'E' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_char( n24, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_char( n25, 'E' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_char( n26, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_char( n27, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_char( n28, 'O' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_char( n29, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_char( n30, ':' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_char( n31, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_char( n32, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_char( n33, 'u' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_char( n34, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_char( n35, 'p' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_char( n36, 'u' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_char( n37, 't' ) )
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
        if( ! refalrts::alloc_char( n41, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_char( n42, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_char( n43, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_char( n44, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_char( n45, ' ' ) )
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
        if( ! refalrts::alloc_char( n50, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_char( n51, 'h' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_char( n52, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_char( n53, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_char( n54, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_char( n55, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n56 = 0;
        if( ! refalrts::alloc_char( n56, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n57 = 0;
        if( ! refalrts::alloc_char( n57, 'm' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n58 = 0;
        if( ! refalrts::alloc_char( n58, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n59 = 0;
        if( ! refalrts::alloc_char( n59, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n60 = 0;
        if( ! refalrts::alloc_char( n60, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n61 = 0;
        if( ! refalrts::alloc_char( n61, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n62 = 0;
        if( ! refalrts::alloc_char( n62, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n63 = 0;
        if( ! refalrts::alloc_char( n63, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n64 = 0;
        if( ! refalrts::alloc_char( n64, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n65 = 0;
        if( ! refalrts::alloc_char( n65, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n66 = 0;
        if( ! refalrts::alloc_char( n66, 'm' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n67 = 0;
        if( ! refalrts::alloc_char( n67, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n68 = 0;
        if( ! refalrts::alloc_char( n68, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n69 = 0;
        if( ! refalrts::alloc_close_call( n69 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        refalrts::reinit_open_call( n6 );
        refalrts::reinit_name( n15, & WriteLine, "WriteLine" );
        refalrts::reinit_char( n2, 'C' );
        refalrts::reinit_char( n5, 'O' );
        refalrts::reinit_char( n11, 'M' );
        refalrts::reinit_char( n14, 'M' );
        refalrts::reinit_char( n8, 'A' );
        refalrts::reinit_char( n9, 'N' );
        refalrts::reinit_char( n17, 'D' );
        refalrts::reinit_char( n18, ' ' );
        //}}} REINITS
        refalrts::push_stack( n69 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n69 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elems( res, n50, n68 );
        res = refalrts::splice_evar( res, eOutput2_b_1, eOutput2_e_1 );
        res = refalrts::splice_elems( res, n45, n49 );
        res = refalrts::splice_evar( res, eOutput1_b_1, eOutput1_e_1 );
        res = refalrts::splice_elems( res, n20, n44 );
        res = refalrts::splice_elems( res, n17, n18 );
        res = refalrts::splice_elems( res, n8, n9 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eOutput1_b_1;
    refalrts::use( eOutput1_b_1 );
    static refalrts::Iter eOutput1_e_1;
    refalrts::use( eOutput1_e_1 );
    static refalrts::Iter eOutput2_b_1;
    refalrts::use( eOutput2_b_1 );
    static refalrts::Iter eOutput2_e_1;
    refalrts::use( eOutput2_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & Output e.Output1 )~2 )~1 e.Files_M (~3 e.FileName 0 (~4 & Output e.Output2 )~4 )~3 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Output, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) ) 
        continue;
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eOutput1_b_1 = bb_2;
      refalrts::use( eOutput1_b_1 );
      eOutput1_e_1 = be_2;
      refalrts::use( eOutput1_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::function_left( & Output, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::number_right( 0UL, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        eOutput2_b_1 = bb_4;
        refalrts::use( eOutput2_b_1 );
        eOutput2_e_1 = be_4;
        refalrts::use( eOutput2_e_1 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
#else
    // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & Output e.Output1 )~2 )~1 e.Files_M (~3 e.FileName 0 (~4 & Output e.Output2 )~4 )~3 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n2 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eOutput1_b_1 = bb_2;
      refalrts::use( eOutput1_b_1 );
      eOutput1_e_1 = be_2;
      refalrts::use( eOutput1_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n11;
        if( (n11 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter n18 = 0; // Right
        if( ! refalrts::brackets_match( n18, n11 ) ) 
          continue;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n14;
        if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n14 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n14 ) ) 
          continue;
        refalrts::Iter n15;
        if( (n15 = refalrts::function_left( & Output, bb_4, be_4 )) == 0 ) 
          continue;
        refalrts::use( n15 );
        refalrts::Iter n13;
        if( (n13 = refalrts::number_right( 0UL, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        eOutput2_b_1 = bb_4;
        refalrts::use( eOutput2_b_1 );
        eOutput2_e_1 = be_4;
        refalrts::use( eOutput2_e_1 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
#endif
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
          {refalrts::icSpliceEVar, & eOutput1_b_1, & eOutput1_e_1},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icSpliceEVar, & eOutput2_b_1, & eOutput2_e_1},
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
          {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
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
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_name( n21, & WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, 'C' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_char( n23, 'O' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_char( n24, 'M' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_char( n25, 'M' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_char( n26, 'A' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_char( n27, 'N' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_char( n28, 'D' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_char( n29, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_char( n30, 'L' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_char( n31, 'I' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_char( n32, 'N' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_char( n33, 'E' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_char( n34, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_char( n35, 'E' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_char( n36, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_char( n37, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_char( n38, 'O' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_char( n39, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_char( n40, ':' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_char( n41, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_char( n42, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_char( n43, 'u' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_char( n44, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_char( n45, 'p' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_char( n46, 'u' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_char( n47, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_char( n48, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_char( n49, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_char( n50, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_char( n51, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_char( n52, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_char( n53, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_char( n54, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_char( n55, ' ' ) )
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
        if( ! refalrts::alloc_char( n60, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n61 = 0;
        if( ! refalrts::alloc_char( n61, 'h' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n62 = 0;
        if( ! refalrts::alloc_char( n62, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n63 = 0;
        if( ! refalrts::alloc_char( n63, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n64 = 0;
        if( ! refalrts::alloc_char( n64, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n65 = 0;
        if( ! refalrts::alloc_char( n65, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n66 = 0;
        if( ! refalrts::alloc_char( n66, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n67 = 0;
        if( ! refalrts::alloc_char( n67, 'm' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n68 = 0;
        if( ! refalrts::alloc_char( n68, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n69 = 0;
        if( ! refalrts::alloc_char( n69, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n70 = 0;
        if( ! refalrts::alloc_char( n70, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n71 = 0;
        if( ! refalrts::alloc_char( n71, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n72 = 0;
        if( ! refalrts::alloc_char( n72, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n73 = 0;
        if( ! refalrts::alloc_char( n73, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n74 = 0;
        if( ! refalrts::alloc_char( n74, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n75 = 0;
        if( ! refalrts::alloc_char( n75, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n76 = 0;
        if( ! refalrts::alloc_char( n76, 'm' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n77 = 0;
        if( ! refalrts::alloc_char( n77, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n78 = 0;
        if( ! refalrts::alloc_char( n78, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n79 = 0;
        if( ! refalrts::alloc_close_call( n79 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n79 );
        refalrts::push_stack( n20 );
        res = refalrts::splice_elem( res, n79 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n78 );
        res = refalrts::splice_elem( res, n77 );
        res = refalrts::splice_elem( res, n76 );
        res = refalrts::splice_elem( res, n75 );
        res = refalrts::splice_elem( res, n74 );
        res = refalrts::splice_elem( res, n73 );
        res = refalrts::splice_elem( res, n72 );
        res = refalrts::splice_elem( res, n71 );
        res = refalrts::splice_elem( res, n70 );
        res = refalrts::splice_elem( res, n69 );
        res = refalrts::splice_elem( res, n68 );
        res = refalrts::splice_elem( res, n67 );
        res = refalrts::splice_elem( res, n66 );
        res = refalrts::splice_elem( res, n65 );
        res = refalrts::splice_elem( res, n64 );
        res = refalrts::splice_elem( res, n63 );
        res = refalrts::splice_elem( res, n62 );
        res = refalrts::splice_elem( res, n61 );
        res = refalrts::splice_elem( res, n60 );
        res = refalrts::splice_evar( res, eOutput2_b_1, eOutput2_e_1 );
        res = refalrts::splice_elem( res, n59 );
        res = refalrts::splice_elem( res, n58 );
        res = refalrts::splice_elem( res, n57 );
        res = refalrts::splice_elem( res, n56 );
        res = refalrts::splice_elem( res, n55 );
        res = refalrts::splice_evar( res, eOutput1_b_1, eOutput1_e_1 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter tLocation_1;
    refalrts::use( tLocation_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    // t.Compiler e.Files_B (~1 e.FileName 0 t.Location )~1 e.Files_M (~2 e.FileName 0 (~3 & Output e.Output )~3 )~2 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n2 ) ) 
        continue;
      if( ! refalrts::tvar_right( tLocation_1, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        refalrts::Iter n8;
        if( (n8 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n8 );
        refalrts::Iter n15 = 0; // Right
        if( ! refalrts::brackets_match( n15, n8 ) ) 
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n11;
        if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter n14 = 0; // Right
        if( ! refalrts::brackets_match( n14, n11 ) ) 
          continue;
        refalrts::Iter n12;
        if( (n12 = refalrts::function_left( & Output, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n12 );
        refalrts::Iter n10;
        if( (n10 = refalrts::number_right( 0UL, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        eOutput_b_1 = bb_3;
        refalrts::use( eOutput_b_1 );
        eOutput_e_1 = be_3;
        refalrts::use( eOutput_e_1 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & DelAccummulator, "DelAccummulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter eFileName_b_3;
        refalrts::use( eFileName_b_3 );
        static refalrts::Iter eFileName_e_3;
        refalrts::use( eFileName_e_3 );
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_number( n26, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_call( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_close_call( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_call( n29 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        refalrts::reinit_number( n10, 1UL );
        //}}} REINITS
        refalrts::link_brackets( n2, n6 );
        refalrts::link_brackets( n8, n15 );
        refalrts::link_brackets( n11, n14 );
        refalrts::link_brackets( n23, n25 );
        refalrts::push_stack( n29 );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n28 );
        refalrts::push_stack( n19 );
        refalrts::push_stack( n27 );
        refalrts::push_stack( n21 );
        res = refalrts::splice_elems( res, n27, n29 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        res = refalrts::splice_elems( res, n25, n26 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elems( res, n19, n24 );
        res = refalrts::splice_elems( res, n14, n15 );
        res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
        res = refalrts::splice_elems( res, n11, n12 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_stvar( res, tLocation_1 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1 );
        res = refalrts::splice_elems( res, n17, n18 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter tLocation_1;
    refalrts::use( tLocation_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    static refalrts::Iter eFileName_b_3;
    refalrts::use( eFileName_b_3 );
    static refalrts::Iter eFileName_e_3;
    refalrts::use( eFileName_e_3 );
#ifdef OLD_PATTERN
    // t.Compiler e.Files_B (~1 e.FileName 0 t.Location )~1 e.Files_M (~2 e.FileName 0 (~3 & Output e.Output )~3 )~2 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::tvar_right( tLocation_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) ) 
        continue;
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_right( bb_3, be_3, bb_2, be_2 ) ) 
          continue;
        if( ! refalrts::function_left( & Output, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::number_right( 0UL, bb_2, be_2 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        eOutput_b_1 = bb_3;
        refalrts::use( eOutput_b_1 );
        eOutput_e_1 = be_3;
        refalrts::use( eOutput_e_1 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
#else
    // t.Compiler e.Files_B (~1 e.FileName 0 t.Location )~1 e.Files_M (~2 e.FileName 0 (~3 & Output e.Output )~3 )~2 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n2 ) ) 
        continue;
      if( ! refalrts::tvar_right( tLocation_1, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        refalrts::Iter n8;
        if( (n8 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n8 );
        refalrts::Iter n15 = 0; // Right
        if( ! refalrts::brackets_match( n15, n8 ) ) 
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n11;
        if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter n14 = 0; // Right
        if( ! refalrts::brackets_match( n14, n11 ) ) 
          continue;
        refalrts::Iter n12;
        if( (n12 = refalrts::function_left( & Output, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n12 );
        refalrts::Iter n10;
        if( (n10 = refalrts::number_right( 0UL, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        eOutput_b_1 = bb_3;
        refalrts::use( eOutput_b_1 );
        eOutput_e_1 = be_3;
        refalrts::use( eOutput_e_1 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
          {refalrts::icSpliceSTVar, & tCompiler_1},
          {refalrts::icSpliceEVar, & eFiles_B_b_1, & eFiles_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
          {refalrts::icInt, 0, 0, 1 },
          {refalrts::icSpliceSTVar, & tLocation_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eFiles_M_b_1, & eFiles_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_b_2, & eFileName_e_2},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Output, (void*) "Output"},
          {refalrts::icSpliceEVar, & eOutput_b_1, & eOutput_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DelAccummulator, (void*) "DelAccummulator"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Renumerate, (void*) "Renumerate"},
          {refalrts::icCopyEVar, & eFileName_b_1, & eFileName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icInt, 0, 0, 2 },
          {refalrts::icSpliceEVar, & eFiles_E_b_1, & eFiles_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_number( n20, 1UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_bracket( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_open_bracket( n22 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_number( n23, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_open_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_name( n25, & Output, "Output" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_call( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & DelAccummulator, "DelAccummulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_open_call( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_name( n31, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_number( n35, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_call( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_call( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_call( n38 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n38 );
        refalrts::push_stack( n17 );
        res = refalrts::splice_elem( res, n38 );
        refalrts::push_stack( n37 );
        refalrts::push_stack( n28 );
        res = refalrts::splice_elem( res, n37 );
        refalrts::push_stack( n36 );
        refalrts::push_stack( n30 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n32, n34 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n22, n27 );
        res = refalrts::splice_elem( res, n27 );
        refalrts::link_brackets( n24, n26 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::link_brackets( n19, n21 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_stvar( res, tLocation_1 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    static refalrts::Iter tLocation_1;
    refalrts::use( tLocation_1 );
    // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & Output e.Output )~2 )~1 e.Files_M (~3 e.FileName 0 t.Location )~3 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n2 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eOutput_b_1 = bb_2;
      refalrts::use( eOutput_b_1 );
      eOutput_e_1 = be_2;
      refalrts::use( eOutput_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n11;
        if( (n11 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter n15 = 0; // Right
        if( ! refalrts::brackets_match( n15, n11 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_3, be_3 ) ) 
          continue;
        refalrts::Iter n13;
        if( (n13 = refalrts::number_left( 0UL, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
        if( ! refalrts::tvar_left( tLocation_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & DelAccummulator, "DelAccummulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter eFileName_b_3;
        refalrts::use( eFileName_b_3 );
        static refalrts::Iter eFileName_e_3;
        refalrts::use( eFileName_e_3 );
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_number( n26, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_call( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_close_call( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_call( n29 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        refalrts::reinit_number( n13, 1UL );
        //}}} REINITS
        refalrts::link_brackets( n2, n9 );
        refalrts::link_brackets( n5, n8 );
        refalrts::link_brackets( n11, n15 );
        refalrts::link_brackets( n23, n25 );
        refalrts::push_stack( n29 );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n28 );
        refalrts::push_stack( n19 );
        refalrts::push_stack( n27 );
        refalrts::push_stack( n21 );
        res = refalrts::splice_elems( res, n27, n29 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        res = refalrts::splice_elems( res, n25, n26 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elems( res, n19, n24 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, tLocation_1 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        res = refalrts::splice_elems( res, n8, n9 );
        res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
        res = refalrts::splice_elems( res, n4, n6 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1 );
        res = refalrts::splice_elems( res, n17, n18 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    static refalrts::Iter tLocation_1;
    refalrts::use( tLocation_1 );
    static refalrts::Iter eFileName_b_3;
    refalrts::use( eFileName_b_3 );
    static refalrts::Iter eFileName_e_3;
    refalrts::use( eFileName_e_3 );
#ifdef OLD_PATTERN
    // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & Output e.Output )~2 )~1 e.Files_M (~3 e.FileName 0 t.Location )~3 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Output, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) ) 
        continue;
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eOutput_b_1 = bb_2;
      refalrts::use( eOutput_b_1 );
      eOutput_e_1 = be_2;
      refalrts::use( eOutput_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::number_left( 0UL, bb_3, be_3 ) ) 
          continue;
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
        if( ! refalrts::tvar_left( tLocation_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
#else
    // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & Output e.Output )~2 )~1 e.Files_M (~3 e.FileName 0 t.Location )~3 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n2 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      eOutput_b_1 = bb_2;
      refalrts::use( eOutput_b_1 );
      eOutput_e_1 = be_2;
      refalrts::use( eOutput_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n11;
        if( (n11 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter n15 = 0; // Right
        if( ! refalrts::brackets_match( n15, n11 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_3, be_3 ) ) 
          continue;
        refalrts::Iter n13;
        if( (n13 = refalrts::number_left( 0UL, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
        if( ! refalrts::tvar_left( tLocation_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
          {refalrts::icSpliceSTVar, & tCompiler_1},
          {refalrts::icSpliceEVar, & eFiles_B_b_1, & eFiles_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Output, (void*) "Output"},
          {refalrts::icSpliceEVar, & eOutput_b_1, & eOutput_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eFiles_M_b_1, & eFiles_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_b_2, & eFileName_e_2},
          {refalrts::icInt, 0, 0, 1 },
          {refalrts::icSpliceSTVar, & tLocation_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DelAccummulator, (void*) "DelAccummulator"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Renumerate, (void*) "Renumerate"},
          {refalrts::icCopyEVar, & eFileName_b_1, & eFileName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icInt, 0, 0, 2 },
          {refalrts::icSpliceEVar, & eFiles_E_b_1, & eFiles_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_number( n20, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_bracket( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & Output, "Output" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_number( n26, 1UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_call( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & DelAccummulator, "DelAccummulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_open_call( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_name( n31, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_number( n35, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_call( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_call( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_call( n38 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n38 );
        refalrts::push_stack( n17 );
        res = refalrts::splice_elem( res, n38 );
        refalrts::push_stack( n37 );
        refalrts::push_stack( n28 );
        res = refalrts::splice_elem( res, n37 );
        refalrts::push_stack( n36 );
        refalrts::push_stack( n30 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n32, n34 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n25, n27 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_stvar( res, tLocation_1 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::link_brackets( n19, n24 );
        res = refalrts::splice_elem( res, n24 );
        refalrts::link_brackets( n21, n23 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter tLocation1_1;
    refalrts::use( tLocation1_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    static refalrts::Iter tLocation2_1;
    refalrts::use( tLocation2_1 );
    // t.Compiler e.Files_B (~1 e.FileName 0 t.Location1 )~1 e.Files_M (~2 e.FileName 0 t.Location2 )~2 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n2 ) ) 
        continue;
      if( ! refalrts::tvar_right( tLocation1_1, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        refalrts::Iter n8;
        if( (n8 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n8 );
        refalrts::Iter n12 = 0; // Right
        if( ! refalrts::brackets_match( n12, n8 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_2, be_2 ) ) 
          continue;
        refalrts::Iter n10;
        if( (n10 = refalrts::number_left( 0UL, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
        if( ! refalrts::tvar_left( tLocation2_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_call( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_call( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_name( n17, & DelAccummulator, "DelAccummulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_open_call( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_name( n19, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_bracket( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_name( n21, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter eFileName_b_3;
        refalrts::use( eFileName_b_3 );
        static refalrts::Iter eFileName_e_3;
        refalrts::use( eFileName_e_3 );
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_close_bracket( n22 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_number( n23, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_call( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_call( n26 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        refalrts::reinit_number( n10, 1UL );
        //}}} REINITS
        refalrts::link_brackets( n2, n6 );
        refalrts::link_brackets( n8, n12 );
        refalrts::link_brackets( n20, n22 );
        refalrts::push_stack( n26 );
        refalrts::push_stack( n14 );
        refalrts::push_stack( n25 );
        refalrts::push_stack( n16 );
        refalrts::push_stack( n24 );
        refalrts::push_stack( n18 );
        res = refalrts::splice_elems( res, n24, n26 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        res = refalrts::splice_elems( res, n22, n23 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elems( res, n16, n21 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_stvar( res, tLocation2_1 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_stvar( res, tLocation1_1 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1 );
        res = refalrts::splice_elems( res, n14, n15 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_B_b_1;
    refalrts::use( eFiles_B_b_1 );
    static refalrts::Iter eFiles_B_e_1;
    refalrts::use( eFiles_B_e_1 );
    static refalrts::Iter tLocation1_1;
    refalrts::use( tLocation1_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eFiles_M_b_1;
    refalrts::use( eFiles_M_b_1 );
    static refalrts::Iter eFiles_M_e_1;
    refalrts::use( eFiles_M_e_1 );
    static refalrts::Iter eFiles_E_b_1;
    refalrts::use( eFiles_E_b_1 );
    static refalrts::Iter eFiles_E_e_1;
    refalrts::use( eFiles_E_e_1 );
    static refalrts::Iter tLocation2_1;
    refalrts::use( tLocation2_1 );
    static refalrts::Iter eFileName_b_3;
    refalrts::use( eFileName_b_3 );
    static refalrts::Iter eFileName_e_3;
    refalrts::use( eFileName_e_3 );
#ifdef OLD_PATTERN
    // t.Compiler e.Files_B (~1 e.FileName 0 t.Location1 )~1 e.Files_M (~2 e.FileName 0 t.Location2 )~2 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::tvar_right( tLocation1_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) ) 
        continue;
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_2, be_2 ) ) 
          continue;
        if( ! refalrts::number_left( 0UL, bb_2, be_2 ) ) 
          continue;
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
        if( ! refalrts::tvar_left( tLocation2_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
#else
    // t.Compiler e.Files_B (~1 e.FileName 0 t.Location1 )~1 e.Files_M (~2 e.FileName 0 t.Location2 )~2 e.Files_E
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eFiles_B_b_1 = bb_0_stk,
        eFiles_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eFiles_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eFiles_B_oe_1, be_0 )
    ) {
      bb_0 = eFiles_B_oe_1;
      eFiles_B_b_1 = bb_0_stk;
      eFiles_B_e_1 = eFiles_B_oe_1;
      refalrts::move_right( eFiles_B_b_1, eFiles_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n2 ) ) 
        continue;
      if( ! refalrts::tvar_right( tLocation1_1, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eFileName_b_1 = bb_1;
      refalrts::use( eFileName_b_1 );
      eFileName_e_1 = be_1;
      refalrts::use( eFileName_e_1 );
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eFiles_M_b_1 = bb_0_stk,
          eFiles_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eFiles_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eFiles_M_oe_1, be_0 )
      ) {
        bb_0 = eFiles_M_oe_1;
        eFiles_M_b_1 = bb_0_stk;
        eFiles_M_e_1 = eFiles_M_oe_1;
        refalrts::move_right( eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        refalrts::Iter n8;
        if( (n8 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n8 );
        refalrts::Iter n12 = 0; // Right
        if( ! refalrts::brackets_match( n12, n8 ) ) 
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_2, be_2 ) ) 
          continue;
        refalrts::Iter n10;
        if( (n10 = refalrts::number_left( 0UL, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        eFiles_E_b_1 = bb_0;
        refalrts::use( eFiles_E_b_1 );
        eFiles_E_e_1 = be_0;
        refalrts::use( eFiles_E_e_1 );
        if( ! refalrts::tvar_left( tLocation2_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
          {refalrts::icSpliceSTVar, & tCompiler_1},
          {refalrts::icSpliceEVar, & eFiles_B_b_1, & eFiles_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icSpliceSTVar, & tLocation1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eFiles_M_b_1, & eFiles_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_b_2, & eFileName_e_2},
          {refalrts::icInt, 0, 0, 1 },
          {refalrts::icSpliceSTVar, & tLocation2_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DelAccummulator, (void*) "DelAccummulator"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Renumerate, (void*) "Renumerate"},
          {refalrts::icCopyEVar, & eFileName_b_1, & eFileName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icInt, 0, 0, 2 },
          {refalrts::icSpliceEVar, & eFiles_E_b_1, & eFiles_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_call( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_number( n17, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_number( n20, 1UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_bracket( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_open_call( n22 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_name( n23, & DelAccummulator, "DelAccummulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_open_call( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_name( n25, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_open_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_name( n27, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_close_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_number( n29, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_call( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_call( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_close_call( n32 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n32 );
        refalrts::push_stack( n14 );
        res = refalrts::splice_elem( res, n32 );
        refalrts::push_stack( n31 );
        refalrts::push_stack( n22 );
        res = refalrts::splice_elem( res, n31 );
        refalrts::push_stack( n30 );
        refalrts::push_stack( n24 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        res = refalrts::splice_elem( res, n29 );
        refalrts::link_brackets( n26, n28 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_elem( res, n22 );
        refalrts::link_brackets( n19, n21 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_stvar( res, tLocation2_1 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::link_brackets( n16, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_stvar( res, tLocation1_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // t.Compiler e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Link, "Link" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CompileEachFile, "CompileEachFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elems( res, n7, n8 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elems( res, n4, n6 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#else
    // t.Compiler e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Link, (void*) "Link"},
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & CompileEachFile, (void*) "CompileEachFile"},
      {refalrts::icSpliceEVar, & eFiles_b_1, & eFiles_e_1},
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Link, "Link" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CompileEachFile, "CompileEachFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter sNextNumber_1;
    refalrts::use( sNextNumber_1 );
    // e.FileName s.NextNumber (~1 e.FileName 0 (~2 & Source (~3 e.Source )~3 e.Output )~2 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n2 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n5 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::function_left( & Source, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n4;
    if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_0, be_0 ) ) 
      break;
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    if( ! refalrts::svar_left( sNextNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sNextNumber_2;
    refalrts::use( sNextNumber_2 );
    if( ! refalrts::copy_stvar( sNextNumber_2, sNextNumber_1 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n2, n12 );
    refalrts::link_brackets( n5, n11 );
    refalrts::link_brackets( n7, n9 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elems( res, n11, n12 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elems( res, n5, n7 );
    res = refalrts::splice_stvar( res, sNextNumber_2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sNextNumber_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter sNextNumber_1;
    refalrts::use( sNextNumber_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    static refalrts::Iter sNextNumber_2;
    refalrts::use( sNextNumber_2 );
#ifdef OLD_PATTERN
    // e.FileName s.NextNumber (~1 e.FileName 0 (~2 & Source (~3 e.Source )~3 e.Output )~2 )~1
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
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_0, be_0 ) ) 
      break;
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    if( ! refalrts::svar_left( sNextNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // e.FileName s.NextNumber (~1 e.FileName 0 (~2 & Source (~3 e.Source )~3 e.Output )~2 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n2 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n5 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::function_left( & Source, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n4;
    if( (n4 = refalrts::number_right( 0UL, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    if( ! refalrts::repeated_evar_left( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1, bb_0, be_0 ) ) 
      break;
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    if( ! refalrts::svar_left( sNextNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNextNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icCopySTVar, & sNextNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Source, (void*) "Source"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSource_b_1, & eSource_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOutput_b_1, & eOutput_e_1},
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
    if( ! refalrts::copy_stvar( sNextNumber_2, sNextNumber_1 ) )
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
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & Source, "Source" ) )
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
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n16, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n17, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sNextNumber_2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sNextNumber_1 );
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
    static refalrts::Iter tNextFile_1;
    refalrts::use( tNextFile_1 );
    static refalrts::Iter sNextNumber_1;
    refalrts::use( sNextNumber_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.FileName s.NextNumber t.NextFile
    if( ! refalrts::tvar_right( tNextFile_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_right( sNextNumber_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, tNextFile_1 );
    res = refalrts::splice_stvar( res, sNextNumber_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tNextFile_1;
    refalrts::use( tNextFile_1 );
    static refalrts::Iter sNextNumber_1;
    refalrts::use( sNextNumber_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // e.FileName s.NextNumber t.NextFile
    if( ! refalrts::tvar_right( tNextFile_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_right( sNextNumber_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName s.NextNumber t.NextFile
    if( ! refalrts::tvar_right( tNextFile_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_right( sNextNumber_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sNextNumber_1},
      {refalrts::icSpliceSTVar, & tNextFile_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tNextFile_1 );
    res = refalrts::splice_stvar( res, sNextNumber_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eOutputName_b_1;
    refalrts::use( eOutputName_b_1 );
    static refalrts::Iter eOutputName_e_1;
    refalrts::use( eOutputName_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // (~1 e.FileName s.Num (~2 & Output e.OutputName )~2 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n3 ) ) 
      break;
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eOutputName_b_1 = bb_2;
    refalrts::use( eOutputName_b_1 );
    eOutputName_e_1 = be_2;
    refalrts::use( eOutputName_e_1 );
    if( ! refalrts::svar_right( sNum_1, bb_1, be_1 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eOutputName_b_2;
    refalrts::use( eOutputName_b_2 );
    static refalrts::Iter eOutputName_e_2;
    refalrts::use( eOutputName_e_2 );
    if( ! refalrts::copy_evar( eOutputName_b_2, eOutputName_e_2, eOutputName_b_1, eOutputName_e_1 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n4 );
    refalrts::reinit_name( n3, & WriteLine, "WriteLine" );
    refalrts::reinit_char( n7, '+' );
    //}}} REINITS
    refalrts::link_brackets( n0, n6 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eOutputName_b_2, eOutputName_e_2 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    res = refalrts::splice_elems( res, n8, n15 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eOutputName_b_1;
    refalrts::use( eOutputName_b_1 );
    static refalrts::Iter eOutputName_e_1;
    refalrts::use( eOutputName_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eOutputName_b_2;
    refalrts::use( eOutputName_b_2 );
    static refalrts::Iter eOutputName_e_2;
    refalrts::use( eOutputName_e_2 );
#ifdef OLD_PATTERN
    // (~1 e.FileName s.Num (~2 & Output e.OutputName )~2 )~1
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eOutputName_b_1 = bb_2;
    refalrts::use( eOutputName_b_1 );
    eOutputName_e_1 = be_2;
    refalrts::use( eOutputName_e_1 );
    if( ! refalrts::svar_right( sNum_1, bb_1, be_1 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#else
    // (~1 e.FileName s.Num (~2 & Output e.OutputName )~2 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n3 ) ) 
      break;
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eOutputName_b_1 = bb_2;
    refalrts::use( eOutputName_b_1 );
    eOutputName_e_1 = be_2;
    refalrts::use( eOutputName_e_1 );
    if( ! refalrts::svar_right( sNum_1, bb_1, be_1 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#endif
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
      {refalrts::icSpliceEVar, & eOutputName_b_1, & eOutputName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eOutputName_b_1, & eOutputName_e_1},
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
    if( ! refalrts::copy_evar( eOutputName_b_2, eOutputName_e_2, eOutputName_b_1, eOutputName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eOutputName_b_2, eOutputName_e_2 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // (~1 e.FileName s.Num (~2 & Source (~3 e.Source )~3 e.Output )~2 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n3 ) ) 
      break;
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & Source, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    if( ! refalrts::svar_right( sNum_1, bb_1, be_1 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & CompileFile, "CompileFile" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eSource_b_2;
    refalrts::use( eSource_b_2 );
    static refalrts::Iter eSource_e_2;
    refalrts::use( eSource_e_2 );
    if( ! refalrts::copy_evar( eSource_b_2, eSource_e_2, eSource_b_1, eSource_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & FileNum, "FileNum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n4 );
    refalrts::reinit_name( n3, & SwCompiled, "SwCompiled" );
    refalrts::reinit_open_call( n5 );
    refalrts::reinit_name( n9, & WriteLine, "WriteLine" );
    refalrts::reinit_char( n10, '*' );
    //}}} REINITS
    refalrts::link_brackets( n0, n7 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elems( res, n27, n29 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elems( res, n25, n26 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eSource_b_2, eSource_e_2 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n21, n24 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elems( res, n11, n20 );
    res = refalrts::splice_elems( res, n9, n10 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eSource_b_2;
    refalrts::use( eSource_b_2 );
    static refalrts::Iter eSource_e_2;
    refalrts::use( eSource_e_2 );
#ifdef OLD_PATTERN
    // (~1 e.FileName s.Num (~2 & Source (~3 e.Source )~3 e.Output )~2 )~1
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    if( ! refalrts::svar_right( sNum_1, bb_1, be_1 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#else
    // (~1 e.FileName s.Num (~2 & Source (~3 e.Source )~3 e.Output )~2 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n3 ) ) 
      break;
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & Source, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    if( ! refalrts::svar_right( sNum_1, bb_1, be_1 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#endif
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
      {refalrts::icSpliceEVar, & eSource_b_1, & eSource_e_1},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CompileFile, (void*) "CompileFile"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eSource_b_1, & eSource_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FileNum, (void*) "FileNum"},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icSpliceEVar, & eOutput_b_1, & eOutput_e_1},
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
    if( ! refalrts::copy_evar( eSource_b_2, eSource_e_2, eSource_b_1, eSource_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & SwCompiled, "SwCompiled" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
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
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & CompileFile, "CompileFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & FileNum, "FileNum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n36 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n32 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eSource_b_2, eSource_e_2 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
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

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFile_b_1;
    refalrts::use( eFile_b_1 );
    static refalrts::Iter eFile_e_1;
    refalrts::use( eFile_e_1 );
    // 0 e.File
    refalrts::Iter n0;
    if( (n0 = refalrts::number_left( 0UL, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eFile_b_1 = bb_0;
    refalrts::use( eFile_b_1 );
    eFile_e_1 = be_0;
    refalrts::use( eFile_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eFile_b_1, eFile_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFile_b_1;
    refalrts::use( eFile_b_1 );
    static refalrts::Iter eFile_e_1;
    refalrts::use( eFile_e_1 );
#ifdef OLD_PATTERN
    // 0 e.File
    if( ! refalrts::number_left( 0UL, bb_0, be_0 ) ) 
      break;
    eFile_b_1 = bb_0;
    refalrts::use( eFile_b_1 );
    eFile_e_1 = be_0;
    refalrts::use( eFile_e_1 );
#else
    // 0 e.File
    refalrts::Iter n0;
    if( (n0 = refalrts::number_left( 0UL, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eFile_b_1 = bb_0;
    refalrts::use( eFile_b_1 );
    eFile_e_1 = be_0;
    refalrts::use( eFile_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eFile_b_1, & eFile_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eFile_b_1, eFile_e_1 );
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
    static refalrts::Iter eFile_b_1;
    refalrts::use( eFile_b_1 );
    static refalrts::Iter eFile_e_1;
    refalrts::use( eFile_e_1 );
    // s.Number e.File '. 'c 'p 'p'
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 'c', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    eFile_b_1 = bb_0;
    refalrts::use( eFile_b_1 );
    eFile_e_1 = be_0;
    refalrts::use( eFile_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '@' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elems( res, n2, n5 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n6, n8 );
    res = refalrts::splice_evar( res, eFile_b_1, eFile_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter eFile_b_1;
    refalrts::use( eFile_b_1 );
    static refalrts::Iter eFile_e_1;
    refalrts::use( eFile_e_1 );
#ifdef OLD_PATTERN
    // s.Number e.File '.cpp'
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'c', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( '.', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    eFile_b_1 = bb_0;
    refalrts::use( eFile_b_1 );
    eFile_e_1 = be_0;
    refalrts::use( eFile_e_1 );
#else
    // s.Number e.File '. 'c 'p 'p'
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 'c', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    eFile_b_1 = bb_0;
    refalrts::use( eFile_b_1 );
    eFile_e_1 = be_0;
    refalrts::use( eFile_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eFile_b_1, & eFile_e_1},
      {refalrts::icChar, 0, 0, '@'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '@' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'p' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFile_b_1, eFile_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwCompiled(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eOutputName_b_1;
    refalrts::use( eOutputName_b_1 );
    static refalrts::Iter eOutputName_e_1;
    refalrts::use( eOutputName_e_1 );
    // & Success e.OutputName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & Success, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eOutputName_b_1 = bb_0;
    refalrts::use( eOutputName_b_1 );
    eOutputName_e_1 = be_0;
    refalrts::use( eOutputName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_bracket( n0 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eOutputName_b_1;
    refalrts::use( eOutputName_b_1 );
    static refalrts::Iter eOutputName_e_1;
    refalrts::use( eOutputName_e_1 );
#ifdef OLD_PATTERN
    // & Success e.OutputName
    if( ! refalrts::function_left( & Success, bb_0, be_0 ) ) 
      break;
    eOutputName_b_1 = bb_0;
    refalrts::use( eOutputName_b_1 );
    eOutputName_e_1 = be_0;
    refalrts::use( eOutputName_e_1 );
#else
    // & Success e.OutputName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & Success, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eOutputName_b_1 = bb_0;
    refalrts::use( eOutputName_b_1 );
    eOutputName_e_1 = be_0;
    refalrts::use( eOutputName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eOutputName_b_1, & eOutputName_e_1},
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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
    // & Fails
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & Fails, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    // & Fails
    if( ! refalrts::function_left( & Fails, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & Fails
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & Fails, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & Fails, (void*) "Fails"},
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
    if( ! refalrts::alloc_name( n1, & Fails, "Fails" ) )
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

static refalrts::FnResult UnBracketSpace(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // (~1 e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '"' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, ' ' );
    refalrts::reinit_char( n2, '"' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#else
    // (~1 e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
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
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CompileOneCpp(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // (~1 & NoCompile )~1 e.Files
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & NoCompile, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );

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
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
#ifdef OLD_PATTERN
    // (~1 & NoCompile )~1 e.Files
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & NoCompile, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#else
    // (~1 & NoCompile )~1 e.Files
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & NoCompile, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
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
    static refalrts::Iter eCommand_b_1;
    refalrts::use( eCommand_b_1 );
    static refalrts::Iter eCommand_e_1;
    refalrts::use( eCommand_e_1 );
    static refalrts::Iter eOutputs_B_b_1;
    refalrts::use( eOutputs_B_b_1 );
    static refalrts::Iter eOutputs_B_e_1;
    refalrts::use( eOutputs_B_e_1 );
    static refalrts::Iter eOutputs_E_b_1;
    refalrts::use( eOutputs_E_b_1 );
    static refalrts::Iter eOutputs_E_e_1;
    refalrts::use( eOutputs_E_e_1 );
    // (~1 & CompileCommand e.Command )~1 e.Outputs_B & Fails e.Outputs_E
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
    if( (n1 = refalrts::function_left( & CompileCommand, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eCommand_b_1 = bb_1;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_1;
    refalrts::use( eCommand_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eOutputs_B_b_1 = bb_0_stk,
        eOutputs_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eOutputs_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eOutputs_B_oe_1, be_0 )
    ) {
      bb_0 = eOutputs_B_oe_1;
      eOutputs_B_b_1 = bb_0_stk;
      eOutputs_B_e_1 = eOutputs_B_oe_1;
      refalrts::move_right( eOutputs_B_b_1, eOutputs_B_e_1 );
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Fails, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      eOutputs_E_b_1 = bb_0;
      refalrts::use( eOutputs_E_b_1 );
      eOutputs_E_e_1 = be_0;
      refalrts::use( eOutputs_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eCommand_b_1;
    refalrts::use( eCommand_b_1 );
    static refalrts::Iter eCommand_e_1;
    refalrts::use( eCommand_e_1 );
    static refalrts::Iter eOutputs_B_b_1;
    refalrts::use( eOutputs_B_b_1 );
    static refalrts::Iter eOutputs_B_e_1;
    refalrts::use( eOutputs_B_e_1 );
    static refalrts::Iter eOutputs_E_b_1;
    refalrts::use( eOutputs_E_b_1 );
    static refalrts::Iter eOutputs_E_e_1;
    refalrts::use( eOutputs_E_e_1 );
#ifdef OLD_PATTERN
    // (~1 & CompileCommand e.Command )~1 e.Outputs_B & Fails e.Outputs_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CompileCommand, bb_1, be_1 ) ) 
      break;
    eCommand_b_1 = bb_1;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_1;
    refalrts::use( eCommand_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eOutputs_B_b_1 = bb_0_stk,
        eOutputs_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eOutputs_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eOutputs_B_oe_1, be_0 )
    ) {
      bb_0 = eOutputs_B_oe_1;
      eOutputs_B_b_1 = bb_0_stk;
      eOutputs_B_e_1 = eOutputs_B_oe_1;
      refalrts::move_right( eOutputs_B_b_1, eOutputs_B_e_1 );
      if( ! refalrts::function_left( & Fails, bb_0, be_0 ) ) 
        continue;
      eOutputs_E_b_1 = bb_0;
      refalrts::use( eOutputs_E_b_1 );
      eOutputs_E_e_1 = be_0;
      refalrts::use( eOutputs_E_e_1 );
#else
    // (~1 & CompileCommand e.Command )~1 e.Outputs_B & Fails e.Outputs_E
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
    if( (n1 = refalrts::function_left( & CompileCommand, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eCommand_b_1 = bb_1;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_1;
    refalrts::use( eCommand_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eOutputs_B_b_1 = bb_0_stk,
        eOutputs_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eOutputs_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eOutputs_B_oe_1, be_0 )
    ) {
      bb_0 = eOutputs_B_oe_1;
      eOutputs_B_b_1 = bb_0_stk;
      eOutputs_B_e_1 = eOutputs_B_oe_1;
      refalrts::move_right( eOutputs_B_b_1, eOutputs_B_e_1 );
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Fails, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      eOutputs_E_b_1 = bb_0;
      refalrts::use( eOutputs_E_b_1 );
      eOutputs_E_e_1 = be_0;
      refalrts::use( eOutputs_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
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
    static refalrts::Iter eCommand_b_1;
    refalrts::use( eCommand_b_1 );
    static refalrts::Iter eCommand_e_1;
    refalrts::use( eCommand_e_1 );
    static refalrts::Iter eOutputs_b_1;
    refalrts::use( eOutputs_b_1 );
    static refalrts::Iter eOutputs_e_1;
    refalrts::use( eOutputs_e_1 );
    // (~1 & CompileCommand e.Command )~1 e.Outputs
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
    if( (n1 = refalrts::function_left( & CompileCommand, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eCommand_b_1 = bb_1;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_1;
    refalrts::use( eCommand_e_1 );
    eOutputs_b_1 = bb_0;
    refalrts::use( eOutputs_b_1 );
    eOutputs_e_1 = be_0;
    refalrts::use( eOutputs_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & UnBracketSpace, "UnBracketSpace" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
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
    if( ! refalrts::alloc_char( n26, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    refalrts::reinit_name( n0, & System, "System" );
    refalrts::reinit_open_call( n3 );
    //}}} REINITS
    refalrts::push_stack( n38 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elems( res, n7, n38 );
    res = refalrts::splice_evar( res, eOutputs_b_1, eOutputs_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eCommand_b_1, eCommand_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCommand_b_1;
    refalrts::use( eCommand_b_1 );
    static refalrts::Iter eCommand_e_1;
    refalrts::use( eCommand_e_1 );
    static refalrts::Iter eOutputs_b_1;
    refalrts::use( eOutputs_b_1 );
    static refalrts::Iter eOutputs_e_1;
    refalrts::use( eOutputs_e_1 );
#ifdef OLD_PATTERN
    // (~1 & CompileCommand e.Command )~1 e.Outputs
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CompileCommand, bb_1, be_1 ) ) 
      break;
    eCommand_b_1 = bb_1;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_1;
    refalrts::use( eCommand_e_1 );
    eOutputs_b_1 = bb_0;
    refalrts::use( eOutputs_b_1 );
    eOutputs_e_1 = be_0;
    refalrts::use( eOutputs_e_1 );
#else
    // (~1 & CompileCommand e.Command )~1 e.Outputs
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
    if( (n1 = refalrts::function_left( & CompileCommand, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eCommand_b_1 = bb_1;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_1;
    refalrts::use( eCommand_e_1 );
    eOutputs_b_1 = bb_0;
    refalrts::use( eOutputs_b_1 );
    eOutputs_e_1 = be_0;
    refalrts::use( eOutputs_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & System, (void*) "System"},
      {refalrts::icSpliceEVar, & eCommand_b_1, & eCommand_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & UnBracketSpace, (void*) "UnBracketSpace"},
      {refalrts::icSpliceEVar, & eOutputs_b_1, & eOutputs_e_1},
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & System, "System" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & UnBracketSpace, "UnBracketSpace" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'l' ) )
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
    if( ! refalrts::alloc_char( n29, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 's' ) )
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
    if( ! refalrts::alloc_char( n39, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n41 );
    refalrts::push_stack( n12 );
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
    refalrts::push_stack( n11 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eOutputs_b_1, eOutputs_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommand_b_1, eCommand_e_1 );
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


//End of file
