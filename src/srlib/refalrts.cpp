#include <errno.h>
#include <exception>
#include <new>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <assert.h>

#include "refalrts.h"
#include "refalrts-commands.h"
#include "refalrts-utils.h"

//FROM refalrts-allocator
#include "refalrts-allocator.h"
//FROM refalrts-debugger
#include "refalrts-debugger.h"
//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-functions
#include "refalrts-functions.h"
//FROM refalrts-profiler
#include "refalrts-profiler.h"
//FROM refalrts-vm
#include "refalrts-vm.h"

//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"

static struct refalrts::NativeModule g_module = { 0, 0, 0, 0, 0, 0 };

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
  return vm->repeated_stvar_term(stvar_sample, pos);
}

refalrts::Iter refalrts::repeated_stvar_left(
  refalrts::VM *vm,
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_stvar_left(stvar, stvar_sample, first, last);
}

refalrts::Iter refalrts::repeated_stvar_right(
  refalrts::VM *vm,
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_stvar_right(stvar, stvar_sample, first, last);
}

bool refalrts::repeated_evar_left(
  refalrts::VM *vm,
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_evar_left(
    evar_b, evar_e, evar_b_sample, evar_e_sample, first, last
  );
}

bool refalrts::repeated_evar_right(
  refalrts::VM *vm,
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_evar_right(
    evar_b, evar_e, evar_b_sample, evar_e_sample, first, last
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
  vm->reset_allocator();
}

bool refalrts::copy_evar(
  refalrts::VM *vm, refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  return vm->copy_evar(evar_res_b, evar_res_e, evar_b_sample, evar_e_sample);
}

bool refalrts::copy_stvar(
  refalrts::VM *vm, refalrts::Iter& stvar_res, refalrts::Iter stvar_sample
) {
  return vm->copy_stvar(stvar_res, stvar_sample);
}

bool refalrts::alloc_copy_evar(
  refalrts::VM *vm, refalrts::Iter& res,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  return vm->alloc_copy_evar(res, evar_b_sample, evar_e_sample);
}

bool refalrts::alloc_copy_svar_(
  refalrts::VM *vm, refalrts::Iter& svar_res, refalrts::Iter svar_sample
) {
  return vm->copy_node(svar_res, svar_sample);
}


bool refalrts::alloc_char(refalrts::VM *vm, refalrts::Iter& res, char ch) {
  return vm->alloc_char(res, ch);
}

bool refalrts::alloc_number(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalNumber num
) {
  return vm->alloc_number(res, num);
}

bool refalrts::alloc_name(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalFunction *fn
) {
  return vm->alloc_name(res, fn);
}

bool refalrts::alloc_ident(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalIdentifier ident
) {
  return vm->alloc_ident(res, ident);
}

bool refalrts::alloc_open_adt(refalrts::VM *vm, refalrts::Iter& res) {
  return vm->alloc_open_adt(res);
}

bool refalrts::alloc_close_adt(refalrts::VM *vm, refalrts::Iter& res) {
  return vm->alloc_close_adt(res);
}

bool refalrts::alloc_open_bracket(refalrts::VM *vm, refalrts::Iter& res) {
  return vm->alloc_open_bracket(res);
}

bool refalrts::alloc_close_bracket(refalrts::VM *vm, refalrts::Iter& res) {
  return vm->alloc_close_bracket(res);
}

bool refalrts::alloc_open_call(refalrts::VM *vm, refalrts::Iter& res) {
  return vm->alloc_open_call(res);
}

bool refalrts::alloc_close_call(refalrts::VM *vm, refalrts::Iter& res) {
  return vm->alloc_close_call(res);
}

bool refalrts::alloc_closure_head(refalrts::VM *vm, refalrts::Iter& res) {
  return vm->alloc_closure_head(res);
}

bool refalrts::alloc_unwrapped_closure(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::Iter head
) {
  return vm->alloc_unwrapped_closure(res, head);
}

bool refalrts::alloc_chars(
  refalrts::VM *vm,
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  return vm->alloc_chars(res_b, res_e, buffer, buflen);
}

bool refalrts::alloc_string(
  refalrts::VM *vm,
  refalrts::Iter& res_b, refalrts::Iter& res_e, const char *string
) {
  return vm->alloc_string(res_b, res_e, string);
}

void refalrts::push_stack(refalrts::VM *vm, refalrts::Iter call_bracket) {
  vm->push_stack(call_bracket);
}

void refalrts::link_brackets(Iter left, Iter right) {
  return VM::link_brackets(left, right);
}

void refalrts::reinit_svar(refalrts::Iter res, refalrts::Iter sample) {
  return VM::reinit_svar(res, sample);
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
  vm->allocator()->splice_to_freelist(begin, end);
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
  return vm->allocator()->splice_from_freelist(pos);
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
// Средства профилирования

void refalrts::this_is_generated_function(refalrts::VM *vm) {
  vm->profiler()->start_generated_function();
}

unsigned long refalrts::ticks_per_second() {
  return CLOCKS_PER_SEC;
}

void refalrts::read_performance_counters(
  refalrts::VM *vm, unsigned long counters[]
) {
  vm->profiler()->read_counters(counters);
  vm->read_counters(counters);
  vm->allocator()->read_counters(counters);
  vm->domain()->read_counters(counters);
}

void refalrts::stop_sentence(refalrts::VM *vm) {
  vm->profiler()->stop_sentence();
}

void refalrts::start_e_loop(refalrts::VM *vm) {
  vm->profiler()->start_e_loop();
}

//------------------------------------------------------------------------------

// Прочие операции

void refalrts::set_return_code(refalrts::VM *vm, int code) {
  vm->set_return_code(code);
}

const char* refalrts::arg(refalrts::VM *vm, unsigned int param) {
  return vm->arg(param);
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

refalrts::RefalIdentDescr::RefalIdentDescr(const char *name)
  : m_name(0)
{
  size_t length = strlen(name);
  m_name = static_cast<char*>(memcpy(new char[length + 1], name, length + 1));
}

refalrts::RefalIdentDescr::~RefalIdentDescr() {
  delete[] m_name;
}

refalrts::RefalIdentifier refalrts::RefalIdentDescr::implode(
  refalrts::Domain *domain, const char *name
) {
  if (! name) {
    name = "";
  }

  RefalIdentifier res = domain->lookup_ident(name);
  if (! res) {
    try {
      res = new RefalIdentDescr(name);
      bool allocated = domain->register_ident(res);

      if (! allocated) {
        delete res;
        res = 0;
      }
    } catch (std::bad_alloc&) {
      if (res) {
        delete res;
        res = 0;
      }
    }
  }
  return res;
}

refalrts::RefalIdentifier refalrts::ident_implode(
  refalrts::VM *vm, const char *name
) {
  return ident_implode(vm->domain(), name);
}

refalrts::IdentReference::IdentReference(const char *name)
  : name(name)
  , next(g_module.list_idents)
  , id(g_module.next_ident_id++)
{
  g_module.list_idents = this;
}

refalrts::RefalIdentifier
refalrts::IdentReference::ref(refalrts::VM *vm) const {
  return (*vm->module())[*this];
}

//------------------------------------------------------------------------------

// Функции

refalrts::RefalFunction *
refalrts::lookup_function(
  refalrts::VM *vm, const refalrts::RefalFuncName& name
) {
  return vm->domain()->lookup_function(name);
}

const refalrts::RefalFuncName *refalrts::function_name(
  const refalrts::RefalFunction *func
) {
  return &func->name;
}


refalrts::ExternalReference::ExternalReference(
  const char *name, refalrts::UInt32 cookie1, refalrts::UInt32 cookie2
)
  : name(name)
  , next(g_module.list_externals)
  , cookie1(cookie1)
  , cookie2(cookie2)
  , id(g_module.next_external_id++)
{
  g_module.list_externals = this;
}

refalrts::RefalFunction *
refalrts::ExternalReference::ref(refalrts::VM *vm) const {
  return (*vm->module())[*this];
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
  const  refalrts::RASLCommand rasl[] = {
    { refalrts::icNextStep, 0, 0, 0 },
  };
  return vm->main_loop(rasl);
}


//==============================================================================

void refalrts::SwitchDefaultViolation::print() {
  fprintf(
    stderr, "%s:%d:INTERNAL ERROR: switch value %s == %ld not handled\n",
    m_filename, m_line, m_bad_expr, m_bad_switch_value
  );
}

//==============================================================================

void refalrts::at_exit(VM *vm, refalrts::AtExitCB callback, void *data) {
  vm->domain()->at_exit(callback, data);
}

refalrts::GlobalRefBase::GlobalRefBase(size_t size)
  : m_offset(g_module.global_variables_memory)
{
  g_module.global_variables_memory += size;
}

void *refalrts::GlobalRefBase::ptr(refalrts::VM *vm) {
  return ptr(vm->module());
}

void *refalrts::GlobalRefBase::ptr(refalrts::Module *module) {
  return module->global_variable(m_offset);
}

refalrts::Module *refalrts::current_module(refalrts::VM *vm) {
  return vm->module();
}

//==============================================================================

int main(int argc, char **argv) {
  refalrts::Allocator allocator;
  refalrts::Profiler profiler;
  refalrts::Domain domain;
  refalrts::VM vm(&allocator, &profiler, &domain);

#ifdef ENABLE_DEBUGGER
  int debug_arg = refalrts::debugger::find_debugger_flag(argc, argv);
  if (debug_arg != -1) {
    for (int i = debug_arg; i < argc; ++i) {
      argv[i] = argv[i + 1];
    }
    --argc;
    vm.set_debugger_factory(refalrts::debugger::RefalDebugger::create);
  }
#endif // ifdef ENABLE_DEBUGGER

  vm.set_args(argc, argv);

  refalrts::FnResult res;
  try {
    bool successed = domain.load_native_module(&g_module);

    if (! successed) {
      domain.unload();
      return 157;
    }

    profiler.start_profiler();
    res = vm.run();
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

  domain.perform_at_exit();
  profiler.end_profiler();
  vm.free_view_field();
  allocator.free_memory();
  domain.unload();
  vm.free_states_stack();

  fflush(stdout);

  switch(res) {
    case refalrts::cSuccess:
      return 0;

    case refalrts::cRecognitionImpossible:
      return 101;

    case refalrts::cNoMemory:
      return 102;

    case refalrts::cExit:
      return vm.get_return_code();

    case refalrts::cStepLimit:
      return 103;

    case refalrts::cIdentTableLimit:
      return 104;

    default:
      fprintf(stderr, "INTERNAL ERROR: check switch in main (res = %d)\n", res);
      return 155;
  }
}
