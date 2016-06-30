// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComposeVars_Debug(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WriteLine_1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ComposeVars_Debug(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //FAST GEN:(E )(E )
  //GLOBAL GEN:(E )(E )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 2
  // closed e.idxTB#0 as range 4
  do {
    refalrts::start_sentence();
    //(E )(E )
    context[6] = context[2];
    context[7] = context[3];
    context[8] = context[4];
    context[9] = context[5];
    context[10] = 0;
    context[11] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[6];
      context[21] = context[7];
      context[22] = context[8];
      context[23] = context[9];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[20], context[21] ) )
        continue;
      // closed e.Name#1 as range 12
      // closed e.Substitute_E#1 as range 6
      context[14] = 0;
      context[15] = 0;
      refalrts::start_e_loop();
      do {
        context[24] = context[22];
        context[25] = context[23];
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_left( context[16], context[17], context[24], context[25] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[18], context[19], context[12], context[13], context[16], context[17] ) )
          continue;
        if( ! refalrts::empty_seq( context[16], context[17] ) )
          continue;
        // closed e.Vars_E#1 as range 8
        //Vars: (e(Substitute_B1 )10 )(e(Name1 )12 18 )(e(Substitute_E1 )6 )(e(Vars_B1 )14 )(e(Vars_E1 )8 )
        //Reassigns: (2 20 )(4 24 )(6 20 )(8 24 )(22 24 )
        //Fixup: (e(Substitute_B1 )10 )(e(Name1 )12 18 )(e(Substitute_E1 )20 )(e(Vars_B1 )14 )(e(Vars_E1 )24 )
        //10: e.Substitute_B#1
        //12: e.Name#1
        //14: e.Vars_B#1
        //18: e.Name#1
        //20: e.Substitute_E#1
        //24: e.Vars_E#1
        //31: e.Vars_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[27], WriteLine_1, "WriteLine_1" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[28], context[29], "Full\n", 5 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[30], '\n' ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[31], context[32], context[24], context[25]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[33] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[33] );
        refalrts::push_stack( context[26] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[14], context[15], context[22], context[23] ) );
    } while ( refalrts::open_evar_advance( context[10], context[11], context[6], context[7] ) );
  } while ( 0 );

  //()()
  context[6] = context[2];
  context[7] = context[3];
  context[8] = context[4];
  context[9] = context[5];
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  //Vars: 
  //Reassigns: (2 6 )(4 8 )
  //Fixup: 

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult WriteLine_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 2 elems
  refalrts::Iter context[2];
  refalrts::zeros( context, 2 );
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  if( ! refalrts::char_left( 'F', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_left( 'u', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_left( 'l', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_left( 'l', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_left( '\n', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_left( '\n', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ComposeVars_Debug, "ComposeVars_Debug" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "idx", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "idx", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[10], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[4], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[5], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
