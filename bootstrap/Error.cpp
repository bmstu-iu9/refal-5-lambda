// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult ErrorList(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      { & ErrorList, "ErrorList" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ErrorList, "ErrorList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
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

refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eErrors_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Errors] Depth[1] Usings[1]
    enum { __eMessage_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Message] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ErrorList, "ErrorList" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eErrors_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eMessage_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eErrors_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eMessage_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & ErrorList e.Errors#1 ) e.Message#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & ErrorList, context[2], context[3] ) )
      break;
    context[__eErrors_1_1] = context[2];
    context[__eErrors_1_1 + 1] = context[3];
    context[__eMessage_1_1] = context[0];
    context[__eMessage_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ErrorList, "ErrorList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n2, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eMessage_1_1], context[__eMessage_1_1 + 1] );
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
    res = refalrts::splice_evar( res, context[__eErrors_1_1], context[__eErrors_1_1 + 1] );
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

refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eErrors_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Errors] Depth[1] Usings[1]
    enum { __sLineNumber_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [LineNumber] Depth[1] Usings[1]
    enum { __eMessage_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Message] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromInt, "StrFromInt" },
      { & ErrorList, "ErrorList" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eErrors_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLineNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eMessage_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eErrors_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLineNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eMessage_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & ErrorList e.Errors#1 ) s.LineNumber#1 e.Message#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & ErrorList, context[2], context[3] ) )
      break;
    context[__eErrors_1_1] = context[2];
    context[__eErrors_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sLineNumber_1_1], context[0], context[1] ) )
      break;
    context[__eMessage_1_1] = context[0];
    context[__eMessage_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ErrorList, "ErrorList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n20 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n2, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, context[__eMessage_1_1], context[__eMessage_1_1 + 1] );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sLineNumber_1_1] );
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
    res = refalrts::splice_evar( res, context[__eErrors_1_1], context[__eErrors_1_1 + 1] );
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

extern refalrts::FnResult StrFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkError(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLineNumber_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LineNumber] Depth[1] Usings[1]
    enum { __eMessage_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Message] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & TkError, "TkError" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLineNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eMessage_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLineNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMessage_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 ( & TkError s.LineNumber#1 e.Message#1 ) e.Expected#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkError, context[2], context[3] ) )
      break;
    // Unused closed variable e.Expected#1
    if( ! refalrts::svar_left( context[__sLineNumber_1_1], context[2], context[3] ) )
      break;
    context[__eMessage_1_1] = context[2];
    context[__eMessage_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eMessage_1_1], context[__eMessage_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLineNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLineNumber_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LineNumber] Depth[1] Usings[1]
    enum { __eUnexpected_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Unexpected] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & TkUnexpected, "TkUnexpected" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLineNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eUnexpected_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLineNumber_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'w', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'h', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icSpliceEVar, 0, 0, __eUnexpected_1_1, 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 ( & TkUnexpected s.LineNumber#1 e.Unexpected#1 ) e.Expected#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkUnexpected, context[2], context[3] ) )
      break;
    // Unused closed variable e.Expected#1
    if( ! refalrts::svar_left( context[__sLineNumber_1_1], context[2], context[3] ) )
      break;
    context[__eUnexpected_1_1] = context[2];
    context[__eUnexpected_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eUnexpected_1_1], context[__eUnexpected_1_1 + 1] );
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
    res = refalrts::splice_stvar( res, context[__sLineNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __eExpected_1_1 = 5 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Expected] Depth[1] Usings[1]
    enum { __sUnexpected_1_1 = 7 };
    
    //debug ::varInfo:: Mode[s] Index [Unexpected] Depth[1] Usings[1]
    enum { __sLineNumber_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [LineNumber] Depth[1] Usings[1]
    enum { __eInfo_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Info] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromToken, "StrFromToken" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eExpected_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUnexpected_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLineNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eInfo_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLineNumber_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInfo_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, ',', 0},
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
      {refalrts::icSpliceEVar, 0, 0, __eExpected_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 ( s.Unexpected#1 s.LineNumber#1 e.Info#1 ) e.Expected#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eExpected_1_1] = context[0];
    context[__eExpected_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUnexpected_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sLineNumber_1_1], context[2], context[3] ) )
      break;
    context[__eInfo_1_1] = context[2];
    context[__eInfo_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StrFromToken, "StrFromToken" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n27 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, context[__eExpected_1_1], context[__eExpected_1_1 + 1] );
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
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eInfo_1_1], context[__eInfo_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sUnexpected_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sLineNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eLine_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Line] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Line#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[2];
    context[__eLine_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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

refalrts::FnResult EL_Print(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eErrors_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Errors] Depth[1] Usings[1]
    enum { __eErrors_1_2 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Errors] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ErrorList, "ErrorList" },
      { & PrintError, "PrintError" },
      { & Map, "Map" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eErrors_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eErrors_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eErrors_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & ErrorList e.Errors#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & ErrorList, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eErrors_1_1] = context[2];
    context[__eErrors_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eErrors_1_2], context[__eErrors_1_2 + 1], context[__eErrors_1_1], context[__eErrors_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & PrintError, "PrintError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & ErrorList, "ErrorList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eErrors_1_2], context[__eErrors_1_2 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eErrors_1_1], context[__eErrors_1_1 + 1] );
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

refalrts::FnResult EL_NoErrors(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult EL_HasErrors(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult EL_IsEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      { & EL_NoErrors, "EL_NoErrors" },
      { & ErrorList, "ErrorList" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & ErrorList )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & ErrorList, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & EL_NoErrors, "EL_NoErrors" ) )
      return refalrts::cNoMemory;
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
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_HasErrors, "EL_HasErrors" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & EL_HasErrors, "EL_HasErrors" ) )
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


//End of file
