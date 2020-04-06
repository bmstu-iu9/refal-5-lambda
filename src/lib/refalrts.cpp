#include <stdio.h>
#include <string.h>

#include <assert.h>

#include "refalrts.h"
#include "refalrts-commands.h"
#include "refalrts-functions.h"
#include "refalrts-native-module.h"
#include "refalrts-utils.h"
#include "refalrts-vm.h"

//FROM refalrts-vm-api
#include "refalrts-vm-api.h"

//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"

struct refalrts::NativeModule g_module = { 0, 0 };

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

void refalrts::load_constants(
  refalrts::Iter arg_begin,
  refalrts::RefalFunction ***functions,
  const refalrts::RefalIdentifier **identifiers
) {
  Iter callee = arg_begin->next;
  assert(callee->tag == cDataFunction);

  RefalFunction *func = callee->function_info;
  assert(func->rasl[0].cmd == refalrts::icPerformNative);

  RefalNativeFunction *nat_func = static_cast<RefalNativeFunction*>(func);

  *functions = nat_func->functions;
  *identifiers = nat_func->idents;
}

void refalrts::use_counter(unsigned&) {
  /* Ничего не делаем. Эта функция добавляется, чтобы подавить предупреждение
  компилятора о том, что переменная не используется */;
}

void refalrts::move_left(refalrts::Iter& first, refalrts::Iter& last) {
  VM::move_left(first, last);
}

void refalrts::move_right(refalrts::Iter& first, refalrts::Iter& last) {
  VM::move_right(first, last);
}

bool refalrts::empty_seq(refalrts::Iter first, refalrts::Iter last) {
  return VM::empty_seq(first, last);
}

bool refalrts::function_term(
  const refalrts::RefalFunction *func, refalrts::Iter pos
) {
  return VM::function_term(func, pos);
}

refalrts::Iter refalrts::function_left(
  const refalrts::RefalFunction *fn, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::function_left(fn, first, last);
}

refalrts::Iter refalrts::function_right(
  const refalrts::RefalFunction *fn, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::function_right(fn, first, last);
}

bool refalrts::char_term(char ch, refalrts::Iter& pos) {
  return VM::char_term(ch, pos);
}

refalrts::Iter refalrts::char_left(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::char_left(ch, first, last);
}

refalrts::Iter refalrts::char_right(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::char_right(ch, first, last);
}


bool refalrts::number_term(
  refalrts::RefalNumber num, refalrts::Iter& pos
) {
  return VM::number_term(num, pos);
}

refalrts::Iter refalrts::number_left(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::number_left(num, first, last);
}

refalrts::Iter refalrts::number_right(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::number_right(num, first, last);
}

bool refalrts::ident_term(
  refalrts::RefalIdentifier ident, refalrts::Iter& pos
) {
  return VM::ident_term(ident, pos);
}

refalrts::Iter refalrts::ident_left(
  refalrts::RefalIdentifier ident, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::ident_left(ident, first, last);
}

refalrts::Iter refalrts::ident_right(
  refalrts::RefalIdentifier ident, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::ident_right(ident, first, last);
}

bool refalrts::brackets_term(
  refalrts::Iter& res_first, refalrts::Iter& res_last, refalrts::Iter& pos
) {
  return VM::brackets_term(res_first, res_last, pos);
}

refalrts::Iter refalrts::brackets_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::brackets_left(res_first, res_last, first, last);
}

refalrts::Iter refalrts::brackets_right(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::brackets_right(res_first, res_last, first, last);
}

void refalrts::bracket_pointers(
  refalrts::Iter left_bracket,
  refalrts::Iter& right_bracket
) {
  return VM::bracket_pointers(left_bracket, right_bracket);
}

refalrts::Iter refalrts::adt_term(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  const refalrts::RefalFunction *tag,
  refalrts::Iter pos
) {
  return VM::adt_term(res_first, res_last, tag, pos);
}

refalrts::Iter refalrts::adt_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  const refalrts::RefalFunction *tag,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::adt_left(res_first, res_last, tag, first, last);
}

