#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <assert.h>

#include "refalrts.h"

#if 1
#  define VALID_LINKED( iter )
#else
#  define VALID_LINKED( iter ) valid_linked_aux( #iter, iter );
#endif

#define SHOW_DEBUG 0

void valid_linked_aux( const char *text, refalrts::Iter i ) {
  printf("checking %s\n", text);
  if( 0 == i ) {
    return;
  }

  if( i->next ) {
    assert( i->next->prev == i );
  }

  if( i->prev ) {
    assert( i->prev->next == i );
  }
}

//==============================================================================
// Примитивные операции
//==============================================================================

// Операции распознавания

void refalrts::use( refalrts::Iter& ) {
  /* Ничего не делаем. Эта функция добавляется, чтобы подавить предупреждение
  компилятора о том, что переменная не используется */;
}

namespace {

static refalrts::Iter next( refalrts::Iter current ) {
  return current->next;
}

static refalrts::Iter prev( refalrts::Iter current ) {
  return current->prev;
}

bool is_open_bracket( refalrts::Iter node ) {
  return (refalrts::cDataOpenBracket == node->tag)
    || (refalrts::cDataOpenADT == node->tag);
}

bool is_close_bracket( refalrts::Iter node ) {
  return (refalrts::cDataCloseBracket == node->tag)
    || (refalrts::cDataCloseADT == node->tag);
}

} // unnamed namespace

void refalrts::move_left(
  refalrts::Iter& first, refalrts::Iter& last
) {
  if( first == last ) {
    first = 0;
    last = 0;
  } else {
    first = next( first );
  }
}

void refalrts::move_right(
  refalrts::Iter& first, refalrts::Iter& last
) {
  if( first == last ) {
    first = 0;
    last = 0;
  } else {
    last = prev( last );
  }
}

bool refalrts::empty_seq( refalrts::Iter first, refalrts::Iter last ) {
  //assert( (first == 0) == (last == 0) );
  if( first == 0 ) assert (last == 0);
  if( first != 0 ) assert (last != 0);

  return (first == 0) && (last == 0);
}

bool refalrts::function_left(
  refalrts::RefalFunctionPtr fn, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if( first->tag != cDataFunction ) {
    return false;
  } else if ( first->function_info.ptr != fn ) {
    return false;
  } else {
    move_left( first, last );
    return true;
  }
}

bool refalrts::function_right(
  refalrts::RefalFunctionPtr fn, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataFunction != last->tag ) {
    return false;
  } else if ( last->function_info.ptr != fn ) {
    return false;
  } else {
    move_right( first, last );
    return true;
  }
}

bool refalrts::char_left(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataChar != first->tag ) {
    return false;
  } else if ( first->char_info != ch ) {
    return false;
  } else {
    move_left( first, last );
    return true;
  }
}

bool refalrts::char_right(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataChar != last->tag ) {
    return false;
  } else if ( last->char_info != ch ) {
    return false;
  } else {
    move_right( first, last );
    return true;
  }
}


bool refalrts::number_left(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataNumber != first->tag ) {
    return false;
  } else if ( first->number_info != num ) {
    return false;
  } else {
    move_left( first, last );
    return true;
  }
}

bool refalrts::number_right(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataNumber != last->tag ) {
    return false;
  } else if ( last->number_info != num ) {
    return false;
  } else {
    move_right( first, last );
    return true;
  }
}

bool refalrts::ident_left(
  refalrts::RefalIdentifier ident, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataIdentifier != first->tag ) {
    return false;
  } else if ( first->ident_info != ident ) {
    return false;
  } else {
    move_left( first, last );
    return true;
  }
}

bool refalrts::ident_right(
  refalrts::RefalIdentifier ident, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataIdentifier != last->tag ) {
    return false;
  } else if ( last->ident_info != ident ) {
    return false;
  } else {
    move_right( first, last );
    return true;
  }
}

bool refalrts::brackets_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataOpenBracket != first->tag ) {
    return false;
  } else {
    refalrts::Iter left_bracket = first;
    refalrts::Iter right_bracket = left_bracket->link_info;

    if( next( left_bracket ) != right_bracket ) {
      res_first = next( left_bracket );
      res_last = prev( right_bracket );
    } else {
      res_first = 0;
      res_last = 0;
    }

    if( right_bracket == last ) {
      first = 0;
      last = 0;
    } else {
      first = next( right_bracket );
    }

    return true;
  }
}

bool refalrts::brackets_right(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if( cDataCloseBracket != last->tag ) {
    return false;
  } else {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;

    if( next( left_bracket ) != right_bracket ) {
      res_first = next( left_bracket );
      res_last = prev( right_bracket );
    } else {
      res_first = 0;
      res_last = 0;
    }

    if( first == left_bracket ) {
      first = 0;
      last = 0;
    } else {
      last = prev( left_bracket );
    }

    return true;
  }
}

