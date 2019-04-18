#ifndef RefalRTS_UTILS_H_
#define RefalRTS_UTILS_H_

#include "refalrts.h"


namespace {

inline bool is_open_bracket(refalrts::Iter node) {
  return (refalrts::cDataOpenBracket == node->tag)
    || (refalrts::cDataOpenADT == node->tag);
}

inline bool is_close_bracket(refalrts::Iter node) {
  return (refalrts::cDataCloseBracket == node->tag)
    || (refalrts::cDataCloseADT == node->tag);
}

inline void weld(refalrts::Iter left, refalrts::Iter right) {
  left->next = right;
  right->prev = left;
}

refalrts::Iter list_splice(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {
  if ((res == begin) || refalrts::empty_seq(begin, end)) {
    // Цель достигнута сама по себе
    return res;
  } else if (res == end->next) {
    // Цель достигнута сама по себе
    return begin;
  } else {
    refalrts::Iter prev_res = res->prev;
    refalrts::Iter prev_begin = begin->prev;
    refalrts::Iter next_end = end->next;

    weld(prev_res, begin);
    weld(end, res);
    weld(prev_begin, next_end);
  }

  return begin;
}

} // unnamed namespace

#endif  // RefalRTS_UTILS_H_
