#ifndef RefalRTS_VM_H_
#define RefalRTS_VM_H_

#include <assert.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

#include "refalrts.h"
#include "refalrts-diagnostic-config.h"
#include "refalrts-functions.h"
#include "refalrts-utils.h"
#include "refalrts-vm-api.h"
#include "refalrts-vm-base.h"


//==============================================================================
// Виртуальная машина
//==============================================================================

namespace refalrts {

class Domain;
class Module;
class Profiler;
class VM;

typedef Debugger *(*DebuggerFactory)(VM *vm);

class VM : public VMbase {
  struct StateRefalMachine;

  int m_ret_code;
  char **m_argv;
  unsigned int m_argc;
  Node m_first_marker;
  Node m_last_marker;
  Node m_begin_free_list;
  Node m_end_free_list;
  Iter m_error_begin;
  Iter m_error_end;
  Iter m_free_ptr;
  unsigned m_step_counter;
  NodePtr m_stack_ptr;
  StateRefalMachine *m_private_state_stack_free;
  StateRefalMachine *m_private_state_stack_stack;

public:
  struct StackState {
    size_t top;
    size_t bottom;

    StackState(size_t top = 0, size_t bottom = 0)
      : top(top), bottom(bottom)
    {
      /* пусто */
    }
  };

  template <typename T>
  class Stack {
    // Запрет копирования
    Stack(const Stack<T> &obj);
    Stack& operator=(const Stack<T> &obj);

  public:
    Stack(const char *name)
      : m_memory(0)
      , m_bottom(0)
      , m_top(0)
      , m_capacity(0)
      , m_name(name)
    {
      /* пусто */
    }

    ~Stack() {
      free(m_memory);
    }

    T* reserve(size_t size);

    void push_state(StackState& state) {
      state.top = m_top;
      state.bottom = m_bottom;
      m_bottom = m_top;
    }

    T* pop_state(StackState state) {
      m_top = state.top;
      m_bottom = state.bottom;
      return m_memory + m_bottom;
    }

  private:
    T *m_memory;
    size_t m_bottom;
    size_t m_top;
    size_t m_capacity;
    const char *m_name;

    size_t max(size_t x, size_t y) {
      return (x > y ? x : y);
    }
  };

  Stack<const RASLCommand*> m_open_e_stack;
  Stack<Iter> m_context;

private:
  struct StateRefalMachine {
    refalrts::RefalFunction *callee;
    refalrts::Iter begin;
    refalrts::Iter end;
    const refalrts::RASLCommand *rasl;
    RefalFunction **functions;
    const refalrts::RefalIdentifier *idents;
    const refalrts::RefalNumber *numbers;
    const refalrts::StringItem *strings;
    StackState open_e_stack_state;
    StackState context_state;
    refalrts::Iter res;
    refalrts::Iter trash_prev;
    int stack_top;

    StateRefalMachine()
      :next(0)
    {
      /* пусто */
    }

    ~StateRefalMachine() {}

    StateRefalMachine *next;
  };

  StateRefalMachine *states_stack_alloc();
  void states_stack_free(StateRefalMachine *state);

  StateRefalMachine *states_stack_pop();
  void states_stack_push(StateRefalMachine *state);

  DebuggerFactory m_create_debugger;
  Debugger *m_debugger;

  class NullDebugger;
  static Debugger* create_null_debugger(VM *vm);

  Profiler *m_profiler;
  Domain *m_domain;
  Module *m_module;
  DiagnosticConfig *m_diagnostic_config;
  FILE *m_dump_stream;
  bool m_hide_steps;

  jmp_buf *m_memory_fail;

public:
  VM(
    const VMapi *api, Profiler *profiler, Domain *domain,
    DiagnosticConfig *diagnostic_config
  );
  ~VM();

  int get_return_code() const {
    return m_ret_code;
  }

  void set_return_code(int code) {
    m_ret_code = code;
  }

  const char* arg(unsigned int param);

  void set_args(int argc, char **argv) {
    m_argc = argc;
    m_argv = argv;
  }

  unsigned step_counter() const {
    return m_step_counter;
  }

  Iter stack_ptr() const {
    return m_stack_ptr;
  }

  refalrts::Iter pop_stack();
  bool empty_stack();