bool refalrts::adt_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::RefalFunctionPtr tag,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( cDataOpenADT != first->tag ) {
    return false;
  } else {
    refalrts::Iter left_bracket = first;
    refalrts::Iter right_bracket = left_bracket->link_info;
    refalrts::Iter pnext = next( left_bracket );

    if( pnext == right_bracket ) {
      return false;
    } else if( cDataFunction != pnext->tag ) {
      return false;
    } else if( pnext->function_info.ptr != tag ) {
      return false;
    } else {
      if( next( pnext ) != right_bracket ) {
        res_first = next( pnext );
        res_last = prev( right_bracket );
      } else {
        res_first = 0;
        res_last = 0;
      }

      if( right_bracket == last ) {
        first = 0;
        last = 0;
      } else {
        first = next( right_bracket );
      }

      return true;
    }
  }
}

bool refalrts::adt_right(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::RefalFunctionPtr tag,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if( cDataCloseADT != last->tag ) {
    return false;
  } else {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;
    refalrts::Iter pnext = next( left_bracket );

    if( pnext == right_bracket ) {
      return false;
    } else if( cDataFunction != pnext->tag ) {
      return false;
    } else if( pnext->function_info.ptr != tag ) {
      return false;
    } else {
      if( next( pnext ) != right_bracket ) {
        res_first = next( pnext );
        res_last = prev( right_bracket );
      } else {
        res_first = 0;
        res_last = 0;
      }

      if( first == left_bracket ) {
        first = 0;
        last = 0;
      } else {
        last = prev( left_bracket );
      }

      return true;
    }
  }
}

bool refalrts::svar_left(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( is_open_bracket( first ) ) {
    return false;
  } else {
    svar = first;
    move_left( first, last );
    return true;
  }
}

bool refalrts::svar_right(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( is_close_bracket( last ) ) {
    return false;
  } else {
    svar = last;
    move_right( first, last );
    return true;
  }
}

