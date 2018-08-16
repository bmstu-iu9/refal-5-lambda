#ifndef RefalRTS_UTILS_H_
#define RefalRTS_UTILS_H_

#include "refalrts.h"

#if 1
#  define VALID_LINKED(iter)
#else
#  define VALID_LINKED(iter) valid_linked_aux(#iter, iter);

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
#endif


namespace {

refalrts::Iter next(refalrts::Iter current) {
  return current->next;
}

refalrts::Iter prev(refalrts::Iter current) {
  return current->prev;
}

inline bool is_open_bracket(refalrts::Iter node) {
  return (refalrts::cDataOpenBracket == node->tag)
    || (refalrts::cDataOpenADT == node->tag);
}

inline bool is_close_bracket(refalrts::Iter node) {
  return (refalrts::cDataCloseBracket == node->tag)
    || (refalrts::cDataCloseADT == node->tag);
}

void link_adjacent(refalrts::Iter left, refalrts::Iter right) {
  if (left != 0) {
    left->next = right;
  }

  if (right != 0) {
    right->prev = left;
  }
}

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

#endif  // RefalRTS_UTILS_H_
