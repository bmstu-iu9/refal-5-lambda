// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult WriteToHandle(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Func(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //debug ?!
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8);
    const int __eFilePath_1_1 = 0;
    static refalrts::Iter eFilePath_1_b_1;
    static refalrts::Iter eFilePath_1_e_1;
    
    //debug ::varInfo:: Mode[e] Index [FilePath] Depth[1] Usings[1]
    const int __eText_1_1 = 2;
    static refalrts::Iter eText_1_b_1;
    static refalrts::Iter eText_1_e_1;
    
    //debug ::varInfo:: Mode[e] Index [Text] Depth[1] Usings[1]
    const int __eFilePath_1_2 = 4;
    static refalrts::Iter eFilePath_1_b_2;
    static refalrts::Iter eFilePath_1_e_2;
    
    //debug ::varInfo:: Mode[e] Index [FilePath] Depth[1] Usings[2]
    const int __eText_1_2 = 6;
    static refalrts::Iter eText_1_b_2;
    static refalrts::Iter eText_1_e_2;
    
    //debug ::varInfo:: Mode[e] Index [Text] Depth[1] Usings[2]
    // ( e.FilePath#1 ) ( e.Text#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::EIter __bracket_1  = {0, 0};
    #ifndef INTERPRET
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    #endif
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::EIter __bracket_2  = {0, 0};
    #ifndef INTERPRET
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    #endif
    #ifndef INTERPRET
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    #endif
    #ifndef INTERPRET
    eFilePath_1_b_1 = bb_1;
    eFilePath_1_e_1 = be_1;
    #endif
    // HOHO HAHA
    #ifndef INTERPRET
    eText_1_b_1 = bb_2;
    eText_1_e_1 = be_2;
    #endif
    // HOHO HAHA
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEPush, &bb_0, &be_0, 0},
      {refalrts::icBracketLeft, &bb_1, &be_1, 0},
      {refalrts::icEPush, &bb_0, &be_0, 0},
      {refalrts::icBracketLeft, &bb_2, &be_2, 0},
      {refalrts::icEmpty, &bb_0, &be_0, 0},
      {refalrts::icContextSet, &bb_1, &be_1, __eFilePath_1_1},
      {refalrts::icContextSet, &bb_2, &be_2, __eText_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icSpliceEVar, 0, 0, __eFilePath_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icSpliceEVar, 0, 0, __eText_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteToHandle, (void*) "WriteToHandle"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FOpen, (void*) "FOpen"},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icCopyEVar, 0, 0, __eFilePath_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopyEVar, 0, 0, __eText_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    // new engine
    refalrts::FnResult res = refalrts::new_interpret_array( raa, allocs, context, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eFilePath_1_b_2, eFilePath_1_e_2, eFilePath_1_b_1, eFilePath_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eText_1_b_2, eText_1_e_2, eText_1_b_1, eText_1_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & WriteToHandle, "WriteToHandle" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eText_1_b_2, eText_1_e_2 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eFilePath_1_b_2, eFilePath_1_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eText_1_b_1, eText_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFilePath_1_b_1, eFilePath_1_e_1 );
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

static refalrts::FnResult TT(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //debug ?!
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4);
    const int __eX_1_1 = 0;
    static refalrts::Iter eX_1_b_1;
    static refalrts::Iter eX_1_e_1;
    
    //debug ::varInfo:: Mode[e] Index [X] Depth[1] Usings[1]
    const int __eY_1_1 = 2;
    static refalrts::Iter eY_1_b_1;
    static refalrts::Iter eY_1_e_1;
    
    //debug ::varInfo:: Mode[e] Index [Y] Depth[1] Usings[1]
    // e.X#1 e.Y#1
    eX_1_b_1 = 0;
    eX_1_e_1 = 0;
    do {
      refalrts::Iter bb_1 = bb_0;
      refalrts::Iter be_1 = be_0;
      #ifndef INTERPRET
      eY_1_b_1 = bb_1;
      eY_1_e_1 = be_1;
      #endif
      // HOHO HAHA
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icContextSet, &bb_1, &be_1, __eY_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, 0, 0, __eX_1_1},
        {refalrts::icSpliceEVar, 0, 0, __eY_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      // new engine
      refalrts::FnResult res = refalrts::new_interpret_array( raa, allocs, context, arg_begin, arg_end );
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
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eY_1_b_1, eY_1_e_1 );
      res = refalrts::splice_evar( res, eX_1_b_1, eX_1_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eX_1_b_1, eX_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult WriteToHandle(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //debug ?!
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4);
    const int __tFile_1_1 = 0;
    static refalrts::Iter tFile_1_1;
    
    //debug ::varInfo:: Mode[t] Index [File] Depth[1] Usings[1]
    const int __eLine_1_1 = 1;
    static refalrts::Iter eLine_1_b_1;
    static refalrts::Iter eLine_1_e_1;
    
    //debug ::varInfo:: Mode[e] Index [Line] Depth[1] Usings[1]
    const int __tFile_1_2 = 3;
    static refalrts::Iter tFile_1_2;
    
    //debug ::varInfo:: Mode[t] Index [File] Depth[1] Usings[2]
    // t.File#1 e.Line#1
    #ifndef INTERPRET
    if( ! refalrts::tvar_left( tFile_1_1, bb_0, be_0 ) )
      break;
    #endif
    #ifndef INTERPRET
    eLine_1_b_1 = bb_0;
    eLine_1_e_1 = be_0;
    #endif
    // HOHO HAHA
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::ictVarLeft, &bb_0, &be_0, __tFile_1_1},
      {refalrts::icContextSet, &bb_0, &be_0, __eLine_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'W'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FWriteLine, (void*) "FWriteLine"},
      {refalrts::icSpliceSTVar, 0, 0, __tFile_1_1},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FClose, (void*) "FClose"},
      {refalrts::icCopySTVar, 0, 0, __tFile_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    // new engine
    refalrts::FnResult res = refalrts::new_interpret_array( raa, allocs, context, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tFile_1_2, tFile_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & FWriteLine, "FWriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, tFile_1_2 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eLine_1_b_1, eLine_1_e_1 );
    res = refalrts::splice_stvar( res, tFile_1_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
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

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //debug ?!
    // Warning - storage with 0 elems!
    
    refalrts::Iter context[0];
    //
    #ifndef INTERPRET
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    #endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEmpty, &bb_0, &be_0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Func, (void*) "Func"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    // new engine
    refalrts::FnResult res = refalrts::new_interpret_array( raa, allocs, context, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Func, "Func" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '!' ) )
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
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n2, n11 );
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


//End of file
