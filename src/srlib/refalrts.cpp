#include <errno.h>
#include <exception>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <assert.h>

#include "refalrts.h"
#include "refalrts-utils.h"

//FROM refalrts-allocator
#include "refalrts-allocator.h"
//FROM refalrts-debugger
#include "refalrts-debugger.h"
//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-profiler
#include "refalrts-profiler.h"
//FROM refalrts-vm
#include "refalrts-vm.h"

//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"

//==============================================================================
// Внутренние структуры данных
//==============================================================================

namespace refalrts {

VM g_vm;
Allocator g_allocator;
Profiler g_profiler;
struct Dynamic g_dynamic = { 0, 0, 0, 0, 0 };

}  // namespace refalrts

namespace refalrts {

char unsigned_int_is_uint32[sizeof(refalrts::UInt32) == 4 ? +1 : -1];

} // namespace refalrts

//==============================================================================
// Примитивные операции
//==============================================================================

// Операции распознавания

void refalrts::use(refalrts::Iter&) {
  /* Ничего не делаем. Эта функция добавляется, чтобы подавить предупреждение
  компилятора о том, что переменная не используется */;
}

void refalrts::zeros(refalrts::Iter context[], int size){
  for (int i = 0; i < size; i++) {
    context[i] = 0;
  }
}

void refalrts::use_counter(unsigned&) {
  /* Ничего не делаем. Эта функция добавляется, чтобы подавить предупреждение
  компилятора о том, что переменная не используется */;
}

void refalrts::move_left(
  refalrts::Iter& first, refalrts::Iter& last
) {
  // assert((first == 0) == (last == 0));
  if (first == 0) assert (last == 0);
  if (first != 0) assert (last != 0);

  if (first == last) {
    first = 0;
    last = 0;
  } else {
    first = next(first);
  }
}

void refalrts::move_right(
  refalrts::Iter& first, refalrts::Iter& last
) {
  // assert((first == 0) == (last == 0));
  if (first == 0) assert (last == 0);
  if (first != 0) assert (last != 0);

  if (first == last) {
    first = 0;
    last = 0;
  } else {
    last = prev(last);
  }
}

bool refalrts::empty_seq(refalrts::Iter first, refalrts::Iter last) {
  // assert((first == 0) == (last == 0));
  if (first == 0) assert (last == 0);
  if (first != 0) assert (last != 0);

  return (first == 0) && (last == 0);
}

bool refalrts::function_term(
  const refalrts::RefalFunction *func, refalrts::Iter pos
) {
  return (pos->tag == cDataFunction) && (pos->function_info == func);
}

refalrts::Iter refalrts::function_left(
  const refalrts::RefalFunction *fn, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (first->tag != cDataFunction) {
    return 0;
  } else if (first->function_info != fn) {
    return 0;
  } else {
    Iter func_pos = first;
    move_left(first, last);
    return func_pos;
  }
}

refalrts::Iter refalrts::function_right(
  const refalrts::RefalFunction *fn, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataFunction != last->tag) {
    return 0;
  } else if (last->function_info != fn) {
    return 0;
  } else {
    Iter func_pos = last;
    move_right(first, last);
    return func_pos;
  }
}

bool refalrts::char_term(char ch, refalrts::Iter& pos) {
  return (pos->tag == cDataChar) && (pos->char_info == ch);
}

refalrts::Iter refalrts::char_left(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataChar != first->tag) {
    return 0;
  } else if (first->char_info != ch) {
    return 0;
  } else {
    Iter char_pos = first;
    move_left(first, last);
    return char_pos;
  }
}

refalrts::Iter refalrts::char_right(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataChar != last->tag) {
    return 0;
  } else if (last->char_info != ch) {
    return 0;
  } else {
    Iter char_pos = last;
    move_right(first, last);
    return char_pos;
  }
}


bool refalrts::number_term(
  refalrts::RefalNumber num, refalrts::Iter& pos
) {
    return (pos->tag == cDataNumber) && (pos->number_info == num);
}

refalrts::Iter refalrts::number_left(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataNumber != first->tag) {
    return 0;
  } else if (first->number_info != num) {
    return 0;
  } else {
    Iter num_pos = first;
    move_left(first, last);
    return num_pos;
  }
}

refalrts::Iter refalrts::number_right(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataNumber != last->tag) {
    return 0;
  } else if (last->number_info != num) {
    return 0;
  } else {
    Iter num_pos = last;
    move_right(first, last);
    return num_pos;
  }
}

bool refalrts::ident_term(
  refalrts::RefalIdentifier ident, refalrts::Iter& pos
) {
    return (pos->tag == cDataIdentifier) && (pos->ident_info == ident);
}

refalrts::Iter refalrts::ident_left(
  refalrts::RefalIdentifier ident, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataIdentifier != first->tag) {
    return 0;
  } else if (first->ident_info != ident) {
    return 0;
  } else {
    Iter ident_pos = first;
    move_left(first, last);
    return ident_pos;
  }
}

refalrts::Iter refalrts::ident_right(
  refalrts::RefalIdentifier ident, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataIdentifier != last->tag) {
    return 0;
  } else if (last->ident_info != ident) {
    return 0;
  } else {
    Iter ident_pos = last;
    move_right(first, last);
    return ident_pos;
  }
}

