#include <stdlib.h>
#include <memory>

#include "refalrts-vm.h"
#include "refalrts-commands.h"
#include "refalrts-utils.h"

//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-functions
#include "refalrts-functions.h"
//FROM refalrts-profiler
#include "refalrts-profiler.h"

#include <assert.h>


//------------------------------------------------------------------------------
// Прочие операции
//------------------------------------------------------------------------------

const char* refalrts::VM::arg(unsigned int param) {
  if (param < m_argc) {
    return m_argv[param];
  } else {
    return "";
  }
}

//==============================================================================
// Виртуальная машина
//==============================================================================

template <typename T>
T* refalrts::VM::Stack<T>::reserve(size_t size) {
  assert (size > 0);
  m_top = size + m_bottom;

  if (m_top > m_capacity) {
    m_capacity = max(m_top, 2 * m_capacity);
    T* new_memory = static_cast<T*>(realloc(m_memory, sizeof(T) * m_capacity));

    if (new_memory) {
      m_memory = new_memory;
    } else {
      return 0;
    }
  }

  return m_memory + m_bottom;
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

void print_error_message(
  refalrts::VM *vm, FILE *stream, refalrts::FnResult res
) {
  switch(res) {
    case refalrts::cRecognitionImpossible:
      fprintf(stream, "\nRECOGNITION IMPOSSIBLE\n\n");
      break;

    case refalrts::cNoMemory:
      fprintf(stream, "\nNO MEMORY\n\n");
      break;

    case refalrts::cStepLimit:
      fprintf(
        stream, "\nSTEP LIMIT REACHED (%u)\n\n", vm->step_counter()
      );
      break;

    case refalrts::cIdentTableLimit:
      fprintf(
        stream, "\nIDENTS TABLE OVERFLOW (max %lu)\n\n",
        static_cast<unsigned long>(vm->domain()->idents_count())
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

refalrts::FnResult refalrts::VM::execute_zero_arity_function(
  refalrts::RefalFunction *func, refalrts::Iter pos
) {
  if (! m_debugger) {
    m_debugger = m_create_debugger(this);
  }

  if (! pos) {
    pos = & m_swap_hedge;
  }

  // Формируем вызов <func /*пусто*/> в поле зрения
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
  start_state->begin = pos; /* нужно для icSetResArgBegin в startup_rasl */
  start_state->end = 0;
  start_state->rasl = startup_rasl;
  start_state->functions = &func;
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

  Iter prev_stack = m_stack_ptr;
  Module *prev_module = m_module;
  m_stack_ptr = 0;
  FnResult res = main_loop(set_state);
  m_stack_ptr = prev_stack;
  m_module = prev_module;

  if (res != cSuccess && res != cExit) {
    print_error_message(this, stderr, res);
    if (dump_stream() != stderr) {
      print_error_message(this, dump_stream(), res);
    }

    make_dump(m_error_begin, m_error_end);
    fprintf(dump_stream(), "\nEnd dump\n");
    fflush(dump_stream());
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
            if (begin->next != &m_last_marker) {
              fprintf(output, "%c[SWAP HEDGE]", space);
            }
            refalrts::move_left(begin, end);
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
              const char *amp = "";
              if (begin->prev->tag != cDataOpenCall) {
                amp = "&";
              }

              const RefalFuncName& name = begin->function_info->name;
              if (m_diagnostic_config->show_cookies) {
                fprintf(
                  output, "%s%s#%u:%u ",
                  amp, name.name, name.cookie1, name.cookie2
                );
              } else {
                fprintf(output, "%s%s ", amp, name.name);
              }
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
  fprintf(dump_stream(), "\nPRIMARY ACTIVE EXPRESSION:\n");
  print_seq(dump_stream(), begin, end);
  fprintf(dump_stream(), "\nVIEW FIELD:\n");
  print_seq(dump_stream(), & m_first_marker, & m_last_marker);

  if (m_diagnostic_config->dump_free_list) {
    fprintf(dump_stream(), "\nFREE LIST:\n");
    print_seq(dump_stream(), & m_begin_free_list, & m_end_free_list);
  }

  fflush(dump_stream());
}

FILE *refalrts::VM::dump_stream() {
  if (m_dump_stream == 0) {
    if (m_diagnostic_config->dump_file[0]) {
      m_dump_stream = fopen(m_diagnostic_config->dump_file, "wt");

      if (m_dump_stream == 0) {
        m_dump_stream = stderr;
      }
    } else {
      m_dump_stream = stderr;
    }
  }

  return m_dump_stream;
}

void refalrts::VM::free_view_field() {
  splice_to_freelist_open(this, &m_first_marker, &m_swap_hedge);
  splice_to_freelist_open(this, &m_swap_hedge, &m_last_marker);
  /*
    TODO: по-хорошему, вся выделенная память должна передаваться домену,
    TODO: но это как-нибудь потом. При освобождении памяти нужно будет обойти
    TODO: поле зрения и статические ящики и развернуть все замыкания.
    TODO: Либо деактивацию замыканий нужно реализовать в домене.
  */

  if (m_diagnostic_config->print_statistics) {
    fprintf(stderr, "Step count %d\n", m_step_counter);
  }
}


//==============================================================================
// Фальшивый отладчик
//==============================================================================

class refalrts::VM::NullDebugger: public refalrts::Debugger {
public:
  virtual void set_context(Iter* /*context*/) {
    /* пусто */
  }

  virtual void set_string_items(const StringItem * /*items*/) {
    /* пусто */
  }

  virtual void insert_var(const RASLCommand * /*next*/) {
    /* пусто */
  }

  virtual FnResult handle_function_call(
    Iter /*begin*/, Iter /*end*/, RefalFunction * /*callee*/
  ) {
    return cSuccess;
  }
};

refalrts::Debugger*
refalrts::VM::create_null_debugger(refalrts::VM * /*vm*/) {
  return new NullDebugger;
}

//==============================================================================
// Интерпретатор
//==============================================================================

void refalrts::VM::reset_allocator() {
  profiler()->start_result();
  reset_allocator_aux();
}

void refalrts::VM::alloc_node(Iter& res) {
  ensure_memory();

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

  res = m_free_ptr;
  m_free_ptr = next(m_free_ptr);
  res->tag = refalrts::cDataIllegal;
}

bool refalrts::VM::create_nodes() {
  Iter begin, end;
  if (m_domain->alloc_nodes(begin, end)) {
    weld(m_end_free_list.prev, begin);
    weld(end, & m_end_free_list);
    m_free_ptr = begin;
    return true;
  } else {
    return false;
  }
}

refalrts::FnResult refalrts::VM::main_loop(const RASLCommand *rasl) {
  RefalFunction *callee = 0;
  Iter begin = 0;
  Iter end = 0;
  RefalFunction **functions = 0;
  const RefalIdentifier *idents = 0;
  const RefalNumber *numbers = 0;
  const StringItem *strings = 0;

  const RASLCommand **open_e_stack = m_open_e_stack.reserve(1);
  Iter *context = m_context.reserve(1);

  if (open_e_stack == 0 || context == 0) {
    return cNoMemory;
  }

  jmp_buf memory_fail;
  m_memory_fail = &memory_fail;
  if (setjmp(*m_memory_fail)) {
    profiler()->stop_allocation_abnormal();
    return cNoMemory;
  }

  profiler()->init_function_count();

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

    // Содержимое скобок
    Iter &res_b = context[val2];
    Iter &res_e = context[val2 + 1];

    // Используется в case icAllocateBracket и case icReinitBracket
    static DataTag bracket_tag[] = {
      cDataOpenADT,
      cDataOpenBracket,
      cDataOpenCall,
      cDataCloseADT,
      cDataCloseBracket,
      cDataCloseCall,
    };

    switch(rasl->cmd) {
      case icPushState:
        {
          StateRefalMachine *cur_state = states_stack_alloc();
          cur_state->callee = callee;
          cur_state->begin = begin;
          cur_state->end = end;
          cur_state->rasl = rasl + 2;
          cur_state->functions = functions;
          cur_state->idents = idents;
          cur_state->numbers = numbers;
          cur_state->strings = strings;
          m_open_e_stack.push_state(cur_state->open_e_stack_state);
          m_context.push_state(cur_state->context_state);
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
          begin = prev_state->begin;
          end = prev_state->end;
          rasl = prev_state->rasl;
          functions = prev_state->functions;
          idents = prev_state->idents;
          numbers = prev_state->numbers;
          strings = prev_state->strings;
          open_e_stack =
            m_open_e_stack.pop_state(prev_state->open_e_stack_state);
          context = m_context.pop_state(prev_state->context_state);
          res = prev_state->res;
          trash_prev = prev_state->trash_prev;
          stack_top = prev_state->stack_top;
          states_stack_free(prev_state);

          m_debugger->set_context(context);
          m_debugger->set_string_items(strings);
        }
        continue;  // пропускаем ++rasl в конце

      case icProfileFunction:
        profiler()->start_generated_function();
        break;

      case icLoadConstants:
        {
          RASLFunction *descr = static_cast<RASLFunction*>(callee);
          functions = descr->functions;
          idents = descr->idents;
          numbers = descr->numbers;
          strings = descr->strings;
          m_debugger->set_string_items(strings);
        }
        break;

      case icIssueMemory:
        context = m_context.reserve(val1);
        if (context == 0) {
          return cNoMemory;
        }
        m_debugger->set_context(context);
        break;

      case icReserveBacktrackStack:
        open_e_stack = m_open_e_stack.reserve(val1);
        if (open_e_stack == 0) {
          return cNoMemory;
        }
        break;

      case icOnFailGoTo:
        open_e_stack[stack_top++] = rasl + val1 + val2 * 256 + 1;
        break;

      case icProfilerStopSentence:
        profiler()->stop_sentence();
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
        if (! function_left(functions[val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNameRight:
        if (! function_right(functions[val2], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icNameTerm:
        if (! function_term(functions[val2], bb)) {
          MATCH_FAIL;
        }
        break;

      case icNameSaveLeft:
        save_pos = function_left(functions[val2], bb, be);
        if (! save_pos) {
          MATCH_FAIL;
        }
        break;

      case icNameSaveRight:
        save_pos = function_right(functions[val2], bb, be);
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
        if (! adt_left(res_b, res_e, functions[val1], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icADTRight:
        if (! adt_right(res_b, res_e, functions[val1], bb, be)) {
          MATCH_FAIL;
        }
        break;

      case icADTTerm:
        if (! adt_term(res_b, res_e, functions[val1], bb)) {
          MATCH_FAIL;
        }
        break;

      case icADTSaveLeft:
        {
          int inner = val2;
          const RefalFunction *tag = functions[val1];
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
          const RefalFunction *tag = functions[val1];
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
          const RefalFunction *tag = functions[val1];
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
        if (! svar_term(bb)) {
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
        profiler()->start_e_loop();
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
        m_debugger->insert_var(rasl);
        break;

      case icResetAllocator:
        if (m_debugger->handle_function_call(begin, end, callee) == cExit) {
          return cExit;
        }
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
          copy_evar(
            context[target], context[target + 1],
            context[sample], context[sample + 1]
          );
        }
        break;

      case icCopySTVar:
        {
          unsigned int target = val1;
          unsigned int sample = val2;
          copy_stvar(context[target], context[sample]);
        }
        break;

      case icReinitSVar:
        reinit_svar(elem, context[val2]);
        break;

      case icAllocateChar:
        alloc_char(elem, static_cast<char>(val2));
        break;

      case icAllocateName:
        alloc_name(elem, functions[val2]);
        break;

      case icAllocateNumber:
        alloc_number(elem, static_cast<RefalNumber>(val2));
        break;

      case icAllocateHugeNumber:
        alloc_number(elem, numbers[val2]);
        break;

      case icAllocateIdent:
        alloc_ident(elem, idents[val2]);
        break;

      case icAllocateBracket:
        assert(val2 <= ibCloseCall);
        alloc_some_bracket(elem, bracket_tag[val2]);
        break;

      case icAllocateString:
        alloc_chars(bb, be, strings[val2].string, strings[val2].string_len);
        break;

      case icAllocateClosureHead:
        alloc_closure_head(elem);
        break;

      case icAllocateUnwrappedClosure:
        alloc_unwrapped_closure(elem, context[val2]);
        break;

      case icReinitChar:
        reinit_char(elem, static_cast<char>(val2));
        break;

      case icReinitName:
        reinit_name(elem, functions[val2]);
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
        assert(val2 <= ibCloseCall);
        elem->tag = bracket_tag[val2];
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
        update_name(elem, functions[val2]);
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
          m_profiler->stop_function();
          ++ m_step_counter;

          if (empty_stack()) {
            return cSuccess;    // УСПЕШНОЕ ЗАВЕРШЕНИЕ ГЛАВНОГО ЦИКЛА
          }

          begin = pop_stack();
          assert(! empty_stack());
          end = pop_stack();

          m_error_begin = begin;
          m_error_end = end;

          if (m_step_counter >= m_diagnostic_config->step_limit) {
            return cStepLimit;
          }

          refalrts::Iter function = next(begin);

          if (m_step_counter >= m_diagnostic_config->start_step_trace) {
            RefalFuncName *name = 0;
            if (cDataFunction == function->tag) {
              name = &function->function_info->name;
            }

            if (name && strcmp(name->name, "__Step-Start") == 0) {
              m_hide_steps = true;
            }

            bool init_final = name
              && (strcmp(name->name, "INIT") == 0
                  || strcmp(name->name, "FINAL") == 0)
              && (name->cookie1 != 0 && name->cookie2 != 0);
            bool hidden_step = m_hide_steps || init_final;

            if (! hidden_step || m_diagnostic_config->show_hidden_steps) {
              make_dump(begin, end);
            }

            if (name && strcmp(name->name, "__Step-End") == 0) {
              m_hide_steps = false;
            }
          }

          FnResult res;
          if (cDataFunction == function->tag) {
            callee = function->function_info;
            res = cSuccess;
          } else if (cDataClosure == function->tag) {
            refalrts::Iter head = function->link_info;

            if (m_diagnostic_config->enable_profiler) {
              profiler()->add_profile_metric_unwrap(
                head->next->function_info->name.name
              );
            }

            if (m_debugger->handle_function_call(begin, end, 0) == cExit) {
              return cExit;
            }

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

              copy_evar(closure_b, closure_e, next(head), prev(head));
              list_splice(begin_argument, closure_b, closure_e);
              splice_to_freelist(function, function);
              res = cSuccess;
            }

            if (res == cSuccess) {
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

          if (m_diagnostic_config->enable_profiler) {
            profiler()->add_profile_metric_call(callee->name.name);
          }

          rasl = callee->rasl;
          m_module = callee->module;
          stack_top = 0;
        }
        continue;       // избегаем ++rasl в конце цикла

      case icTrashLeftEdge:
        splice_to_freelist_open(this, trash_prev, res);
        break;

      case icTrash:
        splice_to_freelist_open(this, context[bracket], res);
        break;

      case icFail:
        MATCH_FAIL;

      case icFetchSwapHead:
        refalrts_switch_default_violation(rasl->cmd);

      case icFetchSwapInfoBounds:
        {
          assert(RefalSwap::run == callee->rasl);
          RefalSwap *swap = dynamic_cast<RefalSwap*>(callee);
          assert(swap != 0);

          if (swap->left_call) {
            res_b = swap->left_call;
            res_e = res_b->link_info;
          } else {
            MATCH_FAIL;
          }
        }
        break;

      case icSwapSave:
        {
          assert(RefalSwap::run == callee->rasl);
          RefalSwap *swap = dynamic_cast<RefalSwap*>(callee);
          assert(swap != 0);

          list_splice(m_swap_hedge.next, bb, be);
          swap->left_call = bb;
        }
        break;

      case icPerformNative:
        {
          if (m_debugger->handle_function_call(begin, end, callee) == cExit) {
            return cExit;
          }
          RefalNativeFunction *native_callee =
            static_cast<RefalNativeFunction*>(callee);
          FnResult res = (native_callee->ptr)(this, begin, end);
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

void refalrts::VM::read_counters(double counters[]) {
  counters[cPerformanceCounter_TotalSteps] = step_counter();
}

bool refalrts::VM::equal_nodes(refalrts::Iter node1, refalrts::Iter node2) {
  if (node1->tag != node2->tag) {
    return false;
  } else {
    switch(node1->tag) {
      case refalrts::cDataChar:
        return (node1->char_info == node2->char_info);

      case refalrts::cDataNumber:
        return (node1->number_info == node2->number_info);

      case refalrts::cDataFunction:
        return (node1->function_info == node2->function_info);

      case refalrts::cDataIdentifier:
        return (node1->ident_info == node2->ident_info);

      /*
        Сведения о связях между скобками нужны для других целей, здесь
        же нам важны только их одновременные появления.
      */
      case refalrts::cDataOpenBracket:
      case refalrts::cDataCloseBracket:
      case refalrts::cDataOpenADT:
      case refalrts::cDataCloseADT:
        return true;

      case refalrts::cDataFile:
        return (node1->file_info == node2->file_info);

      case refalrts::cDataClosure:
        return (node1->link_info == node2->link_info);

      /*
        Данная функция предназначена только для использования функциями рас-
        познавания образца. Поэтому других узлов мы тут не ожидаем.
      */
      default:
        refalrts_switch_default_violation(node1->tag);
    }
    // Все ветви в case завершаются либо return, либо throw.
  }
}

bool refalrts::VM::equal_expressions(
  refalrts::Iter first1, refalrts::Iter last1,
  refalrts::Iter first2, refalrts::Iter last2
) {
  assert((first1 == 0) == (last1 == 0));
  assert((first2 == 0) == (last2 == 0));

  profiler()->start_repeated_tvar();

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

  profiler()->stop_repeated();

  // Успешное завершение -- если мы достигли конца в обоих выражениях
  return refalrts::empty_seq(first1, last1)
    && refalrts::empty_seq(first2, last2);
}

refalrts::Iter refalrts::VM::repeated_stvar_left(
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

refalrts::Iter refalrts::VM::repeated_stvar_right(
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

bool refalrts::VM::repeated_evar_left(
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  profiler()->start_repeated_evar();
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

  profiler()->stop_repeated();

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

bool refalrts::VM::repeated_evar_right(
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  profiler()->start_repeated_evar();
  refalrts::Iter current = last;
  refalrts::Iter cur_sample = evar_e_sample;
  refalrts::Iter copy_first = first;

  while (
    // порядок перечисления условий важен
    ! empty_seq(evar_b_sample, cur_sample)
    && ! (
      empty_seq(copy_first, current)
      || ! VM::equal_nodes(current, cur_sample)
    )
  ) {
    move_right(copy_first, current);
    move_right(evar_b_sample, cur_sample);
  }

  profiler()->stop_repeated();

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

void refalrts::VM::copy_node(refalrts::Iter& res, refalrts::Iter sample) {
  switch(sample->tag) {
    case refalrts::cDataChar:
      alloc_char(res, sample->char_info);
      break;

    case refalrts::cDataNumber:
      alloc_number(res, sample->number_info);
      break;

    case refalrts::cDataFunction:
      alloc_name(res, sample->function_info);
      break;

    case refalrts::cDataIdentifier:
      alloc_ident(res, sample->ident_info);
      break;

    case refalrts::cDataOpenBracket:
      alloc_open_bracket(res);
      break;

    case refalrts::cDataCloseBracket:
      alloc_close_bracket(res);
      break;

    case refalrts::cDataOpenADT:
      alloc_open_adt(res);
      break;

    case refalrts::cDataCloseADT:
      alloc_close_adt(res);
      break;

    case refalrts::cDataClosure:
      {
        alloc_node(res);
        res->tag = refalrts::cDataClosure;
        refalrts::Iter head = sample->link_info;
        res->link_info = head;
        ++ (head->number_info);
      }
      break;

    case refalrts::cDataFile:
      alloc_node(res);
      res->tag = refalrts::cDataFile;
      res->file_info = sample->file_info;
      break;

    /*
      Копируем только объектное выражение -- никаких вызовов функций
      быть не должно.
    */
    default:
      refalrts_switch_default_violation(sample->tag);
  }
}

void refalrts::VM::copy_nonempty_evar(
  refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  profiler()->start_copy();

  refalrts::Iter res = 0;
  refalrts::Iter bracket_stack = 0;

  refalrts::Iter prev_res_begin = prev(m_free_ptr);

  while (! refalrts::empty_seq(evar_b_sample, evar_e_sample)) {
    copy_node(res, evar_b_sample);

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

  profiler()->stop_copy();
}

void refalrts::VM::alloc_chars(
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  if (buflen == 0) {
    res_b = 0;
    res_e = 0;
  } else {
    refalrts::Iter before_begin_seq = prev(m_free_ptr);
    refalrts::Iter end_seq = 0;

    for (unsigned i = 0; i < buflen; ++ i) {
      alloc_char(end_seq, buffer[i]);
    }

    res_b = next(before_begin_seq);
    res_e = end_seq;
  }
}

void refalrts::VM::alloc_string(
  refalrts::Iter& res_b, refalrts::Iter& res_e, const char *string
) {
  if (*string == '\0') {
    res_b = 0;
    res_e = 0;
  } else {
    refalrts::Iter before_begin_seq = prev(m_free_ptr);
    refalrts::Iter end_seq = 0;

    for (const char *p = string; *p != '\0'; ++ p) {
      alloc_char(end_seq, *p);
    }

    res_b = next(before_begin_seq);
    res_e = end_seq;
  }
}

void refalrts::VM::reinit_svar(refalrts::Iter res, refalrts::Iter sample) {
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

void refalrts::VM::splice_to_freelist(
  refalrts::Iter begin, refalrts::Iter end
) {
  reset_allocator_aux();
  list_splice(m_free_ptr, begin, end);
}

refalrts::Iter refalrts::VM::splice_from_freelist(refalrts::Iter pos) {
  if (m_free_ptr != m_begin_free_list.next) {
    return list_splice(pos, m_begin_free_list.next, m_free_ptr->prev);
  } else {
    return pos;
  }
}
