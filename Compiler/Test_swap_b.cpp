// Automatically generated file. Don't edit!
#include "refalrts.h"


//$ESWAP MySwap
refalrts::FnResult MySwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::Iter func_name = arg_begin;

  refalrts::move_left( func_name, arg_end );

  refalrts::Iter info_b = func_name;
  refalrts::Iter info_e = arg_end;

  refalrts::move_left( info_b, info_e );
  refalrts::move_right( info_b, info_e );

  static refalrts::Iter s_head = refalrts::initialize_swap_head( func_name );

  refalrts::Iter saved_b;
  refalrts::Iter saved_e;

  refalrts::swap_info_bounds( saved_b, saved_e, s_head );
  refalrts::splice_evar( arg_begin, saved_b, saved_e );
  refalrts::swap_save( s_head, info_b, info_e );
  refalrts::splice_to_freelist( arg_begin, arg_end );

  return refalrts::cSuccess;
}