bool refalrts::brackets_term(
  refalrts::Iter& res_first, refalrts::Iter& res_last, refalrts::Iter& pos
) {
  if (pos->tag != cDataOpenBracket) {
    return false;
  }

  refalrts::Iter right_bracket = pos->link_info;

  if (next(pos) != right_bracket) {
    res_first = next(pos);
    res_last = prev(right_bracket);
  } else {
    res_first = 0;
    res_last = 0;
  }

  return true;
}

refalrts::Iter refalrts::brackets_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataOpenBracket != first->tag) {
    return 0;
  } else {
    refalrts::Iter left_bracket = first;
    refalrts::Iter right_bracket = left_bracket->link_info;

    if (next(left_bracket) != right_bracket) {
      res_first = next(left_bracket);
      res_last = prev(right_bracket);
    } else {
      res_first = 0;
      res_last = 0;
    }

    if (right_bracket == last) {
      first = 0;
      last = 0;
    } else {
      first = next(right_bracket);
    }

    return left_bracket;
  }
}

refalrts::Iter refalrts::brackets_right(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataCloseBracket != last->tag) {
    return 0;
  } else {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;

    if (next(left_bracket) != right_bracket) {
      res_first = next(left_bracket);
      res_last = prev(right_bracket);
    } else {
      res_first = 0;
      res_last = 0;
    }

    if (first == left_bracket) {
      first = 0;
      last = 0;
    } else {
      last = prev(left_bracket);
    }

    return left_bracket;
  }
}

void refalrts::bracket_pointers(
  refalrts::Iter left_bracket,
  refalrts::Iter& right_bracket
) {
  right_bracket = left_bracket->link_info;
}

refalrts::Iter refalrts::adt_term(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  const refalrts::RefalFunction *tag,
  refalrts::Iter pos
) {
  if (pos->tag != cDataOpenADT) {
    return 0;
  }

  refalrts::Iter adt_tag = next(pos);

  assert (adt_tag->tag == cDataFunction);
  if (adt_tag->function_info != tag) {
    return 0;
  }

  refalrts::Iter right_bracket = pos->link_info;

  if (next(adt_tag) != right_bracket) {
    res_first = next(adt_tag);
    res_last = prev(right_bracket);
  } else {
    res_first = 0;
    res_last = 0;
  }

  return adt_tag;
}

refalrts::Iter refalrts::adt_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  const refalrts::RefalFunction *tag,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataOpenADT != first->tag) {
    return 0;
  } else {
    refalrts::Iter left_bracket = first;
    refalrts::Iter right_bracket = left_bracket->link_info;
    refalrts::Iter pnext = next(left_bracket);

    if (pnext == right_bracket) {
      return 0;
    } else if (cDataFunction != pnext->tag) {
      return 0;
    } else if (pnext->function_info != tag) {
      return 0;
    } else {
      if (next(pnext) != right_bracket) {
        res_first = next(pnext);
        res_last = prev(right_bracket);
      } else {
        res_first = 0;
        res_last = 0;
      }

      if (right_bracket == last) {
        first = 0;
        last = 0;
      } else {
        first = next(right_bracket);
      }

      return left_bracket;
    }
  }
}

refalrts::Iter refalrts::adt_right(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  const refalrts::RefalFunction *tag,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (cDataCloseADT != last->tag) {
    return 0;
  } else {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;
    refalrts::Iter pnext = next(left_bracket);

    if (pnext == right_bracket) {
      return 0;
    } else if (cDataFunction != pnext->tag) {
      return 0;
    } else if (pnext->function_info != tag) {
      return 0;
    } else {
      if (next(pnext) != right_bracket) {
        res_first = next(pnext);
        res_last = prev(right_bracket);
      } else {
        res_first = 0;
        res_last = 0;
      }

      if (first == left_bracket) {
        first = 0;
        last = 0;
      } else {
        last = prev(left_bracket);
      }

      return left_bracket;
    }
  }
}

void refalrts::adt_pointers(
  refalrts::Iter left_bracket,
  refalrts::Iter& tag,
  refalrts::Iter& right_bracket
) {
  refalrts::Iter pnext = next(left_bracket);
  tag = pnext;
  right_bracket = left_bracket->link_info;
}

refalrts::Iter refalrts::call_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter first, refalrts::Iter last
) {
  assert((first != 0) && (last != 0));
  assert(cDataOpenCall == first->tag);

  refalrts::Iter left_bracket = first;
  refalrts::Iter right_bracket = last;
  refalrts::Iter function = next(left_bracket);

  assert(left_bracket->link_info == right_bracket);

  if (next(function) != right_bracket) {
    res_first = next(function);
    res_last = prev(right_bracket);
  } else {
    res_first = 0;
    res_last = 0;
  }

  return function;
}

void refalrts::call_pointers(
  refalrts::Iter left_bracket,
  refalrts::Iter& tag,
  refalrts::Iter& right_bracket
) {
  refalrts::Iter pnext = next(left_bracket);
  tag = pnext;
  right_bracket = left_bracket->link_info;
}

bool refalrts::svar_term(
  refalrts::Iter /* svar */, refalrts::Iter pos
) {
  return ! is_open_bracket(pos);
}

