extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eFolders_b_1;
    refalrts::Iter eFolders_e_1;
    refalrts::Iter eFiles_b_1;
    refalrts::Iter eFiles_e_1;
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

    refalrts::reset_allocator();
#ifdef INTERPRET
    refalrts::ResultAction raa[] = {
      { cCmdOpenCall },
      { cCmdName, & Map, "Map" },
      { cCmdOpenBracket },
      { cCmdName, & AnalyzeFile_ByFolders, "...." },
      { cCmdName, & ..., "..." },
      { cCmdSpliceEVar, eFolder_b_1, eFolder_e_1 },
      { cCmdCloseBracket },
      { cCmdSpliceEVar, eFile_b_1, eFile_b_1 },
      { cCmdCloseCall },
      { cCmdEnd }
    };

    refalrts::FnResult res = refalrts::interpret_array( raa, arg_begin, arg_end );
    return res;
#else
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & AnalyzeFile_ByFolders, "AnalyzeFile_ByFolders" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Current, "Current" ) )
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
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
#endif
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

#ifdef INTERPRET
    refalrts::ResultAction raa[] = {
      { cCmdOpenCall },
      { cCmdName, & Map, "Map" },
      { cCmdOpenBracket },
      { cCmdName, & AnalyzeFile_ByFolders, "...." },
      { cCmdName, & ..., "..." },
      { cCmdSpliceEVar, eFolder_b_1, eFolder_e_1 },
      { cCmdCloseBracket },
      { cCmdSpliceEVar, eFile_b_1, eFile_b_1 },
      { cCmdCopyEVar, eFile_b_1, eFile_e_1 }, // просто копируем.
      { cCmdCloseCall },
      { cCmdEnd }
    };

    refalrts::FnResult res = refalrts::interpret_array( raa, arg_begin, arg_end );
    return res;
#else

struct ResultAction {
  Command command;
  void *ptr1_value;
  void *ptr2_value;
  int *int_value;
  Node *free1;
  Node *free2;
};