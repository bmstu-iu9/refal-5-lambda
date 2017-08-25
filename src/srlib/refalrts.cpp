#include <exception>
#include <map>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <time.h>

#include <assert.h>

#include "refalrts.h"

#if 1
#  define VALID_LINKED(iter)
#else
#  define VALID_LINKED(iter) valid_linked_aux(#iter, iter);
#endif

#ifndef SHOW_DEBUG
#define SHOW_DEBUG 0
#endif // ifdef SHOW_DEBUG

void valid_linked_aux(const char *text, refalrts::Iter i) {
  printf("checking %s\n", text);
  if (0 == i) {
    return;
  }

  if (i->next) {
    assert(i->next->prev == i);
  }

  if (i->prev) {
    assert(i->prev->next == i);
  }
}

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

namespace {

refalrts::Iter next(refalrts::Iter current) {
  return current->next;
}

refalrts::Iter prev(refalrts::Iter current) {
  return current->prev;
}

bool is_open_bracket(refalrts::Iter node) {
  return (refalrts::cDataOpenBracket == node->tag)
    || (refalrts::cDataOpenADT == node->tag);
}

bool is_close_bracket(refalrts::Iter node) {
  return (refalrts::cDataCloseBracket == node->tag)
    || (refalrts::cDataCloseADT == node->tag);
}

} // unnamed namespace

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
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& pos
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
  refalrts::Iter& right_bracket)
{
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
  refalrts::Iter& right_bracket)
{
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
  refalrts::Iter& right_bracket)
{
  refalrts::Iter pnext = next(left_bracket);
  tag = pnext;
  right_bracket = left_bracket->link_info;
}

bool refalrts::svar_term(
  refalrts::Iter /* svar */, refalrts::Iter pos
) {
  if (! is_open_bracket(pos)) {
    return true;
  }
  return false;
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

namespace refalrts {

namespace profiler {

void start_generated_function();
void stop_sentence();
void start_e_loop();
void start_repeated_evar();
void start_repeated_tvar();
void stop_repeated();
void start_result();
void start_copy();
void stop_copy();
void stop_function();

}

}

namespace {

bool equal_expressions(
  refalrts::Iter first1, refalrts::Iter last1,
  refalrts::Iter first2, refalrts::Iter last2
) // throws refalrts::SwitchDefaultViolation
{
  assert((first1 == 0) == (last1 == 0));
  assert((first2 == 0) == (last2 == 0));

  refalrts::profiler::start_repeated_tvar();

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

  refalrts::profiler::stop_repeated();

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
  profiler::start_repeated_evar();
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

  profiler::stop_repeated();

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
    } else {
      evar_b = first;
      evar_e = prev(current);

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
  profiler::start_repeated_evar();
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

  profiler::stop_repeated();

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
    } else {
      evar_b = next(current);
      evar_e = last;

      last = current;
    }

    return true;
  } else {
    return false;
  }
}