bool refalrts::svar_left(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (is_open_bracket(first)) {
    return false;
  } else {
    svar = first;
    move_left(first, last);
    return true;
  }
}

bool refalrts::svar_right(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (is_close_bracket(last)) {
    return false;
  } else {
    svar = last;
    move_right(first, last);
    return true;
  }
}

refalrts::Iter refalrts::tvar_left(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (is_open_bracket(first)) {
    refalrts::Iter right_bracket = first->link_info;

    tvar = first;
    first = right_bracket;
    move_left(first, last);
    return right_bracket;
  } else {
    tvar = first;
    move_left(first, last);
    return tvar;
  }
}

refalrts::Iter refalrts::tvar_right(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return 0;
  } else if (is_close_bracket(last)) {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;

    tvar = left_bracket;
    last = left_bracket;
    move_right(first, last);
    return right_bracket;
  } else {
    tvar = last;
    move_right(first, last);
    return tvar;
  }
}

namespace {

bool equal_nodes(
  refalrts::Iter node1, refalrts::Iter node2
) // throws refalrts::SwitchDefaultViolation
{
  if (node1->tag != node2->tag) {
    return false;
  } else {
    switch(node1->tag) {
      case refalrts::cDataChar:
        return (node1->char_info == node2->char_info);
        // break;

      case refalrts::cDataNumber:
        return (node1->number_info == node2->number_info);
        // break;

      case refalrts::cDataFunction:
        return (node1->function_info == node2->function_info);
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

      case refalrts::cDataClosure:
        return (node1->link_info == node2->link_info);
        // break;

      /*
        Данная функция предназначена только для использования функциями рас-
        познавания образца. Поэтому других узлов мы тут не ожидаем.
      */
      default:
        refalrts_switch_default_violation(node1->tag);
        // break;
    }
    // Все ветви в case завершаются либо return, либо throw.
  }
}

} // unnamed namespace


namespace {

bool equal_expressions(
  refalrts::Iter first1, refalrts::Iter last1,
  refalrts::Iter first2, refalrts::Iter last2
) // throws refalrts::SwitchDefaultViolation
{
  assert((first1 == 0) == (last1 == 0));
  assert((first2 == 0) == (last2 == 0));

  refalrts::g_profiler.start_repeated_tvar();

  while (
    // Порядок условий важен
    ! refalrts::empty_seq(first1, last1)
    && ! refalrts::empty_seq(first2, last2)
    && equal_nodes(first1, first2)
  ) {
    refalrts::move_left(first1, last1);
    refalrts::move_left(first2, last2);
  }

  /*
    Здесь empty_seq(first1, last1) || empty_seq(first2, last2)
      || ! equal_nodes(first1, first2)
  */

  refalrts::g_profiler.stop_repeated();

  // Успешное завершение -- если мы достигли конца в обоих выражениях
  return refalrts::empty_seq(first1, last1)
    && refalrts::empty_seq(first2, last2);
}

} // unnamed namespace

bool refalrts::repeated_stvar_term(
  refalrts::Iter stvar_sample, refalrts::Iter pos
) {
  if (svar_term(stvar_sample, stvar_sample)) {
    return svar_term(pos, pos) && equal_nodes(pos, stvar_sample);
  } else if (is_open_bracket(pos)) {
    refalrts::Iter pos_e = pos->link_info;
    refalrts::Iter stvar_sample_e = stvar_sample->link_info;

    return equal_expressions(stvar_sample, stvar_sample_e, pos, pos_e);
  } else {
    return false;
  }
}