refalrts::Iter refalrts::adt_right(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  const refalrts::RefalFunction *tag,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::adt_right(res_first, res_last, tag, first, last);
}

void refalrts::adt_pointers(
  refalrts::Iter left_bracket,
  refalrts::Iter& tag,
  refalrts::Iter& right_bracket
) {
  return VM::adt_pointers(left_bracket, tag, right_bracket);
}

refalrts::Iter refalrts::call_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter first, refalrts::Iter last
) {
  return VM::call_left(res_first, res_last, first, last);
}

void refalrts::call_pointers(
  refalrts::Iter left_bracket,
  refalrts::Iter& tag,
  refalrts::Iter& right_bracket
) {
  return VM::call_pointers(left_bracket, tag, right_bracket);
}

bool refalrts::svar_term(
  refalrts::Iter /* svar */, refalrts::Iter pos
) {
  return VM::svar_term(pos);
}

bool refalrts::svar_left(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::svar_left(svar, first, last);
}

bool refalrts::svar_right(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::svar_right(svar, first, last);
}

refalrts::Iter refalrts::tvar_left(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::tvar_left(tvar, first, last);
}

refalrts::Iter refalrts::tvar_right(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {
  return VM::tvar_right(tvar, first, last);
}

bool refalrts::repeated_stvar_term(
  refalrts::VM *vm, refalrts::Iter stvar_sample, refalrts::Iter pos
) {
  return get_api(vm)->repeated_stvar_term(vm, stvar_sample, pos);
}

refalrts::Iter refalrts::repeated_stvar_left(
  refalrts::VM *vm,
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return get_api(vm)->repeated_stvar_left(vm, stvar, stvar_sample, first, last);
}

refalrts::Iter refalrts::repeated_stvar_right(
  refalrts::VM *vm,
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return get_api(vm)->repeated_stvar_right(
    vm, stvar, stvar_sample, first, last
  );
}

bool refalrts::repeated_evar_left(
  refalrts::VM *vm,
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return get_api(vm)->repeated_evar_left(
    vm, evar_b, evar_e, evar_b_sample, evar_e_sample, first, last
  );
}

bool refalrts::repeated_evar_right(
  refalrts::VM *vm,
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return get_api(vm)->repeated_evar_right(
    vm, evar_b, evar_e, evar_b_sample, evar_e_sample, first, last
  );
}

bool refalrts::open_evar_advance(
  Iter& evar_b, Iter& evar_e, Iter& first, Iter& last
) {
  return VM::open_evar_advance(evar_b, evar_e, first, last);
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

void refalrts::reset_allocator(refalrts::VM *vm) {
  get_api(vm)->reset_allocator(vm);
}

void refalrts::copy_evar(
  refalrts::VM *vm, refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  get_api(vm)->copy_evar(
    vm, evar_res_b, evar_res_e, evar_b_sample, evar_e_sample
  );
}

void refalrts::copy_stvar(
  refalrts::VM *vm, refalrts::Iter& stvar_res, refalrts::Iter stvar_sample
) {
  get_api(vm)->copy_stvar(vm, stvar_res, stvar_sample);
}

void refalrts::alloc_copy_evar(
  refalrts::VM *vm, refalrts::Iter& res,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  get_api(vm)->alloc_copy_evar(vm, res, evar_b_sample, evar_e_sample);
}

void refalrts::alloc_copy_svar_(
  refalrts::VM *vm, refalrts::Iter& svar_res, refalrts::Iter svar_sample
) {
  get_api(vm)->alloc_copy_svar(vm, svar_res, svar_sample);
}


void refalrts::alloc_char(refalrts::VM *vm, refalrts::Iter& res, char ch) {
  get_api(vm)->alloc_char(vm, res, ch);
}

void refalrts::alloc_number(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalNumber num
) {
  get_api(vm)->alloc_number(vm, res, num);
}

void refalrts::alloc_name(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalFunction *fn
) {
  get_api(vm)->alloc_name(vm, res, fn);
}

void refalrts::alloc_ident(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalIdentifier ident
) {
  get_api(vm)->alloc_ident(vm, res, ident);
}

void refalrts::alloc_open_adt(refalrts::VM *vm, refalrts::Iter& res) {
  get_api(vm)->alloc_open_adt(vm, res);
}

void refalrts::alloc_close_adt(refalrts::VM *vm, refalrts::Iter& res) {
  get_api(vm)->alloc_close_adt(vm, res);
}

void refalrts::alloc_open_bracket(refalrts::VM *vm, refalrts::Iter& res) {
  get_api(vm)->alloc_open_bracket(vm, res);
}

void refalrts::alloc_close_bracket(refalrts::VM *vm, refalrts::Iter& res) {
  get_api(vm)->alloc_close_bracket(vm, res);
}

void refalrts::alloc_open_call(refalrts::VM *vm, refalrts::Iter& res) {
  get_api(vm)->alloc_open_call(vm, res);
}

void refalrts::alloc_close_call(refalrts::VM *vm, refalrts::Iter& res) {
  get_api(vm)->alloc_close_call(vm, res);
}

void refalrts::alloc_closure_head(refalrts::VM *vm, refalrts::Iter& res) {
  get_api(vm)->alloc_closure_head(vm, res);
}

void refalrts::alloc_unwrapped_closure(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::Iter head
) {
  get_api(vm)->alloc_unwrapped_closure(vm, res, head);
}

void refalrts::alloc_chars(
  refalrts::VM *vm,
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  get_api(vm)->alloc_chars(vm, res_b, res_e, buffer, buflen);
}

void refalrts::alloc_string(
  refalrts::VM *vm,
  refalrts::Iter& res_b, refalrts::Iter& res_e, const char *string
) {
  get_api(vm)->alloc_string(vm, res_b, res_e, string);
}

refalrts::FnResult refalrts::checked_alloc(
  refalrts::VM *vm, refalrts::CheckedAllocFn function, void *data
) {
  return get_api(vm)->checked_alloc(vm, function, data);
}

void refalrts::push_stack(refalrts::VM *vm, refalrts::Iter call_bracket) {
  get_api(vm)->push_stack(vm, call_bracket);
}

void refalrts::link_brackets(Iter left, Iter right) {
  return VM::link_brackets(left, right);
}

void refalrts::reinit_svar(refalrts::Iter res, refalrts::Iter sample) {
  // КОД СКОПИРОВАН ИЗ refalrts-vm.cpp!!!
  // Так сделано ради возможности собрать .dll-ку без refalrts-vm.cpp,
  // см. задачу #170.

  // TODO: отрефакторить как-нибудь когда-нибудь
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
  return VM::reinit_char(res, ch);
}

void refalrts::update_char(refalrts::Iter res, char ch) {
  return VM::update_char(res, ch);
}

void refalrts::reinit_number(refalrts::Iter res, refalrts::RefalNumber num) {
  return VM::reinit_number(res, num);
}

void refalrts::update_number(refalrts::Iter res, refalrts::RefalNumber num) {
  return VM::update_number(res, num);
}

void refalrts::reinit_name(refalrts::Iter res, refalrts::RefalFunction *func) {
  return VM::reinit_name(res, func);
}

void refalrts::update_name(refalrts::Iter res, refalrts::RefalFunction *func) {
  return VM::update_name(res, func);
}

void refalrts::reinit_ident(
  refalrts::Iter res, refalrts::RefalIdentifier ident
) {
  return VM::reinit_ident(res, ident);
}

void refalrts::update_ident(
  refalrts::Iter res, refalrts::RefalIdentifier ident
) {
  return VM::update_ident(res, ident);
}

void refalrts::reinit_open_bracket(refalrts::Iter res) {
  return VM::reinit_open_bracket(res);
}

void refalrts::reinit_close_bracket(refalrts::Iter res) {
  return VM::reinit_close_bracket(res);
}

void refalrts::reinit_open_adt(refalrts::Iter res) {
  return VM::reinit_open_adt(res);
}

void refalrts::reinit_close_adt(refalrts::Iter res) {
  return VM::reinit_close_adt(res);
}

void refalrts::reinit_open_call(refalrts::Iter res) {
  return VM::reinit_open_call(res);
}

void refalrts::reinit_close_call(refalrts::Iter res) {
  return VM::reinit_close_call(res);
}

void refalrts::reinit_closure_head(refalrts::Iter res) {
  return VM::reinit_closure_head(res);
}

void refalrts::reinit_unwrapped_closure(
  refalrts::Iter res, refalrts::Iter head
) {
  return VM::reinit_unwrapped_closure(res, head);
}

refalrts::Iter refalrts::splice_elem(refalrts::Iter res, refalrts::Iter elem) {
  return VM::splice_elem(res, elem);
}

refalrts::Iter refalrts::splice_stvar(refalrts::Iter res, refalrts::Iter var) {
  return VM::splice_stvar(res, var);
}

refalrts::Iter refalrts::splice_evar(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {
  return VM::splice_evar(res, begin, end);
}

void refalrts::splice_to_freelist(
  refalrts::VM *vm, refalrts::Iter begin, refalrts::Iter end
) {
  get_api(vm)->splice_to_freelist(vm, begin, end);
}

extern void refalrts::splice_to_freelist_open(
  refalrts::VM *vm, refalrts::Iter before_first, refalrts::Iter after_last
) {
  if (before_first->next != after_last) {
    refalrts::splice_to_freelist(vm, before_first->next, after_last->prev);
  }
}

refalrts::Iter refalrts::splice_from_freelist(
  refalrts::VM *vm, refalrts::Iter pos
) {
  return get_api(vm)->splice_from_freelist(vm, pos);
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

  refalrts::Iter before_closure = closure->prev;
  refalrts::Iter head = closure->link_info;
  refalrts::Iter end_of_closure = head->prev;

  assert(head != head->prev);
  assert(head != head->next);

  weld(before_closure, head);
  weld(end_of_closure, closure);

  closure->tag = refalrts::cDataUnwrappedClosure;

  return head->prev;
}

// Свернуть замыкание
refalrts::Iter refalrts::wrap_closure(refalrts::Iter closure) {
  assert(closure->tag == refalrts::cDataUnwrappedClosure);

  refalrts::Iter head = closure->link_info;
  refalrts::Iter before_closure = head->prev;
  refalrts::Iter end_of_closure = closure->prev;

  assert(head != head->prev);
  assert(head != head->next);

  weld(before_closure, closure);
  weld(end_of_closure, head);

  closure->tag = refalrts::cDataClosure;

  return closure->next;
}

//------------------------------------------------------------------------------
// Средства профилирования

void refalrts::this_is_generated_function(refalrts::VM *vm) {
  get_api(vm)->start_generated_function(vm);
}

double refalrts::ticks_per_second() {
  return 1e9;
}

void refalrts::read_performance_counters(
  refalrts::VM *vm, double counters[]
) {
  get_api(vm)->read_performance_counters(vm, counters);
}

void refalrts::stop_sentence(refalrts::VM *vm) {
  get_api(vm)->stop_sentence(vm);
}

void refalrts::start_e_loop(refalrts::VM *vm) {
  get_api(vm)->start_e_loop(vm);
}

//------------------------------------------------------------------------------

// Прочие операции

void refalrts::set_return_code(refalrts::VM *vm, int code) {
  get_api(vm)->set_return_code(vm, code);
}

const char* refalrts::arg(refalrts::VM *vm, unsigned int param) {
  return get_api(vm)->arg(vm, param);
}

void refalrts::debug_print_expr(
  refalrts::VM *vm, void *file, refalrts::Iter first, refalrts::Iter last
) {
  get_api(vm)->print_seq(vm, file, first, last);
}

//==============================================================================
// Динамическое связывание
//==============================================================================

//------------------------------------------------------------------------------

// Идентификаторы

refalrts::RefalIdentifier refalrts::ident_implode(
  refalrts::VM *vm, const char *name
) {
  return get_api(vm)->ident_implode(vm, name);
}

//------------------------------------------------------------------------------

// Функции

refalrts::RefalFunction *
refalrts::lookup_function_in_domain(
  refalrts::VM *vm, const refalrts::RefalFuncName& name
) {
  return get_api(vm)->lookup_function_in_domain(vm, name);
}

refalrts::RefalFunction *
refalrts::lookup_function_in_module(
  refalrts::VM *vm,
  refalrts::Module *module, const refalrts::RefalFuncName& name
) {
  return get_api(vm)->lookup_function_in_module(module, name);
}

const refalrts::RefalFuncName *refalrts::function_name(
  const refalrts::RefalFunction *func
) {
  return &func->name;
}


//------------------------------------------------------------------------------

// Загружаемый модуль

refalrts::NativeReference::NativeReference(
  const char *name,
  UInt32 cookie1,
  UInt32 cookie2,
  RefalFunctionPtr code
)
  : name(name)
  , cookie1(cookie1)
  , cookie2(cookie2)
  , code(code)
  , next(g_module.native_references)
{
  g_module.native_references = this;
}

//==============================================================================
// Интерпретатор
//==============================================================================

refalrts::FnResult refalrts::recursive_call_main_loop(refalrts::VM *vm) {
  return get_api(vm)->main_loop(vm);
}


//==============================================================================

void refalrts::switch_default_violation_impl(
  const char *filename, int line_no, long bad_switch_value, const char *bad_expr
) {
  fprintf(
    stderr, "%s:%d:INTERNAL ERROR: switch value %s == %ld not handled\n",
    filename, line_no, bad_expr, bad_switch_value
  );
  exit(151);
}

//==============================================================================

refalrts::GlobalRefBase::GlobalRefBase(size_t size)
  : m_offset(g_module.global_variables_memory)
{
  g_module.global_variables_memory += size;
}

void *refalrts::GlobalRefBase::ptr(refalrts::VM *vm) {
  return get_api(vm)->ref_ptr(vm, m_offset);
}

refalrts::Module *refalrts::current_module(refalrts::VM *vm) {
  return get_api(vm)->current_module(vm);
}

namespace {

void empty_module_loading_error_callback (
  refalrts::ModuleLoadingError /*error*/,
  refalrts::ModuleLoadingErrorDetail * /*detail*/,
  void * /*callback_data*/
) {
  /* пусто */
}

}  // безымянное namespace

refalrts::Module *refalrts::load_module(
  refalrts::VM *vm, refalrts::Iter pos, const char *name,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::FnResult& result
) {
  if (! event) {
    event = empty_module_loading_error_callback;
  }
  return get_api(vm)->load_module(vm, pos, name, event, callback_data, result);
}

void refalrts::unload_module(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::Module *module,
  refalrts::FnResult& result
) {
  return get_api(vm)->unload_module(vm, pos, module, result);
}

refalrts::RefalFunction * refalrts::load_module_rep(
  refalrts::VM *vm, refalrts::Iter pos, const char *name,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::FnResult& result
) {
  if (! event) {
    event = empty_module_loading_error_callback;
  }
  return get_api(vm)->load_module_rep(
    vm, pos, name, event, callback_data, result
  );
}

bool refalrts::unload_module(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::RefalFunction *module_rep,
  refalrts::FnResult& result
) {
  return get_api(vm)->unload_module_rep(vm, pos, module_rep, result);
}

refalrts::Module *refalrts::module_from_function_rep(
  refalrts::VM *vm, refalrts::RefalFunction *module_rep
) {
  return get_api(vm)->module_from_function_rep(module_rep);
}

bool refalrts::dangerous_state(refalrts::VM *vm) {
  return get_api(vm)->dangerous_state(vm);
}