  FnResult execute_zero_arity_function(RefalFunction *func, Iter pos = 0);
  FnResult main_loop(const RASLCommand *rasl);
  void make_dump(refalrts::Iter begin, refalrts::Iter end);
  FILE* dump_stream();

  void free_view_field();

  void print_seq(
    FILE *output, refalrts::Iter begin, refalrts::Iter end,
    bool multiline = true, unsigned max_node = -1
  );

  void free_states_stack();

  void set_debugger_factory(DebuggerFactory debugger_factory) {
    if (! debugger_factory) {
      debugger_factory = create_null_debugger;
    }
    m_create_debugger = debugger_factory;
  }

  void read_counters(double counters[]);

  Profiler *profiler() const {
    return m_profiler;
  }

  Domain *domain() const {
    return m_domain;
  }

  Module *module() const {
    return m_module;
  }

public:
  // Операции сопоставления с образцом

  static Iter next(Iter current) {
    return current->next;
  }

  static Iter prev(Iter current) {
    return current->prev;
  }

  static void move_left(Iter& first, Iter& last) {
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

  static void move_right(Iter& first, Iter& last) {
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

  static bool empty_seq(Iter first, Iter last) {
    // assert((first == 0) == (last == 0));
    if (first == 0) assert (last == 0);
    if (first != 0) assert (last != 0);

    return (first == 0) && (last == 0);
  }

  static bool function_term(const RefalFunction *func, Iter pos) {
    return (pos->tag == cDataFunction) && (pos->function_info == func);
  }

  static Iter function_left(const RefalFunction *fn, Iter& first, Iter& last) {
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

  static Iter function_right(const RefalFunction *fn, Iter& first, Iter& last) {
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

  static bool char_term(char ch, Iter& pos) {
    return (pos->tag == cDataChar) && (pos->char_info == ch);
  }

  static Iter char_left(char ch, Iter& first, Iter& last) {
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

  static Iter char_right(char ch, Iter& first, Iter& last) {
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

  static bool number_term(RefalNumber num, Iter& pos) {
      return (pos->tag == cDataNumber) && (pos->number_info == num);
  }

  static Iter number_left(RefalNumber num, Iter& first, Iter& last) {
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

  static Iter number_right(RefalNumber num, Iter& first, Iter& last) {
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

  static bool ident_term(RefalIdentifier ident, Iter& pos) {
    return (pos->tag == cDataIdentifier) && (pos->ident_info == ident);
  }

  static Iter ident_left(RefalIdentifier ident, Iter& first, Iter& last) {
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

  static Iter ident_right(RefalIdentifier ident, Iter& first, Iter& last) {
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

  static bool brackets_term(Iter& res_first, Iter& res_last, Iter& pos) {
    if (pos->tag != cDataOpenBracket) {
      return false;
    }

    Iter right_bracket = pos->link_info;

    if (next(pos) != right_bracket) {
      res_first = next(pos);
      res_last = prev(right_bracket);
    } else {
      res_first = 0;
      res_last = 0;
    }

    return true;
  }

  static Iter brackets_left(
    Iter& res_first, Iter& res_last, Iter& first, Iter& last
  ) {
    assert((first == 0) == (last == 0));

    if (empty_seq(first, last)) {
      return 0;
    } else if (cDataOpenBracket != first->tag) {
      return 0;
    } else {
      Iter left_bracket = first;
      Iter right_bracket = left_bracket->link_info;

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

  static Iter brackets_right(
    Iter& res_first, Iter& res_last, Iter& first, Iter& last
  ) {
    assert((first == 0) == (last == 0));

    if (empty_seq(first, last)) {
      return 0;
    } else if (cDataCloseBracket != last->tag) {
      return 0;
    } else {
      Iter right_bracket = last;
      Iter left_bracket = right_bracket->link_info;

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

  static void bracket_pointers(Iter left_bracket, Iter& right_bracket) {
    right_bracket = left_bracket->link_info;
  }

  static Iter adt_term(
    Iter& res_first, Iter& res_last, const RefalFunction *tag, Iter pos
  ) {
    if (pos->tag != cDataOpenADT) {
      return 0;
    }

    Iter adt_tag = next(pos);

    assert (adt_tag->tag == cDataFunction);
    if (adt_tag->function_info != tag) {
      return 0;
    }

    Iter right_bracket = pos->link_info;

    if (next(adt_tag) != right_bracket) {
      res_first = next(adt_tag);
      res_last = prev(right_bracket);
    } else {
      res_first = 0;
      res_last = 0;
    }

    return adt_tag;
  }

  static Iter adt_left(
    Iter& res_first, Iter& res_last,
    const RefalFunction *tag,
    Iter& first, Iter& last
  ) {
    assert((first == 0) == (last == 0));

    if (empty_seq(first, last)) {
      return 0;
    } else if (cDataOpenADT != first->tag) {
      return 0;
    } else {
      Iter left_bracket = first;
      Iter right_bracket = left_bracket->link_info;
      Iter pnext = next(left_bracket);

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

  static Iter adt_right(
    Iter& res_first, Iter& res_last,
    const RefalFunction *tag,
    Iter& first, Iter& last
  ) {
    assert((first == 0) == (last == 0));

    if (empty_seq(first, last)) {
      return 0;
    } else if (cDataCloseADT != last->tag) {
      return 0;
    } else {
      Iter right_bracket = last;
      Iter left_bracket = right_bracket->link_info;
      Iter pnext = next(left_bracket);

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

  static void adt_pointers(Iter left_bracket, Iter& tag, Iter& right_bracket) {
    Iter pnext = next(left_bracket);
    tag = pnext;
    right_bracket = left_bracket->link_info;
  }

  static Iter call_left(
    Iter& res_first, Iter& res_last, Iter first, Iter last
  ) {
    assert((first != 0) && (last != 0));
    assert(cDataOpenCall == first->tag);

    Iter left_bracket = first;
    Iter right_bracket = last;
    Iter function = next(left_bracket);

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

  static void call_pointers(Iter left_bracket, Iter& tag, Iter& right_bracket) {
    Iter pnext = next(left_bracket);
    tag = pnext;
    right_bracket = left_bracket->link_info;
  }

  static bool svar_term(Iter pos) {
    return ! is_open_bracket(pos);
  }

  static bool svar_left(Iter& svar, Iter& first, Iter& last) {
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

  static bool svar_right(Iter& svar, Iter& first, Iter& last) {
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

  static Iter tvar_left(Iter& tvar, Iter& first, Iter& last) {
    assert((first == 0) == (last == 0));

    if (empty_seq(first, last)) {
      return 0;
    } else if (is_open_bracket(first)) {
      Iter right_bracket = first->link_info;

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

  static Iter tvar_right(Iter& tvar, Iter& first, Iter& last) {
    assert((first == 0) == (last == 0));

    if (empty_seq(first, last)) {
      return 0;
    } else if (is_close_bracket(last)) {
      Iter right_bracket = last;
      Iter left_bracket = right_bracket->link_info;

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

  static bool equal_nodes(Iter node1, Iter node2);

private:
  bool equal_expressions(Iter first1, Iter last1, Iter first2, Iter last2);

public:

  bool repeated_stvar_term(Iter stvar_sample, Iter pos) {
    if (svar_term(stvar_sample)) {
      return svar_term(pos) && equal_nodes(pos, stvar_sample);
    } else if (is_open_bracket(pos)) {
      Iter pos_e = pos->link_info;
      Iter stvar_sample_e = stvar_sample->link_info;

      return equal_expressions(stvar_sample, stvar_sample_e, pos, pos_e);
    } else {
      return false;
    }
  }

  Iter repeated_stvar_left(
    Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
  );

  Iter repeated_stvar_right(
    Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
  );

  bool repeated_evar_left(
    Iter& evar_b, Iter& evar_e,
    Iter evar_b_sample, Iter evar_e_sample,
    Iter& first, Iter& last
  );

  bool repeated_evar_right(
    Iter& evar_b, Iter& evar_e,
    Iter evar_b_sample, Iter evar_e_sample,
    Iter& first, Iter& last
  );

  static bool open_evar_advance(
    Iter& evar_b, Iter& evar_e, Iter& first, Iter& last
  ) {
    assert((evar_b == 0) == (evar_e == 0));

    Iter prev_first = 0;

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

  // Операции построения результата

  void reset_allocator();
  void copy_node(Iter& res, Iter sample);

private:

  void reset_allocator_aux() {
    m_free_ptr = m_begin_free_list.next;
  }

  void copy_nonempty_evar(
    Iter& evar_res_b, Iter& evar_res_e, Iter evar_b_sample, Iter evar_e_sample
  );

public:

  void copy_evar(
    Iter& evar_res_b, Iter& evar_res_e,
    Iter evar_b_sample, Iter evar_e_sample
  ) {
    if (empty_seq(evar_b_sample, evar_e_sample)) {
      evar_res_b = 0;
      evar_res_e = 0;
    } else {
      copy_nonempty_evar(evar_res_b, evar_res_e, evar_b_sample, evar_e_sample);
    }
  }

  void copy_stvar(Iter& stvar_res, Iter stvar_sample) {
    if (is_open_bracket(stvar_sample)) {
      Iter end_of_sample = stvar_sample->link_info;
      Iter end_of_res;
      copy_evar(stvar_res, end_of_res, stvar_sample, end_of_sample);
    } else {
      copy_node(stvar_res, stvar_sample);
    }
  }

  // TODO: а нафига она нужна?
  void alloc_copy_evar(Iter& res, Iter evar_b_sample, Iter evar_e_sample) {
    if (empty_seq(evar_b_sample, evar_e_sample)) {
      res = 0;
    } else {
      Iter res_e = 0;
      copy_nonempty_evar(res, res_e, evar_b_sample, evar_e_sample);
    }
  }

private:

  void alloc_node(Iter& res);
  void ensure_memory() {
    if ((m_free_ptr == & m_end_free_list) && ! create_nodes()) {
      longjmp (*m_memory_fail, 1);
    }
  }
  bool create_nodes();

public:

  void alloc_char(Iter& res, char ch) {
    alloc_node(res);
    res->tag = cDataChar;
    res->char_info = ch;
  }

  void alloc_number(Iter& res, RefalNumber num) {
    alloc_node(res);
    res->tag = cDataNumber;
    res->number_info = num;
  }

  void alloc_name(Iter& res, RefalFunction *fn) {
    alloc_node(res);
    res->tag = cDataFunction;
    res->function_info = fn;
  }

  void alloc_ident(Iter& res, RefalIdentifier ident) {
    alloc_node(res);
    res->tag = cDataIdentifier;
    res->ident_info = ident;
  }

private:

  void alloc_some_bracket(Iter& res, DataTag tag) {
    alloc_node(res);
    res->tag = tag;
}

public:

  void alloc_open_adt(Iter& res) {
    alloc_some_bracket(res, cDataOpenADT);
  }

  void alloc_close_adt(Iter& res) {
    alloc_some_bracket(res, cDataCloseADT);
  }

  void alloc_open_bracket(Iter& res) {
    alloc_some_bracket(res, cDataOpenBracket);
  }

  void alloc_close_bracket(Iter& res) {
    alloc_some_bracket(res, cDataCloseBracket);
  }

  void alloc_open_call(Iter& res) {
    alloc_some_bracket(res, cDataOpenCall);
  }

  void alloc_close_call(Iter& res) {
    alloc_some_bracket(res, cDataCloseCall);
  }

  void alloc_closure_head(Iter& res) {
    alloc_node(res);
    res->tag = cDataClosureHead;
    res->number_info = 1;
  }

  void alloc_unwrapped_closure(Iter& res, Iter head) {
    alloc_node(res);
    res->tag = cDataUnwrappedClosure;
    res->link_info = head;
  }

  void alloc_chars(
    Iter& res_b, Iter& res_e, const char buffer[], unsigned buflen
  );

  void alloc_string(Iter& res_b, Iter& res_e, const char *string);

  jmp_buf* reset_memory_fail(jmp_buf *new_buf) {
    jmp_buf *old = m_memory_fail;
    m_memory_fail = new_buf;
    return old;
  }

  void push_stack(Iter call_bracket) {
    call_bracket->link_info = m_stack_ptr;
    m_stack_ptr = call_bracket;
  }

  static void link_brackets(Iter left, Iter right) {
    left->link_info = right;
    right->link_info = left;
  }

  static void reinit_svar(Iter res, Iter sample);

  static void reinit_char(Iter res, char ch) {
    res->tag = cDataChar;
    res->char_info = ch;
  }

  static void update_char(Iter res, char ch) {
    res->char_info = ch;
  }

  static void reinit_number(Iter res, RefalNumber num) {
    res->tag = cDataNumber;
    res->number_info = num;
  }

  static void update_number(Iter res, RefalNumber num) {
    res->number_info = num;
  }

  static void reinit_name(Iter res, RefalFunction *func) {
    res->tag = cDataFunction;
    res->function_info = func;
  }

  static void update_name(Iter res, RefalFunction *func) {
    res->function_info = func;
  }

  static void reinit_ident(Iter res, RefalIdentifier ident) {
    res->tag = cDataIdentifier;
    res->ident_info = ident;
  }

  static void update_ident(Iter res, RefalIdentifier ident) {
    res->ident_info = ident;
  }

  static void reinit_open_bracket(Iter res) {
    res->tag = cDataOpenBracket;
  }

  static void reinit_close_bracket(Iter res) {
    res->tag = cDataCloseBracket;
  }

  static void reinit_open_adt(Iter res) {
    res->tag = cDataOpenADT;
  }

  static void reinit_close_adt(Iter res) {
    res->tag = cDataCloseADT;
  }

  static void reinit_open_call(Iter res) {
    res->tag = cDataOpenCall;
  }

  static void reinit_close_call(Iter res) {
    res->tag = cDataCloseCall;
  }

  static void reinit_closure_head(Iter res) {
    res->tag = cDataClosureHead;
    res->number_info = 1;
  }

  static void reinit_unwrapped_closure(Iter res, Iter head) {
    res->tag = cDataUnwrappedClosure;
    res->link_info = head;
  }

  static Iter splice_elem(Iter res, Iter elem) {
    return list_splice(res, elem, elem);
  }

  static Iter splice_stvar(Iter res, Iter var) {
    Iter var_end;
    if (is_open_bracket(var)) {
      var_end = var->link_info;
    } else {
      var_end = var;
    }

    return list_splice(res, var, var_end);
  }

  static Iter splice_evar(Iter res, Iter begin, Iter end) {
    return list_splice(res, begin, end);
  }

  void splice_to_freelist(Iter begin, Iter end);
  Iter splice_from_freelist(Iter pos);
};

class Debugger {
public:
  virtual ~Debugger() {}

  virtual void set_context(Iter *context) = 0;
  virtual void set_string_items(const StringItem *items) = 0;
  virtual void insert_var(const RASLCommand *next) = 0;

  virtual FnResult handle_function_call(
    Iter begin, Iter end, RefalFunction *callee
  ) = 0;
};

inline VM::VM(
  const VMapi *api, Profiler *profiler, Domain *domain,
  DiagnosticConfig *diagnostic_config
)
  : VMbase(api)
  , m_ret_code(0)
  , m_argv(0)
  , m_argc(0)
  , m_first_marker(0, & m_last_marker)
  , m_last_marker(& m_first_marker, 0)
  , m_begin_free_list(0, & m_end_free_list)
  , m_end_free_list(& m_begin_free_list, 0)
  , m_error_begin(& m_first_marker)
  , m_error_end(& m_last_marker)
  , m_free_ptr(& m_end_free_list)
  , m_step_counter(0)
  , m_stack_ptr(0)
  , m_private_state_stack_free(0)
  , m_private_state_stack_stack(0)
  , m_open_e_stack("m_open_e_stack")
  , m_context("m_context")
  , m_create_debugger(create_null_debugger)
  , m_debugger(0)
  , m_profiler(profiler)
  , m_domain(domain)
  , m_module(0)
  , m_diagnostic_config(diagnostic_config)
  , m_dump_stream(0)
  , m_hide_steps(false)
  , m_memory_fail(0)
{
  /* пусто */
}

inline VM::~VM() {
  delete m_debugger;

  if (m_dump_stream != 0 && m_dump_stream != stderr) {
    fclose(m_dump_stream);
    m_dump_stream = 0;
  }
}

}  // namespace refalrts

#endif  // RefalRTS_VM_H_