refalrts::Iter refalrts::repeated_stvar_left(
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  refalrts::Iter left_term = 0;
  refalrts::Iter copy_last = last;

  if (! is_open_bracket(stvar_sample) && svar_left(stvar, first, last)) {
    if (equal_nodes(stvar, stvar_sample)) {
      return stvar;
    } else {
      return 0;
    }
  } else if (tvar_left(left_term, first, last)) {
    refalrts::Iter left_term_e;
    refalrts::Iter stvar_sample_e;

    if (empty_seq(first, last)) {
      left_term_e = copy_last;
    } else {
      left_term_e = prev(first);
    }

    if (is_open_bracket(stvar_sample)) {
      stvar_sample_e = stvar_sample->link_info;
    } else {
      stvar_sample_e = stvar_sample;
    }

    bool equal = equal_expressions(
      left_term, left_term_e,
      stvar_sample, stvar_sample_e
    );

    if (equal) {
      stvar = left_term;

      return left_term_e;
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}

refalrts::Iter refalrts::repeated_stvar_right(
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  refalrts::Iter right_term = 0;
  refalrts::Iter old_last = last;

  if (! is_open_bracket(stvar_sample) && svar_right(stvar, first, last)) {
    if (equal_nodes(stvar, stvar_sample)) {
      return stvar;
    } else {
      return 0;
    }
  } else if (tvar_right(right_term, first, last)) {
    refalrts::Iter right_term_e = old_last;
    refalrts::Iter stvar_sample_e;

    if (is_open_bracket(stvar_sample)) {
      stvar_sample_e = stvar_sample->link_info;
    } else {
      stvar_sample_e = stvar_sample;
    }

    bool equal = equal_expressions(
      right_term, right_term_e,
      stvar_sample, stvar_sample_e
    );

    if (equal) {
      stvar = right_term;

      return right_term_e;
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}

bool refalrts::repeated_evar_left(
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  g_profiler.start_repeated_evar();
  refalrts::Iter current = first;
  refalrts::Iter cur_sample = evar_b_sample;
  refalrts::Iter copy_last = last;

  while (
    // порядок условий важен
    ! empty_seq(cur_sample, evar_e_sample)
    && ! (empty_seq(current, copy_last) || ! equal_nodes(current, cur_sample))
  ) {
    move_left(cur_sample, evar_e_sample);
    move_left(current, copy_last);
  }

  g_profiler.stop_repeated();

  /*
    Здесь empty_seq(cur_sample, evar_e_sample) или
      ! empty_seq(cur_sample, evar_e_sample)
      && (empty_seq(current, copy_last) || ! equal_nodes(current, cur_sample))
  */
  if (empty_seq(cur_sample, evar_e_sample)) {
    // Это нормальное завершение цикла -- вся образцовая переменная проверена

    if (empty_seq(current, copy_last)) {
      evar_b = first;
      evar_e = last;

      first = 0;
      last = 0;
    } else if (current != first) {
      evar_b = first;
      evar_e = prev(current);

      first = current;
    } else {
      evar_b = 0;
      evar_e = 0;
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
  g_profiler.start_repeated_evar();
  refalrts::Iter current = last;
  refalrts::Iter cur_sample = evar_e_sample;
  refalrts::Iter copy_first = first;

  while (
    // порядок перечисления условий важен
    ! empty_seq(evar_b_sample, cur_sample)
    && ! (empty_seq(copy_first, current) || ! equal_nodes(current, cur_sample))
  ) {
    move_right(copy_first, current);
    move_right(evar_b_sample, cur_sample);
  }

  g_profiler.stop_repeated();

  /*
    Здесь empty_seq(evar_b_sample, cur_sample) или
      ! empty_seq(evar_b_sample, cur_sample)
      && (empty_seq(copy_first, current) || ! equal_nodes(current, cur_sample))
  */

  if (empty_seq(evar_b_sample, cur_sample)) {
    // Это нормальное завершение цикла: вся переменная-образец просмотрена

    if (empty_seq(copy_first, current)) {
      evar_b = first;
      evar_e = last;

      first = 0;
      last = 0;
    } else if (current != last) {
      evar_b = next(current);
      evar_e = last;

      last = current;
    } else {
      evar_b = 0;
      evar_e = 0;
    }

    return true;
  } else {
    return false;
  }
}

bool refalrts::open_evar_advance(
  Iter& evar_b, Iter& evar_e, Iter& first, Iter& last
) {
  assert((evar_b == 0) == (evar_e == 0));

  refalrts::Iter prev_first = 0;

  if (tvar_left(prev_first, first, last)) {
    if (! evar_b) {
      evar_b = prev_first;
    }

    if (is_open_bracket(prev_first)) {
      evar_e = prev_first->link_info;
    } else {
      evar_e = prev_first;
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
  while (
    read != buflen && ! empty_seq(first, last)
      && first->tag == refalrts::cDataChar
  ) {
    buffer[read] = first->char_info;
    ++ read;
    move_left(first, last);
  }
  return read;
}

//------------------------------------------------------------------------------

// Операции построения результата

void refalrts::reset_allocator() {
  g_profiler.start_result();
  g_allocator.reset_allocator();
}

namespace {

bool copy_node(refalrts::Iter& res, refalrts::Iter sample) {
  switch(sample->tag) {
    case refalrts::cDataChar:
      return refalrts::alloc_char(res, sample->char_info);

    case refalrts::cDataNumber:
      return refalrts::alloc_number(res, sample->number_info);

    case refalrts::cDataFunction:
      return refalrts::alloc_name(res, sample->function_info);

    case refalrts::cDataIdentifier:
      return refalrts::alloc_ident(res, sample->ident_info);

    case refalrts::cDataOpenBracket:
      return refalrts::alloc_open_bracket(res);

    case refalrts::cDataCloseBracket:
      return refalrts::alloc_close_bracket(res);

    case refalrts::cDataOpenADT:
      return refalrts::alloc_open_adt(res);

    case refalrts::cDataCloseADT:
      return refalrts::alloc_close_adt(res);

    case refalrts::cDataClosure: {
      bool allocated = refalrts::g_allocator.alloc_node(res);
      if (allocated) {
        res->tag = refalrts::cDataClosure;
        refalrts::Iter head = sample->link_info;
        res->link_info = head;
        ++ (head->number_info);
        return true;
      } else {
        return false;
      }
    }

    case refalrts::cDataFile: {
      bool allocated = refalrts::g_allocator.alloc_node(res);
      if (allocated) {
        res->tag = refalrts::cDataFile;
        res->file_info = sample->file_info;
        return true;
      } else {
        return false;
      }
    }

    /*
      Копируем только объектное выражение -- никаких вызовов функций
      быть не должно.
    */
    default:
      refalrts_switch_default_violation(sample->tag);
  }
}

} // unnamed namespace


namespace {

bool copy_nonempty_evar(
  refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  refalrts::g_profiler.start_copy();

  refalrts::Iter res = 0;
  refalrts::Iter bracket_stack = 0;

  refalrts::Iter prev_res_begin =
    prev(refalrts::g_allocator.free_ptr());

  while (! refalrts::empty_seq(evar_b_sample, evar_e_sample)) {
    if (! copy_node(res, evar_b_sample)) {
      refalrts::g_profiler.stop_copy();
      return false;
    }

    if (is_open_bracket(res)) {
      res->link_info = bracket_stack;
      bracket_stack = res;
    } else if (is_close_bracket(res)) {
      assert(bracket_stack != 0);

      refalrts::Iter open_cobracket = bracket_stack;
      bracket_stack = bracket_stack->link_info;
      refalrts::link_brackets(open_cobracket, res);
    }

    refalrts::move_left(evar_b_sample, evar_e_sample);
  }

  assert(bracket_stack == 0);

  evar_res_b = next(prev_res_begin);
  evar_res_e = res;

  refalrts::g_profiler.stop_copy();

  return true;
}

} // unnamed namespace

bool refalrts::copy_evar(
  refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  if (empty_seq(evar_b_sample, evar_e_sample)) {
    evar_res_b = 0;
    evar_res_e = 0;
    return true;
  } else {
    return copy_nonempty_evar(
      evar_res_b, evar_res_e, evar_b_sample, evar_e_sample
    );
  }
}

bool refalrts::copy_stvar(
  refalrts::Iter& stvar_res, refalrts::Iter stvar_sample
) {
  if (is_open_bracket(stvar_sample)) {
    refalrts::Iter end_of_sample = stvar_sample->link_info;
    refalrts::Iter end_of_res;
    return copy_evar(
      stvar_res, end_of_res, stvar_sample, end_of_sample
    );
  } else {
    return copy_node(stvar_res, stvar_sample);
  }
}

bool refalrts::alloc_copy_evar(
  refalrts::Iter& res,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  if (empty_seq(evar_b_sample, evar_e_sample)) {
    res = 0;
    return true;
  } else {
    refalrts::Iter res_e = 0;
    return copy_nonempty_evar(
      res, res_e, evar_b_sample, evar_e_sample
    );
  }
}

bool refalrts::alloc_copy_svar_(
  refalrts::Iter& svar_res, refalrts::Iter svar_sample
) {
  return copy_node(svar_res, svar_sample);
}


bool refalrts::alloc_char(refalrts::Iter& res, char ch) {
  if (g_allocator.alloc_node(res)) {
    res->tag = cDataChar;
    res->char_info = ch;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_number(refalrts::Iter& res, refalrts::RefalNumber num) {
  if (g_allocator.alloc_node(res)) {
    res->tag = cDataNumber;
    res->number_info = num;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_name(refalrts::Iter& res, refalrts::RefalFunction *fn) {
  if (g_allocator.alloc_node(res)) {
    res->tag = cDataFunction;
    res->function_info = fn;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_ident(
  refalrts::Iter& res, refalrts::RefalIdentifier ident
) {
  if (g_allocator.alloc_node(res)) {
    res->tag = cDataIdentifier;
    res->ident_info = ident;
    return true;
  } else {
    return false;
  }
}

namespace {

bool alloc_some_bracket(refalrts::Iter& res, refalrts::DataTag tag) {
  if (refalrts::g_allocator.alloc_node(res)) {
    res->tag = tag;
    return true;
  } else {
    return false;
  }
}

} // unnamed namespace

bool refalrts::alloc_open_adt(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataOpenADT);
}

bool refalrts::alloc_close_adt(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataCloseADT);
}

bool refalrts::alloc_open_bracket(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataOpenBracket);
}

bool refalrts::alloc_close_bracket(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataCloseBracket);
}

bool refalrts::alloc_open_call(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataOpenCall);
}

bool refalrts::alloc_close_call(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataCloseCall);
}

bool refalrts::alloc_closure_head(refalrts::Iter& res) {
  if (g_allocator.alloc_node(res)) {
    res->tag = cDataClosureHead;
    res->number_info = 1;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_unwrapped_closure(
  refalrts::Iter& res, refalrts::Iter head
) {
  if (g_allocator.alloc_node(res)) {
    res->tag = cDataUnwrappedClosure;
    res->link_info = head;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_chars(
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  if (buflen == 0) {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    refalrts::Iter before_begin_seq = prev(refalrts::g_allocator.free_ptr());
    refalrts::Iter end_seq = 0;

    for (unsigned i = 0; i < buflen; ++ i) {
      if (! alloc_char(end_seq, buffer[i])) {
        return false;
      }
    }

    res_b = next(before_begin_seq);
    res_e = end_seq;

    return true;
  }
}

bool refalrts::alloc_string(
  refalrts::Iter& res_b, refalrts::Iter& res_e, const char *string
) {
  if (*string == '\0') {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    refalrts::Iter before_begin_seq = prev(refalrts::g_allocator.free_ptr());
    refalrts::Iter end_seq = 0;

    for (const char *p = string; *p != '\0'; ++ p) {
      if (! alloc_char(end_seq, *p)) {
        return false;
      }
    }

    res_b = next(before_begin_seq);
    res_e = end_seq;

    return true;
  }
}

void refalrts::push_stack(Iter call_bracket) {
  g_vm.push_stack(call_bracket);
}

void refalrts::link_brackets(Iter left, Iter right) {
  left->link_info = right;
  right->link_info = left;
}

void refalrts::reinit_svar(refalrts::Iter res, refalrts::Iter sample) {
  res->tag = sample->tag;

  switch(sample->tag) {
    case refalrts::cDataChar:
      res->char_info = sample->char_info;
      break;

    case refalrts::cDataNumber:
      res->number_info = sample->number_info;
      break;

    case refalrts::cDataFunction:
      res->function_info = sample->function_info;
      break;

    case refalrts::cDataIdentifier:
      res->ident_info = sample->ident_info;
      break;

    case refalrts::cDataClosure: {
      res->tag = refalrts::cDataClosure;
      refalrts::Iter head = sample->link_info;
      res->link_info = head;
      ++ (head->number_info);
    }
    break;

    case refalrts::cDataFile:
      res->file_info = sample->file_info;
      break;

    /*
      Копируем только атом, скобок быть не должно.
    */
    default:
      refalrts_switch_default_violation(sample->tag);
  }
}

void refalrts::reinit_char(refalrts::Iter res, char ch) {
  res->tag = cDataChar;
  res->char_info = ch;
}

void refalrts::update_char(refalrts::Iter res, char ch) {
  res->char_info = ch;
}

void refalrts::reinit_number(refalrts::Iter res, refalrts::RefalNumber num) {
  res->tag = cDataNumber;
  res->number_info = num;
}

void refalrts::update_number(refalrts::Iter res, refalrts::RefalNumber num) {
  res->number_info = num;
}

void refalrts::reinit_name(refalrts::Iter res, refalrts::RefalFunction *func) {
  res->tag = cDataFunction;
  res->function_info = func;
}

void refalrts::update_name(refalrts::Iter res, refalrts::RefalFunction *func) {
  res->function_info = func;
}

void refalrts::reinit_ident(
  refalrts::Iter res, refalrts::RefalIdentifier ident
) {
  res->tag = cDataIdentifier;
  res->ident_info = ident;
}

void refalrts::update_ident(
  refalrts::Iter res, refalrts::RefalIdentifier ident
) {
  res->ident_info = ident;
}

void refalrts::reinit_open_bracket(refalrts::Iter res) {
  res->tag = cDataOpenBracket;
}

void refalrts::reinit_close_bracket(refalrts::Iter res) {
  res->tag = cDataCloseBracket;
}

void refalrts::reinit_open_adt(refalrts::Iter res) {
  res->tag = cDataOpenADT;
}

void refalrts::reinit_close_adt(refalrts::Iter res) {
  res->tag = cDataCloseADT;
}

void refalrts::reinit_open_call(refalrts::Iter res) {
  res->tag = cDataOpenCall;
}

void refalrts::reinit_close_call(refalrts::Iter res) {
  res->tag = cDataCloseCall;
}

void refalrts::reinit_closure_head(refalrts::Iter res) {
  res->tag = cDataClosureHead;
  res->number_info = 1;
}

void refalrts::reinit_unwrapped_closure(
  refalrts::Iter res, refalrts::Iter head
) {
  res->tag = cDataUnwrappedClosure;
  res->link_info = head;
}

refalrts::Iter refalrts::splice_elem(refalrts::Iter res, refalrts::Iter elem) {
  return list_splice(res, elem, elem);
}

refalrts::Iter refalrts::splice_stvar(refalrts::Iter res, refalrts::Iter var) {
  refalrts::Iter var_end;
  if (is_open_bracket(var)) {
    var_end = var->link_info;
  } else {
    var_end = var;
  }

  return list_splice(res, var, var_end);
}

refalrts::Iter refalrts::splice_evar(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {
  return list_splice(res, begin, end);
}

void refalrts::splice_to_freelist(refalrts::Iter begin, refalrts::Iter end) {
  g_allocator.splice_to_freelist(begin, end);
}

extern void refalrts::splice_to_freelist_open(
  refalrts::Iter before_first, refalrts::Iter after_last
) {
  if (before_first->next != after_last) {
    refalrts::splice_to_freelist(before_first->next, after_last->prev);
  }
}

refalrts::Iter refalrts::splice_from_freelist(refalrts::Iter pos) {
  return g_allocator.splice_from_freelist(pos);
}

/*
  Собственно замыкание (функция + контекст) определяется как
  [next(head), prev(head)]. Свёртка замыкания осуществляется первый
  раз только в сгенерированном коде, развёртывается только ранее
  созданное замыкание. Это позволяет гарантировать, что
  next(head) != head, prev(head) != head.
*/

// Развернуть замыкание
refalrts::Iter refalrts::unwrap_closure(refalrts::Iter closure) {
  assert(closure->tag == refalrts::cDataClosure);

  refalrts::Iter before_closure = prev(closure);
  refalrts::Iter head = closure->link_info;
  refalrts::Iter end_of_closure = prev(head);

  assert(head != prev(head));
  assert(head != next(head));

  link_adjacent(before_closure, head);
  link_adjacent(end_of_closure, closure);

  closure->tag = refalrts::cDataUnwrappedClosure;

  return prev(head);
}

// Свернуть замыкание
refalrts::Iter refalrts::wrap_closure(refalrts::Iter closure) {
  assert(closure->tag == refalrts::cDataUnwrappedClosure);

  refalrts::Iter head = closure->link_info;
  refalrts::Iter before_closure = prev(head);
  refalrts::Iter end_of_closure = prev(closure);

  assert(head != prev(head));
  assert(head != next(head));

  link_adjacent(before_closure, closure);
  link_adjacent(end_of_closure, head);

  closure->tag = refalrts::cDataClosure;

  return next(closure);
}

//------------------------------------------------------------------------------
const refalrts::RASLCommand refalrts::RefalCondFunctionRasl::run[] = {
  { refalrts::icPopState, 0, 0, 0 }
};

//------------------------------------------------------------------------------
const refalrts::RASLCommand refalrts::RefalCondFunctionNative::run[] = {
  { refalrts::icMainLoopReturnSuccess, 0, 0, 0 }
};
//------------------------------------------------------------------------------

const refalrts::RASLCommand refalrts::RefalNativeFunction::run[] = {
  { refalrts::icPerformNative, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 }
};

//------------------------------------------------------------------------------

const refalrts::RASLCommand refalrts::RefalEmptyFunction::run[] = {
  { refalrts::icFail, 0, 0, 0 }
};

//------------------------------------------------------------------------------

const refalrts::RASLCommand refalrts::RefalSwap::run[] = {
  { refalrts::icProfileFunction, 0, 0, 0 },
  { refalrts::icIssueMemory, 8, 0, 0 },
  { refalrts::icInitB0_Lite, 0, 0, 0 },
  { refalrts::icCallSaveLeft, 0, 2, 0 },
  { refalrts::icFetchSwapHead, 5, 0, 4 },
  { refalrts::icFetchSwapInfoBounds, 5, 6, 0 },
  { refalrts::icResetAllocator, 0, 0, 0 },
  { refalrts::icSetResArgBegin, 0, 0, 0 },
  { refalrts::icSpliceEVar, 0, 0, 6 },
  { refalrts::icSwapSave, 5, 0, 2 },
  { refalrts::icSpliceToFreeList, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 }
};

//------------------------------------------------------------------------------

// Средства профилирования

void refalrts::this_is_generated_function() {
  g_profiler.start_generated_function();
}

unsigned long refalrts::ticks_per_second() {
  return CLOCKS_PER_SEC;
}

void refalrts::read_performance_counters(unsigned long counters[]) {
  refalrts::g_profiler.read_counters(counters);
}

void refalrts::stop_sentence() {
  g_profiler.stop_sentence();
}

void refalrts::start_e_loop() {
  g_profiler.start_e_loop();
}

//------------------------------------------------------------------------------

// Прочие операции

void refalrts::set_return_code(int code) {
  refalrts::g_vm.set_return_code(code);
}

const char* refalrts::arg(unsigned int param) {
  return g_vm.arg(param);
}

void refalrts::debug_print_expr(
  void *file, refalrts::Iter first, refalrts::Iter last
) {
  refalrts::VM::print_seq(static_cast<FILE*>(file), first, last);
}

//==============================================================================
// Динамическое связывание
//==============================================================================

//------------------------------------------------------------------------------

// Идентификаторы

refalrts::RefalIdentifier refalrts::RefalIdentDescr::from_static(
  const char * name
) {
  Dynamic::IdentHashNode *value = g_dynamic.alloc_ident_node(name);
#ifdef IDENTS_LIMIT
  if (! value) {
    fprintf(
      stderr, "INTERNAL ERROR: Identifiers table overflows (max %ld)\n",
      static_cast<unsigned long>(IDENTS_LIMIT)
    );
    exit(154);
  }
#else
  assert(value != 0);
#endif // ifdef IDENTS_LIMIT

  if (value->ident.m_name == 0) {
    value->ident.m_name = name;
  } else if (value->nonstatic_origin != 0) {
    value->ident.m_name = name;
    delete[] value->nonstatic_origin;
    value->nonstatic_origin = 0;
  }

  return &value->ident;
}

refalrts::RefalIdentifier refalrts::RefalIdentDescr::implode(
  const char *name
) {
  if (! name) {
    name = "";
  }
  Dynamic::IdentHashNode *value = g_dynamic.alloc_ident_node(name);

#ifdef IDENTS_LIMIT
  if (! value) {
    return 0;
  }
#else
  assert(value != 0);
#endif // ifdef IDENTS_LIMIT

  if (value->ident.m_name == 0) {
    if (! name) {
      name = "";
    }

    size_t length = strlen(name);
    char *new_name = new char[length + 1];
    memcpy(new_name, name, length + 1);

    value->ident.m_name = new_name;
    value->nonstatic_origin = new_name;
  }

  return &value->ident;
}

//------------------------------------------------------------------------------

// Функции

void refalrts::RefalFunction::register_me() {
  Dynamic::FuncHashNode *node = g_dynamic.funcs_table().alloc(name);

  if (node->function != 0) {
    fprintf(
      stderr, "INTERNAL ERROR: function redeclared: %s#%u:%u\n",
      name.name, name.cookie1, name.cookie2
    );
    exit(156);
  }

  node->function = this;
}

refalrts::RefalFunction *refalrts::RefalFunction::lookup(
  const refalrts::RefalFuncName& name
) {
  Dynamic::FuncHashNode *node = g_dynamic.funcs_table().lookup(name);

  if (node) {
    return node->function;
  } else {
    return 0;
  }
}

refalrts::FunctionTable::FunctionTable(
  refalrts::UInt32 cookie1, refalrts::UInt32 cookie2,
  refalrts::FunctionTableItem items[]
)
  : cookie1(cookie1)
  , cookie2(cookie2)
  , items(items)
  , next(g_dynamic.m_unresolved_func_tables)
{
  g_dynamic.m_unresolved_func_tables = this;
}

refalrts::ExternalReference::ExternalReference(
  const char *name, refalrts::UInt32 cookie1, refalrts::UInt32 cookie2
)
  : ref(name)
  , cookie1(cookie1)
  , cookie2(cookie2)
  , next(g_dynamic.m_unresolved_external_references)
{
  g_dynamic.m_unresolved_external_references = this;
}

//------------------------------------------------------------------------------

// Загружаемый модуль

refalrts::NativeReference *refalrts::NativeReference::s_references = 0;

//==============================================================================
// Интерпретатор
//==============================================================================

refalrts::FnResult refalrts::recursive_call_main_loop() {
  const  refalrts::RASLCommand rasl[] = {
    { refalrts::icNextStep,0,0,0},
  };
  return refalrts::g_vm.main_loop(rasl);
}

const refalrts::RefalIdentifier refalrts::idents[] = { 0 };
const refalrts::RefalNumber refalrts::numbers[] = { 0 };
const refalrts::StringItem refalrts::strings[] = { { "", 0 } };


//==============================================================================

void refalrts::SwitchDefaultViolation::print() {
  fprintf(
    stderr, "%s:%d:INTERNAL ERROR: switch value %s == %ld not handled\n",
    m_filename, m_line, m_bad_expr, m_bad_switch_value
  );
}

//==============================================================================

namespace refalrts {

namespace at_exit_ns {

struct AtExitListNode *g_at_exit_list = 0;

struct AtExitListNode {
  AtExitCB callback;
  void *data;
  AtExitListNode *next;

  AtExitListNode(AtExitCB callback, void *data)
    : callback(callback), data(data), next(g_at_exit_list)
    {
      g_at_exit_list = this;
    }

  ~AtExitListNode() {
    callback(data);
  }
};

void perform_at_exit() {
  while (g_at_exit_list != 0) {
    AtExitListNode *current = g_at_exit_list;

    g_at_exit_list = g_at_exit_list->next;

    delete current;
  }
}

};  // namespace at_exit_ns

};  // namespace refalrts

void refalrts::at_exit(refalrts::AtExitCB callback, void *data) {
  at_exit_ns::AtExitListNode *p = at_exit_ns::g_at_exit_list;
  while (p != 0 && (p->callback != callback || p->data != data)) {
    p = p->next;
  }

  if (p == 0) {
    new at_exit_ns::AtExitListNode(callback, data);
  }
}

//==============================================================================

int main(int argc, char **argv) {
#ifdef ENABLE_DEBUGGER
  int debug_arg = refalrts::debugger::find_debugger_flag(argc, argv);
  if (debug_arg != -1) {
    for (int i = debug_arg; i < argc; ++i) {
      argv[i] = argv[i + 1];
    }
    --argc;
    refalrts::debugger::set_enable_debug();
  }
  refalrts::g_vm.set_debugger_factory(refalrts::debugger::RefalDebugger::create);
#endif // ifdef ENABLE_DEBUGGER

  refalrts::g_vm.set_args(argc, argv);

  refalrts::FnResult res;
  try {
    refalrts::g_dynamic.enumerate_blocks();

    unsigned unresolved = refalrts::g_dynamic.find_unresolved_externals();
    if (unresolved > 0) {
      refalrts::g_dynamic.free_idents_table();
      refalrts::g_dynamic.free_funcs_table();
      refalrts::g_dynamic.cleanup_module();
      fprintf(stderr, "Found %u unresolved externals\n", unresolved);
      return 157;
    }

    refalrts::g_profiler.start_profiler();
    res = refalrts::g_vm.run();
    fflush(stderr);
    fflush(stdout);
  } catch (refalrts::SwitchDefaultViolation& error) {
    error.print();
    return 151;
  } catch (std::exception& e) {
    fprintf(stderr, "INTERNAL ERROR: std::exception %s\n", e.what());
    return 152;
  } catch (...) {
    fprintf(stderr, "INTERNAL ERROR: unknown exception\n");
    return 153;
  }

  refalrts::at_exit_ns::perform_at_exit();
  refalrts::g_profiler.end_profiler();
  refalrts::g_vm.free_view_field();
  refalrts::g_allocator.free_memory();
  refalrts::g_dynamic.free_idents_table();
  refalrts::g_dynamic.free_funcs_table();
  refalrts::g_dynamic.cleanup_module();
  refalrts::g_vm.free_states_stack();

  fflush(stdout);

  switch(res) {
    case refalrts::cSuccess:
      return 0;

    case refalrts::cRecognitionImpossible:
      return 101;

    case refalrts::cNoMemory:
      return 102;

    case refalrts::cExit:
      return refalrts::g_vm.get_return_code();

    case refalrts::cStepLimit:
      return 103;

    case refalrts::cIdentTableLimit:
      return 104;

    default:
      fprintf(stderr, "INTERNAL ERROR: check switch in main (res = %d)\n", res);
      return 155;
  }
}