bool refalrts::tvar_left(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {

#if SHOW_DEBUG

  if( (first == 0) != (last == 0) ) {
    printf("\nstvar_left\n");
    printf("first = %p\n", first);
    printf("last = %p\n", last);
    fflush(stdout);
  }

#endif // SHOW_DEBUG

  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( is_open_bracket( first ) ) {
    refalrts::Iter right_bracket = first->link_info;

    tvar = first;
    first = right_bracket;
    move_left( first, last );
    return true;
  } else {
    tvar = first;
    move_left( first, last );
    return true;
  }
}

bool refalrts::tvar_right(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  if( empty_seq( first, last ) ) {
    return false;
  } else if ( is_close_bracket( last ) ) {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;

    tvar = left_bracket;
    last = left_bracket;
    move_right( first, last );
    return true;
  } else {
    tvar = last;
    move_right( first, last );
    return true;
  }
}

bool refalrts::next_term(
  refalrts::Iter& first, refalrts::Iter& last
) {
  /*
    Функция используется для промотки к следующему терму при анализе
    открытой e-переменной. Т.к. до этого в заголовке цикла проверяется факт,
    что first != last, возвращаемое значение функции можно не проверять.
  */
  refalrts::Iter temp;
  return tvar_left( temp, first, last );
}

namespace refalrts {

class UnexpectedTypeException { };

} // namespace refalrts

namespace {

bool equal_nodes(
  refalrts::Iter node1, refalrts::Iter node2
) // throws refalrts::UnexpectedTypeException
{
  if( node1->tag != node2->tag ) {
    return false;
  } else {
    switch( node1->tag ) {
      case refalrts::cDataChar:
        return (node1->char_info == node2->char_info);
        // break;

      case refalrts::cDataNumber:
        return (node1->number_info == node2->number_info);
        // break;

      case refalrts::cDataFunction:
        return (node1->function_info.ptr == node2->function_info.ptr);
        // break;

      case refalrts::cDataIdentifier:
        return (node1->ident_info == node2->ident_info);
        // break;

      /*
        Сведения о связях между скобками нужны для других целей, здесь
        же нам важны только их одновременные появления.
      */
      case refalrts::cDataOpenBracket:
      case refalrts::cDataCloseBracket:
      case refalrts::cDataOpenADT:
      case refalrts::cDataCloseADT:
        return true;
        // break;

      case refalrts::cDataFile:
        return (node1->file_info == node2->file_info);
        // break;

      /*
        Данная функция предназначена только для использования функциями рас-
        познавания образца. Поэтому других узлов мы тут не ожидаем.
      */
      default:
        throw refalrts::UnexpectedTypeException();
        // break;
    }
    // Все ветви в case завершаются либо return, либо throw.
  }
}

bool equal_expressions(
  refalrts::Iter first1, refalrts::Iter last1,
  refalrts::Iter first2, refalrts::Iter last2
) // throws refalrts::UnexpectedTypeException
{
  assert( (first1 == 0) == (last1 == 0) );
  assert( (first2 == 0) == (last2 == 0) );

  for(
    /* Пользуемся аргументами функции, инициализация не нужна */;
    // Порядок условий важен
    !empty_seq( first1, last1 ) && ! empty_seq( first2, last2 )
      && equal_nodes( first1, first2 );
    move_left( first1, last1 ), move_left( first2, last2 )
  ) {
    continue;
  }

  /*
    Здесь empty_seq( first1, last1 ) || empty_seq( first2, last2 )
      || !equal_nodes( first1, first2 )
  */

  // Успешное завершение -- если мы достигли конца в обоих выражениях
  if( empty_seq( first1, last1 ) && empty_seq( first2, last2 ) ) {
    return true;
  } else {
    // Любое другое завершение цикла свидетельствует о несовпадении
    return false;
  }
}

} // unnamed namespace

bool refalrts::repeated_stvar_left(
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  refalrts::Iter left_term = 0;
  refalrts::Iter copy_last = last;

  if( tvar_left( left_term, first, last ) ) {
    refalrts::Iter left_term_e;
    refalrts::Iter stvar_sample_e;

    if( empty_seq( first, last ) ) {
      left_term_e = copy_last;
    } else {
      left_term_e = prev( first );
    }

    if( is_open_bracket( stvar_sample ) ) {
      stvar_sample_e = stvar_sample->link_info;
    } else {
      stvar_sample_e = stvar_sample;
    }

    bool equal = equal_expressions(
      left_term, left_term_e,
      stvar_sample, stvar_sample_e
    );

    if( equal ) {
      stvar = left_term;

      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

bool refalrts::repeated_stvar_right(
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert( (first == 0) == (last == 0) );

  refalrts::Iter right_term = 0;
  refalrts::Iter old_last = last;

  if( tvar_right( right_term, first, last ) ) {
    refalrts::Iter right_term_e = old_last;
    refalrts::Iter stvar_sample_e;

    if( is_open_bracket( stvar_sample ) ) {
      stvar_sample_e = stvar_sample->link_info;
    } else {
      stvar_sample_e = stvar_sample;
    }

    bool equal = equal_expressions(
      right_term, right_term_e,
      stvar_sample, stvar_sample_e
    );

    if( equal ) {
      stvar = right_term;

      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

bool refalrts::repeated_evar_left(
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  refalrts::Iter current = first;
  refalrts::Iter cur_sample = evar_b_sample;
  refalrts::Iter copy_last = last;

  for(
    /* инициализация выше */;
    // порядок условий важен
    !empty_seq( current, copy_last )
      && !empty_seq( cur_sample, evar_e_sample )
      && equal_nodes( current, cur_sample );
    move_left( cur_sample, evar_e_sample ), move_left( current, copy_last )
  ) {
    continue;
  }

  /*
    Здесь empty_seq( current, copy_last )
      || empty_seq( cur_sample, evar_e_sample
      || ! equal_nodes( current, cur_sample )
  */
  if( empty_seq( cur_sample, evar_e_sample ) ) {
    // Это нормальное завершение цикла -- вся образцовая переменная проверена

    if( empty_seq( current, copy_last ) ) {
      evar_b = first;
      evar_e = last;

      first = 0;
      last = 0;
    } else {
      evar_b = first;
      evar_e = prev( current );

      first = current;
    }

    return true;
  } else {
    return false;
  }
}

bool refalrts::repeated_evar_right(
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  refalrts::Iter current = last;
  refalrts::Iter cur_sample = evar_e_sample;
  refalrts::Iter copy_first = first;

  for(
    /* инициализация выше */;
    // порядок перечисления условий важен
    !empty_seq( copy_first, current )
      && !empty_seq( evar_b_sample, cur_sample )
      && equal_nodes( current, cur_sample );
    move_right( copy_first, current ), move_right( evar_b_sample, cur_sample )
  ) {
    continue;
  }

  /*
    Здесь empty_seq( copy_first, current )
      || empty_seq( evar_b_sample, cur_sample )
      || ! equal_nodes( current, cur_sample )
  */

  if( empty_seq( evar_b_sample, cur_sample ) ) {
    // Это нормальное завершение цикла: вся переменная-образец просмотрена

    if( empty_seq( copy_first, current ) ) {
      evar_b = first;
      evar_e = last;

      first = 0;
      last = 0;
    } else {
      evar_b = next( current );
      evar_e = last;

      last = current;
    }

    return true;
  } else {
    return false;
  }
}

unsigned refalrts::read_chars(
  char buffer[], unsigned buflen, refalrts::Iter& first, refalrts::Iter& last
) {
  unsigned read = 0;
  for( ; ; ) {
    if( read == buflen ) {
      return read;
    } else if( empty_seq(first, last) ) {
      return read;
    } else if( first->tag != refalrts::cDataChar ) {
      return read;
    } else {
      buffer[read] = first->char_info;
      ++ read;
      move_left( first, last );
    }
  }
}

//------------------------------------------------------------------------------

// Операции распределителя памяти

namespace refalrts{

namespace allocator {

void reset_allocator();
bool alloc_node( Iter& node );
Iter free_ptr();
void splice_to_freelist( Iter begin, Iter end );

} // namespace allocator

} // namespace refalrts

//------------------------------------------------------------------------------

// Операции построения результата

void refalrts::reset_allocator() {
  allocator::reset_allocator();
}

namespace {

bool copy_node( refalrts::Iter& res, refalrts::Iter sample ) {
  switch( sample->tag ) {
    case refalrts::cDataChar:
      return refalrts::alloc_char( res, sample->char_info );
      // break;

    case refalrts::cDataNumber:
      return refalrts::alloc_number( res, sample->number_info );
      // break;

    case refalrts::cDataFunction:
      return refalrts::alloc_name(
        res, sample->function_info.ptr, sample->function_info.name
      );
      // break;

    case refalrts::cDataIdentifier:
      return refalrts::alloc_ident( res, sample->ident_info );
      //break;

    case refalrts::cDataOpenBracket:
      return refalrts::alloc_open_bracket( res );
      // break;

    case refalrts::cDataCloseBracket:
      return refalrts::alloc_close_bracket( res );
      // break;

    case refalrts::cDataOpenADT:
      return refalrts::alloc_open_adt( res );
      // break;

    case refalrts::cDataCloseADT:
      return refalrts::alloc_close_adt( res );
      // break;

    case refalrts::cDataFile: {
      bool allocated = refalrts::allocator::alloc_node( res );
      if( allocated ) {
        res->tag = refalrts::cDataFile;
        res->file_info = sample->file_info;
        return true;
      } else {
        return false;
      }
    }

    /*
      Копируем только объектное выражение -- никаких вызовов функций быть не
      должно.
    */
    default:
      throw refalrts::UnexpectedTypeException();
      // break;
  }
}

} // unnamed namespace


namespace refalrts {

namespace vm {

void make_dump( refalrts::Iter begin, refalrts::Iter end );

} // namepsace vm

} // namespace refalrts


bool refalrts::copy_evar(
  refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {

//DEBUG CODE

  VALID_LINKED( evar_b_sample );
  VALID_LINKED( evar_e_sample );

//END DEBUG CODE

  if( empty_seq( evar_b_sample, evar_e_sample ) ) {
    evar_res_b = 0;
    evar_res_e = 0;
  } else {
    refalrts::Iter res = 0;
    refalrts::Iter bracket_stack = 0;

    refalrts::Iter prev_res_begin = prev( allocator::free_ptr() );

    while( ! empty_seq( evar_b_sample, evar_e_sample ) ) {
      if( ! copy_node( res, evar_b_sample ) ) {
        return false;
      }
      
      if( is_open_bracket( res ) ) {
        res->link_info = bracket_stack;
        bracket_stack = res;
      } else if( is_close_bracket( res ) ) {
        assert( bracket_stack != 0 );

        refalrts::Iter open_cobracket = bracket_stack;
        bracket_stack = bracket_stack->link_info;
        link_brackets( open_cobracket, res );
      }

      move_left( evar_b_sample, evar_e_sample );
    }

    assert( bracket_stack == 0 );

    evar_res_b = next( prev_res_begin );
    evar_res_e = res;
  }


//DEBUG CODE

  VALID_LINKED( evar_res_b );
  VALID_LINKED( evar_res_e );

//END DEBUG CODE

  return true;
}

bool refalrts::copy_stvar(
  refalrts::Iter& stvar_res, refalrts::Iter stvar_sample
) {
  refalrts::Iter end_of_sample;
  if( is_open_bracket( stvar_sample ) ) {
    end_of_sample = stvar_sample->link_info;
  } else {
    end_of_sample = stvar_sample;
  }

  refalrts::Iter end_of_res;
  return copy_evar( stvar_res, end_of_res, stvar_sample, end_of_sample );
}

bool refalrts::alloc_char( refalrts::Iter& res, char ch ) {
  if( allocator::alloc_node( res ) ) {
    res->tag = cDataChar;
    res->char_info = ch;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_number(
  refalrts::Iter& res, refalrts::RefalNumber num
) {
  if( allocator::alloc_node( res ) ) {
    res->tag = cDataNumber;
    res->number_info = num;
    return true;
  } else {
    return false;
  }
}

const char *unknown() { return "@unknown"; }

bool refalrts::alloc_name(
  refalrts::Iter& res,
  refalrts::RefalFunctionPtr fn,
  refalrts::RefalIdentifier name
) {
  if( allocator::alloc_node( res ) ) {
    res->tag = cDataFunction;
    res->function_info.ptr = fn;
    if( name != 0 ) {
      res->function_info.name = name;
    } else {
      res->function_info.name = unknown;
    }
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_ident(
  refalrts::Iter& res, refalrts::RefalIdentifier ident
) {
  if( allocator::alloc_node( res ) ) {
    res->tag = cDataIdentifier;
    res->ident_info = ident;
    return true;
  } else {
    return false;
  }
}

namespace {

bool alloc_some_bracket( refalrts::Iter& res, refalrts::DataTag tag ) {
  if( refalrts::allocator::alloc_node( res ) ) {
    res->tag = tag;
    return true;
  } else {
    return false;
  }
}

} // unnamed namespace

bool refalrts::alloc_open_adt( refalrts::Iter& res ) {
  return alloc_some_bracket( res, cDataOpenADT );
}

bool refalrts::alloc_close_adt( refalrts::Iter& res ) {
  return alloc_some_bracket( res, cDataCloseADT );
}

bool refalrts::alloc_open_bracket( refalrts::Iter& res ) {
  return alloc_some_bracket( res, cDataOpenBracket );
}

bool refalrts::alloc_close_bracket( refalrts::Iter& res ) {
  return alloc_some_bracket( res, cDataCloseBracket );
}

bool refalrts::alloc_open_call( refalrts::Iter& res ) {
  return alloc_some_bracket( res, cDataOpenCall );
}

bool refalrts::alloc_close_call( refalrts::Iter& res ) {
  return alloc_some_bracket( res, cDataCloseCall );
}

bool refalrts::alloc_chars(
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  if( buflen == 0 ) {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    refalrts::Iter before_begin_seq = prev( refalrts::allocator::free_ptr() );
    refalrts::Iter end_seq = 0;

    for( unsigned i = 0; i < buflen; ++ i ) {
      if( ! alloc_char( end_seq, buffer[i] ) ) {
        return false;
      }
    }

    res_b = next( before_begin_seq );
    res_e = end_seq;

    return true;
  }
}

bool refalrts::alloc_string(
  refalrts::Iter& res_b, refalrts::Iter& res_e, const char *string
) {
  if( *string == '\0' ) {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    refalrts::Iter before_begin_seq = prev( refalrts::allocator::free_ptr() );
    refalrts::Iter end_seq = 0;

    for( const char *p = string; *p != '\0'; ++ p ) {
      if( ! alloc_char( end_seq, *p ) ) {
        return false;
      }
    }

    res_b = next( before_begin_seq );
    res_e = end_seq;

    return true;
  }
}

namespace refalrts {

namespace vm {

void push_stack( refalrts::Iter call_bracket );

} // namespace vm

} // namespace refalrts

void refalrts::push_stack( Iter call_bracket ) {
  vm::push_stack( call_bracket );
}

void refalrts::link_brackets( Iter left, Iter right ) {
  left->link_info = right;
  right->link_info = left;
}

namespace {

void link_adjacent( refalrts::Iter left, refalrts::Iter right ) {
  if( left != 0 ) {
    left->next = right;
  }

  if( right != 0 ) {
    right->prev = left;
  }
}

refalrts::Iter list_splice(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {

  VALID_LINKED( res );
  VALID_LINKED( res->prev );
  VALID_LINKED( begin );
  VALID_LINKED( begin->prev );
  VALID_LINKED( end );
  VALID_LINKED( end->prev );

  if( (res == begin) || empty_seq( begin, end ) ) {

    // Цель достигнута сама по себе
    return res;
  } else {
    refalrts::Iter prev_res = prev( res );
    refalrts::Iter prev_begin = prev( begin );
    refalrts::Iter next_end = next( end );

    link_adjacent( prev_res, begin );
    link_adjacent( end, res );
    link_adjacent( prev_begin, next_end );
  }

  VALID_LINKED( res );
  VALID_LINKED( res->prev );
  VALID_LINKED( begin );
  VALID_LINKED( begin->prev );
  VALID_LINKED( end );
  VALID_LINKED( end->next );

  return begin;
}

} // unnamed namespace

refalrts::Iter refalrts::splice_elem(
  refalrts::Iter res, refalrts::Iter elem
) {
  return list_splice( res, elem, elem );
}

refalrts::Iter refalrts::splice_stvar(
  refalrts::Iter res, refalrts::Iter var
) {
  refalrts::Iter var_end;
  if( is_open_bracket( var ) ) {
    var_end = var->link_info;
  } else {
    var_end = var;
  }

  return list_splice( res, var, var_end );
}

refalrts::Iter refalrts::splice_evar(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {
  return list_splice( res, begin, end );
}

void refalrts::splice_to_freelist( refalrts::Iter begin, refalrts::Iter end ) {
  allocator::splice_to_freelist( begin, end );
}

//------------------------------------------------------------------------------

// Инициализация головного узла статического ящика

namespace refalrts {

namespace vm {

extern NodePtr g_left_swap_ptr;

} // namepsace vm

} // namespace refalrts

refalrts::Iter refalrts::initialize_swap_head( refalrts::Iter head ) {
  assert( cDataFunction == head->tag );

  splice_elem( vm::g_left_swap_ptr, head );
  refalrts::RefalIdentifier name = head->function_info.name;
  head->tag = cDataSwapHead;
  head->swap_info.next_head = vm::g_left_swap_ptr;
  head->swap_info.name = name;
  vm::g_left_swap_ptr = head;
  return vm::g_left_swap_ptr;
}

void refalrts::swap_info_bounds(
  refalrts::Iter& first, refalrts::Iter& last, refalrts::Iter head
) {
  assert( cDataSwapHead == head->tag );

  first = head;
  last = head->swap_info.next_head;
  move_left( first, last );
  move_right( first, last );
}

void refalrts::swap_save(
  refalrts::Iter head, refalrts::Iter first, refalrts::Iter last
) {
  assert( cDataSwapHead == head->tag );

  list_splice( head->swap_info.next_head, first, last );
}

//------------------------------------------------------------------------------

// Средства профилирования

namespace refalrts {

namespace profiler {

extern void start_generated_function();

} // namespace profiler

} // namespace refalrts

void refalrts::this_is_generated_function() {
  refalrts::profiler::start_generated_function();
}

//------------------------------------------------------------------------------

// Прочие операции

namespace refalrts {

namespace vm {

extern int g_ret_code;

} // namespace vm

} // namespace refalrts

void refalrts::set_return_code( int code ) {
  refalrts::vm::g_ret_code = code;
}

//==============================================================================
// Распределитель памяти
//==============================================================================

namespace refalrts {

namespace allocator {

bool create_nodes();

void free_memory();

extern refalrts::Node g_last_marker;

refalrts::Node g_first_marker = { 0, & g_last_marker, refalrts::cDataIllegal };
refalrts::Node g_last_marker = { & g_first_marker, 0, refalrts::cDataIllegal };

const refalrts::NodePtr g_end_list = & g_last_marker;
refalrts::NodePtr g_free_ptr = & g_last_marker;

unsigned g_memory_use = 0;

} // namespace allocator

} // namespace refalrts

void refalrts::allocator::reset_allocator() {
  g_free_ptr = g_first_marker.next;
}

bool refalrts::allocator::alloc_node( refalrts::Iter& node ) {
  if( (g_free_ptr == & g_last_marker) && ! create_nodes() ) {
    return false;
  } else {
    node = g_free_ptr;
    g_free_ptr = next( g_free_ptr );
    node->tag = refalrts::cDataIllegal;
    return true;
  }
}

refalrts::Iter refalrts::allocator::free_ptr() {
  return g_free_ptr;
}

void refalrts::allocator::splice_to_freelist(
  refalrts::Iter begin, refalrts::Iter end
) {
  g_free_ptr = list_splice( g_free_ptr, begin, end );
}

bool refalrts::allocator::create_nodes() {
  refalrts::NodePtr new_node =
    static_cast<refalrts::NodePtr>( malloc( sizeof *new_node ) );

  if( new_node == 0 ) {
    return false;
  } else {
    refalrts::NodePtr before_free_ptr = prev( g_free_ptr );
    before_free_ptr->next = new_node;
    new_node->prev = before_free_ptr;

    g_free_ptr->prev = new_node;
    new_node->next = g_free_ptr;

    g_free_ptr = new_node;

    ++ g_memory_use;

    return true;
  }
}

void refalrts::allocator::free_memory() {
  refalrts::Iter begin = g_first_marker.next;
  refalrts::Iter end = &g_last_marker;

  while( begin != end ) {
    refalrts::Iter next_begin = next( begin );
    free( begin );
    begin = next_begin;
  }

  fprintf( stderr, "Memory used %d bytes\n", g_memory_use * sizeof(Node) );
}

//==============================================================================
// Упрощённый профилировщик
//==============================================================================

namespace refalrts {

namespace profiler {

clock_t g_start_program_time;
clock_t g_start_gen_function_time;
clock_t g_total_gen_function_time;

bool g_in_generated;

void start_profiler();
void end_profiler();
void start_generated_function();
void after_step();

} // namespace profiler

} // namespace refalrts

void refalrts::profiler::start_profiler() {
  g_start_program_time = clock();
  g_in_generated = false;
}

void refalrts::profiler::end_profiler() {
  refalrts::profiler::after_step();

  double full_time = (clock() - g_start_program_time) / CLOCKS_PER_SEC;
  double pure_time = g_total_gen_function_time / CLOCKS_PER_SEC;
  double io_time = full_time - pure_time;

  fprintf( stderr, "\nTotal program time: %.3f seconds.\n", full_time );
  fprintf( stderr, "Pure calculation time: %.3f seconds.\n", pure_time );
  fprintf( stderr, "In/out time: %.3f seconds.\n", io_time );
}

void refalrts::profiler::start_generated_function() {
  g_start_gen_function_time = clock();
  g_in_generated = true;
}

void refalrts::profiler::after_step() {
  if( g_in_generated ) {
    clock_t calc_time = clock() - g_start_gen_function_time;
    g_total_gen_function_time += calc_time;
  }

  g_in_generated = false;
}

//==============================================================================
// Виртуальная машина
//==============================================================================

extern refalrts::FnResult Go( refalrts::Iter, refalrts::Iter );

namespace refalrts {

namespace vm {

void push_stack( refalrts::Iter call_bracket );
refalrts::Iter pop_stack();
bool empty_stack();

bool init_view_field();

refalrts::FnResult main_loop();
refalrts::FnResult execute_active( refalrts::Iter begin, refalrts::Iter end );
void make_dump( refalrts::Iter begin, refalrts::Iter end );

void free_view_field();

refalrts::NodePtr g_stack_ptr = 0;

extern refalrts::Node g_last_marker;

refalrts::Node g_first_marker = { 0, & g_last_marker, refalrts::cDataIllegal };
refalrts::Node g_last_marker = { & g_first_marker, 0, refalrts::cDataIllegal };

refalrts::Iter g_begin_view_field = & g_last_marker;
const refalrts::Iter g_end_view_field = & g_last_marker;

refalrts::NodePtr g_left_swap_ptr = g_end_view_field;

unsigned g_step_counter = 0;

int g_ret_code;

} // namespace vm

} // namespace refalrts

void refalrts::vm::push_stack( refalrts::Iter call_bracket ) {
  call_bracket->link_info = g_stack_ptr;
  g_stack_ptr = call_bracket;
}

refalrts::Iter refalrts::vm::pop_stack() {
  refalrts::Iter res = g_stack_ptr;
  g_stack_ptr = g_stack_ptr->link_info;
  return res;
}

bool refalrts::vm::empty_stack() {
  return (g_stack_ptr == 0);
}

//$LABEL Go
template <typename T>
struct GoL_ {
  static const char *name() {
    return "Go";
  }
};

bool refalrts::vm::init_view_field() {
  refalrts::reset_allocator();
  refalrts::Iter res = g_begin_view_field;
  refalrts::Iter n0 = 0;
  if( ! refalrts::alloc_open_call( n0 ) )
    return false;
  refalrts::Iter n1 = 0;
  if( ! refalrts::alloc_name( n1, & Go, GoL_<int>::name ) )
    return false;
  refalrts::Iter n2 = 0;
  if( ! refalrts::alloc_close_call( n2 ) )
    return false;
  refalrts::push_stack( n2 );
  refalrts::push_stack( n0 );
  res = refalrts::splice_elem( res, n2 );
  res = refalrts::splice_elem( res, n1 );
  res = refalrts::splice_elem( res, n0 );
  g_begin_view_field = res;

  return true;
}

refalrts::FnResult refalrts::vm::main_loop() {
  FnResult res = cSuccess;
  while( ! empty_stack() ) {
    refalrts::Iter active_begin = pop_stack();
    assert( ! empty_stack() );
    refalrts::Iter active_end = pop_stack();

    res = execute_active( active_begin, active_end );
    refalrts::profiler::after_step();

    ++ g_step_counter;

    if( res != cSuccess ) {
      switch( res ) {
        case refalrts::cRecognitionImpossible:
          fprintf(stderr, "\nRECOGNITION IMPOSSIBLE\n\n");
          break;

        case refalrts::cNoMemory:
          fprintf(stderr, "\nNO MEMORY\n\n");
          break;

        case refalrts::cExit:
          return res;

        default:
          fprintf(stderr, "\nUNKNOWN ERROR\n\n");
          break;
      }
      make_dump( active_begin, active_end );
      return res;
    } else {
      continue;
    }
  }

  // printf("\n\nTOTAL STEPS %d\n", g_step_counter);

  return res;
}

refalrts::FnResult refalrts::vm::execute_active(
  refalrts::Iter begin, refalrts::Iter end
) {

#if SHOW_DEBUG

  printf("\nexecute\n");
  make_dump( begin, end );

#endif // SHOW_DEBUG

  refalrts::Iter function = next( begin );
  if( function->tag != cDataFunction ) {
    return cRecognitionImpossible;
  } else {
    return (function->function_info.ptr)( begin, end );
  }
}

namespace {

void print_seq( FILE *output, refalrts::Iter begin, refalrts::Iter end ) {
  enum {
    cStateView = 100,
    cStateString,
    cStateFinish
  } state = cStateView;

  while( (state != cStateFinish) && ! refalrts::empty_seq( begin, end ) ) {

    switch( state ) {
      case cStateView:
        switch( begin->tag ) {
          case refalrts::cDataIllegal:
            if( 0 == begin->prev ) {
              fprintf( output, "[FIRST] " );
            } else if ( 0 == begin->next ) {
              fprintf( output, "\n[LAST]" );
              state = cStateFinish;
            } else {
              fprintf( output, "\n[NONE]" );
            }
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataSwapHead:
            fprintf( output, "\n\n*Swap %s:\n", begin->swap_info.name );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataChar: 
            state = cStateString;
            fprintf( output, "\'" );
            continue;

          case refalrts::cDataNumber:
            fprintf( output, "%d ", begin->number_info );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataFunction:
            fprintf( output, "&%s ", (begin->function_info.name)() );
            //if( begin->function_info.name[0] != 0 ) {
            //  fprintf( output, "&%s ", begin->function_info.name );
            //} else {
            //  fprintf( output, "&%p ", begin->function_info.ptr );
            //}
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataIdentifier:
            fprintf( output, "#%s ", (begin->ident_info)() );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataOpenADT:
            fprintf( output, "[ " );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataCloseADT:
            fprintf( output, "] " );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataOpenBracket:
            fprintf( output, "( " );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataCloseBracket:
            fprintf( output, ") " );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataOpenCall:
            fprintf( output, "<" );
            refalrts::move_left( begin, end );
            continue;
          case refalrts::cDataCloseCall:
            fprintf( output, "> " );
            refalrts::move_left( begin, end );
            continue;

          case refalrts::cDataFile:
            fprintf( output, "*%p ", begin->file_info );
            refalrts::move_left( begin, end );
            continue;

          default:
            throw refalrts::UnexpectedTypeException();
            // break;
        }

      case cStateString:
        switch( begin->tag ) {
          case refalrts::cDataChar: {
            unsigned char ch = static_cast<unsigned char>( begin->char_info );
            switch( ch )
              {
                case '(': case ')':
                case '<': case '>':
                  fprintf( output, "\\%c", ch );
                  break;
  
                case '\n':
                  fprintf( output, "\\n" );
                  break;
  
                case '\t':
                  fprintf( output, "\\t" );
                  break;

                case '\\':
                  fprintf( output, "\\\\" );
                  break;

                case '\'':
                  fprintf( output, "\\\'" );
                  break;
  
                default:
                  if( ch < '\x20' ) {
                    fprintf( output, "\\x%02x", static_cast<int>(ch) );
                  } else {
                    fprintf( output, "%c", ch );
                  }
                  break;
              }
              refalrts::move_left( begin, end );
              continue;
            }

          default:
            state = cStateView;
            fprintf( output, "\' " );
            continue;
        }

      case cStateFinish:
        continue;

      default:
        throw refalrts::UnexpectedTypeException();
    }
  }
}

} // unnamed namespace

void refalrts::vm::make_dump( refalrts::Iter begin, refalrts::Iter end ) {
  fprintf( stderr, "\nERROR EXPRESSION:\n" );
  print_seq( stderr, begin, end );
  fprintf( stderr, "\nVIEW FIELD:\n" );
  print_seq( stderr, & g_first_marker, & g_last_marker );
  fprintf( stderr, "\nFREE LIST:\n" );
  print_seq(
    stderr,
    & refalrts::allocator::g_first_marker,
    & refalrts::allocator::g_last_marker
  );

  fprintf( stderr,"\nEnd dump\n");
  fflush(stderr);
}

void refalrts::vm::free_view_field() {
  refalrts::Iter begin = g_first_marker.next;
  refalrts::Iter end = & g_last_marker;

  while( begin != end ) {
    refalrts::Iter next_begin = next( begin );
    free( begin );
    begin = next_begin;
  }

  fprintf( stderr, "Step count %d\n", g_step_counter );
}

//==============================================================================

// Используются в Library.cpp

char **g_argv = 0;
int g_argc = 0;

int main(int argc, char **argv) {
  g_argc = argc;
  g_argv = argv;

  refalrts::FnResult res;
  try {
    refalrts::vm::init_view_field();
    refalrts::profiler::start_profiler();
    res = refalrts::vm::main_loop();
  } catch ( refalrts::UnexpectedTypeException ) {
    fprintf(stderr, "INTERNAL ERROR: check all switches\n");
    return 3;
  } catch (...) {
    fprintf(stderr, "INTERNAL ERROR: unknown exception\n");
    return 4;
  }

  refalrts::profiler::end_profiler();
  refalrts::vm::free_view_field();
  refalrts::allocator::free_memory();
  
  switch( res ) {
    case refalrts::cSuccess:
      return 0;

    case refalrts::cRecognitionImpossible:
      return 1;

    case refalrts::cNoMemory:
      return 2;

    case refalrts::cExit:
      return refalrts::vm::g_ret_code;

    default:
      fprintf(stderr, "INTERNAL ERROR: check switch in main");
      return 5;
  }
}
