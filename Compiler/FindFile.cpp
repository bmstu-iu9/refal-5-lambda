// Automatically generated file. Don't edit!
#include "refalrts.h"


refalrts::FnResult Source(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Output(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult NotFound(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Current(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // (~1 e.Folders )~1 e.Files
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & AnalyzeFile_ByFolders, "AnalyzeFile_ByFolders" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Current, "Current" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n6, n7 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n4, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Folders )~1 e.Files
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
    // (~1 e.Folders )~1 e.Files
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & AnalyzeFile_ByFolders, (void*) "AnalyzeFile_ByFolders"},
      {refalrts::icFunc, (void*) & Current, (void*) "Current"},
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & AnalyzeFile_ByFolders, "AnalyzeFile_ByFolders" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Current, "Current" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n6, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
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

static refalrts::FnResult AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.Folders (~1 e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eFolders_b_1 = bb_0;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_0;
    refalrts::use( eFolders_e_1 );
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
    if( ! refalrts::alloc_name( n5, & AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & AnalyzeInFolder, "AnalyzeInFolder" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
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
    refalrts::link_brackets( n1, n3 );
    refalrts::link_brackets( n8, n10 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elems( res, n11, n12 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elems( res, n6, n9 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elems( res, n4, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
#ifdef OLD_PATTERN
    // e.Folders (~1 e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eFolders_b_1 = bb_0;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_0;
    refalrts::use( eFolders_e_1 );
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#else
    // e.Folders (~1 e.FileName )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eFolders_b_1 = bb_0;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_0;
    refalrts::use( eFolders_e_1 );
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & AnalyzeFile_CheckNotFound, (void*) "AnalyzeFile_CheckNotFound"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & AnalyzeInFolder, (void*) "AnalyzeInFolder"},
      {refalrts::icCopyEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
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
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
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
    if( ! refalrts::alloc_name( n11, & AnalyzeInFolder, "AnalyzeInFolder" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
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

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // e.FileName & Current
    refalrts::Iter n1;
    if( (n1 = refalrts::function_right( & Current, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & AnalyzeFile, "AnalyzeFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n2 );
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
    // e.FileName & Current
    if( ! refalrts::function_right( & Current, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName & Current
    refalrts::Iter n1;
    if( (n1 = refalrts::function_right( & Current, bb_0, be_0 )) == 0 ) 
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
      {refalrts::icFunc, (void*) & AnalyzeFile, (void*) "AnalyzeFile"},
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & AnalyzeFile, "AnalyzeFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eFolder_b_1;
    refalrts::use( eFolder_b_1 );
    static refalrts::Iter eFolder_e_1;
    refalrts::use( eFolder_e_1 );
    // e.FileName (~1 e.Folder )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
    eFolder_b_1 = bb_1;
    refalrts::use( eFolder_b_1 );
    eFolder_e_1 = be_1;
    refalrts::use( eFolder_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    refalrts::reinit_name( n3, & AnalyzeFile, "AnalyzeFile" );
    //}}} REINITS
    refalrts::push_stack( n5 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eFolder_b_1, eFolder_e_1 );
    res = refalrts::splice_elem( res, n3 );
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
    static refalrts::Iter eFolder_b_1;
    refalrts::use( eFolder_b_1 );
    static refalrts::Iter eFolder_e_1;
    refalrts::use( eFolder_e_1 );
#ifdef OLD_PATTERN
    // e.FileName (~1 e.Folder )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
    eFolder_b_1 = bb_1;
    refalrts::use( eFolder_b_1 );
    eFolder_e_1 = be_1;
    refalrts::use( eFolder_e_1 );
#else
    // e.FileName (~1 e.Folder )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
    eFolder_b_1 = bb_1;
    refalrts::use( eFolder_b_1 );
    eFolder_e_1 = be_1;
    refalrts::use( eFolder_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & AnalyzeFile, (void*) "AnalyzeFile"},
      {refalrts::icSpliceEVar, & eFolder_b_1, & eFolder_e_1},
      {refalrts::icChar, 0, 0, '/'},
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & AnalyzeFile, "AnalyzeFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFolder_b_1, eFolder_e_1 );
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

static refalrts::FnResult AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter eSource_b_1;
    refalrts::use( eSource_b_1 );
    static refalrts::Iter eSource_e_1;
    refalrts::use( eSource_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eVariants_b_1;
    refalrts::use( eVariants_b_1 );
    static refalrts::Iter eVariants_e_1;
    refalrts::use( eVariants_e_1 );
    // (~1 e.FileName )~1 (~2 & Source (~3 e.Source )~3 e.Output )~2 e.Variants
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
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n7 );
    refalrts::link_brackets( n3, n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n4 );
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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eVariants_b_1;
    refalrts::use( eVariants_b_1 );
    static refalrts::Iter eVariants_e_1;
    refalrts::use( eVariants_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.FileName )~1 (~2 & Source (~3 e.Source )~3 e.Output )~2 e.Variants
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & Source, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );
#else
    // (~1 e.FileName )~1 (~2 & Source (~3 e.Source )~3 e.Output )~2 e.Variants
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
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eSource_b_1 = bb_3;
    refalrts::use( eSource_b_1 );
    eSource_e_1 = be_3;
    refalrts::use( eSource_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Source, (void*) "Source"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSource_b_1, & eSource_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOutput_b_1, & eOutput_e_1},
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
    if( ! refalrts::alloc_name( n12, & Source, "Source" ) )
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
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eVariants_b_1;
    refalrts::use( eVariants_b_1 );
    static refalrts::Iter eVariants_e_1;
    refalrts::use( eVariants_e_1 );
    // (~1 e.FileName )~1 (~2 & Output e.Output )~2 e.Variants
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
    if( (n4 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eOutput_b_1;
    refalrts::use( eOutput_b_1 );
    static refalrts::Iter eOutput_e_1;
    refalrts::use( eOutput_e_1 );
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eVariants_b_1;
    refalrts::use( eVariants_b_1 );
    static refalrts::Iter eVariants_e_1;
    refalrts::use( eVariants_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.FileName )~1 (~2 & Output e.Output )~2 e.Variants
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & Output, bb_2, be_2 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );
#else
    // (~1 e.FileName )~1 (~2 & Output e.Output )~2 e.Variants
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
    if( (n4 = refalrts::function_left( & Output, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eOutput_b_1 = bb_2;
    refalrts::use( eOutput_b_1 );
    eOutput_e_1 = be_2;
    refalrts::use( eOutput_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Output, (void*) "Output"},
      {refalrts::icSpliceEVar, & eOutput_b_1, & eOutput_e_1},
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
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Output, "Output" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eNotFoundPath_b_1;
    refalrts::use( eNotFoundPath_b_1 );
    static refalrts::Iter eNotFoundPath_e_1;
    refalrts::use( eNotFoundPath_e_1 );
    static refalrts::Iter eVariants_b_1;
    refalrts::use( eVariants_b_1 );
    static refalrts::Iter eVariants_e_1;
    refalrts::use( eVariants_e_1 );
    // (~1 e.FileName )~1 (~2 & NotFound e.NotFoundPath )~2 e.Variants
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
    if( (n4 = refalrts::function_left( & NotFound, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eNotFoundPath_b_1 = bb_2;
    refalrts::use( eNotFoundPath_b_1 );
    eNotFoundPath_e_1 = be_2;
    refalrts::use( eNotFoundPath_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n4 );
    refalrts::reinit_name( n3, & AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" );
    refalrts::reinit_close_call( n6 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eVariants_b_1, eVariants_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eVariants_b_1;
    refalrts::use( eVariants_b_1 );
    static refalrts::Iter eVariants_e_1;
    refalrts::use( eVariants_e_1 );
    static refalrts::Iter eNotFoundPath_b_1;
    refalrts::use( eNotFoundPath_b_1 );
    static refalrts::Iter eNotFoundPath_e_1;
    refalrts::use( eNotFoundPath_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.FileName )~1 (~2 & NotFound e.NotFoundPath )~2 e.Variants
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & NotFound, bb_2, be_2 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eNotFoundPath_b_1 = bb_2;
    refalrts::use( eNotFoundPath_b_1 );
    eNotFoundPath_e_1 = be_2;
    refalrts::use( eNotFoundPath_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );
#else
    // (~1 e.FileName )~1 (~2 & NotFound e.NotFoundPath )~2 e.Variants
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
    if( (n4 = refalrts::function_left( & NotFound, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eNotFoundPath_b_1 = bb_2;
    refalrts::use( eNotFoundPath_b_1 );
    eNotFoundPath_e_1 = be_2;
    refalrts::use( eNotFoundPath_e_1 );
    eVariants_b_1 = bb_0;
    refalrts::use( eVariants_b_1 );
    eVariants_e_1 = be_0;
    refalrts::use( eVariants_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & AnalyzeFile_CheckNotFound, (void*) "AnalyzeFile_CheckNotFound"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eVariants_b_1, & eVariants_e_1},
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
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" ) )
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
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eVariants_b_1, eVariants_e_1 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
    if( ! refalrts::alloc_name( n3, & NotFound, "NotFound" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n3 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & NotFound, (void*) "NotFound"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
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
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & NotFound, "NotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n5 );
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

static refalrts::FnResult AnalyzeSource_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult AnalyzeOutput_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult AnalyzeBoth_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult True(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult False(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ExistFile_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ExistFile, "ExistFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
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
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
#ifdef OLD_PATTERN
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ExistFile, (void*) "ExistFile"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopyEVar, & eFileName_b_1, & eFileName_e_1},
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ExistFile, "ExistFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static refalrts::FnResult AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // e.FileName '. 's 'r 'e 'f'
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'f', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'e', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 'r', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( 's', bb_0, be_0 )) == 0 ) 
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & AnalyzeSource_CheckExist, "AnalyzeSource_CheckExist" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elems( res, n10, n11 );
    res = refalrts::splice_elems( res, n1, n5 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n6, n9 );
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
    // e.FileName '.sref'
    if( ! refalrts::char_right( 'f', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'e', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'r', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 's', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( '.', bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName '. 's 'r 'e 'f'
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'f', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'e', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 'r', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( 's', bb_0, be_0 )) == 0 ) 
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
      {refalrts::icFunc, (void*) & AnalyzeSource_CheckExist, (void*) "AnalyzeSource_CheckExist"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ExistFile_T, (void*) "ExistFile_T"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
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
    if( ! refalrts::alloc_name( n7, & AnalyzeSource_CheckExist, "AnalyzeSource_CheckExist" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & AnalyzeOutput_CheckExist, "AnalyzeOutput_CheckExist" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n10 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elems( res, n9, n10 );
    res = refalrts::splice_elems( res, n1, n4 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n5, n8 );
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
      {refalrts::icFunc, (void*) & AnalyzeOutput_CheckExist, (void*) "AnalyzeOutput_CheckExist"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ExistFile_T, (void*) "ExistFile_T"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'p'},
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
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & AnalyzeOutput_CheckExist, "AnalyzeOutput_CheckExist" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & AnalyzeBoth_CheckExist, "AnalyzeBoth_CheckExist" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eFileName_b_2;
    refalrts::use( eFileName_b_2 );
    static refalrts::Iter eFileName_e_2;
    refalrts::use( eFileName_e_2 );
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'p' ) )
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
    refalrts::link_brackets( n3, n12 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elems( res, n15, n20 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elems( res, n6, n14 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n1, n5 );
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
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & AnalyzeBoth_CheckExist, (void*) "AnalyzeBoth_CheckExist"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ExistFile_T, (void*) "ExistFile_T"},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ExistFile_T, (void*) "ExistFile_T"},
      {refalrts::icCopyEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'p'},
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
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & AnalyzeBoth_CheckExist, "AnalyzeBoth_CheckExist" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n3, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static refalrts::FnResult AnalyzeSource_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eUnitName_b_1;
    refalrts::use( eUnitName_b_1 );
    static refalrts::Iter eUnitName_e_1;
    refalrts::use( eUnitName_e_1 );
    // & True e.UnitName '. 's 'r 'e 'f'
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & True, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n6;
    if( (n6 = refalrts::char_right( 'f', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'e', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'r', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 's', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eUnitName_b_1 = bb_0;
    refalrts::use( eUnitName_b_1 );
    eUnitName_e_1 = be_0;
    refalrts::use( eUnitName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Source, "Source" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eUnitName_b_2;
    refalrts::use( eUnitName_b_2 );
    static refalrts::Iter eUnitName_e_2;
    refalrts::use( eUnitName_e_2 );
    if( ! refalrts::copy_evar( eUnitName_b_2, eUnitName_e_2, eUnitName_b_1, eUnitName_e_1 ) )
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
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_bracket( n0 );
    //}}} REINITS
    refalrts::link_brackets( n0, n14 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elems( res, n10, n14 );
    res = refalrts::splice_evar( res, eUnitName_b_2, eUnitName_e_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elems( res, n2, n6 );
    res = refalrts::splice_evar( res, eUnitName_b_1, eUnitName_e_1 );
    res = refalrts::splice_elems( res, n7, n8 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eUnitName_b_1;
    refalrts::use( eUnitName_b_1 );
    static refalrts::Iter eUnitName_e_1;
    refalrts::use( eUnitName_e_1 );
    static refalrts::Iter eUnitName_b_2;
    refalrts::use( eUnitName_b_2 );
    static refalrts::Iter eUnitName_e_2;
    refalrts::use( eUnitName_e_2 );
#ifdef OLD_PATTERN
    // & True e.UnitName '.sref'
    if( ! refalrts::function_left( & True, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'f', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'e', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'r', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 's', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( '.', bb_0, be_0 ) ) 
      break;
    eUnitName_b_1 = bb_0;
    refalrts::use( eUnitName_b_1 );
    eUnitName_e_1 = be_0;
    refalrts::use( eUnitName_e_1 );
#else
    // & True e.UnitName '. 's 'r 'e 'f'
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & True, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n6;
    if( (n6 = refalrts::char_right( 'f', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'e', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 'r', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( 's', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n2;
    if( (n2 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eUnitName_b_1 = bb_0;
    refalrts::use( eUnitName_b_1 );
    eUnitName_e_1 = be_0;
    refalrts::use( eUnitName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Source, (void*) "Source"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eUnitName_b_1, & eUnitName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & eUnitName_b_1, & eUnitName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'p'},
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
    if( ! refalrts::copy_evar( eUnitName_b_2, eUnitName_e_2, eUnitName_b_1, eUnitName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Source, "Source" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eUnitName_b_2, eUnitName_e_2 );
    refalrts::link_brackets( n9, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eUnitName_b_1, eUnitName_e_1 );
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
    static refalrts::Iter eSourceName_b_1;
    refalrts::use( eSourceName_b_1 );
    static refalrts::Iter eSourceName_e_1;
    refalrts::use( eSourceName_e_1 );
    // & False e.SourceName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & False, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eSourceName_b_1 = bb_0;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_0;
    refalrts::use( eSourceName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & NotFound, "NotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_bracket( n0 );
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eSourceName_b_1, eSourceName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eSourceName_b_1;
    refalrts::use( eSourceName_b_1 );
    static refalrts::Iter eSourceName_e_1;
    refalrts::use( eSourceName_e_1 );
#ifdef OLD_PATTERN
    // & False e.SourceName
    if( ! refalrts::function_left( & False, bb_0, be_0 ) ) 
      break;
    eSourceName_b_1 = bb_0;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_0;
    refalrts::use( eSourceName_e_1 );
#else
    // & False e.SourceName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & False, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eSourceName_b_1 = bb_0;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_0;
    refalrts::use( eSourceName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & NotFound, (void*) "NotFound"},
      {refalrts::icSpliceEVar, & eSourceName_b_1, & eSourceName_e_1},
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
    if( ! refalrts::alloc_name( n3, & NotFound, "NotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eSourceName_b_1, eSourceName_e_1 );
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

static refalrts::FnResult AnalyzeOutput_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
    // & True e.OutName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & True, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Output, "Output" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_bracket( n0 );
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
#ifdef OLD_PATTERN
    // & True e.OutName
    if( ! refalrts::function_left( & True, bb_0, be_0 ) ) 
      break;
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#else
    // & True e.OutName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & True, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Output, (void*) "Output"},
      {refalrts::icSpliceEVar, & eOutName_b_1, & eOutName_e_1},
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
    if( ! refalrts::alloc_name( n3, & Output, "Output" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
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
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
    // & False e.OutName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & False, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & NotFound, "NotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_bracket( n0 );
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
#ifdef OLD_PATTERN
    // & False e.OutName
    if( ! refalrts::function_left( & False, bb_0, be_0 ) ) 
      break;
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#else
    // & False e.OutName
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & False, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & NotFound, (void*) "NotFound"},
      {refalrts::icSpliceEVar, & eOutName_b_1, & eOutName_e_1},
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
    if( ! refalrts::alloc_name( n3, & NotFound, "NotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
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

static refalrts::FnResult AnalyzeBoth_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eSourceName_b_1;
    refalrts::use( eSourceName_b_1 );
    static refalrts::Iter eSourceName_e_1;
    refalrts::use( eSourceName_e_1 );
    static refalrts::Iter sRes_1;
    refalrts::use( sRes_1 );
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
    // (~1 & True e.SourceName )~1 s.Res e.OutName
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
    if( (n1 = refalrts::function_left( & True, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eSourceName_b_1 = bb_1;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_1;
    refalrts::use( eSourceName_e_1 );
    if( ! refalrts::svar_left( sRes_1, bb_0, be_0 ) ) 
      break;
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & Source, "Source" );
    //}}} REINITS
    refalrts::link_brackets( n0, n7 );
    refalrts::link_brackets( n6, n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eSourceName_b_1, eSourceName_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eSourceName_b_1;
    refalrts::use( eSourceName_b_1 );
    static refalrts::Iter eSourceName_e_1;
    refalrts::use( eSourceName_e_1 );
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
    static refalrts::Iter sRes_1;
    refalrts::use( sRes_1 );
#ifdef OLD_PATTERN
    // (~1 & True e.SourceName )~1 s.Res e.OutName
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & True, bb_1, be_1 ) ) 
      break;
    eSourceName_b_1 = bb_1;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_1;
    refalrts::use( eSourceName_e_1 );
    if( ! refalrts::svar_left( sRes_1, bb_0, be_0 ) ) 
      break;
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#else
    // (~1 & True e.SourceName )~1 s.Res e.OutName
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
    if( (n1 = refalrts::function_left( & True, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eSourceName_b_1 = bb_1;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_1;
    refalrts::use( eSourceName_e_1 );
    if( ! refalrts::svar_left( sRes_1, bb_0, be_0 ) ) 
      break;
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Source, (void*) "Source"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSourceName_b_1, & eSourceName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOutName_b_1, & eOutName_e_1},
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
    if( ! refalrts::alloc_name( n7, & Source, "Source" ) )
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
    refalrts::link_brackets( n6, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eSourceName_b_1, eSourceName_e_1 );
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
    static refalrts::Iter eSourceName_b_1;
    refalrts::use( eSourceName_b_1 );
    static refalrts::Iter eSourceName_e_1;
    refalrts::use( eSourceName_e_1 );
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
    // (~1 & False e.SourceName )~1 & True e.OutName
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
    if( (n1 = refalrts::function_left( & False, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & True, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eSourceName_b_1 = bb_1;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_1;
    refalrts::use( eSourceName_e_1 );
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & Output, "Output" );
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eOutName_b_1;
    refalrts::use( eOutName_b_1 );
    static refalrts::Iter eOutName_e_1;
    refalrts::use( eOutName_e_1 );
    static refalrts::Iter eSourceName_b_1;
    refalrts::use( eSourceName_b_1 );
    static refalrts::Iter eSourceName_e_1;
    refalrts::use( eSourceName_e_1 );
#ifdef OLD_PATTERN
    // (~1 & False e.SourceName )~1 & True e.OutName
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & False, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & True, bb_0, be_0 ) ) 
      break;
    eSourceName_b_1 = bb_1;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_1;
    refalrts::use( eSourceName_e_1 );
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#else
    // (~1 & False e.SourceName )~1 & True e.OutName
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
    if( (n1 = refalrts::function_left( & False, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & True, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eSourceName_b_1 = bb_1;
    refalrts::use( eSourceName_b_1 );
    eSourceName_e_1 = be_1;
    refalrts::use( eSourceName_e_1 );
    eOutName_b_1 = bb_0;
    refalrts::use( eOutName_b_1 );
    eOutName_e_1 = be_0;
    refalrts::use( eOutName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Output, (void*) "Output"},
      {refalrts::icSpliceEVar, & eOutName_b_1, & eOutName_e_1},
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
    if( ! refalrts::alloc_name( n7, & Output, "Output" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n6, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
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
    static refalrts::Iter eUnitName_b_1;
    refalrts::use( eUnitName_b_1 );
    static refalrts::Iter eUnitName_e_1;
    refalrts::use( eUnitName_e_1 );
    static refalrts::Iter eUnitName_b_2;
    refalrts::use( eUnitName_b_2 );
    static refalrts::Iter eUnitName_e_2;
    refalrts::use( eUnitName_e_2 );
    // (~1 & False e.UnitName '. 's 'r 'e 'f )~1 & False e.UnitName '. 'c 'p 'p'
    refalrts::Iter n14;
    if( (n14 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n13;
    if( (n13 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n12;
    if( (n12 = refalrts::char_right( 'c', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n11;
    if( (n11 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & False, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n9;
    if( (n9 = refalrts::function_left( & False, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n7;
    if( (n7 = refalrts::char_right( 'f', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n6;
    if( (n6 = refalrts::char_right( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'r', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 's', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( '.', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eUnitName_b_1 = bb_1;
    refalrts::use( eUnitName_b_1 );
    eUnitName_e_1 = be_1;
    refalrts::use( eUnitName_e_1 );
    if( ! refalrts::repeated_evar_left( eUnitName_b_2, eUnitName_e_2, eUnitName_b_1, eUnitName_e_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & NotFound, "NotFound" );
    //}}} REINITS
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eUnitName_b_1, eUnitName_e_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eUnitName_b_1;
    refalrts::use( eUnitName_b_1 );
    static refalrts::Iter eUnitName_e_1;
    refalrts::use( eUnitName_e_1 );
    static refalrts::Iter eUnitName_b_2;
    refalrts::use( eUnitName_b_2 );
    static refalrts::Iter eUnitName_e_2;
    refalrts::use( eUnitName_e_2 );
#ifdef OLD_PATTERN
    // (~1 & False e.UnitName '.sref )~1 & False e.UnitName '.cpp'
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'c', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( '.', bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & False, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & False, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_right( 'f', bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_right( 'e', bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_right( 'r', bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_right( 's', bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_right( '.', bb_1, be_1 ) ) 
      break;
    eUnitName_b_1 = bb_1;
    refalrts::use( eUnitName_b_1 );
    eUnitName_e_1 = be_1;
    refalrts::use( eUnitName_e_1 );
    if( ! refalrts::repeated_evar_left( eUnitName_b_2, eUnitName_e_2, eUnitName_b_1, eUnitName_e_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 & False e.UnitName '. 's 'r 'e 'f )~1 & False e.UnitName '. 'c 'p 'p'
    refalrts::Iter n14;
    if( (n14 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n13;
    if( (n13 = refalrts::char_right( 'p', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n12;
    if( (n12 = refalrts::char_right( 'c', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n11;
    if( (n11 = refalrts::char_right( '.', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & False, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n9;
    if( (n9 = refalrts::function_left( & False, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n7;
    if( (n7 = refalrts::char_right( 'f', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n6;
    if( (n6 = refalrts::char_right( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n5;
    if( (n5 = refalrts::char_right( 'r', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n4;
    if( (n4 = refalrts::char_right( 's', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n3;
    if( (n3 = refalrts::char_right( '.', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eUnitName_b_1 = bb_1;
    refalrts::use( eUnitName_b_1 );
    eUnitName_e_1 = be_1;
    refalrts::use( eUnitName_e_1 );
    if( ! refalrts::repeated_evar_left( eUnitName_b_2, eUnitName_e_2, eUnitName_b_1, eUnitName_e_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & NotFound, (void*) "NotFound"},
      {refalrts::icSpliceEVar, & eUnitName_b_1, & eUnitName_e_1},
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
    if( ! refalrts::alloc_name( n16, & NotFound, "NotFound" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eUnitName_b_1, eUnitName_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}


//End of file
