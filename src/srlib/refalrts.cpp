#include <errno.h>
#include <exception>
#include <map>
#include <new>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <time.h>

#include <assert.h>

#include "refalrts.h"

//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"

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
// Внутренние структуры данных
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

VM g_vm;


class Allocator {
  class Pool {
  public:  // BCC 5.5 не может скомпилировать с private
    enum { cChunkSize = 1000 };

  private:
    struct Chunk {
      Chunk *next;
      Node elems[cChunkSize];
    };

    typedef Chunk *ChunkPtr;

    ChunkPtr m_pool;
    unsigned m_avail;
    Node *m_pnext_node;

  public:
    Pool();

    NodePtr alloc_node();
    void free();
    bool grow();
  };

  Node m_first_marker;
  Node m_last_marker;
  NodePtr m_free_ptr;

  Pool m_pool;
  unsigned m_memory_use;

public:
  Allocator();

  void reset_allocator();
  bool alloc_node(Iter& node);
  Iter free_ptr();
  void splice_to_freelist(Iter begin, Iter end);
  Iter splice_from_freelist(Iter pos);
  void free_memory();

  unsigned memory_use() const {
    return m_memory_use;
  }

  // Используются только в отладочной печати
  NodePtr first_marker() {
    return & m_first_marker;
  }
  NodePtr last_marker() {
    return & m_last_marker;
  }

private:
  bool create_nodes();
};

inline Allocator::Pool::Pool()
  : m_pool(0)
  , m_avail(0)
  , m_pnext_node(0)
{
  /* пусто */
}

inline Allocator::Allocator()
  : m_first_marker(0, & m_last_marker)
  , m_last_marker(& m_first_marker, 0)
  , m_free_ptr(& m_last_marker)
  , m_pool()
  , m_memory_use(0)
{
  /* пусто */
}

Allocator g_allocator;


class Profiler {
public:
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

private:
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

  clock_t m_counters[cCounter_TOTAL];
  clock_t m_prev_cutoff;
  State m_current_state;

#ifndef DONT_PRINT_STATISTICS
  struct TimeItem {
    const char *name;
    unsigned long counter;
  };

  static int reverse_compare(const void *left_void, const void *right_void);
#endif // ifndef DONT_PRINT_STATISTICS

public:
  Profiler();

  void start_profiler();
  void end_profiler();
  void read_counters(unsigned long counters[]);

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
};

inline Profiler::Profiler()
  : m_prev_cutoff(0)
  , m_current_state(cInRuntime)
{
  memset(m_counters, '\0', sizeof(m_counters));
}

Profiler g_profiler;


// Использовать class, public и private нельзя — требуется статическая
// инициализация:
//   X x = { ... };
struct Dynamic {
  static UInt32 one_at_a_time(UInt32 init, const char *bytes, size_t length);

  template <typename Key>
  struct HashKeyTraits {
    /* ничего */
  };

  template <typename Key, typename Value>
  class DynamicHash {
    // Копирование запрещено
    DynamicHash(const DynamicHash&);
    DynamicHash& operator=(const DynamicHash&);
  public:
    DynamicHash();
    ~DynamicHash();

    size_t count() const {
      return m_count;
    }

    Value *alloc(Key key);
    Value *lookup(Key key);

  private:
    struct Node {
      UInt32 hash;
      Value value;
      typename DynamicHash<Key, Value>::Node *next;

      Node(UInt32 hash, Node *next)
        : hash(hash)
        , value()
        , next(next)
      {
        /* пусто */
      }
    };

    typedef typename DynamicHash<Key, Value>::Node *NodePtr;
    enum { cResizeThreshold = 4 };

    void rehash();

    Node **m_table;
    unsigned int m_table_power;
    size_t m_count;
  };

  struct IdentHashNode {
    RefalIdentDescr ident;
    const char *nonstatic_origin;

    IdentHashNode()
      : ident()
      , nonstatic_origin(0)
    {
      /* пусто */
    }

    void cleanup() {
      if (nonstatic_origin) {
        delete [] nonstatic_origin;
      }
    };

    const char *key() const {
      return ident.name();
    }
  };

  struct FuncHashNode {
    RefalFunction *function;

    FuncHashNode()
      : function(0)
    {
      /* пусто */
    }

    void cleanup() {
      // Деструкторов (в т.ч. неявных в функциях нет),
      // память выделялась только malloc’ом, поэтому освобождаем free()
      free(function);
    }

    RefalFuncName key() const {
      return function->name;
    }
  };

  struct ConstTable {
    UInt32 cookie1;
    UInt32 cookie2;
    FunctionTableItem *externals;
    FunctionTable *function_table;
    RefalIdentifier *idents;
    RefalNumber *numbers;
    StringItem *strings;
    RASLCommand *rasl;

    char *external_memory;
    char *idents_memory;
    char *strings_memory;

    ConstTable *next;

    RefalFuncName make_name(const char *name) const;
  };

  struct FunctionTable *m_unresolved_func_tables;
  DynamicHash<RefalFuncName, FuncHashNode> *m_funcs_table;
  struct ConstTable *m_tables;
  struct ExternalReference *m_unresolved_external_references;
  DynamicHash<const char *, IdentHashNode> *m_idents_table;

  // Нет конструктора, должен инициализироваться статически

  DynamicHash<const char *, IdentHashNode>& idents_table();

  size_t idents_count();

  void free_idents_table();
  IdentHashNode *alloc_ident_node(const char *name);

  DynamicHash<RefalFuncName, FuncHashNode>& funcs_table();
  unsigned find_unresolved_externals();
  void free_funcs_table();

  template <typename T>
  static T *malloc(size_t count = 1) {
    T *result = static_cast<T*>(::malloc(sizeof(T) * count));
    assert(count == 0 || result);
    return result;
  }

  void enumerate_blocks();
  void cleanup_module();

  bool seek_rasl_signature(FILE *stream);
  const char *read_asciiz(FILE *stream);
};

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

// Инициализация головного узла статического ящика

refalrts::Iter refalrts::VM::initialize_swap_head(refalrts::Iter head) {
  assert(cDataFunction == head->tag);
  assert(RefalSwap::run == head->function_info->rasl);

  RefalSwap *swap = static_cast<RefalSwap*>(head->function_info);
  splice_elem(m_left_swap_ptr, head);
  head->tag = cDataSwapHead;
  swap->next_head = m_left_swap_ptr;

  m_left_swap_ptr = head;
  return m_left_swap_ptr;
}

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

