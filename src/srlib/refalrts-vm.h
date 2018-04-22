#ifndef RefalRTS_VM_H_
#define RefalRTS_VM_H_

#include <stdio.h>

#include "refalrts.h"


//==============================================================================
// Виртуальная машина
//==============================================================================

namespace refalrts {

class VM {
  struct StateRefalMachine;

  NodePtr m_left_swap_ptr;
  int m_ret_code;
  char **m_argv;
  unsigned int m_argc;
  Node m_first_marker;
  Node m_last_marker;
  Iter m_error_begin;
  Iter m_error_end;
  unsigned m_step_counter;
  NodePtr m_stack_ptr;
  StateRefalMachine *m_private_state_stack_free;
  StateRefalMachine *m_private_state_stack_stack;

public:
  template <typename T>
  class Stack {
    // Запрет копирования
    Stack(const Stack<T> &obj);
    Stack& operator=(const Stack<T> &obj);

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

    void swap(Stack<T>& other) {
      swap(m_memory, other.m_memory);
      swap(m_size, other.m_size);
      swap(m_capacity, other.m_capacity);
    }

  private:
    T *m_memory;
    size_t m_size;
    size_t m_capacity;

    template <typename U>
    static void swap(U& x, U& y) {
      U old_x = x;
      x = y;
      y = old_x;
    }
  };

private:
  struct StateRefalMachine {
    refalrts::RefalFunction *callee;
    refalrts::Iter begin; /* нужно для icSetResArgBegin в startup_rasl */
    refalrts::Iter end;
    const refalrts::RASLCommand *rasl;
    refalrts::FunctionTableItem *functions;
    const refalrts::RefalIdentifier *idents;
    const refalrts::RefalNumber *numbers;
    const refalrts::StringItem *strings;

    Stack<const refalrts::RASLCommand*> open_e_stack;
    Stack<refalrts::Iter> context;

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

public:
  VM();

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

  void push_stack(refalrts::Iter call_bracket);
  refalrts::Iter pop_stack();
  bool empty_stack();

  refalrts::FnResult run();
  refalrts::FnResult main_loop(const RASLCommand *rasl);
  void make_dump(refalrts::Iter begin, refalrts::Iter end);
  FILE* dump_stream();

  void free_view_field();

  Iter initialize_swap_head(refalrts::Iter head);
  static void print_seq(
    FILE *output, refalrts::Iter begin, refalrts::Iter end,
    bool multiline = true, unsigned max_node = -1
  );

  void free_states_stack();
};

inline VM::VM()
  : m_left_swap_ptr(& m_last_marker)
  , m_ret_code(0)
  , m_argv(0)
  , m_argc(0)
  , m_first_marker(0, & m_last_marker)
  , m_last_marker(& m_first_marker, 0)
  , m_error_begin(& m_first_marker)
  , m_error_end(& m_last_marker)
  , m_step_counter(0)
  , m_stack_ptr(0)
  , m_private_state_stack_free(0)
  , m_private_state_stack_stack(0)
{
  /* пусто */
}

extern VM g_vm;

}  // namespace refalrts

#endif  // RefalRTS_VM_H_