bool refalrts::open_evar_advance(
  Iter& evar_b, Iter& evar_e,
  Iter& first, Iter& last
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

// Операции распределителя памяти

namespace refalrts{

namespace allocator {

void reset_allocator();
bool alloc_node(Iter& node);
Iter free_ptr();
void splice_to_freelist(Iter begin, Iter end);
void splice_from_freelist(Iter pos);

} // namespace allocator

} // namespace refalrts

//------------------------------------------------------------------------------

// Операции построения результата

void refalrts::reset_allocator() {
  profiler::start_result();
  allocator::reset_allocator();
}

namespace {

bool copy_node(refalrts::Iter& res, refalrts::Iter sample) {
  switch(sample->tag) {
    case refalrts::cDataChar:
      return refalrts::alloc_char(res, sample->char_info);
      // break;

    case refalrts::cDataNumber:
      return refalrts::alloc_number(res, sample->number_info);
      // break;

    case refalrts::cDataFunction:
      return refalrts::alloc_name(res, sample->function_info);
      // break;

    case refalrts::cDataIdentifier:
      return refalrts::alloc_ident(res, sample->ident_info);
      // break;

    case refalrts::cDataOpenBracket:
      return refalrts::alloc_open_bracket(res);
      // break;

    case refalrts::cDataCloseBracket:
      return refalrts::alloc_close_bracket(res);
      // break;

    case refalrts::cDataOpenADT:
      return refalrts::alloc_open_adt(res);
      // break;

    case refalrts::cDataCloseADT:
      return refalrts::alloc_close_adt(res);
      // break;

    case refalrts::cDataClosure: {
      bool allocated = refalrts::allocator::alloc_node(res);
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
    // break;

    case refalrts::cDataFile: {
      bool allocated = refalrts::allocator::alloc_node(res);
      if (allocated) {
        res->tag = refalrts::cDataFile;
        res->file_info = sample->file_info;
        return true;
      } else {
        return false;
      }
    }
    // break;

    /*
      Копируем только объектное выражение -- никаких вызовов функций
      быть не должно.
    */
    default:
      refalrts_switch_default_violation(sample->tag);
      // break;
  }
}

} // unnamed namespace


namespace refalrts {

namespace vm {

void make_dump(refalrts::Iter begin, refalrts::Iter end);

} // namespace vm

} // namespace refalrts

namespace {

bool copy_nonempty_evar(
  refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  refalrts::profiler::start_copy();

  refalrts::Iter res = 0;
  refalrts::Iter bracket_stack = 0;

  refalrts::Iter prev_res_begin =
    prev(refalrts::allocator::free_ptr());

  while (! refalrts::empty_seq(evar_b_sample, evar_e_sample)) {
    if (! copy_node(res, evar_b_sample)) {
      refalrts::profiler::stop_copy();
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

  refalrts::profiler::stop_copy();

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
  if (allocator::alloc_node(res)) {
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
  if (allocator::alloc_node(res)) {
    res->tag = cDataNumber;
    res->number_info = num;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_name(
  refalrts::Iter& res,
  refalrts::RefalFunction *fn
) {
  if (allocator::alloc_node(res)) {
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
  if (allocator::alloc_node(res)) {
    res->tag = cDataIdentifier;
    res->ident_info = ident;
    return true;
  } else {
    return false;
  }
}

namespace {

bool alloc_some_bracket(refalrts::Iter& res, refalrts::DataTag tag) {
  if (refalrts::allocator::alloc_node(res)) {
    res->tag = tag;
    return true;
  } else {
    return false;
  }
}

void link_adjacent(refalrts::Iter left, refalrts::Iter right) {
  if (left != 0) {
    left->next = right;
  }

  if (right != 0) {
    right->prev = left;
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

bool refalrts::alloc_chars(
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  if (buflen == 0) {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    refalrts::Iter before_begin_seq = prev(refalrts::allocator::free_ptr());
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
    refalrts::Iter before_begin_seq = prev(refalrts::allocator::free_ptr());
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

namespace refalrts {

namespace vm {

void push_stack(refalrts::Iter call_bracket);

} // namespace vm

} // namespace refalrts

void refalrts::push_stack(Iter call_bracket) {
  vm::push_stack(call_bracket);
}

void refalrts::link_brackets(Iter left, Iter right) {
  left->link_info = right;
  right->link_info = left;
}

namespace {

refalrts::Iter list_splice(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {

  VALID_LINKED(res);
  VALID_LINKED(res->prev);
  VALID_LINKED(begin);
  VALID_LINKED(begin->prev);
  VALID_LINKED(end);
  VALID_LINKED(end->prev);

  if ((res == begin) || refalrts::empty_seq(begin, end)) {
    // Цель достигнута сама по себе
    return res;
  } else if (res == next(end)) {
    // Цель достигнута сама по себе
    return begin;
  } else {
    refalrts::Iter prev_res = prev(res);
    refalrts::Iter prev_begin = prev(begin);
    refalrts::Iter next_end = next(end);

    link_adjacent(prev_res, begin);
    link_adjacent(end, res);
    link_adjacent(prev_begin, next_end);
  }

  VALID_LINKED(res);
  VALID_LINKED(res->prev);
  VALID_LINKED(begin);
  VALID_LINKED(begin->prev);
  VALID_LINKED(end);
  VALID_LINKED(end->next);

  return begin;
}

} // unnamed namespace

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

void refalrts::reinit_number(
  refalrts::Iter res, refalrts::RefalNumber num)
{
  res->tag = cDataNumber;
  res->number_info = num;
}

void refalrts::update_number(
  refalrts::Iter res, refalrts::RefalNumber num
) {
  res->number_info = num;
}

void refalrts::reinit_name(
  refalrts::Iter res,
  refalrts::RefalFunction *func
) {
  res->tag = cDataFunction;
  res->function_info = func;
}

void refalrts::update_name(
  refalrts::Iter res,
  refalrts::RefalFunction *func
) {
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

void refalrts::reinit_open_bracket(
  refalrts::Iter res
) {
  res->tag = cDataOpenBracket;
}

void refalrts::reinit_close_bracket(
  refalrts::Iter res
) {
  res->tag = cDataCloseBracket;
}

void refalrts::reinit_open_adt(
  refalrts::Iter res
) {
  res->tag = cDataOpenADT;
}

void refalrts::reinit_close_adt(
  refalrts::Iter res
) {
  res->tag = cDataCloseADT;
}

void refalrts::reinit_open_call(
  refalrts::Iter res
) {
  res->tag = cDataOpenCall;
}

void refalrts::reinit_close_call(
  refalrts::Iter res
) {
  res->tag = cDataCloseCall;
}

refalrts::Iter refalrts::splice_elem(
  refalrts::Iter res, refalrts::Iter elem
) {
  return list_splice(res, elem, elem);
}

refalrts::Iter refalrts::splice_stvar(
  refalrts::Iter res, refalrts::Iter var
) {
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
  allocator::splice_to_freelist(begin, end);
}

extern void refalrts::splice_to_freelist_open(
  refalrts::Iter before_first, refalrts::Iter after_last
) {
  if (before_first->next != after_last) {
    refalrts::splice_to_freelist(before_first->next, after_last->prev);
  }
}

void refalrts::splice_from_freelist(refalrts::Iter pos) {
  allocator::splice_from_freelist(pos);
}

namespace {

const refalrts::RASLCommand rasl_create_closure[] = {
  { refalrts::icIssueMemory, 5, 0, 0 },
  { refalrts::icInitB0_Lite, 0, 0, 0 },
  { refalrts::icCallSaveLeft, 0, 2, 0 },
  { refalrts::icNotEmpty, 0, 0, 2 },
#ifdef ENABLE_DEBUGGER
  { refalrts::icEmptyResult, 0, 0, 0 },
#endif // ifdef ENABLE_DEBUGGER
  { refalrts::icReinitClosureHead, 0, 0, 4 },
  { refalrts::icReinitUnwrappedClosure, 4, 0, 1 },
  { refalrts::icWrapClosure, 0, 0, 1 },
  { refalrts::icSetRes, 0, 0, 1 },
  { refalrts::icTrashLeftEdge, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 },
};

}

refalrts::RefalFunction refalrts::create_closure(
  rasl_create_closure, "@create_closure@"
);

/*
  Собственно замыкание (функция + контекст) определяется как
  [next(head), prev(head)]. Т.к. замыкание создаётся только функцией
  create_closure, которая гарантирует непустоту замыкания, то
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

const refalrts::RASLCommand refalrts::RefalNativeFunction::run[] = {
  { refalrts::icPerformNative, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 }
};

//------------------------------------------------------------------------------

const refalrts::RASLCommand refalrts::RefalEmptyFunction::run[] = {
  { refalrts::icFail, 0, 0, 0 }
};

//------------------------------------------------------------------------------

// Инициализация головного узла статического ящика

namespace refalrts {

namespace vm {

extern NodePtr g_left_swap_ptr;
Iter initialize_swap_head(refalrts::Iter head);

} // namespace vm

} // namespace refalrts

refalrts::Iter refalrts::vm::initialize_swap_head(refalrts::Iter head) {
  assert(cDataFunction == head->tag);
  assert(RefalSwap::run == head->function_info->rasl);

  RefalSwap *swap = static_cast<RefalSwap*>(head->function_info);
  splice_elem(vm::g_left_swap_ptr, head);
  head->tag = cDataSwapHead;
  swap->next_head = vm::g_left_swap_ptr;

  vm::g_left_swap_ptr = head;
  return vm::g_left_swap_ptr;
}

const refalrts::RASLCommand refalrts::RefalSwap::run[] = {
  { refalrts::icThisIsGeneratedFunction, 0, 0, 0 },
  { refalrts::icIssueMemory, 8, 0, 0 },
  { refalrts::icInitB0_Lite, 0, 0, 0 },
  { refalrts::icCallSaveLeft, 0, 2, 0 },
  { refalrts::icFetchSwapHead, 5, 0, 4 },
  { refalrts::icFetchSwapInfoBounds, 5, 6, 0 },
  { refalrts::icEmptyResult, 0, 0, 0 },
  { refalrts::icSpliceEVar, 0, 0, 6 },
  { refalrts::icSwapSave, 5, 0, 2 },
  { refalrts::icSpliceToFreeList, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 }
};

//------------------------------------------------------------------------------

// Средства профилирования

namespace refalrts {

namespace profiler {

extern void read_counters(unsigned long counters[]);
extern void start_e_loop();

} // namespace profiler

} // namespace refalrts

void refalrts::this_is_generated_function() {
  profiler::start_generated_function();
}

unsigned long refalrts::ticks_per_second() {
  return CLOCKS_PER_SEC;
}

void refalrts::read_performance_counters(unsigned long counters[]) {
  refalrts::profiler::read_counters(counters);
}

void refalrts::stop_sentence() {
  profiler::stop_sentence();
}

void refalrts::start_e_loop() {
  profiler::start_e_loop();
}

//------------------------------------------------------------------------------

// Прочие операции

namespace refalrts {

namespace vm {

extern int g_ret_code;
extern void print_seq(
  FILE *output, refalrts::Iter begin, refalrts::Iter end,
  bool multiline = true, unsigned max_node = -1
);

char **g_argv = 0;
unsigned int g_argc = 0;

} // namespace vm

} // namespace refalrts

void refalrts::set_return_code(int code) {
  refalrts::vm::g_ret_code = code;
}

const char* refalrts::arg(unsigned int param) {
  if (param < vm::g_argc) {
    return vm::g_argv[param];
  } else {
    return "";
  }
}

void refalrts::debug_print_expr(
  void *file, refalrts::Iter first, refalrts::Iter last
) {
  refalrts::vm::print_seq(static_cast<FILE*>(file), first, last);
}

//==============================================================================
// Распределитель памяти
//==============================================================================

namespace refalrts {

namespace allocator {

bool create_nodes();

void free_memory();

extern refalrts::Node g_last_marker;

refalrts::Node g_first_marker =
  { 0, & g_last_marker, refalrts::cDataIllegal, { '\0' } };
refalrts::Node g_last_marker =
  { & g_first_marker, 0, refalrts::cDataIllegal, { '\0' } };

refalrts::NodePtr g_free_ptr = & g_last_marker;

namespace pool {

enum { cChunkSize = 1000 };
typedef struct Chunk {
  Chunk *next;
  refalrts::Node elems[cChunkSize];
} Chunk;

typedef Chunk *ChunkPtr;

refalrts::NodePtr alloc_node();
void free();
bool grow();

ChunkPtr g_pool = 0;
unsigned g_avail = 0;
refalrts::Node *g_pnext_node = 0;

} // namespace pool

unsigned g_memory_use = 0;

} // namespace allocator

} // namespace refalrts

inline void refalrts::allocator::reset_allocator() {
  g_free_ptr = g_first_marker.next;
}

bool refalrts::allocator::alloc_node(refalrts::Iter& node) {
  if ((g_free_ptr == & g_last_marker) && ! create_nodes()) {
    return false;
  } else {
    if (refalrts::cDataClosure == g_free_ptr->tag) {
      refalrts::Iter head = g_free_ptr->link_info;
      -- head->number_info;

      if (0 == head->number_info) {
        unwrap_closure(g_free_ptr);
        // теперь перед g_free_ptr находится "развёрнутое" замыкание
        g_free_ptr->tag = refalrts::cDataClosureHead;
        g_free_ptr->number_info = 407193; // :-)

        g_free_ptr = head;
      }
    }

    node = g_free_ptr;
    g_free_ptr = next(g_free_ptr);
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
  reset_allocator();
  g_free_ptr = list_splice(g_free_ptr, begin, end);
}

void refalrts::allocator::splice_from_freelist(refalrts::Iter pos) {
  if (g_free_ptr != g_first_marker.next) {
    list_splice(pos, g_first_marker.next, g_free_ptr->prev);
  }
}

bool refalrts::allocator::create_nodes() {
  refalrts::NodePtr new_node = refalrts::allocator::pool::alloc_node();

#ifdef MEMORY_LIMIT

  if (g_memory_use >= MEMORY_LIMIT) {
    return false;
  }

#endif // ifdef MEMORY_LIMIT

  if (new_node == 0) {
    return false;
  } else {
    refalrts::NodePtr before_free_ptr = prev(g_free_ptr);
    before_free_ptr->next = new_node;
    new_node->prev = before_free_ptr;

    g_free_ptr->prev = new_node;
    new_node->next = g_free_ptr;

    g_free_ptr = new_node;
    g_free_ptr->tag = refalrts::cDataIllegal;
    ++ g_memory_use;

    return true;
  }
}

void refalrts::allocator::free_memory() {
  refalrts::allocator::pool::free();
#ifndef DONT_PRINT_STATISTICS
  fprintf(
    stderr,
    "Memory used %d nodes, %d * %lu = %lu bytes\n",
    g_memory_use,
    g_memory_use,
    static_cast<unsigned long>(sizeof(Node)),
    static_cast<unsigned long>(g_memory_use * sizeof(Node))
  );
#endif // ifndef DONT_PRINT_STATISTICS
}

refalrts::NodePtr refalrts::allocator::pool::alloc_node() {
  if ((g_avail != 0) || grow()) {
    -- g_avail;
    return g_pnext_node++;
  } else {
    return 0;
  }
}

bool refalrts::allocator::pool::grow() {
  ChunkPtr p = static_cast<ChunkPtr>(malloc(sizeof(Chunk)));
  if (p != 0) {
    p->next = g_pool;
    g_pool = p;
    g_avail = cChunkSize;
    g_pnext_node = p->elems;
    return true;
  } else {
    return false;
  }
}

void refalrts::allocator::pool::free() {
  while (g_pool != 0) {
    ChunkPtr p = g_pool;
    g_pool = g_pool->next;
    ::free(p);
  }
}

//==============================================================================
// Упрощённый профилировщик
//==============================================================================

namespace refalrts {

namespace profiler {

void start_profiler();
void end_profiler();
void read_counters(unsigned long counters[]);

#ifndef DONT_PRINT_STATISTICS
struct TimeItem {
  const char *name;
  unsigned long counter;
};

int reverse_compare(const void *left_void, const void *right_void);
#endif // ifndef DONT_PRINT_STATISTICS

enum State {
  cInRuntime,
  cInRuntimeCopy,
  cInPatternLinear,
  cInPatternRepeatedEVar,
  cInPatternRepeatedTVar,
  cInPatternELoop,
  cInPatternELoopRepeatedEVar,
  cInPatternELoopRepeatedTVar,
  cInResultLinear,
  cInResultCopy
};

enum BaseCounter {
  cCounter_RuntimeTime,
  cCounter_NativeTime,
  cCounter_LinearPatternTime,
  cCounter_RepeatedEvarOutsideECycle,
  cCounter_RepeatedTvarOutsideECycle,
  cCounter_RepeatedEvarInsideECycle,
  cCounter_RepeatedTvarInsideECycle,
  cCounter_ContextCopyTime,
  cCounter_ECycleClearTime,
  cCounter_LinearResultTime,
  cCounter_TEvarCopyTime,
  cCounter_TOTAL
};

void start_generated_function();
void stop_sentence();
void start_e_loop();
void start_repeated_evar();
void start_repeated_tvar();
void stop_repeated();
void start_result();
void start_copy();
void stop_copy();
void stop_function();

#ifndef NDEBUG
#define refalrts_profiler_assert_eq(variable, constant) \
  if ((variable) != (constant)) { \
    refalrts_switch_default_violation(variable); \
  }
#else
#define refalrts_profiler_assert_eq(variable, constant)
#endif

clock_t g_counters[cCounter_TOTAL] = { 0 };
clock_t g_prev_cutoff;
State g_current_state = cInRuntime;

} // namespace profiler

} // namespace refalrts

void refalrts::profiler::start_profiler() {
  g_prev_cutoff = clock();
}

#ifndef DONT_PRINT_STATISTICS

int refalrts::profiler::reverse_compare(
  const void *left_void, const void *right_void
) {
  const TimeItem *left = static_cast<const TimeItem *>(left_void);
  const TimeItem *right = static_cast<const TimeItem *>(right_void);

  if (left->counter > right->counter) {
    return -1;
  } else if (left->counter < right->counter) {
    return +1;
  } else {
    return 0;
  }
}

#endif // ifndef DONT_PRINT_STATISTICS

void refalrts::profiler::start_generated_function() {
  clock_t now = clock();
  refalrts_profiler_assert_eq(g_current_state, cInRuntime);
  g_counters[cCounter_RuntimeTime] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = cInPatternLinear;
}

void refalrts::profiler::stop_sentence() {
  clock_t now = clock();
  BaseCounter counter;

  switch (g_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = cInPatternLinear;
}

void refalrts::profiler::start_e_loop() {
  clock_t now = clock();
  BaseCounter counter;

  switch (g_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = cInPatternELoop;
}

void refalrts::profiler::start_repeated_evar() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (g_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      next = cInPatternRepeatedEVar;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      next = cInPatternELoopRepeatedEVar;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = next;
}

void refalrts::profiler::start_repeated_tvar() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (g_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      next = cInPatternRepeatedTVar;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      next = cInPatternELoopRepeatedTVar;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = next;
}

void refalrts::profiler::stop_repeated() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (g_current_state) {
    case cInPatternRepeatedEVar:
      next = cInPatternLinear;
      counter = cCounter_RepeatedEvarOutsideECycle;
      break;

    case cInPatternRepeatedTVar:
      next = cInPatternLinear;
      counter = cCounter_RepeatedTvarOutsideECycle;
      break;

    case cInPatternELoopRepeatedEVar:
      next = cInPatternELoop;
      counter = cCounter_RepeatedEvarInsideECycle;
      break;

    case cInPatternELoopRepeatedTVar:
      next = cInPatternELoop;
      counter = cCounter_RepeatedTvarInsideECycle;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = next;
}

void refalrts::profiler::start_result() {
  clock_t now = clock();
  State next = cInResultLinear;
  BaseCounter counter;

  switch (g_current_state) {
    case cInRuntime:
      counter = cCounter_NativeTime;
      next = cInRuntime;
      break;

    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = next;
}

void refalrts::profiler::start_copy() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (g_current_state) {
    case cInRuntime:
      counter = cCounter_RuntimeTime;
      next = cInRuntimeCopy;
      break;

    case cInResultLinear:
      counter = cCounter_LinearResultTime;
      next = cInResultCopy;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = next;
}

void refalrts::profiler::stop_copy() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (g_current_state) {
    case cInRuntimeCopy:
      next = cInRuntime;
      counter = cCounter_ContextCopyTime;
      break;

    case cInResultCopy:
      next = cInResultLinear;
      counter = cCounter_TEvarCopyTime;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = next;
}

void refalrts::profiler::stop_function() {
  clock_t now = clock();
  BaseCounter counter;

  switch (g_current_state) {
    case cInRuntime:
      counter = cCounter_NativeTime;
      break;

    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    case cInResultLinear:
      counter = cCounter_LinearResultTime;
      break;

    default:
      refalrts_switch_default_violation(g_current_state);
  }

  g_counters[counter] += (now - g_prev_cutoff);
  g_prev_cutoff = now;
  g_current_state = cInRuntime;
}

void refalrts::profiler::end_profiler() {
  // необходимо на случай аварийного останова, если функция сфейлилась
  // на последнем предложении с открытой e-переменной
  profiler::stop_function();
#ifndef DONT_PRINT_STATISTICS

  unsigned long counters[cPerformanceCounter_COUNTERS_NUMBER];
  read_counters(counters);

  TimeItem items[] = {
    { "\nTotal program time", cPerformanceCounter_TotalTime },
    { "(Total refal time)", cPerformanceCounter_RefalTime },
    { "Linear pattern time", cPerformanceCounter_LinearPatternTime },
    { "Linear result time", cPerformanceCounter_LinearResultTime },
    { "Open e-loop time (clear)", cPerformanceCounter_OpenELoopTimeClear },
    {
      "Repeated e-var match time (inside e-loops)",
      cPerformanceCounter_RepeatEvarMatchTime
    },
    {
      "Repeated e-var match time (outside e-loops)",
      cPerformanceCounter_RepeatEvarMatchTimeOutsideECycle
    },
    {
      "Repeated t-var match time (inside e-loops)",
      cPerformanceCounter_RepeatTvarMatchTime
    },
    {
      "Repeated t-var match time (outside e-loops)",
      cPerformanceCounter_RepeatTvarMatchTimeOutsideECycle
    },
    { "t- and e-var copy time", cPerformanceCounter_TEvarCopyTime },
    { "Runtime time overhead", cPerformanceCounter_RuntimeTime },
    { "Native time", cPerformanceCounter_NativeTime },
    { "Context copy time", cPerformanceCounter_ContextCopyTime }
  };

  enum { nItems = sizeof(items) / sizeof(items[0]) };

  for (size_t i = 0; i < nItems; ++i) {
    items[i].counter = counters[items[i].counter];
  }

  qsort(items, nItems, sizeof(items[0]), reverse_compare);

  const double cfSECS_PER_CLOCK = 1.0 / CLOCKS_PER_SEC;
  unsigned long total = counters[refalrts::cPerformanceCounter_TotalTime];

  for (size_t i = 0; i < nItems; ++i) {
    unsigned long value = items[i].counter;

    if (value > 0) {
      double percent = (total != 0) ? 100.0 * value / total : 0.0;
      fprintf(
        stderr, "%s: %.3f seconds (%.1f %%).\n",
        items[i].name, value * cfSECS_PER_CLOCK, percent
      );
    }
  }

#endif // ifndef DONT_PRINT_STATISTICS
}

namespace refalrts {

namespace vm {

extern unsigned g_step_counter;

} // namespace vm

} // namespace refalrts

void refalrts::profiler::read_counters(unsigned long counters[]) {
  clock_t basic_runtime_time = g_counters[cCounter_RuntimeTime];
  clock_t basic_native_time = g_counters[cCounter_NativeTime];
  clock_t basic_linear_pattern_time = g_counters[cCounter_LinearPatternTime];
  clock_t basic_repeated_evar_outside_ecycle =
    g_counters[cCounter_RepeatedEvarOutsideECycle];
  clock_t basic_repeated_tvar_outside_ecycle =
    g_counters[cCounter_RepeatedTvarOutsideECycle];
  clock_t basic_repeated_evar_inside_ecycle =
    g_counters[cCounter_RepeatedEvarInsideECycle];
  clock_t basic_repeated_tvar_inside_ecycle =
    g_counters[cCounter_RepeatedTvarInsideECycle];
  clock_t basic_context_copy_time = g_counters[cCounter_ContextCopyTime];
  clock_t basic_ecycle_clear_time = g_counters[cCounter_ECycleClearTime];
  clock_t basic_linear_result_time = g_counters[cCounter_LinearResultTime];
  clock_t basic_tevar_copy_time = g_counters[cCounter_TEvarCopyTime];

  clock_t full_time =
    basic_runtime_time
    + basic_native_time
    + basic_linear_pattern_time
    + basic_repeated_evar_outside_ecycle
    + basic_repeated_tvar_outside_ecycle
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_context_copy_time
    + basic_ecycle_clear_time
    + basic_linear_result_time
    + basic_tevar_copy_time;

  clock_t total_pattern_match_time =
    basic_linear_pattern_time
    + basic_repeated_evar_outside_ecycle
    + basic_repeated_tvar_outside_ecycle
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_ecycle_clear_time;

  clock_t total_building_result_time =
    basic_linear_result_time + basic_tevar_copy_time;

  clock_t builtin_time =
    basic_runtime_time + basic_native_time + basic_context_copy_time;

  clock_t total_e_loop =
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_ecycle_clear_time;

  clock_t linear_refal_time =
    basic_linear_pattern_time + basic_linear_result_time;

  counters[cPerformanceCounter_TotalTime] = full_time;
  counters[cPerformanceCounter_BuiltInTime] = builtin_time;
  counters[cPerformanceCounter_RefalTime] =
    total_pattern_match_time + total_building_result_time;
  counters[cPerformanceCounter_PatternMatchTime] = total_pattern_match_time;
  counters[cPerformanceCounter_BuildResultTime] = total_building_result_time;
  counters[cPerformanceCounter_TotalSteps] = ::refalrts::vm::g_step_counter;
  counters[cPerformanceCounter_HeapSize] =
    static_cast<unsigned long>(
      ::refalrts::allocator::g_memory_use * sizeof(Node)
    );
  counters[cPerformanceCounter_TEvarCopyTime] = basic_tevar_copy_time;
  counters[cPerformanceCounter_RepeatTvarMatchTime] =
    basic_repeated_tvar_inside_ecycle;
  counters[cPerformanceCounter_RepeatTvarMatchTimeOutsideECycle] =
    basic_repeated_tvar_outside_ecycle;
  counters[cPerformanceCounter_RepeatEvarMatchTime] =
    basic_repeated_evar_inside_ecycle;
  counters[cPerformanceCounter_RepeatEvarMatchTimeOutsideECycle] =
    basic_repeated_evar_outside_ecycle;
  counters[cPerformanceCounter_OpenELoopTime] = total_e_loop;
  counters[cPerformanceCounter_OpenELoopTimeClear] = basic_ecycle_clear_time;
  counters[cPerformanceCounter_LinearRefalTime] = linear_refal_time;
  counters[cPerformanceCounter_LinearPatternTime] = basic_linear_pattern_time;
  counters[cPerformanceCounter_LinearResultTime] = basic_linear_result_time;

  counters[cPerformanceCounter_RuntimeTime] = basic_runtime_time;
  counters[cPerformanceCounter_NativeTime] = basic_native_time;
  counters[cPerformanceCounter_ContextCopyTime] = basic_context_copy_time;
}

//==============================================================================
// Виртуальная машина
//==============================================================================

namespace refalrts {

namespace vm {

void push_stack(refalrts::Iter call_bracket);
refalrts::Iter pop_stack();
bool empty_stack();

refalrts::FnResult run();
refalrts::FnResult main_loop();
void make_dump(refalrts::Iter begin, refalrts::Iter end);
FILE* dump_stream();

void free_view_field();

refalrts::NodePtr g_stack_ptr = 0;

extern refalrts::Node g_last_marker;

refalrts::Node g_first_marker =
  { 0, & g_last_marker, refalrts::cDataIllegal, { '\0' } };
refalrts::Node g_last_marker =
  { & g_first_marker, 0, refalrts::cDataIllegal, { '\0' } };

refalrts::NodePtr g_left_swap_ptr = & g_last_marker;

Iter g_error_begin = & g_first_marker;
Iter g_error_end = & g_last_marker;

unsigned g_step_counter = 0;

int g_ret_code;

template <typename T>
class Stack {
public:
  Stack()
    :m_memory(new T[1]), m_size(0), m_capacity(1)
  {
    /* пусто */
  }

  ~Stack() {
    delete[] m_memory;
  }

  T& operator[](size_t offset) {
    return m_memory[offset];
  }

  void reserve(size_t size);

private:
  T *m_memory;
  size_t m_size;
  size_t m_capacity;
};


} // namespace vm

} // namespace refalrts

template <typename T>
void refalrts::vm::Stack<T>::reserve(size_t size) {
  assert (size > 0);

  if (m_capacity < size) {
    T *new_memory = new T[size];
    delete[] m_memory;
    m_memory = new_memory;
  }
  m_size = size;
  for (size_t i = 0; i < m_size; ++i) {
    m_memory[i] = T();
  }
}

namespace refalrts {

namespace vm {

Stack<const RASLCommand*> g_open_e_stack;
Stack<Iter> g_context;

} // namespace vm

} // namespace refalrts

void refalrts::vm::push_stack(refalrts::Iter call_bracket) {
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

extern refalrts::RefalFunction& Go;

refalrts::FnResult refalrts::vm::run() {
  FnResult res = main_loop();

  if (res != cSuccess) {
    switch(res) {
      case refalrts::cRecognitionImpossible:
        fprintf(stderr, "\nRECOGNITION IMPOSSIBLE\n\n");
        break;

      case refalrts::cNoMemory:
        fprintf(stderr, "\nNO MEMORY\n\n");
        break;

      case refalrts::cExit:
        return res;

      case refalrts::cStepLimit:
        fprintf(stderr, "\nSTEP LIMIT REACHED (%u)\n\n", g_step_counter);
        break;

      default:
        fprintf(stderr, "\nUNKNOWN ERROR\n\n");
        break;
    }
    make_dump(g_error_begin, g_error_end);
  }

  return res;
}

namespace {

void print_indent(FILE *output, int level)
{
  enum { cPERIOD = 4 };
  putc('\n', output);
  if (level < 0) {
    putc('!', output);
    return;
  }
  for (int i = 0; i < level; ++i) {
    // Каждые cPERIOD позиций вместо пробела ставим точку.
    bool put_marker = ((i % cPERIOD) == (cPERIOD - 1));

    const char cSpace = ' ';
    const char cMarker = '.';

    putc((put_marker ? cMarker : cSpace), output);
  }
}

} // unnamed namespace

void refalrts::vm::print_seq(
  FILE *output, refalrts::Iter begin, refalrts::Iter end,
  bool multiline, unsigned max_node
) {
  enum {
    cStateView = 100,
    cStateString,
    cStateFinish
  } state = cStateView;

  int indent = 0;
  bool after_bracket = false;
  bool reset_after_bracket = true;


  char space = (multiline) ? '\n' : ' ';

  // TODO: while
  for (
    unsigned cur_node = 0;
    (state != cStateFinish)
    && ! refalrts::empty_seq(begin, end)
    && cur_node <= max_node;
    cur_node++
  ) {

    if (reset_after_bracket) {
      after_bracket = false;
      reset_after_bracket = false;
    }

    if (after_bracket) {
      reset_after_bracket = true;
    }

    switch(state) {
      case cStateView:
        switch(begin->tag) {
          case refalrts::cDataIllegal:
            if (0 == begin->prev) {
              fprintf(output, "[FIRST] ");
            } else if (0 == begin->next) {
              fprintf(output, "%c[LAST]", space);
              state = cStateFinish;
            } else {
              fprintf(output, "%c[NONE]", space);
            }
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataSwapHead:
            fprintf(
              output, "%c%c*Swap %s:%c",
              space, space, begin->function_info->name, space
            );
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataChar:
            state = cStateString;
            fprintf(output, "\'");
            continue;

          case refalrts::cDataNumber:
            fprintf(output, "%lu ", begin->number_info);
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataFunction:
            fprintf(output, "&%s ", begin->function_info->name);
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataIdentifier:
            fprintf(output, "#%s ", (begin->ident_info)());
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataOpenADT:
            if (! after_bracket && multiline) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "[");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataCloseADT:
            --indent;
            fprintf(output, "]");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataOpenBracket:
            if (! after_bracket && multiline) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "(");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataCloseBracket:
            --indent;
            fprintf(output, ")");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataOpenCall:
            if (! after_bracket && multiline) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "<");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataCloseCall:
            --indent;
            fprintf(output, ">");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataFile:
            fprintf(output, "*%p ", begin->file_info);
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataClosure:
            if (! after_bracket && multiline) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "{");
            begin = unwrap_closure(begin);
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataClosureHead:
            fprintf(output, "[%ld] ", begin->number_info);
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataUnwrappedClosure:
            --indent;
            fprintf(output, "}");
            begin = wrap_closure(begin);
            continue;

          default:
            refalrts_switch_default_violation(begin->tag);
            // break;
        }

      case cStateString:
        switch(begin->tag) {
          case refalrts::cDataChar: {
            unsigned char ch = static_cast<unsigned char>(begin->char_info);
            switch(ch)
              {
                case '(': case ')':
                case '<': case '>':
                  fprintf(output, "\\%c", ch);
                  break;

                case '\n':
                  fprintf(output, "\\n");
                  break;

                case '\t':
                  fprintf(output, "\\t");
                  break;

                case '\\':
                  fprintf(output, "\\\\");
                  break;

                case '\'':
                  fprintf(output, "\\\'");
                  break;

                default:
                  if (ch < '\x20') {
                    fprintf(output, "\\x%02x", static_cast<int>(ch));
                  } else {
                    fprintf(output, "%c", ch);
                  }
                  break;
              }
              refalrts::move_left(begin, end);
              continue;
            }

          default:
            state = cStateView;
            fprintf(output, "\' ");
            continue;
        }

      case cStateFinish:
        continue;

      default:
        refalrts_switch_default_violation(state);
    }
  }

  if (cStateString == state) {
    fprintf(output, "\'");
  }

  fprintf(output, "\n");
}

void refalrts::vm::make_dump(refalrts::Iter begin, refalrts::Iter end) {
  using refalrts::vm::dump_stream;

  fprintf(dump_stream(), "\nSTEP NUMBER %u\n", g_step_counter);
  fprintf(dump_stream(), "\nERROR EXPRESSION:\n");
  print_seq(dump_stream(), begin, end);
  fprintf(dump_stream(), "VIEW FIELD:\n");
  print_seq(dump_stream(), & g_first_marker, & g_last_marker);

#ifdef DUMP_FREE_LIST

  fprintf(dump_stream(), "\nFREE LIST:\n");
  print_seq(
    dump_stream(),
    & refalrts::allocator::g_first_marker,
    & refalrts::allocator::g_last_marker
  );

#endif // ifdef DUMP_FREE_LIST

  fprintf(dump_stream(), "\nEnd dump\n");
  fflush(dump_stream());
}

FILE *refalrts::vm::dump_stream() {
#ifdef DUMP_FILE

  static FILE *dump_file = 0;

  if (dump_file == 0) {
    // Необходимо открыть файл.
    // Если файл не открывается, используем stderr
    dump_file = fopen(DUMP_FILE, "wt");

    if (dump_file == 0) {
      dump_file = stderr;
    }
  }

  return dump_file;

#else // ifdef DUMP_FILE

  return stderr;

#endif // ifdef DUMP_FILE
}

void refalrts::vm::free_view_field() {
  refalrts::Iter begin = g_first_marker.next;
  refalrts::Iter end = & g_last_marker;

  if (begin != end) {
    end = end->prev;
    refalrts::allocator::splice_to_freelist(begin, end);
  } else {
    /*
      Поле зрения пустое -- его не нужно освобождать.
    */;
  }

#ifndef DONT_PRINT_STATISTICS
  fprintf(stderr, "Step count %d\n", g_step_counter);
#endif // ifndef DONT_PRINT_STATISTICS
}

//==============================================================================
// Интерпретатор
//==============================================================================

//=============================================================================
// Пошаговый отладчик
//=============================================================================
//=============================================================================
//  Классы отладчика и вспомогательных структур
//=============================================================================
namespace refalrts {

namespace debugger {

static const char *const s_H = "h";
static const char *const s_HELP = "help";
static const char *const s_B = "b";
static const char *const s_BREAK = "break";
static const char *const s_BREAKPOINT = "breakpoint";
static const char *const s_CL = "cl";
static const char *const s_CLEAR = "clear";
static const char *const s_RM = "rm";
static const char *const s_STEPLIMIT = "steplimit";
static const char *const s_MEMORYLIMIT = "memorylimit";
static const char *const s_RUN = "run";
static const char *const s_R = "r";
static const char *const s_STEP = "step";
static const char *const s_S = "s";
static const char *const s_NEXT = "next";
static const char *const s_N = "n";
static const char *const s_VARS = "vars";
static const char *const s_P = "p";
static const char *const s_PRINT = "print";
static const char *const s_ARG = "arg";
static const char *const s_CALL = "call";
static const char *const s_CALLEE = "callee";
static const char *const s_RES = "res";
static const char *const s_DOT = ".";
static const char *const s_TR = "tr";
static const char *const s_TRACE = "trace";
static const char *const s_NOTR = "notr";
static const char *const s_NOTRACE = "notrace";
static const char *const s_Q = "q";
static const char *const s_QUIT = "quit";

enum { cMaxLen = 1024 };
void close_out(FILE*);

class VariableDebugTable {
  vm::Stack<Iter>& m_context;
  const StringItem *m_strings;
  const RASLCommand *m_first;
  const RASLCommand *m_last;

  std::pair<std::string, int> parse_var_name(const char *full_name);
  void variable_bounds(
    refalrts::Iter& var_begin, refalrts::Iter& var_end,
    char type, int offset
  );
public:
  VariableDebugTable()
    : m_context(vm::g_context)
    , m_strings(0)
    , m_first(0)
    , m_last(0)
  {
    /* пусто */
  }
  void insert_var(const RASLCommand *next);
  void clear();
  std::map<int, int> find_var(const char *var_name);
  void print(FILE *out);
  void print_var(const char *var_name, FILE *out);
  void set_string_items(const StringItem *items);
  void set_context(vm::Stack<Iter>& cont);
};

class TracedFunctionTable {
  std::map<std::string, FILE*> m_traced_func_table;
public:
  void trace_func(const char *func_name, FILE *trace_out);
  void notrace_func(const char *func_name);
  void clear();
  bool is_traced_func(const char *func_name);
  FILE *get_trace_outstream(const char *func_name);
  void print(FILE *out);
};

class BreakpointSet {
  std::set<int> m_step_breaks;
  std::set<std::string> m_func_breaks;
public:
  void add_breakpoint(int step_numb);
  void add_breakpoint(const char *func_name);
  void rm_breakpoint(int step_numb);
  void rm_breakpoint(const char *func_name);
  bool is_breakpoint(int cur_step_numb, const char *cur_func_name);
  void print(FILE *out);
};

class RefalDebugger {
  const char *m_dot;
  unsigned m_step_numb;
  unsigned m_memory_limit;
  FILE *m_in;
  Iter m_next_expr;
  Iter m_res_begin;
  Iter m_res_end;
public:
  VariableDebugTable var_debug_table;
  TracedFunctionTable func_trace_table;
  BreakpointSet break_set;

  RefalDebugger()
    : m_dot(s_STEP)
    , m_step_numb(0)
    , m_memory_limit(-1)
    , m_in(stdin)
    , m_next_expr(0)
    , m_res_begin(0)
    , m_res_end(0)
  {
    /* пусто */
  }
  ~RefalDebugger() {
    func_trace_table.clear();
  }

  FILE *get_out();
  bool next_cond(Iter begin);
  bool run_cond(RefalFunction *callee);
  bool step_cond();
  bool mem_cond();

  bool is_debug_stop(Iter begin, RefalFunction *callee);
  void debug_trace(Iter begin, Iter end, RefalFunction *callee);
  void set_step_res(Iter begin, Iter end);

  void help_option();
  void break_option(const char *arg);
  void clear_option(const char *arg);
  void print_callee_option(Iter begin, Iter end, FILE *out);
  void print_arg_option(Iter begin, Iter end, FILE *out);
  void print_res_option(FILE *out);
  bool print_var_option(const char *var_name, FILE *out);
  refalrts::FnResult debugger_loop(Iter begin, Iter end);
  
  int parse_line(char *line);
  void skip_space (char **ptr);
  char *skip_nonspace (char *ptr);
  int check_bracket (char **ptr);
  void write_byte (char **from, char **out, char **str_p, char val);
  int parse2hex (unsigned char *in);
  int quotation_mark_parse(char *from, char *out);

  refalrts::FnResult handle_function_call(
    Iter begin, Iter end, RefalFunction *callee
  );
};

int find_debugger_flag(int argc, char **argv);

extern bool g_enable_debug;

bool enable_debug() {
  return g_enable_debug;
}

void set_enable_debug() {
  g_enable_debug = true;
}

} // namespace debugger

} // namespace refalrts

//=============================================================================
//  Определения методов отладчика и вспомогательных структур
//=============================================================================
//  Отладочная таблица переменных

std::pair<std::string, int>
refalrts::debugger::VariableDebugTable::parse_var_name(
  const char *full_name
) {
  char *dash_ptr = strchr((char*)full_name, '#');
  int depth = -1;
  char var_name[cMaxLen] = {0};
  if (dash_ptr != NULL) {
    size_t n = (dash_ptr-full_name);
    strncpy(var_name, full_name, n);
      // небольшой костыль, почему-то при n=4 копируются 5 символов
    var_name[n] = 0;
    depth = atoi(dash_ptr+1);
  } else {
    strcpy(var_name, full_name);
  }
  return std::pair<std::string, int>(std::string(var_name), depth);
}

void refalrts::debugger::VariableDebugTable::variable_bounds(
  refalrts::Iter& var_begin, refalrts::Iter& var_end, char type, int offset
) {
  var_begin = m_context[offset];
  switch (type) {
    case 's':
      var_end = var_begin;
      break;

    case 't':
      if (is_open_bracket(var_begin)) {
        var_end = var_begin->link_info;
      } else {
        var_end = var_begin;
      }
      break;

    case 'e':
      var_end = m_context[offset + 1];
      break;

    default:
      refalrts_switch_default_violation(type);
  }
}


void refalrts::debugger::VariableDebugTable::insert_var(
  const RASLCommand *next
) {
  if (m_first == 0) {
    m_first = next;
  }
  m_last = next;
}

void refalrts::debugger::VariableDebugTable::clear() {
  m_first = m_last = 0;
}

std::map<int, int> refalrts::debugger::VariableDebugTable::find_var(
  const char *var_name
) {
  std::pair<std::string, int> input_pair = parse_var_name(var_name);
  bool has_depth = input_pair.second >= 0;
  std::map<int, int> var_depth_offset_map;
  for (const RASLCommand *it = m_first; it != 0 && it<=m_last; ++it) {
    std::pair<std::string, int> table_pair =
      parse_var_name(m_strings[it->val1].string);
    if (input_pair.first.compare(table_pair.first) == 0) {
      if (has_depth) {
        if (table_pair.second == input_pair.second) {
          var_depth_offset_map.insert(
            std::pair<int, int>(input_pair.second, it->bracket)
          );
        }
      } else {
        var_depth_offset_map.insert(
          std::pair<int, int>(table_pair.second, it->bracket)
        );
      }
    }
  }
  return var_depth_offset_map;
}

void refalrts::debugger::VariableDebugTable::print(FILE *out) {
  fprintf(
    out,
    "==========================Variable debug table=========================\n"
  );
  for (const RASLCommand *it = m_first; it != 0 && it<=m_last; ++it) {
    const char *var_name = m_strings[it->val1].string;
    fprintf(out, "  \"%.20s\"\t-  ", var_name);
    refalrts::Iter var_begin = 0;
    refalrts::Iter var_end = 0;
    variable_bounds(var_begin, var_end, var_name[0], it->bracket);
    vm::print_seq(out, var_begin, var_end, false);
  }
  fprintf(
    out,
    "=======================================================================\n"
  );
}

void refalrts::debugger::VariableDebugTable::print_var(
  const char *var_name, FILE *out
) {
  std::map<int, int> var_depth_offset_map = find_var(var_name);
  std::pair<std::string, int> var_parse_name = parse_var_name(var_name);
  for (
    std::map<int, int>::iterator it = var_depth_offset_map.begin();
    it != var_depth_offset_map.end();
    ++it
  ) {
    fprintf(out, "  %s#%d\t== ", var_parse_name.first.c_str(), it->first);
    refalrts::Iter var_begin = 0;
    refalrts::Iter var_end = 0;
    variable_bounds(var_begin, var_end, var_name[0], it->second);
    vm::print_seq(out, var_begin, var_end, false);
  }
}

void refalrts::debugger::VariableDebugTable::set_string_items(
  const StringItem *items
) {
  m_strings = items;
}

void refalrts::debugger::VariableDebugTable::set_context(
  vm::Stack<Iter>&cont
) {
  m_context = cont;
}

//=============================================================================
//  Таблица трассируемых функций

void refalrts::debugger::TracedFunctionTable::trace_func(
  const char *func_name, FILE *trace_out
) {
  m_traced_func_table.insert(
    std::pair<std::string, FILE*>(std::string(func_name), trace_out)
  );
}

void refalrts::debugger::TracedFunctionTable::notrace_func(
  const char *func_name
) {
  std::map<std::string, FILE*>::iterator found =
    m_traced_func_table.find(std::string(func_name));
  if (found != m_traced_func_table.end()) {
    close_out(found->second);
    m_traced_func_table.erase(std::string(func_name));
  }
}

void refalrts::debugger::TracedFunctionTable::clear() {
  for (
    std::map<std::string, FILE*>::iterator it = m_traced_func_table.begin();
    it != m_traced_func_table.end();
    ++it
  ) {
    close_out(it->second);
  }
  m_traced_func_table.clear();
}

bool refalrts::debugger::TracedFunctionTable::is_traced_func(
  const char *func_name
) {
  return
    m_traced_func_table.find(std::string(func_name)) !=
      m_traced_func_table.end();
}

FILE *refalrts::debugger::TracedFunctionTable::get_trace_outstream (
  const char * func_name
) {
  std::map<std::string, FILE*>::iterator found =
    m_traced_func_table.find(std::string(func_name));
  if (found == m_traced_func_table.end()) {
    return 0;
  }
  return found->second;
}

void refalrts::debugger::TracedFunctionTable::print(FILE *out) {
  fprintf(
    out,
    "=========================Traced function table=========================\n"
  );
  for (
    std::map<std::string, FILE*>::iterator it = m_traced_func_table.begin();
    it != m_traced_func_table.end();
    ++it
  ) {
    fprintf(out, "  \"%.20s\"", it->first.c_str());
    if (it->second == stdout) {
      fprintf(out, "\tin stdout\n");
    } else {
      fprintf(out, "\tin file\n");
    }
  }
  fprintf(
    out,
    "=======================================================================\n"
  );
}

//=============================================================================
//  Множество точек прерывания

void refalrts::debugger::BreakpointSet::add_breakpoint(int step_numb) {
  m_step_breaks.insert(step_numb);
}

void refalrts::debugger::BreakpointSet::add_breakpoint(const char *func_name) {
  m_func_breaks.insert(std::string(func_name));
}

void refalrts::debugger::BreakpointSet::rm_breakpoint(int step_numb) {
  m_step_breaks.erase(step_numb);
}

void refalrts::debugger::BreakpointSet::rm_breakpoint(const char *func_name) {
  m_func_breaks.erase(std::string(func_name));
}

bool refalrts::debugger::BreakpointSet::is_breakpoint(
  int cur_step_numb, const char *cur_func_name
) {
  std::set<int>::iterator step_found = m_step_breaks.find(cur_step_numb);
  std::set<std::string>::iterator func_found =
    m_func_breaks.find(std::string(cur_func_name));
  return step_found != m_step_breaks.end() || func_found != m_func_breaks.end();
}

void refalrts::debugger::BreakpointSet::print(FILE *out = stdout) {
  fprintf(out, "Step breakpoint set:\n");
  for (
    std::set<int>::iterator step_it = m_step_breaks.begin();
    step_it != m_step_breaks.end();
    ++step_it
  ) {
    fprintf(out, "\t%d\n", *step_it);
  }
  fprintf(out, "Function breakpoint set:\n");
  for (
    std::set<std::string>::iterator func_it = m_func_breaks.begin();
    func_it != m_func_breaks.end();
    ++func_it
  ) {
    fprintf(out, "\t<%s ...>\n", func_it->c_str());
  }
}

//=============================================================================
//  Работа с потоками вывода и парсинг строки

int refalrts::debugger::RefalDebugger::parse_line (char *line)
{
  char *line_ptr = line;
  refalrts::debugger::RefalDebugger::skip_space(&line_ptr);
  int val = refalrts::debugger::RefalDebugger::check_bracket(&line_ptr);
  if (val == -1) {
    return -1;
  }
  refalrts::debugger::RefalDebugger::skip_space(&line_ptr);
  if (*line_ptr == '"') {
    if (refalrts::debugger::RefalDebugger::quotation_mark_parse(line_ptr+1, line) == -1) {
	  return -1;
    }
	}
  else
  {
    char *end = refalrts::debugger::RefalDebugger::skip_nonspace(line_ptr);
    *end = '\0';
  }
  return val;
}

void refalrts::debugger::RefalDebugger::skip_space (char **ptr)
{
  char *tmp = *ptr;
  while (*tmp == '\n' || *tmp == '\t' || *tmp == ' ') {
    tmp++;
  }
  *ptr = tmp;
}

char *refalrts::debugger::RefalDebugger::skip_nonspace (char *ptr)
{
  while (*ptr != '\n' && *ptr != '\t' && *ptr != ' ') {
    ptr++;
  }
  return ptr;
}

int refalrts::debugger::RefalDebugger::check_bracket (char **ptr)
{
  if (**ptr == '>') {
    (*ptr)++;
    if (**ptr == '>') {
      (*ptr)++;
      return 1;
    }
    return 0;
  }
  return -1;
}

void refalrts::debugger::RefalDebugger::write_byte (char **from, char **out, char **str_p, char val)
{
  memmove(*out, *from, *str_p - *from);
  *out += (*str_p - *from) + 1;
  *(*out - 1) = val;
  *str_p += 2;
  *from = *str_p;
}

int refalrts::debugger::RefalDebugger::parse2hex (unsigned char *in) {
  unsigned char ret;
  if ( (*in - '0') <= 9){
    ret = *in - '0';
  }
  else if ( (*in & ~(1 << 5)) - 'A' <= 'F' - 'A') {
    ret = ((*in & ~(1 << 5)) - 'A') + 10;
  }
  else return -1;
  ret <<= 4;
  
  if ( (*(in+1) - '0') <= 9){
    ret |= *(in+1) - '0';
  }
  else if ( (*(in+1) & ~(1 << 5)) - 'A' <= 'F' - 'A') {
    ret |= (*(in+1) & ~(1 << 5)) - 'A' + 10;
  }
  else return -1;
  return ret;
}

int refalrts::debugger::RefalDebugger::quotation_mark_parse(char *from, char *out)
{
  char *str_p = from;

  for (;;) {
    switch (*str_p) {
    case '"':
      switch (*(str_p + 1)) {
      case '\n':
      case '\t':
      case ' ':
      case '\0':
        memmove(out, from, str_p - from);
        *(out + (str_p - from)) = '\0';
        return 0;
      case 'a':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\a');
        continue;
      case 'b':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\b');
        continue;
      case 'f':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\f');
        continue;
      case 'n':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\n');
        continue;
      case 'r':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\r');
        continue;
      case 't':
       refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\t');
        continue;
      case 'v':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\v');
        continue;
      case 'e':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '\e');
        continue;
      case '"':
        refalrts::debugger::RefalDebugger::write_byte(&from, &out, &str_p, '"');
        continue;
      case 'x':
        {
          int tmp = refalrts::debugger::RefalDebugger::parse2hex((unsigned char *)str_p + 2);
          if (tmp == -1) {
	          fprintf(stderr, "Error escape sequence HEX parse!!\n");
		        return -1;
		      }
		      memmove(out, from, str_p - from);
          out += (str_p - from) + 1;
          *(out-1) = tmp;
          str_p += 4;
          from = str_p;
	        continue;
        }
	    default:
		    return -1;
      }
    case '\0':
      return -1;
    default :
      str_p++;
      continue;
    }
  }
}


FILE *refalrts::debugger::RefalDebugger::get_out() {
  char line[cMaxLen] = {0};
  fgets(line, cMaxLen, m_in);
  int val = refalrts::debugger::RefalDebugger::parse_line (line);
  if (val == 1) {
    return fopen(line, "a");
  }
  else if (val == 0) {
    return fopen(filename, "w");
  }
  else {
    return stdout;
  }
}

void refalrts::debugger::close_out(FILE *out) {
  if (out != stdout) {
    fclose(out);
  }
}

//=============================================================================
//  Класс отладчика

bool refalrts::debugger::RefalDebugger::mem_cond() {
  bool res = allocator::g_memory_use > m_memory_limit;
  if (res) {
    m_memory_limit = -1;
    printf("stopped on memory overflow\n");
  }
  return res;
}

bool refalrts::debugger::RefalDebugger::next_cond(Iter begin) {
  m_dot = s_NEXT;
  bool stop = begin == m_next_expr;
  if (stop) {
    printf("stopped on next\n");
    m_next_expr = 0;
  }
  return stop;
}

bool refalrts::debugger::RefalDebugger::run_cond(RefalFunction *callee) {
  m_dot = s_RUN;
  bool stop = break_set.is_breakpoint(
    refalrts::vm::g_step_counter, callee == 0 ? "" : callee->name
  );
  if (stop) {
    printf("stopped on function breakpoint\n");
  }
  return stop;
}

bool refalrts::debugger::RefalDebugger::step_cond() {
  using namespace refalrts::vm;
  bool scond = (g_step_counter == m_step_numb);
  m_step_numb = g_step_counter;
  m_dot = s_STEP;
  if (scond) {
    printf("stopped on step\n");
  }
  return scond;
}

bool refalrts::debugger::RefalDebugger::is_debug_stop(
  Iter begin, RefalFunction *callee
) {
  bool stop = step_cond();
  stop = next_cond(begin) || stop;
  stop = run_cond(callee) || stop;
  stop = mem_cond() || stop;
  return stop;
}

void refalrts::debugger::RefalDebugger::debug_trace(
  Iter begin, Iter end, RefalFunction *callee
) {
  if (callee != 0 && func_trace_table.is_traced_func(callee->name)) {
    FILE *trace_out = func_trace_table.get_trace_outstream(callee->name);
    fprintf(
      trace_out, "//==================================================\n"
    );
    fprintf(trace_out, "Scope function: ");
    print_callee_option(begin, end, trace_out);
    fprintf(trace_out, "\n");
    fprintf(trace_out, "Traced call:   ");
    vm::print_seq(trace_out, begin, end, false);
    fprintf(
      trace_out, "//==================================================\n"
    );
  }
}

void refalrts::debugger::RefalDebugger::set_step_res(Iter begin, Iter end) {
  if (begin != 0 && end != 0) {
    m_res_begin = begin->prev;
    m_res_end = end->next;
  }
}

void refalrts::debugger::RefalDebugger::help_option() {
  printf("===============Common help for all allowed options==============\n");
  printf("%s, %s\t\t\t%s\n", s_H, s_HELP, "print help for debugger options");
  printf(
    "%s, %s, %s\t%s\n",
    s_B, s_BREAK, s_BREAKPOINT,
    "set breakpoint by function name\n"
    "\t\t\t  or step number (\'#\'ddd)"
  );
  printf(
    "%s, %s, %s\t\t%s\n",
    s_CL, s_CLEAR, s_RM,
    "remove breakpoint from function by its name\n"
    "\t\t\t  or from step by its number (\'#\'ddd)"
  );
  printf(
    "%s\t\t%s\n",
    s_STEPLIMIT, "set limit for step number; there will be breakpoint"
  );
  printf(
    "%s\t\t%s\n",
    s_MEMORYLIMIT,
    "set limit for memory node number; there will be\n"
      "\t\t\t  breakpoint"
  );
  printf("%s, %s\t\t%s\n", s_TR, s_TRACE, "set up tracing for function");
  printf(
    "%s, %s\t\t%s\n", s_NOTR, s_NOTRACE, "remove tracing settings for function"
  );
  printf(
    "%s, %s\t\t\t%s\n", s_R, s_RUN, "continue program execution"
  );
  printf(
    "%s, %s\t\t\t%s\n",
    s_S, s_STEP, "make the only one step in program execution"
  );
  printf(
    "%s, %s\t\t\t%s\n",
    s_N, s_NEXT, "execute next active function until passive result"
  );
  printf("%s\t\t\t%s\n", s_VARS, "print the variable debug table");
  printf("%s, %s\t\t\t%s\n", s_P, s_PRINT, "print by parameter commands");
  printf(
    "  %s\t%s\n",
    "\'e.\'|\'t.\'|\'s.\'nnn", "print variable value by its name"
  );
  printf("  %s\t\t\t%s\n", s_CALL, "print current active expression");
  printf("  %s\t\t%s\n", s_CALLEE, "print the therm after \'<\'");
  printf(
    "  %s\t\t\t%s\n",
    s_ARG,
    "print the argument - the expression after\n"
    "\t\t\t  the callee-therm and before \'>\'"
  );
  printf("  %s\t\t\t%s\n", s_RES, "print the result of previous step");
  printf(
    "  %s, %s, %s\t%s\n",
    s_B, s_BREAK, s_BREAKPOINT, "print set of all placed breakpoints"
  );
  printf("  %s, %s\t\t%s\n", s_TR, s_TRACE, "print table of all traced functions");
  printf("%s\t\t\t%s\n", s_DOT, "repeat previous debugger command");
  printf("\n");
  printf("================================================================\n");
}

void refalrts::debugger::RefalDebugger::break_option(const char *arg) {
  if (arg[0] == '#') {
    int step_break = atoi(arg+1);
    break_set.add_breakpoint(step_break);
  } else {
    break_set.add_breakpoint(arg);
  }
}

void refalrts::debugger::RefalDebugger::clear_option(const char *arg) {
  if (arg[0] == '#') {
    int step_break = atoi(arg+1);
    break_set.rm_breakpoint(step_break);
  } else {
    break_set.rm_breakpoint(arg);
  }
}

void refalrts::debugger::RefalDebugger::print_callee_option(
  refalrts::Iter begin, refalrts::Iter end, FILE *out = stdout
){
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  Iter callee_end = callee;
  if (is_open_bracket(callee)) {
    callee_end = callee->link_info;
  }

  vm::print_seq(out, callee, callee_end, false);
}

void refalrts::debugger::RefalDebugger::print_arg_option(
  refalrts::Iter begin, refalrts::Iter end, FILE *out = stdout
) {
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  vm::print_seq(out, begin, end, false);
}

void refalrts::debugger::RefalDebugger::print_res_option(FILE *out) {
  if (m_res_begin != 0 && m_res_end != 0) {
    vm::print_seq(out, m_res_begin->next, m_res_end->prev, false);
  } else {
    fprintf(out, "[NONE]\n");
  }
}

bool refalrts::debugger::RefalDebugger::print_var_option(
  const char *var_name, FILE *out = stdout
) {
  if (var_name[1] == '.') {
    switch(var_name[0]) {
      case 'e':
      case 's':
      case 't':
        var_debug_table.print_var(var_name, out);
        break;
      default:
        refalrts_switch_default_violation(var_name[0]);
    }
    // распозналось, как имя переменной
    // пусть и с неправильным типом в одной из веток
    close_out(out);
    return true;
  }
  // не может быть именем переменной
  close_out(out);
  return false;
}

namespace {

bool str_equal(const char *lhs, const char *rhs) {
  return strcmp(lhs, rhs) == 0;
}

} // безымянное namespace

refalrts::FnResult refalrts::debugger::RefalDebugger::debugger_loop(
  refalrts::Iter begin, refalrts::Iter end
) {
  using namespace refalrts::vm;
  char debcmd[16] = {0};
  char strparam[cMaxLen] = {0};
  for ( ; ; ) {
    printf("debug>");
    fscanf(m_in, "%15s", debcmd);
    if (str_equal(debcmd, s_H) || str_equal(debcmd, s_HELP)) {
      help_option();
    } else if (
      str_equal(debcmd, s_B)
      || str_equal(debcmd, s_BREAK)
      || str_equal(debcmd, s_BREAKPOINT)
    ) {
      fscanf(m_in, "%1023s", strparam);
      break_option(strparam);
    } else if (
      str_equal(debcmd, s_CL)
      || str_equal(debcmd, s_CLEAR)
      || str_equal(debcmd, s_RM)
    ) {
      fscanf(m_in, "%1023s", strparam);
      clear_option(strparam);
    } else if (str_equal(debcmd, s_STEPLIMIT)) {
      int step_lim = 0;
      fscanf(m_in, "%d", &step_lim);
      break_set.add_breakpoint(g_step_counter+step_lim);
    } else if (str_equal(debcmd, s_MEMORYLIMIT)) {
      fscanf(m_in, "%u", &m_memory_limit);
    } else if (str_equal(debcmd, s_TR) || str_equal(debcmd, s_TRACE)) {
      fscanf(m_in, "%1023s", strparam);
      func_trace_table.trace_func(strparam, get_out());
    } else if (str_equal(debcmd, s_NOTR) || str_equal(debcmd, s_NOTRACE)) {
      fscanf(m_in, "%1023s", strparam);
      func_trace_table.notrace_func(strparam);
    } else if (
      str_equal(debcmd, s_R)
      || str_equal(debcmd, s_RUN)
      || (str_equal(debcmd, s_DOT) && str_equal(m_dot, s_RUN))
    ) {
      m_dot = s_RUN;
      break;
    } else if (
      str_equal(debcmd, s_S)
      || str_equal(debcmd, s_STEP)
      || (str_equal(debcmd, s_DOT) && str_equal(m_dot, s_STEP))
    ) {
      m_step_numb = g_step_counter+1;
      m_dot = s_STEP;
      break;
    } else if (str_equal(debcmd, s_Q) || str_equal(debcmd, s_QUIT)) {
      g_ret_code = 0;
      return cExit;
    } else if (
      str_equal(debcmd, s_N)
      || str_equal(debcmd, s_NEXT)
      || (str_equal(debcmd, s_DOT) && str_equal(m_dot, s_NEXT))
    ) {
      m_next_expr = g_stack_ptr;
      m_dot = s_NEXT;
      break;
    } else if (str_equal(debcmd, s_VARS)) {
      FILE *out = get_out();
      var_debug_table.print(out);
      close_out(out);
    } else if (str_equal(debcmd, s_P) || str_equal(debcmd, s_PRINT)) {
      fscanf(m_in, "%1023s", strparam);
      FILE *out = get_out();
      if (str_equal(strparam, s_ARG)) {
        print_arg_option(begin, end, out);
      } else if (str_equal(strparam, s_CALL)) {
        print_seq(out, begin, end, true);
      } else if (str_equal(strparam, s_CALLEE)) {
        print_callee_option(begin, end, out);
      } else if (str_equal(strparam, s_RES)) {
        print_res_option(out);
      } else if (
        str_equal(strparam, s_B)
        || str_equal(strparam, s_BREAK)
        || str_equal(strparam, s_BREAKPOINT)
      ) {
        break_set.print(out);
      } else if (str_equal(strparam, s_TR) || str_equal(strparam, s_TRACE)) {
        func_trace_table.print(out);
      } else if (! print_var_option(strparam, out)) {
        fprintf(
          stderr,
          "Unrecognised print option is found: %s \"%s\"\n",
          debcmd, strparam
        );
      }
      close_out(out);
    } else if (! print_var_option(debcmd, get_out())) {
      fprintf(stderr, "Unrecognised option is found: \"%s\"\n", debcmd);
    }
  }
  return refalrts::cSuccess;
}

refalrts::FnResult
refalrts::debugger::RefalDebugger::handle_function_call(
  refalrts::Iter begin, refalrts::Iter end, refalrts::RefalFunction *callee
) {
  if (enable_debug()) {
    debug_trace(begin, end, callee);
    if (is_debug_stop(begin, callee)) {
      printf(
        "Step #%d; Function <%s ...>\n",
        refalrts::vm::g_step_counter, callee == 0 ? "" : callee->name
      );
      if (debugger_loop(begin, end) == refalrts::cExit) {
        return cExit;
      }
    }
    var_debug_table.clear();
    set_step_res(begin, end);
  }

  return refalrts::cSuccess;
}

bool refalrts::debugger::g_enable_debug = false;

int refalrts::debugger::find_debugger_flag(int argc, char **argv) {
  int i = 1;
  while (i < argc && ! str_equal(argv[i], "++enable+debugger++")) {
    ++i;
  }

  if (i < argc) {
    return i;
  } else {
    return -1;
  }
}

//=============================================================================

refalrts::FnResult refalrts::vm::main_loop() {
  static const RASLCommand startup_rasl[] = {
    { icIssueMemory, 3, 0, 0 },
    { icEmptyResult, 0, 0, 0 },
    { icAllocBracket, 0, ibOpenCall, 0 },
    { icAllocFunc, 0, 0, 1 },
    { icAllocBracket, 0, ibCloseCall, 2 },
    { icSpliceTile, 0, 2, 0 },
    { icPushStack, 0, 0, 2 },
    { icPushStack, 0, 0, 0 },
    { icNextStep, 0, 0, 0 }
  };

  static RefalFunction *startup_func[] = {
    & Go
  };

  RefalFunction *callee = 0;
  Iter begin = & g_last_marker; /* нужно для icEmptyResult в startup_rasl */
  Iter end = 0;
  const RASLCommand *rasl = startup_rasl;
  RefalFunction **functions = startup_func;
  const RefalIdentifier *idents = 0;
  const RefalNumber *numbers = 0;
  const StringItem *strings = 0;

  vm::Stack<const RASLCommand*>& open_e_stack = vm::g_open_e_stack;
  vm::Stack<Iter>& context = vm::g_context;

#ifdef ENABLE_DEBUGGER
  refalrts::debugger::RefalDebugger debugger;
  debugger.var_debug_table.set_context(context);
  debugger.var_debug_table.set_string_items(strings);
#endif // ifdef ENABLE_DEBUGGER

  Iter res = 0;
  Iter trash_prev = 0;
  unsigned int index;
  int stack_top = 0;

#define MATCH_FAIL \
  if (stack_top == 0) { \
    return cRecognitionImpossible; \
  } else { \
    rasl = open_e_stack[--stack_top]; \
    continue; \
  }

  while (true) {
    // Интерпретация команд
    // Для ряда команд эти переменные могут не иметь смысла
    Iter &bb = context[rasl->bracket];
    Iter &be = context[rasl->bracket + 1];
    Iter &elem = context[rasl->bracket];
    Iter &save_pos = context[rasl->val1];
    Iter &swap_head = save_pos;

    // Содержимое скобок
    Iter &res_b = context[rasl->val2];
    Iter &res_e = context[rasl->val2 + 1];

    switch(rasl->cmd)
    {
      case icThisIsGeneratedFunction:
        this_is_generated_function();
        break;

      case icLoadConstants:
        {
          RASLFunction *descr = static_cast<RASLFunction*>(callee);
          functions = descr->functions;
          idents = descr->idents;
          numbers = descr->numbers;
          strings = descr->strings;
#ifdef ENABLE_DEBUGGER
          debugger.var_debug_table.set_string_items(strings);
#endif // ifdef ENABLE_DEBUGGER
        }
        break;

      case icIssueMemory:
        context.reserve(rasl->val1);
        break;

      case icReserveBacktrackStack:
        open_e_stack.reserve(rasl->val1);
        break;

      case icOnFailGoTo:
        open_e_stack[stack_top++] = rasl + rasl->val1 + 1;
        break;

      case icProfilerStopSentence:
        stop_sentence();
        break;

      case icInitB0:
        context[0] = begin;
        context[1] = end;
        move_left(context[0], context[1]);
        move_left(context[0], context[1]);
        move_right(context[0], context[1]);
        break;

      case icInitB0_Lite:
        context[0] = begin;
        context[1] = end;
        break;

      case icCharLeft:
        if (! char_left(static_cast<char>(rasl->val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icCharRight:
        if (! char_right(static_cast<char>(rasl->val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icCharTerm:
        if (! char_term(static_cast<char>(rasl->val2), bb)) {
          MATCH_FAIL;
        }
        break;

      case icCharLeftSave:
        save_pos = char_left(static_cast<char>(rasl->val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icCharRightSave:
        save_pos = char_right(static_cast<char>(rasl->val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icNumLeft:
        if (! number_left(static_cast<RefalNumber>(rasl->val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNumRight:
        if (! number_right(static_cast<RefalNumber>(rasl->val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNumTerm:
        if (! number_term(static_cast<RefalNumber>(rasl->val2), bb)) {
          MATCH_FAIL;
        }
        break;

      case icNumLeftSave:
        save_pos = number_left(static_cast<RefalNumber>(rasl->val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icNumRightSave:
        save_pos =
          number_right(static_cast<RefalNumber>(rasl->val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumLeft:
        if (! number_left(numbers[rasl->val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumRight:
        if (! number_right(numbers[rasl->val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumTerm:
        if (! number_term(numbers[rasl->val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumLeftSave:
        save_pos = number_left(numbers[rasl->val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumRightSave:
        save_pos = number_right(numbers[rasl->val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icFuncLeft:
        if (! function_left(functions[rasl->val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icFuncRight:
        if (! function_right(functions[rasl->val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icFuncTerm:
        if (! function_term(functions[rasl->val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case icFuncLeftSave:
        save_pos = function_left(functions[rasl->val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icFuncRightSave:
        save_pos = function_right(functions[rasl->val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icIdentLeft:
        if (! ident_left(idents[rasl->val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icIdentRight:
        if (! ident_right(idents[rasl->val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icIdentTerm:
        if (! ident_term(idents[rasl->val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case icIdentLeftSave:
        save_pos = ident_left(idents[rasl->val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icIdentRightSave:
        save_pos = ident_right(idents[rasl->val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icBracketLeft:
        if (! brackets_left(res_b, res_e, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icBracketRight:
        if (! brackets_right(res_b, res_e, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icBracketTerm:
        if (! brackets_term(res_b, res_e, bb)) {
          MATCH_FAIL;
        }
        break;

      case icBracketLeftSave:
        {
          int inner = rasl->val2;
          context[inner + 2] =
            brackets_left(context[inner], context[inner + 1], bb, be);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
          bracket_pointers(context[inner + 2], context[inner + 3]);
        }
        break;

      case icBracketRightSave:
        {
          int inner = rasl->val2;
          context[inner + 2] =
            brackets_right(context[inner], context[inner + 1], bb, be);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
          bracket_pointers(context[inner + 2], context[inner + 3]);
        }
        break;

      case icADTLeft:
        if (! adt_left(res_b, res_e, functions[rasl->val1], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icADTRight:
        if (! adt_right(res_b, res_e, functions[rasl->val1], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icADTTerm:
        if (! adt_term(res_b, res_e, functions[rasl->val1], bb)) {
          MATCH_FAIL;
        }
        break;

      case icADTLeftSave:
        {
          int inner = rasl->val2;
          const RefalFunction *tag = functions[rasl->val1];
          context[inner + 2] =
            adt_left(context[inner], context[inner + 1], tag, bb, be);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
          adt_pointers(
            context[inner + 2], context[inner + 3], context[inner + 4]
          );
        }
        break;

      case icADTRightSave:
        {
          int inner = rasl->val2;
          const RefalFunction *tag = functions[rasl->val1];
          context[inner + 2] =
            adt_right(context[inner], context[inner + 1], tag, bb, be);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
          adt_pointers(
            context[inner + 2], context[inner + 3], context[inner + 4]
          );
        }
        break;

      case icADTTermSave:
        {
          int inner = rasl->val2;
          const RefalFunction *tag = functions[rasl->val1];
          context[inner + 2] =
            adt_term(context[inner], context[inner + 1], tag, bb);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
        }
        break;

      case icCallSaveLeft:
        context[rasl->val2 + 2] = call_left(res_b, res_e, bb, be);
        break;

      case icEmpty:
        if (! empty_seq(bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNotEmpty:
        if (empty_seq(bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icsVarLeft:
        index = rasl->val2;
        if (! svar_left(context[index], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icsVarRight:
        index = rasl->val2;
        if (! svar_right(context[index], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icsVarTerm:
        if (! svar_term(bb, bb)) {
          MATCH_FAIL;
        }
        break;

      case ictVarLeft:
        index = rasl->val2;
        if (! tvar_left(context[index], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case ictVarRight:
        index = rasl->val2;
        if (! tvar_right(context[index], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case ictVarLeftSave:
        index = rasl->val2;
        context[index + 1] = tvar_left(context[index], bb, be);
        if (! context[index + 1]) {
          MATCH_FAIL;
        }
        break;

      case ictVarRightSave:
        index = rasl->val2;
        context[index + 1] = tvar_right(context[index], bb, be);
        if (! context[index + 1]) {
          MATCH_FAIL;
        }
        break;

      case iceRepeatLeft:
        {
          int index = rasl->val1;
          int sample = rasl->val2;
          Iter &evar_b = context[index];
          Iter &evar_e = context[index + 1];
          Iter &sample_b = context[sample];
          Iter &sample_e = context[sample + 1];
          if (
            ! repeated_evar_left(evar_b, evar_e, sample_b, sample_e, bb, be)
          ) {
            MATCH_FAIL;
          }
        }
        break;

      case iceRepeatRight:
        {
          int index = rasl->val1;
          int sample = rasl->val2;
          Iter &evar_b = context[index];
          Iter &evar_e = context[index + 1];
          Iter &sample_b = context[sample];
          Iter &sample_e = context[sample + 1];
          if (
            ! repeated_evar_right(evar_b, evar_e, sample_b, sample_e, bb, be)
          ) {
            MATCH_FAIL;
          }
        }
        break;

      case icsRepeatLeft:
      case ictRepeatLeft:
        {
          int index = rasl->val1;
          int sample = rasl->val2;
          if (! repeated_stvar_left(context[index], context[sample], bb, be)) {
            MATCH_FAIL;
          }
        }
        break;

      case icsRepeatRight:
      case ictRepeatRight:
        {
          int index = rasl->val1;
          int sample = rasl->val2;
          if (! repeated_stvar_right(context[index], context[sample], bb, be)) {
            MATCH_FAIL;
          }
        }
        break;

      case icsRepeatTerm:
      case ictRepeatTerm:
        assert(rasl->bracket == rasl->val1);
        if (! repeated_stvar_term(context[rasl->val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case ictRepeatLeftSave:
        {
          int index = rasl->val1;
          int sample = rasl->val2;

          context[index + 1] =
            repeated_stvar_left(context[index], context[sample], bb, be);
          if (! context[index + 1]) {
            MATCH_FAIL;
          }
        }
        break;

      case ictRepeatRightSave:
        {
          int index = rasl->val1;
          int sample = rasl->val2;

          context[index + 1] =
            repeated_stvar_right(context[index], context[sample], bb, be);
          if (! context[index + 1]) {
            MATCH_FAIL;
          }
        }
        break;

      case icEPrepare:
        res_b = 0;
        res_e = 0;
        open_e_stack[stack_top++] = ++rasl;
        start_e_loop();
        break;

      case icEStart:
        {
          if (! open_evar_advance(res_b, res_e, bb, be)) {
            MATCH_FAIL;
          }
          open_e_stack[stack_top++] = rasl;
        }
        break;

      case icSave:
        res_b = bb;
        res_e = be;
        break;

      case icVariableDebugOffset:
#ifdef ENABLE_DEBUGGER
        debugger.var_debug_table.insert_var(rasl);
#endif  // ifdef ENABLE_DEBUGGER
        break;

      case icEmptyResult:
#ifdef ENABLE_DEBUGGER
        if (debugger.handle_function_call(begin, end, callee) == cExit) {
          return cExit;
        }
#endif  // ifdef ENABLE_DEBUGGER
        reset_allocator();
        res = begin;
        break;

      case icSetResRightEdge:
        trash_prev = begin->prev;
        res = end->next;
        break;

      case icSetRes:
        trash_prev = begin->prev;
        res = context[rasl->bracket];
        break;

      case icCopyEVar:
        {
          unsigned int target = rasl->val1;
          unsigned int sample = rasl->val2;
          if (
            ! copy_evar(
              context[target], context[target + 1],
              context[sample], context[sample + 1]
            )
          )
            return cNoMemory;
        }
        break;

      case icCopySTVar:
        {
          unsigned int target = rasl->val1;
          unsigned int sample = rasl->val2;
          if (! copy_stvar(context[target], context[sample])) {
            return cNoMemory;
          }
        }
        break;

      case icReinitSVar:
        reinit_svar(elem, context[rasl->val2]);
        break;

      case icAllocChar:
        if (! alloc_char(elem, static_cast<char>(rasl->val2))) {
          return cNoMemory;
        }
        break;

      case icAllocFunc:
        if (! alloc_name(elem, functions[rasl->val2])) {
          return cNoMemory;
        }
        break;

      case icAllocInt:
        if (! alloc_number(elem, static_cast<RefalNumber>(rasl->val2))) {
          return cNoMemory;
        }
        break;

      case icAllocHugeInt:
        if (! alloc_number(elem, numbers[rasl->val2])) {
          return cNoMemory;
        }
        break;

      case icAllocIdent:
        if (! alloc_ident(elem, idents[rasl->val2])) {
          return cNoMemory;
        }
        break;

      case icAllocBracket:
        {
          static bool (*const allocator[])(Iter& res) = {
            alloc_open_adt,
            alloc_open_bracket,
            alloc_open_call,
            alloc_close_adt,
            alloc_close_bracket,
            alloc_close_call
          };

          assert(rasl->val2 <= ibCloseCall);
          if (! allocator[rasl->val2](elem)) {
            return cNoMemory;
          }
        }
        break;

      case icAllocString:
        {
          if (
            ! alloc_chars(
              bb, be,
              strings[rasl->val2].string, strings[rasl->val2].string_len
            )
          )
            return cNoMemory;
        }
        break;

      case icReinitChar:
        reinit_char(elem, static_cast<char>(rasl->val2));
        break;

      case icReinitFunc:
        reinit_name(elem, functions[rasl->val2]);
        break;

      case icReinitInt:
        reinit_number(elem, static_cast<RefalNumber>(rasl->val2));
        break;

      case icReinitHugeInt:
        reinit_number(elem, numbers[rasl->val2]);
        break;

      case icReinitIdent:
        reinit_ident(elem, idents[rasl->val2]);
        break;

      case icReinitBracket:
        {
          static void (*const reiniter[])(Iter res) = {
            reinit_open_adt,
            reinit_open_bracket,
            reinit_open_call,
            reinit_close_adt,
            reinit_close_bracket,
            reinit_close_call
          };
          assert(rasl->val2 <= ibCloseCall);
          reiniter[rasl->val2](elem);
        }
        break;

      case icReinitClosureHead:
        elem->tag = refalrts::cDataClosureHead;
        elem->number_info = 1;
        break;

      case icReinitUnwrappedClosure:
        elem->tag = cDataUnwrappedClosure;
        elem->link_info = context[rasl->val1];
        break;

      case icUpdateChar:
        update_char(elem, static_cast<char>(rasl->val2));
        break;

      case icUpdateFunc:
        update_name(elem, functions[rasl->val2]);
        break;

      case icUpdateInt:
        update_number(elem, static_cast<RefalNumber>(rasl->val2));
        break;

      case icUpdateHugeInt:
        update_number(elem, numbers[rasl->val2]);
        break;

      case icUpdateIdent:
        update_ident(elem, idents[rasl->val2]);
        break;

      case icLinkBrackets:
        link_brackets(context[rasl->val1], context[rasl->val2]);
        break;

      case icPushStack:
        ::refalrts::vm::push_stack(elem);
        break;

      case icSpliceElem:
        res = splice_elem(res, elem);
        break;

      case icSpliceEVar:
        res = splice_evar(res, bb, be);
        break;

      case icSpliceSTVar:
        res = splice_stvar(res, elem);
        break;

      case icSpliceRange:
        res = splice_evar(res, bb, be);
        break;

      case icSpliceTile:
        res = splice_evar(res, context[rasl->val1], context[rasl->val2]);
        break;

      case icSpliceToFreeList:
        splice_to_freelist(begin, end);
        break;

      case icNextStep:
        {
          profiler::stop_function();
          ++ g_step_counter;

#ifdef STEP_LIMIT
          if (g_step_counter >= STEP_LIMIT) {
            return cStepLimit;
          }
#endif // ifdef STEP_LIMIT

          if (empty_stack()) {
            return cSuccess;    // УСПЕШНОЕ ЗАВЕРШЕНИЕ ГЛАВНОГО ЦИКЛА
          }

          begin = pop_stack();
          assert(! empty_stack());
          end = pop_stack();

          g_error_begin = begin;
          g_error_end = end;

#if SHOW_DEBUG
          if (g_step_counter >= (unsigned) SHOW_DEBUG) {
            make_dump(begin, end);
          }
#endif // if SHOW_DEBUG

          refalrts::Iter function = next(begin);
          FnResult res;
          if (cDataFunction == function->tag) {
            callee = function->function_info;
            res = cSuccess;
          } else if (cDataClosure == function->tag) {
            refalrts::Iter head = function->link_info;

#ifdef ENABLE_DEBUGGER
            if (debugger.handle_function_call(begin, end, 0) == cExit) {
              return cExit;
            }
#endif  // ifdef ENABLE_DEBUGGER

            if (1 == head->number_info) {
              /*
                Пользуемся тем, что при развёртке содержимое замыкания
                оказывается в поле зрения между головой и (развёрнутым!) узлом
                замыкания.
                Во избежание проблем, связанным с помещением развёрнутого
                замыкания в список свободных блоков, проинициализируем его
                как голову замыкания.
              */
              unwrap_closure(function);
              function->tag = cDataClosureHead;
              function->number_info = 73501505; // :-)
              splice_to_freelist(function, function);
              splice_to_freelist(head, head);
              res = cSuccess;
            } else {
              refalrts::Iter begin_argument = next(function);
              refalrts::Iter closure_b = 0;
              refalrts::Iter closure_e = 0;

              if (! copy_evar(closure_b, closure_e, next(head), prev(head))) {
                res = cNoMemory;
              } else {
                list_splice(begin_argument, closure_b, closure_e);
                splice_to_freelist(function, function);
                res = cSuccess;
              }
            }

            if (res == cSuccess) {
              ++ g_step_counter;
              function = next(begin);
              assert(cDataFunction == function->tag);
              callee = function->function_info;
            }
          } else {
            res = cRecognitionImpossible;
          }

          if (res != cSuccess) {
            return res;
          }
          rasl = callee->rasl;
          stack_top = 0;
        }
        continue;       // избегаем ++rasl в конце цикла

      case icTrashLeftEdge:
        splice_to_freelist_open(trash_prev, res);
        break;

      case icTrash:
        splice_to_freelist_open(context[rasl->bracket], res);
        break;

      case icFail:
        MATCH_FAIL;

      case icFetchSwapHead:
        {
          assert(RefalSwap::run == elem->function_info->rasl);
          assert(elem->function_info == callee);
          RefalSwap *swap = static_cast<RefalSwap*>(callee);

          if (! swap->head) {
            swap->head = initialize_swap_head(elem);
          }
          swap_head = swap->head;
        }
        break;

      case icFetchSwapInfoBounds:
        {
          assert(cDataSwapHead == swap_head->tag);

          RefalSwap *swap = static_cast<RefalSwap*>(swap_head->function_info);
          res_b = swap_head;
          res_e = swap->next_head;
          move_left(res_b, res_e);
          move_right(res_b, res_e);
        }
        break;

      case icSwapSave:
        {
          assert(cDataSwapHead == swap_head->tag);

          RefalSwap *swap = static_cast<RefalSwap*>(swap_head->function_info);
          list_splice(swap->next_head, bb, be);
        }
        break;

      case icPerformNative:
        {
#ifdef ENABLE_DEBUGGER
          if (debugger.handle_function_call(begin, end, callee) == cExit) {
            return cExit;
          }
#endif  // ifdef ENABLE_DEBUGGER
          RefalNativeFunction *native_callee =
            static_cast<RefalNativeFunction*>(callee);
          FnResult res = (native_callee->ptr)(begin, end);
          if (res != cSuccess) {
            return res;
          }
        }
        break;

      case icWrapClosure:
        wrap_closure(elem);
        break;

      case icEnd:
      default:
        refalrts_switch_default_violation(rasl->cmd);
    }
    ++rasl;
  }
}


refalrts::RefalFunction *refalrts::functions[] = { 0 };
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
#endif // ifdef ENABLE_DEBUGGER

  refalrts::vm::g_argc = argc;
  refalrts::vm::g_argv = argv;

  refalrts::FnResult res;
  try {
    refalrts::profiler::start_profiler();
    res = refalrts::vm::run();
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

  refalrts::profiler::end_profiler();
  refalrts::vm::free_view_field();
  refalrts::allocator::free_memory();

  fflush(stdout);

  switch(res) {
    case refalrts::cSuccess:
      return 0;

    case refalrts::cRecognitionImpossible:
      return 101;

    case refalrts::cNoMemory:
      return 102;

    case refalrts::cExit:
      return refalrts::vm::g_ret_code;

    case refalrts::cStepLimit:
      return 103;

    default:
      fprintf(stderr, "INTERNAL ERROR: check switch in main (res = %d)\n", res);
      return 105;
  }
}