const char* refalrts::VM::arg(unsigned int param) {
  if (param < m_argc) {
    return m_argv[param];
  } else {
    return "";
  }
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
// Распределитель памяти
//==============================================================================

inline void refalrts::Allocator::reset_allocator() {
  m_free_ptr = m_first_marker.next;
}

bool refalrts::Allocator::alloc_node(refalrts::Iter& node) {
  if ((m_free_ptr == & m_last_marker) && ! create_nodes()) {
    return false;
  } else {
    if (refalrts::cDataClosure == m_free_ptr->tag) {
      refalrts::Iter head = m_free_ptr->link_info;
      -- head->number_info;

      if (0 == head->number_info) {
        unwrap_closure(m_free_ptr);
        // теперь перед m_free_ptr находится "развёрнутое" замыкание
        m_free_ptr->tag = refalrts::cDataClosureHead;
        m_free_ptr->number_info = 407193; // :-)

        m_free_ptr = head;
      }
    }

    node = m_free_ptr;
    m_free_ptr = next(m_free_ptr);
    node->tag = refalrts::cDataIllegal;
    return true;
  }
}

refalrts::Iter refalrts::Allocator::free_ptr() {
  return m_free_ptr;
}

void refalrts::Allocator::splice_to_freelist(
  refalrts::Iter begin, refalrts::Iter end
) {
  reset_allocator();
  m_free_ptr = list_splice(m_free_ptr, begin, end);
}

refalrts::Iter refalrts::Allocator::splice_from_freelist(refalrts::Iter pos) {
  if (m_free_ptr != m_first_marker.next) {
    return list_splice(pos, m_first_marker.next, m_free_ptr->prev);
  } else {
    return pos;
  }
}

bool refalrts::Allocator::create_nodes() {
  refalrts::NodePtr new_node = m_pool.alloc_node();

#ifdef MEMORY_LIMIT

  if (m_memory_use >= MEMORY_LIMIT) {
    return false;
  }

#endif // ifdef MEMORY_LIMIT

  if (new_node == 0) {
    return false;
  } else {
    refalrts::NodePtr before_free_ptr = prev(m_free_ptr);
    before_free_ptr->next = new_node;
    new_node->prev = before_free_ptr;

    m_free_ptr->prev = new_node;
    new_node->next = m_free_ptr;

    m_free_ptr = new_node;
    m_free_ptr->tag = refalrts::cDataIllegal;
    ++ m_memory_use;

    return true;
  }
}

void refalrts::Allocator::free_memory() {
  m_pool.free();
#ifndef DONT_PRINT_STATISTICS
  fprintf(
    stderr,
    "Memory used %d nodes, %d * %lu = %lu bytes\n",
    m_memory_use,
    m_memory_use,
    static_cast<unsigned long>(sizeof(Node)),
    static_cast<unsigned long>(m_memory_use * sizeof(Node))
  );
#endif // ifndef DONT_PRINT_STATISTICS
}

refalrts::NodePtr refalrts::Allocator::Pool::alloc_node() {
  if ((m_avail != 0) || grow()) {
    -- m_avail;
    return m_pnext_node++;
  } else {
    return 0;
  }
}

bool refalrts::Allocator::Pool::grow() {
  ChunkPtr p = static_cast<ChunkPtr>(malloc(sizeof(Chunk)));
  if (p != 0) {
    p->next = m_pool;
    m_pool = p;
    m_avail = cChunkSize;
    m_pnext_node = p->elems;
    return true;
  } else {
    return false;
  }
}

void refalrts::Allocator::Pool::free() {
  while (m_pool != 0) {
    ChunkPtr p = m_pool;
    m_pool = m_pool->next;
    ::free(p);
  }
}

//==============================================================================
// Упрощённый профилировщик
//==============================================================================

#ifndef NDEBUG
#define refalrts_profiler_assert_eq(variable, constant) \
  if ((variable) != (constant)) { \
    refalrts_switch_default_violation(variable); \
  }
#else
#define refalrts_profiler_assert_eq(variable, constant)
#endif


void refalrts::Profiler::start_profiler() {
  m_prev_cutoff = clock();
}

#ifndef DONT_PRINT_STATISTICS

int refalrts::Profiler::reverse_compare(
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

void refalrts::Profiler::start_generated_function() {
  clock_t now = clock();
  refalrts_profiler_assert_eq(m_current_state, cInRuntime);
  m_counters[cCounter_RuntimeTime] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInPatternLinear;
}

void refalrts::Profiler::stop_sentence() {
  clock_t now = clock();
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInPatternLinear;
}

void refalrts::Profiler::start_e_loop() {
  clock_t now = clock();
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInPatternELoop;
}

void refalrts::Profiler::start_repeated_evar() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      next = cInPatternRepeatedEVar;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      next = cInPatternELoopRepeatedEVar;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::start_repeated_tvar() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      next = cInPatternRepeatedTVar;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      next = cInPatternELoopRepeatedTVar;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::stop_repeated() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
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
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::start_result() {
  clock_t now = clock();
  State next = cInResultLinear;
  BaseCounter counter;

  switch (m_current_state) {
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
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::start_copy() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInRuntime:
      counter = cCounter_RuntimeTime;
      next = cInRuntimeCopy;
      break;

    case cInResultLinear:
      counter = cCounter_LinearResultTime;
      next = cInResultCopy;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::stop_copy() {
  clock_t now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInRuntimeCopy:
      next = cInRuntime;
      counter = cCounter_ContextCopyTime;
      break;

    case cInResultCopy:
      next = cInResultLinear;
      counter = cCounter_TEvarCopyTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::stop_function() {
  clock_t now = clock();
  BaseCounter counter;

  switch (m_current_state) {
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
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInRuntime;
}

void refalrts::Profiler::end_profiler() {
  // необходимо на случай аварийного останова, если функция сфейлилась
  // на последнем предложении с открытой e-переменной
  stop_function();
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

void refalrts::Profiler::read_counters(unsigned long counters[]) {
  clock_t basic_runtime_time = m_counters[cCounter_RuntimeTime];
  clock_t basic_native_time = m_counters[cCounter_NativeTime];
  clock_t basic_linear_pattern_time = m_counters[cCounter_LinearPatternTime];
  clock_t basic_repeated_evar_outside_ecycle =
    m_counters[cCounter_RepeatedEvarOutsideECycle];
  clock_t basic_repeated_tvar_outside_ecycle =
    m_counters[cCounter_RepeatedTvarOutsideECycle];
  clock_t basic_repeated_evar_inside_ecycle =
    m_counters[cCounter_RepeatedEvarInsideECycle];
  clock_t basic_repeated_tvar_inside_ecycle =
    m_counters[cCounter_RepeatedTvarInsideECycle];
  clock_t basic_context_copy_time = m_counters[cCounter_ContextCopyTime];
  clock_t basic_ecycle_clear_time = m_counters[cCounter_ECycleClearTime];
  clock_t basic_linear_result_time = m_counters[cCounter_LinearResultTime];
  clock_t basic_tevar_copy_time = m_counters[cCounter_TEvarCopyTime];

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
  counters[cPerformanceCounter_TotalSteps] = ::refalrts::g_vm.step_counter();
  counters[cPerformanceCounter_HeapSize] =
    static_cast<unsigned long>(
      ::refalrts::g_allocator.memory_use() * sizeof(Node)
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

  counters[cPerformanceCounter_IdentsAllocated] =
    static_cast<unsigned long>(::refalrts::g_dynamic.idents_count());
}

//==============================================================================
// Динамическое связывание
//==============================================================================

//------------------------------------------------------------------------------

// Хеш-таблица

template <typename Key, typename Value>
refalrts::Dynamic::DynamicHash<Key, Value>::DynamicHash()
  : m_table()
  , m_table_power(5)
  , m_count(0)
{
  size_t table_size = size_t(1) << m_table_power;
  m_table = new DynamicHash<Key, Value>::NodePtr[table_size];

  for (size_t i = 0; i < table_size; ++i) {
    m_table[i] = 0;
  }
}

template <typename Key, typename Value>
refalrts::Dynamic::DynamicHash<Key, Value>::~DynamicHash() {
  size_t table_size = size_t(1) << m_table_power;
  for (size_t i = 0; i < table_size; ++i) {
    Node *node = m_table[i];
    while (node != 0) {
      node->value.cleanup();
      Node *next = node->next;
      delete node;
      node = next;
    }
  }

  delete[] m_table;
  m_table = 0;
}

refalrts::UInt32 refalrts::Dynamic::one_at_a_time(
  UInt32 init, const char *bytes, size_t length
) {
  // Хеш-функция Дженкинса one_at_a_time.
  // Исходный код: http://www.burtleburtle.net/bob/hash/doobs.html
  UInt32 hash = init;
  for (size_t i = 0; i < length; ++i)
  {
    unsigned char byte = static_cast<unsigned char>(bytes[i]);
    hash += byte;
    hash += (hash << 10);
    hash ^= (hash >> 6);
  }
  hash += (hash << 3);
  hash ^= (hash >> 11);
  hash += (hash << 15);
  return hash;
}

template <typename Key, typename Value>
void refalrts::Dynamic::DynamicHash<Key, Value>::rehash() {
  // Хаки для Watcom
  using refalrts::UInt32;

  size_t table_size = size_t(1) << m_table_power;

  if (m_count / table_size < cResizeThreshold) {
    return;
  }

  unsigned int new_table_power = m_table_power + 1;
  size_t new_table_size = size_t(1) << new_table_power;
  UInt32 hash_mask = (UInt32(1) << new_table_power) - 1;
  Node **new_table = new DynamicHash<Key, Value>::NodePtr[new_table_size];

  for (size_t i = 0; i < new_table_size; ++i) {
    new_table[i] = 0;
  }

  for (size_t i = 0; i < table_size; ++i) {
    Node *node = m_table[i];
    while (node != 0) {
      Node *next_in_old_table = node->next;
      Node **pnext_in_new_table = &new_table[node->hash & hash_mask];
      node->next = *pnext_in_new_table;
      *pnext_in_new_table = node;
      node = next_in_old_table;
    }
  }

  m_table_power = new_table_power;
  m_table = new_table;
}

template <typename Key, typename Value>
Value * refalrts::Dynamic::DynamicHash<Key, Value>::alloc(Key key) {
  // Хаки для Watcom
  using refalrts::UInt32;

  rehash();

  UInt32 hash = HashKeyTraits<Key>::hash(key);
  UInt32 hash_mask = (UInt32(1) << m_table_power) - 1;

  Node **pstart_node = &m_table[hash & hash_mask];
  Node *return_node = *pstart_node;
  while (
    return_node != 0
    && (
      return_node->hash != hash
      || ! HashKeyTraits<Key>::equal(return_node->value.key(), key)
    )
  ) {
    return_node = return_node->next;
  }

  if (return_node == 0) {
    return_node = new Node(hash, *pstart_node);
    *pstart_node = return_node;
    ++m_count;
  }

  return &return_node->value;
}

template <typename Key, typename Value>
Value *refalrts::Dynamic::DynamicHash<Key, Value>::lookup(Key key) {
  // Хаки для Watcom
  using refalrts::UInt32;

  UInt32 hash = HashKeyTraits<Key>::hash(key);
  UInt32 hash_mask = (UInt32(1) << m_table_power) - 1;

  Node *return_node = m_table[hash & hash_mask];
  while (
    return_node != 0
    && (
      return_node->hash != hash
      || ! HashKeyTraits<Key>::equal(return_node->value.key(), key)
    )
  ) {
    return_node = return_node->next;
  }

  if (return_node != 0) {
    return &return_node->value;
  } else {
    return 0;
  }
}

//------------------------------------------------------------------------------

// Идентификаторы

namespace refalrts {

template <>
struct Dynamic::HashKeyTraits<const char*> {
  static UInt32 hash(const char *name) {
    size_t length = name ? strlen(name) : 0;
    return one_at_a_time(0, name, length);
  }

  static bool equal(const char *left, const char *right) {
    return strcmp(left, right) == 0;
  }
};

}  // namespace refalrts

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

refalrts::Dynamic::DynamicHash<const char *, refalrts::Dynamic::IdentHashNode>&
refalrts::Dynamic::idents_table() {
  if (m_idents_table == 0) {
    m_idents_table = new Dynamic::DynamicHash<const char *, IdentHashNode>;
  }

  return *m_idents_table;
}

size_t refalrts::Dynamic::idents_count() {
  return idents_table().count();
}

void refalrts::Dynamic::free_idents_table() {
#ifndef DONT_PRINT_STATISTICS
  fprintf(
    stderr, "Identifiers allocated: %lu\n",
    static_cast<unsigned long>(idents_count())
  );
#endif // ifndef DONT_PRINT_STATISTICS

  delete m_idents_table;
}

refalrts::Dynamic::IdentHashNode *refalrts::Dynamic::alloc_ident_node(
  const char *name
) {
#ifdef IDENTS_LIMIT
  if (idents_count() >= IDENTS_LIMIT) {
    return 0;
  }
#endif // ifdef IDENTS_LIMIT
  return idents_table().alloc(name);
}

//------------------------------------------------------------------------------

// Функции

namespace refalrts {

template <>
struct Dynamic::HashKeyTraits<refalrts::RefalFuncName> {
  static UInt32 hash(const RefalFuncName& name) {
    size_t length = name.name ? strlen(name.name) : 0;
    return one_at_a_time(name.cookie1 ^ name.cookie2, name.name, length);
  }

  static bool equal(const RefalFuncName& left, const RefalFuncName& right) {
    return left.cookie1 == right.cookie1
      && left.cookie2 == right.cookie2
      && strcmp(left.name, right.name) == 0;
  }
};

}  // namespace refalrts

refalrts::Dynamic::DynamicHash<
  refalrts::RefalFuncName, refalrts::Dynamic::FuncHashNode
>&
refalrts::Dynamic::funcs_table() {
  if (m_funcs_table == 0) {
    m_funcs_table = new Dynamic::DynamicHash<RefalFuncName, FuncHashNode>;
  }

  return *m_funcs_table;
}

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

unsigned refalrts::Dynamic::find_unresolved_externals() {
  unsigned unresolved = 0;

  while (m_unresolved_func_tables != 0) {
    FunctionTable *table = m_unresolved_func_tables;
    FunctionTableItem *items = table->items;
    for (size_t i = 0; items[i].func_name != 0; ++i) {
      const char *str_name = items[i].func_name;
      char ch = *str_name;
      assert(ch == '*' || ch == '#');

      UInt32 cookie1 = 0;
      UInt32 cookie2 = 0;
      if (ch == '#') {
        cookie1 = table->cookie1;
        cookie2 = table->cookie2;
      }

      RefalFuncName name(str_name + 1, cookie1, cookie2);
      FuncHashNode *node = funcs_table().lookup(name);
      if (node != 0) {
        items[i].function = node->function;
      } else {
        fprintf(
          stderr, "INTERNAL ERROR: unresolved external %s#%u:%u\n",
          str_name + 1, cookie1, cookie2
        );
        ++unresolved;
      }
    }

    m_unresolved_func_tables = m_unresolved_func_tables->next;
  }

  while (m_unresolved_external_references != 0) {
    ExternalReference *er = m_unresolved_external_references;
    RefalFuncName name(er->ref.func_name, er->cookie1, er->cookie2);
    FuncHashNode *node = funcs_table().lookup(name);
    if (node != 0) {
      er->ref.function = node->function;
    } else {
      fprintf(
        stderr, "INTERNAL ERROR: unresolved external %s#%u:%u\n",
        er->ref.func_name, er->cookie1, er->cookie2
      );
      ++unresolved;
    }

    m_unresolved_external_references = m_unresolved_external_references->next;
  }

  return unresolved;
}

void refalrts::Dynamic::free_funcs_table() {
  delete m_funcs_table;
}

//------------------------------------------------------------------------------

// Загружаемый модуль

bool refalrts::Dynamic::seek_rasl_signature(FILE *stream) {
  int seek_res = fseek(stream, 0L, SEEK_END);
  if (seek_res != 0) {
    fprintf(stderr, "INTERNAL ERROR: can't seek in module\n");
    exit(155);
  }

  long int file_size = ftell(stream);
  if (file_size == -1L) {
    fprintf(
      stderr, "INTERNAL ERROR: filesize obtaining error %s\n",
      strerror(errno)
    );
    exit(155);
  }

  long int next_offset = 0L;
  bool found = false;
  while (next_offset < file_size && ! found) {
    seek_res = fseek(stream, next_offset, SEEK_SET);
    if (seek_res != 0) {
      fprintf(stderr, "INTERNAL ERROR: can't seek in module\n");
      exit(155);
    }

    static char sample_sig[] = {
      '\x00', '\x08', '\0', '\0', '\0', 'R', 'A', 'S', 'L', 'C', 'O', 'D', 'E'
    };
    sample_sig[0] = cBlockTypeStart;
    char actual_sig[sizeof(sample_sig)];
    size_t read = fread(actual_sig, sizeof(actual_sig), 1, stream);
    if (read != 1) {
      fprintf(stderr, "INTERNAL ERROR: can't read bytes from module\n");
      exit(155);
    }

    found = memcmp(sample_sig, actual_sig, sizeof(sample_sig)) == 0;
    next_offset += 4096;
  }

  /*
    Позиция в файле после чтения сигнатуры будет в начале следующего блока,
    что вполне нормально для функции enumerate_blocks().
  */
  return found;
}

const char *refalrts::Dynamic::read_asciiz(FILE *stream) {
  enum { cINC_SIZE = 20 };

  size_t buflen = cINC_SIZE;
  char *buffer = static_cast<char *>(::malloc(buflen));
  assert(buffer);

  size_t buffoffset = 0;

  size_t read;
  do {
    read = fread(&buffer[buffoffset], 1, 1, stream);
    if (read) {
      ++buffoffset;
      if (buffoffset == buflen) {
        size_t new_buflen = buflen + cINC_SIZE;
        char *new_buffer = static_cast<char*>(::realloc(buffer, new_buflen));
        assert(new_buffer);

        buflen = new_buflen;
        buffer = new_buffer;
      }
    }
  } while (read == 1 && buffer[buffoffset - 1] != '\0');

  if (read == 1) {
    return buffer;
  } else {
    free(buffer);
    return 0;
  }
}

refalrts::RefalFuncName
refalrts::Dynamic::ConstTable::make_name(const char *name) const {
  char type = name[0];
  const char *proper_name = name + 1;

  assert(type == '*' || type == '#');
  if (type == '#') {
    return RefalFuncName(proper_name, cookie1, cookie2);
  } else {
    return RefalFuncName(proper_name, 0, 0);
  }
}

void refalrts::Dynamic::enumerate_blocks() {
  char module_name[api::cModuleNameBufferLen];

  bool successed = api::get_main_module_name(module_name);
  if (! successed) {
    fprintf(stderr, "INTERNAL ERROR: can't obtain name of main executable\n");
    exit(155);
  }

  ConstTable *table = 0;

  FILE *stream = fopen(module_name, "rb");
  if (! stream) {
    fprintf(stderr, "INTERNAL ERROR: can't open main executable for read\n");
    exit(155);
  }

  successed = seek_rasl_signature(stream);
  if (! successed) {
    fprintf(stderr, "INTERNAL ERROR: can't find signature in executable\n");
    exit(155);
  }

  unsigned char type;
  while (fread(&type, sizeof(type), 1, stream) == 1) {
    UInt32 datalen;

    size_t read = fread(&datalen, sizeof(datalen), 1, stream);
    assert(read == 1);      // TODO: сообщение об ошибке

    switch (type) {
      case cBlockTypeStart:
        {
          static const char sample[8] = {
            'R', 'A', 'S', 'L', 'C', 'O', 'D', 'E'
          };
          assert(sizeof(sample) == datalen);

          char signature[sizeof(sample)];
          read = fread(signature, 1, sizeof(signature), stream);
          assert(sizeof(signature) == read);
          assert(memcmp(sample, signature, sizeof(signature)) == 0);
        }
        break;

      case cBlockTypeConstTable:
        {
          struct {
            UInt32 cookie1;
            UInt32 cookie2;
            UInt32 external_count;
            UInt32 ident_count;
            UInt32 number_count;
            UInt32 string_count;
            UInt32 rasl_length;
            UInt32 external_size;
            UInt32 ident_size;
            UInt32 string_size;
          } fixed_part;

          read = fread(&fixed_part, sizeof(fixed_part), 1, stream);
          assert(read == 1);

          ConstTable *new_table = malloc<ConstTable>();
          assert(new_table);

          new_table->cookie1 = fixed_part.cookie1;
          new_table->cookie2 = fixed_part.cookie2;

          new_table->externals =
            malloc<FunctionTableItem>(fixed_part.external_count + 1);
          new_table->external_memory = malloc<char>(fixed_part.external_size);
          read = fread(
            new_table->external_memory, 1, fixed_part.external_size, stream
          );
          assert(read == fixed_part.external_size);
          const char *next_external_name = new_table->external_memory;
          for (size_t i = 0; i < fixed_part.external_count; ++i) {
            new_table->externals[i].func_name = next_external_name;
            // TODO: нужна проверка за выход из границ
            next_external_name += strlen(next_external_name) + 1;
          }
          new_table->externals[fixed_part.external_count] =
            static_cast<const char *>(0);
          new_table->function_table = new FunctionTable(
            fixed_part.cookie1, fixed_part.cookie2, new_table->externals
          );

          new_table->idents = malloc<RefalIdentifier>(fixed_part.ident_count);
          new_table->idents_memory = malloc<char>(fixed_part.ident_size);
          read = fread(
            new_table->idents_memory, 1, fixed_part.ident_size, stream
          );
          assert(read == fixed_part.ident_size);
          const char *next_ident_name = new_table->idents_memory;
          for (size_t i = 0; i < fixed_part.ident_count; ++i) {
            RefalIdentifier ident = ident_implode(next_ident_name);
#ifdef IDENTS_LIMIT
            if (! ident) {
              fprintf(
                stderr,
                "INTERNAL ERROR: Identifiers table overflows (max %ld)\n",
                static_cast<unsigned long>(IDENTS_LIMIT)
              );
              exit(154);
            }
#else
            assert(ident != 0);
#endif // ifdef IDENTS_LIMIT
            new_table->idents[i] = ident;
            // TODO: нужна проверка за выход из границ
            next_ident_name += strlen(next_ident_name) + 1;
          }

          new_table->numbers = malloc<RefalNumber>(fixed_part.number_count);
          read = fread(
            new_table->numbers, sizeof(RefalNumber), fixed_part.number_count,
            stream
          );
          assert(read == fixed_part.number_count);

          new_table->strings = malloc<StringItem>(fixed_part.string_count);
          new_table->strings_memory = malloc<char>(fixed_part.string_size);
          char *string_target = new_table->strings_memory;
          for (size_t i = 0; i < fixed_part.string_count; ++i) {
            UInt32 length;
            read = fread(&length, sizeof(length), 1, stream);
            assert(read == 1);
            read = fread(string_target, 1, length, stream);
            assert(read == length);
            new_table->strings[i].string = string_target;
            new_table->strings[i].string_len = length;
            string_target += length;
          }

          new_table->rasl = malloc<RASLCommand>(fixed_part.rasl_length);
          read = fread(
            new_table->rasl, sizeof(RASLCommand), fixed_part.rasl_length,
            stream
          );
          assert(read == fixed_part.rasl_length);

          new_table->next = m_tables;
          m_tables = new_table;

          table = new_table;
        }
        break;

      case cBlockTypeRefalFunction:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          UInt32 offset;
          read = fread(&offset, sizeof(offset), 1, stream);
          assert(read == 1);

          RASLFunction *result = Dynamic::malloc<RASLFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RASLFunction(
            table->make_name(name),
            table->rasl + offset,
            table->function_table,
            table->idents,
            table->numbers,
            table->strings,
            "filename.sref"
          );
        }
        break;

      case cBlockTypeNativeFunction:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          char type = name[0];
          assert(type == '*' || type == '#');

          const char *proper_name = name + 1;

          NativeReference *ref = NativeReference::s_references;
          while (
            ref != 0
            && ! (
              type == '*'
              ? (
                ref->cookie1 == 0
                && ref->cookie2 == 0
                && strcmp(ref->name, proper_name) == 0
              )
              : (
                ref->cookie1 == table->cookie1
                && ref->cookie2 == table->cookie2
                && strcmp(ref->name, proper_name) == 0
              )
            )
          ) {
            ref = ref->next;
          }

          // TODO: Сообщение об ошибке
          assert(ref != 0);

          RefalNativeFunction *result = Dynamic::malloc<RefalNativeFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalNativeFunction(
            ref->code, table->make_name(name)
          );
        }
        break;

      case cBlockTypeEmptyFunction:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalEmptyFunction *result = Dynamic::malloc<RefalEmptyFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalEmptyFunction(table->make_name(name));
        }
        break;

      case cBlockTypeSwap:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalSwap *result = Dynamic::malloc<RefalSwap>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalSwap(table->make_name(name));
        }
        break;

      case cBlockTypeReference:
        refalrts_switch_default_violation(type);

      case cBlockTypeConditionRasl:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalCondFunctionRasl *result = Dynamic::malloc<RefalCondFunctionRasl>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalCondFunctionRasl(table->make_name(name));
        }
        break;

      case cBlockTypeConditionNative:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalCondFunctionNative *result = Dynamic::malloc<RefalCondFunctionNative>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalCondFunctionNative(table->make_name(name));
        }
        break;

      default:
        refalrts_switch_default_violation(type);
    }
  }

  fclose(stream);
}

void refalrts::Dynamic::cleanup_module() {
  while (m_tables != 0) {
    ConstTable *next = m_tables->next;

    free(m_tables->rasl);

    free(m_tables->strings_memory);
    free(m_tables->strings);

    free(m_tables->numbers);

    free(m_tables->idents_memory);
    free(m_tables->idents);

    delete m_tables->function_table;
    free(m_tables->external_memory);
    free(m_tables->externals);

    free(m_tables);
    m_tables = next;
  }
}

refalrts::NativeReference *refalrts::NativeReference::s_references = 0;

//==============================================================================
// Виртуальная машина
//==============================================================================

template <typename T>
void refalrts::VM::Stack<T>::reserve(size_t size) {
  assert (size > 0);

  if (m_capacity < size) {
    T *new_memory = new T[size];
    delete[] m_memory;
    m_memory = new_memory;
    m_capacity = size;
  }
  m_size = size;
  for (size_t i = 0; i < m_size; ++i) {
    m_memory[i] = T();
  }
}

void refalrts::VM::push_stack(refalrts::Iter call_bracket) {
  call_bracket->link_info = m_stack_ptr;
  m_stack_ptr = call_bracket;
}

refalrts::Iter refalrts::VM::pop_stack() {
  refalrts::Iter res = m_stack_ptr;
  m_stack_ptr = m_stack_ptr->link_info;
  return res;
}

bool refalrts::VM::empty_stack() {
  return (m_stack_ptr == 0);
}

namespace {

void print_error_message(FILE *stream, refalrts::FnResult res) {
  switch(res) {
    case refalrts::cRecognitionImpossible:
      fprintf(stream, "\nRECOGNITION IMPOSSIBLE\n\n");
      break;

    case refalrts::cNoMemory:
      fprintf(stream, "\nNO MEMORY\n\n");
      break;

    case refalrts::cStepLimit:
      fprintf(
        stream, "\nSTEP LIMIT REACHED (%u)\n\n", refalrts::g_vm.step_counter()
      );
      break;

    case refalrts::cIdentTableLimit:
      fprintf(
        stream, "\nIDENTS TABLE OVERFLOW (max %lu)\n\n",
        static_cast<unsigned long>(refalrts::g_dynamic.idents_count())
      );
      break;

    default:
      fprintf(stream, "\nUNKNOWN ERROR\n\n");
      refalrts_switch_default_violation(res);
  }
}

}


refalrts::VM::StateRefalMachine*
refalrts::VM::states_stack_alloc() {
  if (m_private_state_stack_free != 0) {
    StateRefalMachine *res = m_private_state_stack_free;
    m_private_state_stack_free = m_private_state_stack_free->next;
    res->next = 0;
    return res;
  } else {
    return new StateRefalMachine;
  }
}

void
refalrts::VM::states_stack_free(refalrts::VM::StateRefalMachine *state) {
  assert(state->next == 0);

  state->next = m_private_state_stack_free;
  m_private_state_stack_free = state;
}

refalrts::VM::StateRefalMachine*
refalrts::VM::states_stack_pop() {
  assert(m_private_state_stack_stack != 0);

  StateRefalMachine *res = m_private_state_stack_stack;
  m_private_state_stack_stack = m_private_state_stack_stack->next;
  res->next = 0;
  return res;
}

void
refalrts::VM::states_stack_push(refalrts::VM::StateRefalMachine *state) {
  assert(state->next == 0);

  state->next = m_private_state_stack_stack;
  m_private_state_stack_stack = state;
}

void
refalrts::VM::free_states_stack() {
  StateRefalMachine *next;

  while (m_private_state_stack_free != 0) {
    next = m_private_state_stack_free->next;
    delete m_private_state_stack_free;
    m_private_state_stack_free = next;
  }

  while (m_private_state_stack_stack != 0) {
    next = m_private_state_stack_stack->next;
    delete m_private_state_stack_stack;
    m_private_state_stack_stack = next;
  }
}

refalrts::FnResult refalrts::VM::run() {
  RefalFunction *go = RefalFunction::lookup(0, 0, "GO");

  if (! go) {
    go = RefalFunction::lookup(0, 0, "Go");
  }

  if (! go) {
    fprintf(stderr, "INTERNAL ERROR: entry point (Go or GO) is not found\n");
    exit(158);
  }

  FunctionTableItem entry_point[1] = { FunctionTableItem(go) };

  // Формируем вызов <Go#0:0> в поле зрения
  static const RASLCommand startup_rasl[] = {
    { icIssueMemory, 3, 0, 0 },
    { refalrts::icResetAllocator, 0, 0, 0 },
    { refalrts::icSetResArgBegin, 0, 0, 0 },
    { icAllocateBracket, 0, ibOpenCall, 0 },
    { icAllocateName, 0, 0, 1 },
    { icAllocateBracket, 0, ibCloseCall, 2 },
    { icSpliceTile, 0, 2, 0 },
    { icPushStack, 0, 0, 2 },
    { icPushStack, 0, 0, 0 },
    { icNextStep, 0, 0, 0 }
  };

  StateRefalMachine *start_state = states_stack_alloc();

  start_state->callee = 0;
  start_state->begin = & m_last_marker; /* нужно для icSetResArgBegin в startup_rasl */
  start_state->end = 0;
  start_state->rasl = startup_rasl;
  start_state->functions = entry_point;
  start_state->idents = 0;
  start_state->numbers = 0;
  start_state->strings = 0;
  start_state->res = 0;
  start_state->trash_prev = 0;
  start_state->stack_top = 0;
  states_stack_push(start_state);

  static const RASLCommand set_state[] = {
    { icPopState, 0, 0, 0 },
  };

  FnResult res = main_loop(set_state);

  if (res != cSuccess && res != cExit) {
    print_error_message(stderr, res);
    if (dump_stream() != stderr) {
      print_error_message(dump_stream(), res);
    }

    make_dump(m_error_begin, m_error_end);
  }

  return res;
}

namespace {

void print_indent(FILE *output, int level) {
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

void refalrts::VM::print_seq(
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
            {
              const RefalFuncName& name = begin->function_info->name;
              fprintf(
                output, "\n\n*Swap %s#%u:%u:\n",
                name.name, name.cookie1, name.cookie2
              );
              refalrts::move_left(begin, end);
            }
            continue;

          case refalrts::cDataChar:
            state = cStateString;
            fprintf(output, "\'");
            continue;

          case refalrts::cDataNumber:
            fprintf(output, "%u ", begin->number_info);
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataFunction:
            {
              const RefalFuncName& name = begin->function_info->name;
              fprintf(
                output, "&%s#%u:%u ", name.name, name.cookie1, name.cookie2
              );
              refalrts::move_left(begin, end);
            }
            continue;

          case refalrts::cDataIdentifier:
            fprintf(output, "#%s ", begin->ident_info->name());
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
            fprintf(output, "[%d] ", begin->number_info);
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

void refalrts::VM::make_dump(refalrts::Iter begin, refalrts::Iter end) {
  fprintf(dump_stream(), "\nSTEP NUMBER %u\n", m_step_counter);
  fprintf(dump_stream(), "\nERROR EXPRESSION:\n");
  print_seq(dump_stream(), begin, end);
  fprintf(dump_stream(), "VIEW FIELD:\n");
  print_seq(dump_stream(), & m_first_marker, & m_last_marker);

#ifdef DUMP_FREE_LIST

  fprintf(dump_stream(), "\nFREE LIST:\n");
  print_seq(
    dump_stream(),
    refalrts::g_allocator.first_marker(),
    refalrts::g_allocator.last_marker()
  );

#endif // ifdef DUMP_FREE_LIST

  fprintf(dump_stream(), "\nEnd dump\n");
  fflush(dump_stream());
}

FILE *refalrts::VM::dump_stream() {
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

void refalrts::VM::free_view_field() {
  refalrts::Iter begin = m_first_marker.next;
  refalrts::Iter end = & m_last_marker;

  if (begin != end) {
    end = end->prev;
    refalrts::g_allocator.splice_to_freelist(begin, end);
  } else {
    /*
      Поле зрения пустое -- его не нужно освобождать.
    */;
  }

#ifndef DONT_PRINT_STATISTICS
  fprintf(stderr, "Step count %d\n", m_step_counter);
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
  VM::Stack<Iter> *m_context;
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
    : m_context(0)
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
  void set_context(VM::Stack<Iter>& cont);
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
  void print(FILE *out = stdout);
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
  void print_callee_option(Iter begin, Iter end, FILE *out = stdout);
  void print_arg_option(Iter begin, Iter end, FILE *out = stdout);
  void print_res_option(FILE *out);
  bool print_var_option(const char *var_name, FILE *out = stdout);
  refalrts::FnResult debugger_loop(Iter begin, Iter end);

  enum RedirectionType {
    cRedirectionType_None = -1,
    cRedirectionType_Write = 0,
    cRedirectionType_Append = 1,
  };

  enum {
    cBadHexVal = -1
  };

  static RedirectionType parse_redirection(char **line);
  static void skip_space (char **ptr);
  static char *skip_nonspace (char *ptr);
  static RedirectionType check_bracket (char **ptr);
  static void write_byte (char **from, char **out, char **str_p, char val);
  static int parse2hex (unsigned char *in);
  static bool quotation_mark_parse(char *from, char *out);

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
  var_begin = (*m_context)[offset];
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
      var_end = (*m_context)[offset + 1];
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
    if (input_pair.first == table_pair.first) {
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
    VM::print_seq(out, var_begin, var_end, false);
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
    VM::print_seq(out, var_begin, var_end, false);
  }
}

void refalrts::debugger::VariableDebugTable::set_string_items(
  const StringItem *items
) {
  m_strings = items;
}

void refalrts::debugger::VariableDebugTable::set_context(
  VM::Stack<Iter> &cont
) {
  m_context = &cont;
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

void refalrts::debugger::BreakpointSet::print(FILE *out) {
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

refalrts::debugger::RefalDebugger::RedirectionType
refalrts::debugger::RefalDebugger::parse_redirection(char **line) {
  char *line_ptr = *line;

  skip_space(&line_ptr);

  RedirectionType result = check_bracket(&line_ptr);
  if (result == cRedirectionType_None) {
    return cRedirectionType_None;
  }

  refalrts::debugger::RefalDebugger::skip_space(&line_ptr);

  if (*line_ptr == '"') {
    if (! quotation_mark_parse(line_ptr+1, *line)) {
      return cRedirectionType_None;
    }
  } else {
    *line = line_ptr;
    char *end = skip_nonspace(line_ptr);
    *end = '\0';
  }

  return result;
}

void refalrts::debugger::RefalDebugger::skip_space(char **ptr) {
  while (**ptr == '\n' || **ptr == '\t' || **ptr == ' ') {
    (*ptr)++;
  }
}

char *refalrts::debugger::RefalDebugger::skip_nonspace(char *ptr) {
  while (*ptr != '\n' && *ptr != '\t' && *ptr != ' ') {
    ptr++;
  }

  return ptr;
}

refalrts::debugger::RefalDebugger::RedirectionType
refalrts::debugger::RefalDebugger::check_bracket(char **ptr) {
  if (**ptr == '>') {
    (*ptr)++;
    if (**ptr == '>') {
      (*ptr)++;
      return cRedirectionType_Append;
    }
    return cRedirectionType_Write;
  }
  return cRedirectionType_None;
}

// from - источкник, из которого копируем строку
// out - назначение, по которому копируется строка
// и дописывается 1 байт val (от эскейп-последовательности)
// str_p - адрес, до которого происходит копирование из from
// (*str_p - *from) - количество байт, которое копируем
void refalrts::debugger::RefalDebugger::write_byte(
  char **from, char **out, char **str_p, char val
) {
  memmove(*out, *from, *str_p - *from);
  *out += (*str_p - *from) + 1;
  *(*out - 1) = val;
  *str_p += 2;
  *from = *str_p;
}

int refalrts::debugger::RefalDebugger::parse2hex(unsigned char *in) {
  unsigned char ret;
  if ( (*in - '0') <= 9){
    ret = static_cast<unsigned char>(*in - '0');
  } else if ( (*in & ~(1 << 5)) - 'A' <= 'F' - 'A') {
    // обнулением 6-го бита, мы переводим маленькие латинские буквы в большие
    // см. ASCII table
    ret = static_cast<unsigned char>(((*in & ~(1 << 5)) - 'A') + 10);
  } else {
    return cBadHexVal;
  }
  ret <<= 4;

  if ( (*(in+1) - '0') <= 9) {
    ret |= static_cast<unsigned char>(*(in+1) - '0');
  } else if ( (*(in+1) & ~(1 << 5)) - 'A' <= 'F' - 'A') {
    ret |= static_cast<unsigned char>((*(in+1) & ~(1 << 5)) - 'A' + 10);
  } else {
    return cBadHexVal;
  }
  return ret;
}

bool refalrts::debugger::RefalDebugger::quotation_mark_parse(
  char *from, char *out
) {
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
        return true;

      case 'a':
        write_byte(&from, &out, &str_p, '\a');
        continue;

      case 'b':
        write_byte(&from, &out, &str_p, '\b');
        continue;

      case 'f':
        write_byte(&from, &out, &str_p, '\f');
        continue;

      case 'n':
        write_byte(&from, &out, &str_p, '\n');
        continue;

      case 'r':
        write_byte(&from, &out, &str_p, '\r');
        continue;

      case 't':
        write_byte(&from, &out, &str_p, '\t');
        continue;

      case 'v':
        write_byte(&from, &out, &str_p, '\v');
        continue;

      case '"':
        write_byte(&from, &out, &str_p, '"');
        continue;

      case 'x':
        {
          int hexval = parse2hex((unsigned char *)str_p + 2);
          if (hexval == cBadHexVal) {
            return false;
          }
          memmove(out, from, str_p - from);
          out += (str_p - from) + 1;
          *(out-1) = static_cast<char>(hexval);
          str_p += 4;
          from = str_p;
          continue;
        }

      default:
        return false;
      }

    case '\0':
      return false;

    default :
      str_p++;
      continue;
    }
  }
}


FILE *refalrts::debugger::RefalDebugger::get_out() {
  char line[cMaxLen] = {0};
  char *line_ptr = line;
  if (fgets(line, cMaxLen, m_in) == 0) {
    return stdout;
  }
  RedirectionType type = parse_redirection(&line_ptr);
  if (type == cRedirectionType_Append) {
    return fopen(line_ptr, "a");
  } else if (type == cRedirectionType_Write) {
    return fopen(line_ptr, "w");
  } else {
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
  bool res = g_allocator.memory_use() > m_memory_limit;
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
    refalrts::g_vm.step_counter(), callee == 0 ? "" : callee->name.name
  );
  if (stop) {
    printf("stopped on function breakpoint\n");
  }
  return stop;
}

bool refalrts::debugger::RefalDebugger::step_cond() {
  bool scond = (g_vm.step_counter() == m_step_numb);
  m_step_numb = g_vm.step_counter();
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
  if (callee != 0 && func_trace_table.is_traced_func(callee->name.name)) {
    FILE *trace_out = func_trace_table.get_trace_outstream(callee->name.name);
    fprintf(
      trace_out, "//==================================================\n"
    );
    fprintf(trace_out, "Scope function: ");
    print_callee_option(begin, end, trace_out);
    fprintf(trace_out, "\n");
    fprintf(trace_out, "Traced call:   ");
    VM::print_seq(trace_out, begin, end, false);
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
  refalrts::Iter begin, refalrts::Iter end, FILE *out
) {
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  Iter callee_end = callee;
  if (is_open_bracket(callee)) {
    callee_end = callee->link_info;
  }

  VM::print_seq(out, callee, callee_end, false);
}

void refalrts::debugger::RefalDebugger::print_arg_option(
  refalrts::Iter begin, refalrts::Iter end, FILE *out
) {
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  VM::print_seq(out, begin, end, false);
}

void refalrts::debugger::RefalDebugger::print_res_option(FILE *out) {
  if (m_res_begin != 0 && m_res_end != 0) {
    VM::print_seq(out, m_res_begin->next, m_res_end->prev, false);
  } else {
    fprintf(out, "[NONE]\n");
  }
}

bool refalrts::debugger::RefalDebugger::print_var_option(
  const char *var_name, FILE *out
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
  char debcmd[16] = {0};
  char strparam[cMaxLen] = {0};
  for ( ; ; ) {
    printf("debug>");
    bool ok = fscanf(m_in, "%15s", debcmd) == 1;
    if (! ok) {
      break;
    }
    if (str_equal(debcmd, s_H) || str_equal(debcmd, s_HELP)) {
      help_option();
    } else if (
      str_equal(debcmd, s_B)
      || str_equal(debcmd, s_BREAK)
      || str_equal(debcmd, s_BREAKPOINT)
    ) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        break_option(strparam);
      }
    } else if (
      str_equal(debcmd, s_CL)
      || str_equal(debcmd, s_CLEAR)
      || str_equal(debcmd, s_RM)
    ) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        clear_option(strparam);
      }
    } else if (str_equal(debcmd, s_STEPLIMIT)) {
      int step_lim = 0;
      ok = fscanf(m_in, "%d", &step_lim) == 1;
      if (ok) {
        break_set.add_breakpoint(g_vm.step_counter()+step_lim);
      }
    } else if (str_equal(debcmd, s_MEMORYLIMIT)) {
      ok = fscanf(m_in, "%u", &m_memory_limit) == 1;
      (void) ok;
    } else if (str_equal(debcmd, s_TR) || str_equal(debcmd, s_TRACE)) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        func_trace_table.trace_func(strparam, get_out());
      }
    } else if (str_equal(debcmd, s_NOTR) || str_equal(debcmd, s_NOTRACE)) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        func_trace_table.notrace_func(strparam);
      }
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
      m_step_numb = g_vm.step_counter()+1;
      m_dot = s_STEP;
      break;
    } else if (str_equal(debcmd, s_Q) || str_equal(debcmd, s_QUIT)) {
      g_vm.set_return_code(0);
      return cExit;
    } else if (
      str_equal(debcmd, s_N)
      || str_equal(debcmd, s_NEXT)
      || (str_equal(debcmd, s_DOT) && str_equal(m_dot, s_NEXT))
    ) {
      m_next_expr = g_vm.stack_ptr();
      m_dot = s_NEXT;
      break;
    } else if (str_equal(debcmd, s_VARS)) {
      FILE *out = get_out();
      var_debug_table.print(out);
      close_out(out);
    } else if (str_equal(debcmd, s_P) || str_equal(debcmd, s_PRINT)) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (! ok) {
        continue;
      }
      FILE *out = get_out();
      if (str_equal(strparam, s_ARG)) {
        print_arg_option(begin, end, out);
      } else if (str_equal(strparam, s_CALL)) {
        VM::print_seq(out, begin, end, true);
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
        refalrts::g_vm.step_counter(), callee == 0 ? "" : callee->name.name
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

refalrts::FnResult refalrts::recursive_call_main_loop() {
  const  refalrts::RASLCommand rasl[] = {
    { refalrts::icNextStep,0,0,0},
  };
  return refalrts::g_vm.main_loop(rasl);
}

refalrts::FnResult refalrts::VM::main_loop(const RASLCommand *rasl) {
  RefalFunction *callee = 0;
  Iter begin = 0;
  Iter end = 0;
  FunctionTableItem *functions = 0;
  const RefalIdentifier *idents = 0;
  const RefalNumber *numbers = 0;
  const StringItem *strings = 0;
  Stack<const RASLCommand*> open_e_stack;
  Stack<Iter> context;

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
    unsigned int val1 = rasl->val1;
    unsigned int val2 = rasl->val2;
    unsigned int bracket = rasl->bracket;

JUMP_FROM_SCALE:

    // Интерпретация команд
    // Для ряда команд эти переменные могут не иметь смысла
    Iter &bb = context[bracket];
    Iter &be = context[bracket + 1];
    Iter &elem = context[bracket];
    Iter &save_pos = context[val1];
    Iter &swap_head = save_pos;

    // Содержимое скобок
    Iter &res_b = context[val2];
    Iter &res_e = context[val2 + 1];

    switch(rasl->cmd) {
      case icPushState:
        {
          StateRefalMachine *cur_state = states_stack_alloc();
          cur_state->callee = callee;
          cur_state->begin = begin; /* нужно для icSetResArgBegin в startup_rasl */
          cur_state->end = end;
          cur_state->rasl = rasl + 2;
          cur_state->functions = functions;
          cur_state->idents = idents;
          cur_state->numbers = numbers;
          cur_state->strings = strings;
          cur_state->open_e_stack.swap(open_e_stack);
          cur_state->context.swap(context);
          cur_state->res = res;
          cur_state->trash_prev = trash_prev;
          cur_state->stack_top = stack_top;
          states_stack_push(cur_state);
        }
        break;

      case icPopState:
        {
          StateRefalMachine *prev_state = states_stack_pop();
          callee = prev_state->callee;
          begin = prev_state->begin; /* нужно для icSetResArgBegin в startup_rasl */
          end = prev_state->end;
          rasl = prev_state->rasl;
          functions = prev_state->functions;
          idents = prev_state->idents;
          numbers = prev_state->numbers;
          strings = prev_state->strings;
          open_e_stack.swap(prev_state->open_e_stack);
          context.swap(prev_state->context);
          res = prev_state->res;
          trash_prev = prev_state->trash_prev;
          stack_top = prev_state->stack_top;
          states_stack_free(prev_state);
        }
        continue;  // пропускаем ++rasl в конце

      case icProfileFunction:
        this_is_generated_function();
        break;

      case icLoadConstants:
        {
          RASLFunction *descr = static_cast<RASLFunction*>(callee);
          functions = descr->functions->items;
          idents = descr->idents;
          numbers = descr->numbers;
          strings = descr->strings;
#ifdef ENABLE_DEBUGGER
          debugger.var_debug_table.set_string_items(strings);
#endif // ifdef ENABLE_DEBUGGER
        }
        break;

      case icIssueMemory:
        context.reserve(val1);
        break;

      case icReserveBacktrackStack:
        open_e_stack.reserve(val1);
        break;

      case icOnFailGoTo:
        open_e_stack[stack_top++] = rasl + val1 + val2 * 256 + 1;
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
        if (! char_left(static_cast<char>(val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icCharRight:
        if (! char_right(static_cast<char>(val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icCharTerm:
        if (! char_term(static_cast<char>(val2), bb)) {
          MATCH_FAIL;
        }
        break;

      case icCharSaveLeft:
        save_pos = char_left(static_cast<char>(val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icCharSaveRight:
        save_pos = char_right(static_cast<char>(val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icNumberLeft:
        if (! number_left(static_cast<RefalNumber>(val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNumberRight:
        if (! number_right(static_cast<RefalNumber>(val2), bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNumberTerm:
        if (! number_term(static_cast<RefalNumber>(val2), bb)) {
          MATCH_FAIL;
        }
        break;

      case icNumberSaveLeft:
        save_pos = number_left(static_cast<RefalNumber>(val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icNumberSaveRight:
        save_pos = number_right(static_cast<RefalNumber>(val2), bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumLeft:
        if (! number_left(numbers[val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumRight:
        if (! number_right(numbers[val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumTerm:
        if (! number_term(numbers[val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumSaveLeft:
        save_pos = number_left(numbers[val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icHugeNumSaveRight:
        save_pos = number_right(numbers[val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icNameLeft:
        if (! function_left(functions[val2].function, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNameRight:
        if (! function_right(functions[val2].function, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNameTerm:
        if (! function_term(functions[val2].function, bb)) {
          MATCH_FAIL;
        }
        break;

      case icNameSaveLeft:
        save_pos = function_left(functions[val2].function, bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icNameSaveRight:
        save_pos = function_right(functions[val2].function, bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icIdentLeft:
        if (! ident_left(idents[val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icIdentRight:
        if (! ident_right(idents[val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icIdentTerm:
        if (! ident_term(idents[val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case icIdentSaveLeft:
        save_pos = ident_left(idents[val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icIdentSaveRight:
        save_pos = ident_right(idents[val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icBracketsLeft:
        if (! brackets_left(res_b, res_e, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icBracketsRight:
        if (! brackets_right(res_b, res_e, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icBracketsTerm:
        if (! brackets_term(res_b, res_e, bb)) {
          MATCH_FAIL;
        }
        break;

      case icBracketsSaveLeft:
        {
          int inner = val2;
          context[inner + 2] =
            brackets_left(context[inner], context[inner + 1], bb, be);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
          bracket_pointers(context[inner + 2], context[inner + 3]);
        }
        break;

      case icBracketsSaveRight:
        {
          int inner = val2;
          context[inner + 2] =
            brackets_right(context[inner], context[inner + 1], bb, be);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
          bracket_pointers(context[inner + 2], context[inner + 3]);
        }
        break;

      case icADTLeft:
        if (! adt_left(res_b, res_e, functions[val1].function, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icADTRight:
        if (! adt_right(res_b, res_e, functions[val1].function, bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icADTTerm:
        if (! adt_term(res_b, res_e, functions[val1].function, bb)) {
          MATCH_FAIL;
        }
        break;

      case icADTSaveLeft:
        {
          int inner = val2;
          const RefalFunction *tag = functions[val1].function;
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

      case icADTSaveRight:
        {
          int inner = val2;
          const RefalFunction *tag = functions[val1].function;
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

      case icADTSaveTerm:
        {
          int inner = val2;
          const RefalFunction *tag = functions[val1].function;
          context[inner + 2] =
            adt_term(context[inner], context[inner + 1], tag, bb);
          if (! context[inner + 2]) {
            MATCH_FAIL;
          }
        }
        break;

      case icCallSaveLeft:
        context[val2 + 2] = call_left(res_b, res_e, bb, be);
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
        index = val2;
        if (! svar_left(context[index], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icsVarRight:
        index = val2;
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
        index = val2;
        if (! tvar_left(context[index], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case ictVarRight:
        index = val2;
        if (! tvar_right(context[index], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case ictVarSaveLeft:
        index = val2;
        context[index + 1] = tvar_left(context[index], bb, be);
        if (! context[index + 1]) {
          MATCH_FAIL;
        }
        break;

      case ictVarSaveRight:
        index = val2;
        context[index + 1] = tvar_right(context[index], bb, be);
        if (! context[index + 1]) {
          MATCH_FAIL;
        }
        break;

      case iceRepeatedLeft:
        {
          int index = val1;
          int sample = val2;
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

      case iceRepeatedRight:
        {
          int index = val1;
          int sample = val2;
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

      case icsRepeatedLeft:
      case ictRepeatedLeft:
        {
          int index = val1;
          int sample = val2;
          if (! repeated_stvar_left(context[index], context[sample], bb, be)) {
            MATCH_FAIL;
          }
        }
        break;

      case icsRepeatedRight:
      case ictRepeatedRight:
        {
          int index = val1;
          int sample = val2;
          if (! repeated_stvar_right(context[index], context[sample], bb, be)) {
            MATCH_FAIL;
          }
        }
        break;

      case icsRepeatedTerm:
      case ictRepeatedTerm:
        assert(bracket == val1);
        if (! repeated_stvar_term(context[val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case ictRepeatedSaveLeft:
        {
          int index = val1;
          int sample = val2;

          context[index + 1] =
            repeated_stvar_left(context[index], context[sample], bb, be);
          if (! context[index + 1]) {
            MATCH_FAIL;
          }
        }
        break;

      case ictRepeatedSaveRight:
        {
          int index = val1;
          int sample = val2;

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

      case icResetAllocator:
#ifdef ENABLE_DEBUGGER
        if (debugger.handle_function_call(begin, end, callee) == cExit) {
          return cExit;
        }
#endif  // ifdef ENABLE_DEBUGGER
        reset_allocator();
        break;

      case icSetResArgBegin:
        res = begin;
        break;

      case icSetResRightEdge:
        trash_prev = begin->prev;
        res = end->next;
        break;

      case icSetRes:
        trash_prev = begin->prev;
        res = context[bracket];
        break;

      case icCopyEVar:
        {
          unsigned int target = val1;
          unsigned int sample = val2;
          if (
            ! copy_evar(
              context[target], context[target + 1],
              context[sample], context[sample + 1]
            )
          ) {
            return cNoMemory;
          }
        }
        break;

      case icCopySTVar:
        {
          unsigned int target = val1;
          unsigned int sample = val2;
          if (! copy_stvar(context[target], context[sample])) {
            return cNoMemory;
          }
        }
        break;

      case icReinitSVar:
        reinit_svar(elem, context[val2]);
        break;

      case icAllocateChar:
        if (! alloc_char(elem, static_cast<char>(val2))) {
          return cNoMemory;
        }
        break;

      case icAllocateName:
        if (! alloc_name(elem, functions[val2].function)) {
          return cNoMemory;
        }
        break;

      case icAllocateNumber:
        if (! alloc_number(elem, static_cast<RefalNumber>(val2))) {
          return cNoMemory;
        }
        break;

      case icAllocateHugeNumber:
        if (! alloc_number(elem, numbers[val2])) {
          return cNoMemory;
        }
        break;

      case icAllocateIdent:
        if (! alloc_ident(elem, idents[val2])) {
          return cNoMemory;
        }
        break;

      case icAllocateBracket:
        {
          static bool (*const allocator[])(Iter& res) = {
            alloc_open_adt,
            alloc_open_bracket,
            alloc_open_call,
            alloc_close_adt,
            alloc_close_bracket,
            alloc_close_call
          };

          assert(val2 <= ibCloseCall);
          if (! allocator[val2](elem)) {
            return cNoMemory;
          }
        }
        break;

      case icAllocateString:
        {
          if (
            ! alloc_chars(
              bb, be, strings[val2].string, strings[val2].string_len
            )
          ) {
            return cNoMemory;
          }
        }
        break;

      case icAllocateClosureHead:
        if (! alloc_closure_head(elem)) {
          return cNoMemory;
        }
        break;

      case icAllocateUnwrappedClosure:
        if (! alloc_unwrapped_closure(elem, context[val2])) {
          return cNoMemory;
        }
        break;

      case icReinitChar:
        reinit_char(elem, static_cast<char>(val2));
        break;

      case icReinitName:
        reinit_name(elem, functions[val2].function);
        break;

      case icReinitNumber:
        reinit_number(elem, static_cast<RefalNumber>(val2));
        break;

      case icReinitHugeNumber:
        reinit_number(elem, numbers[val2]);
        break;

      case icReinitIdent:
        reinit_ident(elem, idents[val2]);
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
          assert(val2 <= ibCloseCall);
          reiniter[val2](elem);
        }
        break;

      case icReinitClosureHead:
        reinit_closure_head(elem);
        break;

      case icReinitUnwrappedClosure:
        reinit_unwrapped_closure(elem, context[val2]);
        break;

      case icUpdateChar:
        update_char(elem, static_cast<char>(val2));
        break;

      case icUpdateName:
        update_name(elem, functions[val2].function);
        break;

      case icUpdateNumber:
        update_number(elem, static_cast<RefalNumber>(val2));
        break;

      case icUpdateHugeNumber:
        update_number(elem, numbers[val2]);
        break;

      case icUpdateIdent:
        update_ident(elem, idents[val2]);
        break;

      case icLinkBrackets:
        link_brackets(context[val1], context[val2]);
        break;

      case icPushStack:
        push_stack(elem);
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
        res = splice_evar(res, context[val1], context[val2]);
        break;

      case icSpliceToFreeList:
        splice_to_freelist(begin, end);
        break;

      case icSpliceToFreeList_Range:
        splice_to_freelist(context[val1], context[val2]);
        break;

      case icMainLoopReturnSuccess:
        return cSuccess;

      case icNextStep:
        {
          g_profiler.stop_function();
          ++ m_step_counter;

#ifdef STEP_LIMIT
          if (m_step_counter >= STEP_LIMIT) {
            return cStepLimit;
          }
#endif // ifdef STEP_LIMIT

          if (empty_stack()) {
            return cSuccess;    // УСПЕШНОЕ ЗАВЕРШЕНИЕ ГЛАВНОГО ЦИКЛА
          }

          begin = pop_stack();
          assert(! empty_stack());
          end = pop_stack();

          m_error_begin = begin;
          m_error_end = end;

#if SHOW_DEBUG
          if (m_step_counter >= (unsigned) SHOW_DEBUG) {
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
              ++ m_step_counter;
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
        splice_to_freelist_open(context[bracket], res);
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

      case icScale:
        {
          val1 *= 256;
          val2 *= 256;
          bracket *= 256;

          ++rasl;

          val1 += rasl->val1;
          val2 += rasl->val2;
          bracket += rasl->bracket;

          goto JUMP_FROM_SCALE;
        }

      default:
        refalrts_switch_default_violation(rasl->cmd);
    }
    ++rasl;
  }
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
