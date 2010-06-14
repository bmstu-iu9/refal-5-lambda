using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;

public class RefalRTS
{
  public enum FnResult
  {
    Success, RecognitionImpossible, NoMemory, Exit
  }

  public enum DataTag
  {
    Illegal,
    SwapHead,
    Char,
    Number,
    Function,
    Identifier,
    OpenADT, CloseADT,
    OpenBracket, CloseBracket,
    OpenCall, CloseCall,
    Handle,
    Closure,
    ClosureHead,
    Start,
    Pivot,
    Last
  }

  public abstract class Function
  {
    public abstract string func_name();
    public abstract FnResult perform(UInt64 arg_begin, UInt64 arg_end);
  }

  class Identifier : Function
  {
    public Identifier(string name)
    {
      m_name = name;
    }

    public override string func_name()
    {
      return m_name;
    }

    public override FnResult perform(UInt64 arg_begin, UInt64 arg_end)
    {
      return FnResult.RecognitionImpossible;
    }

    private string m_name;
  }

  public class create_closure : Function
  {
    public override string func_name()
    {
      return "RefalRTS.create_closure";
    }

    public override FnResult perform(ulong open_call, ulong close_call)
    {
      UInt64 func_name = memory.next(open_call);
      UInt64 arg_begin = memory.next(func_name);
      UInt64 arg_end = memory.prev(close_call);

      reset_allocator();
      UInt64 closure = allocate();
      if (closure == UInt64.MaxValue) return FnResult.NoMemory;

      memory.set_tag(closure, DataTag.Closure);
      memory.insert_before(open_call, closure, closure);

      // Инициализация головы замыкания
      memory.set_tag(open_call, DataTag.ClosureHead);
      memory.set_number(open_call, 1); // Счётчик связи

      // Построение объекта замыкания
      memory.set_tag(func_name, DataTag.OpenBracket);
      memory.set_function(func_name, null);
      memory.set_tag(close_call, DataTag.CloseBracket);
      link_brackets(func_name, close_call);

      // Перенос из поля зрения
      memory.insert_before(memory.pivot(), open_call, close_call);

      // Инициализация узла-замыкания
      memory.set_number(closure, open_call);
      return FnResult.Success;
    }

    private create_closure()
    {
      /* пусто */
    }

    public static readonly Function instance = new create_closure();
  }

  public abstract class Swap : Function
  {
    public Swap()
    {
      m_head = UInt64.MaxValue;
    }

    public override FnResult perform(ulong open_call, ulong close_call)
    {
      UInt64 func_name = memory.next(open_call);
      UInt64 arg_begin = memory.next(func_name);
      UInt64 arg_end = memory.prev(close_call);

      if (m_head == UInt64.MaxValue)
      {
        // Инициализация статического ящика
        memory.insert_before(open_call, func_name, func_name);
        memory.set_tag(func_name, DataTag.SwapHead);
        memory.set_tag(open_call, DataTag.OpenBracket);
        memory.set_tag(close_call, DataTag.CloseBracket);
        link_brackets(open_call, close_call);

        // Перенос из поля зрения
        memory.insert_before(memory.pivot(), func_name, close_call);
        return FnResult.Success;
      }
      else
      {
        UInt64 saved_begin = UInt64.MaxValue;
        UInt64 saved_end = UInt64.MaxValue;
        UInt64 holder = get_object_insert_pos(m_head);

        get_object_content(m_head, ref saved_begin, ref saved_end);

        // Обмен
        memory.insert_before(open_call, saved_begin, saved_end);
        memory.insert_before(holder, arg_begin, arg_end);
        garbage(open_call, close_call);
        return FnResult.Success;
      }
    }

    private UInt64 m_head;
  }

  public static Hashtable sm_ident_table = new Hashtable();

  public static Function alloc_ident(string name)
  {
    if (!sm_ident_table.ContainsKey(name))
    {
      sm_ident_table.Add(name, new Identifier(name));
    }

    Function f = (Function) sm_ident_table[name];
    return f;
  }



  //============================================================================
  // Примитивные операции
  //============================================================================

  // Операции распознавания

  public static void use(ref UInt64 pnode)
  {
    pnode = pnode + 0;
  }

  public static bool is_open_bracket(UInt64 pnode)
  {
    bool res =
      (DataTag.OpenBracket == memory.get_tag(pnode))
      || (DataTag.OpenADT == memory.get_tag(pnode));
    return res;

  }

  public static bool is_close_bracket(UInt64 pnode)
  {
    bool res = (DataTag.CloseBracket == memory.get_tag(pnode))
      || (DataTag.CloseADT == memory.get_tag(pnode));
    return res;
  }

  public static void move_left(ref UInt64 pfirst, ref UInt64 plast)
  {
    if (!(is_empty(pfirst, plast)))
    {
      pfirst = memory.next(pfirst);
    }

  }

  public static void move_right(ref UInt64 pfirst, ref UInt64 plast)
  {
    if (!(is_empty(pfirst, plast)))
    {
      plast = memory.prev(plast);
    }

  }

  public static bool function_left(
    Function fn, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(pfirst) != DataTag.Function)
    {
      return false;
    }
    else if (memory.get_function(pfirst) != fn)
    {
      return false;
    }
    else
    {
      move_left(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool function_right(
    Function fn, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(plast) != DataTag.Function)
    {
      return false;
    }
    else if (memory.get_function(plast) != fn)
    {
      return false;
    }
    else
    {
      move_right(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool char_left(char ch, ref UInt64 pfirst, ref UInt64 plast)
  {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(pfirst) != DataTag.Char)
    {
      return false;
    }
    else if (Convert.ToChar(memory.get_number(pfirst)) != ch)
    {
      return false;
    }
    else
    {
      move_left(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool char_right(char ch, ref UInt64 pfirst, ref UInt64 plast)
  {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(plast) != DataTag.Char)
    {
      return false;
    }
    else if (Convert.ToChar(memory.get_number(plast)) != ch)
    {
      return false;
    }
    else
    {
      move_right(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool number_left(
    UInt64 num, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(pfirst) != DataTag.Number)
    {
      return false;
    }
    else if (memory.get_number(pfirst) != num)
    {
      return false;
    }
    else
    {
      move_left(ref pfirst, ref plast);
      return true;
    }
  }


  public static bool number_right(
    UInt64 num, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(plast) != DataTag.Number)
    {
      return false;
    }
    else if (memory.get_number(plast) != num)
    {
      return false;
    }
    else
    {
      move_right(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool ident_left(
    Function ident, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(pfirst) != DataTag.Identifier)
    {
      return false;
    }
    else if (memory.get_function(pfirst) != ident)
    {
      return false;
    }
    else
    {
      move_left(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool ident_right(
    Function ident, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(plast) != DataTag.Identifier)
    {
      return false;
    }
    else if (memory.get_function(plast) != ident)
    {
      return false;
    }
    else
    {
      move_right(ref pfirst, ref plast);
      return true;
    }
  }


  public static bool brackets_left(
    ref UInt64 pres_first, ref UInt64 pres_last,
    ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(pfirst) != DataTag.OpenBracket)
    {
      return false;
    }
    else
    {
      UInt64 left_bracket = pfirst;
      UInt64 right_bracket = memory.get_number(pfirst);

      pres_first = memory.next(left_bracket);
      pres_last = memory.prev(right_bracket);

      pfirst = memory.next(right_bracket);
      return true;
    }
  }

  public static bool brackets_right(
    ref UInt64 pres_first, ref UInt64 pres_last,
    ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(plast) != DataTag.CloseBracket)
    {
      return false;
    }
    else
    {
      UInt64 right_bracket = plast;
      UInt64 left_bracket = memory.get_number(plast);

      pres_first = memory.next(left_bracket);
      pres_last = memory.prev(right_bracket);

      plast = memory.prev(left_bracket);

      return true;
    }
  }


  public static bool adt_left(
    ref UInt64 pres_first, ref UInt64 pres_last,
    Function tag,
    ref UInt64 pfirst, ref UInt64 plast
  )
  {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(pfirst) != DataTag.OpenADT)
    {
      return false;
    }
    else
    {
      UInt64 left_bracket = pfirst;
      UInt64 right_bracket = memory.get_number(pfirst);
      UInt64 ptag = memory.next(left_bracket);

      if (memory.get_tag(ptag) != DataTag.Function)
      {
        return false;
      }
      else if (memory.get_function(ptag) != tag)
      {
        return false;
      }
      else
      {
        pres_first = memory.next(ptag);
        pres_last = memory.prev(right_bracket);

        pfirst = memory.next(right_bracket);
        return true;
      }
    }
  }

  public static bool adt_right(
    ref UInt64 pres_first, ref UInt64 pres_last,
    Function tag,
    ref UInt64 pfirst, ref UInt64 plast
  )
  {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (memory.get_tag(plast) != DataTag.CloseADT)
    {
      return false;
    }
    else
    {
      UInt64 right_bracket = plast;
      UInt64 left_bracket = memory.get_number(plast);
      UInt64 ptag = memory.next(left_bracket);

      if (memory.get_tag(ptag) != DataTag.Function)
      {
        return false;
      }
      else if (memory.get_function(ptag) != tag)
      {
        return false;
      }
      else
      {
        pres_first = memory.next(ptag);
        pres_last = memory.prev(right_bracket);

        plast = memory.prev(left_bracket);
        return true;
      }
    }
  }

  public static bool svar_left(
    ref UInt64 svar, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (is_open_bracket(pfirst))
    {
      return false;
    }
    else
    {
      svar = pfirst;
      move_left(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool svar_right(
    ref UInt64 svar, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (is_close_bracket(plast))
    {
      return false;
    }
    else
    {
      svar = plast;
      move_right(ref pfirst, ref plast);
      return true;
    }
  }

  public static bool tvar_left(
    ref UInt64 tvar, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (is_open_bracket(pfirst))
    {
      UInt64 right_bracket = memory.get_number(pfirst);

      tvar = pfirst;
      pfirst = memory.next(right_bracket);
      return true;
    }
    else
    {
      tvar = pfirst;
      pfirst = memory.next(pfirst);
      return true;
    }
  }

  public static bool tvar_right(
    ref UInt64 tvar, ref UInt64 pfirst, ref UInt64 plast
  ) {
    if (is_empty(pfirst, plast))
    {
      return false;
    }
    else if (is_close_bracket(plast))
    {
      UInt64 left_bracket = memory.get_number(plast);

      tvar = left_bracket;
      plast = memory.prev(left_bracket);
      return true;
    }
    else
    {
      tvar = plast;
      plast = memory.prev(plast);
      return true;
    }
  }

  public static void next_term(ref UInt64 pfirst, ref UInt64 plast)
  {
    UInt64 first_term = UInt64.MaxValue;
    tvar_left(ref first_term, ref pfirst, ref plast);
    /*
     Функция используется для промотки к следующему терму при анализе
     открытой e-переменной. Т.к. до этого в заголовке цикла проверяется факт,
     что first != last, возвращаемое значение функции можно не проверять.
     */
  }

  public class UnexpectedTypeException : Exception
  {
    public string message;
    public UnexpectedTypeException(string message)
    {
      this.message = message;
    }
  }

  private static bool equal_nodes(UInt64 node1, UInt64 node2)
  {
    // throws UnexpectedTypeException
    if (memory.get_tag(node1) != memory.get_tag(node2))
    {
      return false;
    }
    else
    {
      switch (memory.get_tag(node1))
      {
        case DataTag.Char:
          return (Convert.ToChar(memory.get_number(node1)) ==
            Convert.ToChar(memory.get_number(node2)));
        case DataTag.Number:
          return (memory.get_number(node1) == memory.get_number(node2));
        case DataTag.Function:
          return (memory.get_function(node1) == memory.get_function(node2));
        case DataTag.Identifier:
          return (memory.get_function(node1) == memory.get_function(node2));
        /*
        Сведения о связях между скобками нужны для других целей, здесь
        же нам важны только их одновременные появления.
        */
        case DataTag.OpenADT:
          return true;
        case DataTag.OpenBracket:
          return true;
        case DataTag.CloseADT:
          return true;
        case DataTag.CloseBracket:
          return true;
        case DataTag.Handle:
          return (memory.get_function(node1) == memory.get_function(node2));
        case DataTag.Closure:
          return (memory.get_number(node1) == memory.get_number(node2));
        /*
        Данная функция предназначена только для использования функциями рас-
        познавания образца. Поэтому других узлов мы тут не ожидаем.
        */
        default:
          {
            throw new UnexpectedTypeException("error in equal_nodes\n");
          }

      }
      // Все ветви в case завершаются либо return, либо throw.

    }
  }

  private static bool equal_expressions(
    UInt64 first1, UInt64 last1, UInt64 first2, UInt64 last2
  ) {
    for (/* Пользуемся аргументами функции, инициализация не нужна */;
      // Порядок условий важен
    !is_empty(first1, last1) && !is_empty(first2, last2)
    && equal_nodes(first1, first2);
    move_left(ref first1, ref last1), move_left(ref first2, ref last2))
    {
      continue;
    }
    /*
    Здесь empty_seq( first1, last1 ) || empty_seq( first2, last2 )
    || !equal_nodes( first1, first2 )
    */
    // Успешное завершение -- если мы достигли конца в обоих выражениях

    if (is_empty(first1, last1) && is_empty(first2, last2))
    {
      return true;
    }
    else
    {
      // Любое другое завершение цикла свидетельствует о несовпадении
      return false;
    }

  }

  public static bool repeated_stvar_left(ref UInt64 stvar, UInt64 stvar_sample,
  ref UInt64 first, ref UInt64 last)
  {
    UInt64 left_term = 0;
    UInt64 copy_last = last;
    if (tvar_left(ref left_term, ref first, ref last))
    {
      UInt64 left_term_e;
      UInt64 stvar_sample_e;
      if (is_empty(first, last))
      {
        left_term_e = copy_last;
      }
      else
      {
        left_term_e = memory.prev(first);
      }

      if (is_open_bracket(stvar_sample))
      {
        stvar_sample_e = memory.get_number(stvar_sample);
      }
      else
      {
        stvar_sample_e = stvar_sample;
      }

      bool equal = equal_expressions(left_term, left_term_e,
        stvar_sample, stvar_sample_e);
      if (equal)
      {
        stvar = left_term;
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }

  }


  public static bool repeated_stvar_right(
  ref UInt64 stvar, UInt64 stvar_sample,
  ref UInt64 first, ref UInt64 last)
  {
    UInt64 right_term = 0;
    UInt64 old_last = last;

    if (tvar_right(ref right_term, ref first, ref last))
    {
      UInt64 right_term_e = old_last;
      UInt64 stvar_sample_e;

      if (is_open_bracket(stvar_sample))
      {
        stvar_sample_e = memory.get_number(stvar_sample);
      }
      else
      {
        stvar_sample_e = stvar_sample;
      }

      bool equal = equal_expressions(
        right_term, right_term_e,
        stvar_sample, stvar_sample_e);
      if (equal)
      {
        stvar = right_term;
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }
  }

  public static bool repeated_evar_left(
    ref UInt64 evar_b, ref UInt64 evar_e,
    UInt64 evar_b_sample, UInt64 evar_e_sample,
    ref UInt64 first, ref UInt64 last)
  {
    UInt64 current = first;
    UInt64 cur_sample = evar_b_sample;
    UInt64 copy_last = last;

    for (
      /* инициализация выше */;
      // порядок условий важен
      !is_empty(current, copy_last)
      && !is_empty(cur_sample, evar_e_sample)
      && equal_nodes(current, cur_sample);
      move_left(ref cur_sample, ref evar_e_sample),
      move_left(ref current, ref copy_last))
    {
      continue;
    }
    /*
      Здесь empty_seq( current, copy_last )
      || empty_seq( cur_sample, evar_e_sample )
      || ! equal_nodes( current, cur_sample )
    */
    if (is_empty(cur_sample, evar_e_sample))
    {
      // Это нормальное завершение цикла -- вся образцовая переменная проверена
      if (is_empty(current, copy_last))
      {
        evar_b = first;
        evar_e = last;
        first = memory.next(last);
      }
      else
      {
        evar_b = first;
        evar_e = memory.prev(current);
        first = current;
      }

      return true;
    }
    else
    {
      return false;
    }
  }

  public static bool repeated_evar_right(
    ref UInt64 evar_b, ref UInt64 evar_e,
    UInt64 evar_b_sample, UInt64 evar_e_sample,
    ref UInt64 first, ref UInt64 last)
  {
    UInt64 current = last;
    UInt64 cur_sample = evar_e_sample;
    UInt64 copy_first = first;

    for (
      /* инициализация выше */;
      // порядок перечисления условий важен
      !is_empty(copy_first, current)
      && !is_empty(evar_b_sample, cur_sample)
      && equal_nodes(current, cur_sample);
      move_right(ref copy_first, ref current),
      move_right(ref evar_b_sample, ref cur_sample))
    {
      continue;
    }

    /*
      Здесь empty_seq( copy_first, current )
      || empty_seq( evar_b_sample, cur_sample )
      || ! equal_nodes( current, cur_sample )
    */

    if (is_empty(evar_b_sample, cur_sample))
    {
      // Это нормальное завершение цикла: вся переменная-образец просмотрена

      if (is_empty(copy_first, current))
      {
        evar_b = first;
        evar_e = last;
        last = memory.prev(first);
      }
      else
      {
        evar_b = memory.next(current);
        evar_e = last;

        last = current;
      }
      return true;
    }
    else
    {
      return false;
    }
  }

  public static char[] read_chars(
    ref UInt64 first, ref UInt64 last)
  {
    int read = 0;
    char[] buffer = new char[1];
    for (; ; )
    {
      if (is_empty(first, last))
      {
        return buffer;
      }
      else if (memory.get_tag(first) != DataTag.Char)
      {
        return buffer;
      }
      else
      {
        if (buffer.Length == read)
        {
          char[] newbuffer = new char[buffer.Length * 2];
          buffer.CopyTo(newbuffer, 0);
          buffer = newbuffer;
        }
        buffer[read] = Convert.ToChar(memory.get_number(first));
        ++read;
        move_left(ref first, ref last);
      }
    }
  }


  //----------------------------------------------------------------------------

  // Операции распределителя памяти


  public static bool is_empty(UInt64 begin, UInt64 end)
  {
    return memory.is_empty(begin, end);
    //return false;
  }

  public static void reset_allocator()
  {
    memory.reset_allocator();
  }


  public static void garbage(UInt64 begin, UInt64 end)
  {
    memory.garbage(begin, end);
  }

  public static void check_evar(ref UInt64 begin, ref UInt64 end)
  {
    bool unitialized = (begin == UInt64.MaxValue) && (end == UInt64.MaxValue);
    if ( ! unitialized && is_empty(begin, end))
    {
      begin = UInt64.MaxValue;
      end = UInt64.MaxValue;
    }
  }

  //----------------------------------------------------------------------------

  // Операции построения результата

  private static UInt64 allocate()
  {
    UInt64 next_node = memory.allocate();
    if (next_node == UInt64.MaxValue) return next_node;

    //if (memory.get_tag(next_node) == DataTag.Closure)
    //{
    //  UInt64 phead = memory.get_number(next_node);
    //  UInt64 counter = memory.get_number(phead);
    //  if (counter == 1)
    //  {
    //    // Утилизировать замыкание
    //    UInt64 bounds_b = UInt64.MaxValue, bounds_e = UInt64.MaxValue;
    //    get_object_bounds(phead, ref bounds_b, ref bounds_e);
    //    garbage(bounds_b, bounds_e);
    //  }
    //  else
    //  {
    //    memory.set_number(phead, counter - 1);
    //  }
    //}

    memory.set_tag(next_node, DataTag.Illegal);
    memory.set_number(next_node, 0);
    memory.set_function(next_node, null);

    return next_node;
  }

  public static bool alloc_char(ref UInt64 pos, char value)
  {
    pos = allocate();
    if (pos == UInt64.MaxValue) return false;
    memory.set_tag(pos, DataTag.Char);
    memory.set_number(pos, System.Convert.ToUInt64(value));
    return true;
  }

  public static bool alloc_number(ref UInt64 pos, UInt64 num)
  {
    pos = allocate();
    if (pos == UInt64.MaxValue) return false;
    memory.set_tag(pos, DataTag.Number);
    memory.set_number(pos, num);
    return true;
  }

  public static bool alloc_function(ref UInt64 pos, Function func)
  {
    pos = allocate();
    if (pos == UInt64.MaxValue) return false;
    memory.set_tag(pos, DataTag.Function);
    memory.set_function(pos, func);
    return true;
  }

  public static bool alloc_ident(ref UInt64 pos, Function ident)
  {
    pos = allocate();
    if (pos == UInt64.MaxValue) return false;
    memory.set_tag(pos, DataTag.Identifier);
    memory.set_function(pos, ident);
    return true;
  }

  public static bool alloc_open_bracket(ref UInt64 pos)
  {
    return alloc_some_bracket(ref pos, DataTag.OpenBracket);
  }

  public static bool alloc_open_adt(ref UInt64 pos)
  {
    return alloc_some_bracket(ref pos, DataTag.OpenADT);
  }

  public static bool alloc_close_bracket(ref UInt64 pos)
  {
    return alloc_some_bracket(ref pos, DataTag.CloseBracket);
  }

  public static bool alloc_close_adt(ref UInt64 pos)
  {
    return alloc_some_bracket(ref pos, DataTag.CloseADT);
  }

  public static bool alloc_open_call(ref UInt64 pos)
  {
    return alloc_some_bracket(ref pos, DataTag.OpenCall);
  }

  public static bool alloc_close_call(ref UInt64 pos)
  {
    return alloc_some_bracket(ref pos, DataTag.CloseCall);
  }

  private static bool alloc_some_bracket(ref UInt64 pos, DataTag tag)
  {
    pos = allocate();
    if (pos == UInt64.MaxValue) return false;
    memory.set_tag(pos, tag);
    return true;
  }

  public static UInt64 splice_evar(UInt64 res, UInt64 begin, UInt64 end)
  {
    return memory.insert_before(res, begin, end);
  }

  public static UInt64 splice_stvar(UInt64 res, UInt64 stvar)
  {
    UInt64 var_end;
    if (is_open_bracket(stvar))
    {
      var_end = memory.get_number(stvar);
    }
    else
    {
      var_end = stvar;
    }

    return memory.insert_before(res, stvar, var_end);
  }

  public static UInt64 splice_elem(UInt64 res, UInt64 elem)
  {
    return memory.insert_before(res, elem, elem);
  }

  public static void link_brackets(UInt64 left, UInt64 right)
  {
    memory.set_number(left, right);
    memory.set_number(right, left);
  }

  public static void push_stack(UInt64 call_bracket)
  {
    vm.push_stack(call_bracket);
  }

  public static bool copy_node(ref UInt64 res, UInt64 sample)
  {
    DataTag tag = memory.get_tag(sample);
    switch (tag)
    {
      case DataTag.Char:
        return alloc_char(ref res, Convert.ToChar(memory.get_number(sample)));
      // break;
      case DataTag.Number:
        return alloc_number(ref res, memory.get_number(sample));
      // break;
      case DataTag.Function:
        return alloc_function(ref res, memory.get_function(sample));
      // break;
      case DataTag.Identifier:
        return alloc_ident(ref res, memory.get_function(sample));
      //break;
      case DataTag.OpenBracket:
        return alloc_open_bracket(ref res);
      // break;
      case DataTag.CloseBracket:
        return alloc_close_bracket(ref res);
      // break;
      case DataTag.OpenADT:
        return alloc_open_adt(ref res);
      // break;
      case DataTag.CloseADT:
        return alloc_close_adt(ref res);
      // break;
      case DataTag.Closure:
        {
          res = allocate();
          if (res == UInt64.MaxValue) return false;
          memory.set_tag(res, DataTag.Closure);
          UInt64 head = memory.get_number(sample);
          memory.set_number(res, head);
          memory.set_number(head, memory.get_number(head) + 1);
          return true;
        }
      // break;
      case DataTag.Handle:
        {
          bool allocated = alloc_function(ref res, memory.get_function(sample));
          if (!allocated) return false;
          memory.set_tag(res, DataTag.Handle);
          return true;
        }
      // break;
      /*
      Копируем только объектное выражение -- никаких вызовов функций быть не
      должно.
      */
      default:
        throw new UnexpectedTypeException("error in copy_node: " + tag + "\n");
        // break;
    }
  }

  public static bool copy_evar(ref UInt64 evar_res_b, ref UInt64 evar_res_e,
    UInt64 evar_b_sample, UInt64 evar_e_sample)
  {
    if( is_empty( evar_b_sample, evar_e_sample ) )
    {
      evar_res_b = UInt64.MaxValue;
      evar_res_e = UInt64.MaxValue;
    }
    else
    {
      UInt64 res = UInt64.MaxValue;
      UInt64 bracket_stack = UInt64.MaxValue;
      UInt64 prev_res_begin = memory.prev(memory.free_ptr());
      while( !is_empty( evar_b_sample, evar_e_sample ) )
      {
        if( !copy_node( ref res, evar_b_sample ) )
        {
          return false;
        }
        if( is_open_bracket( res ) )
        {
          memory.set_number(res, bracket_stack);
          bracket_stack = res;
        }
        else if( is_close_bracket( res ) )
        {
          UInt64 open_cobracket = bracket_stack;
          bracket_stack = memory.get_number(bracket_stack);
          link_brackets( open_cobracket, res );
        }
        move_left(ref evar_b_sample,ref evar_e_sample );
      }
      evar_res_b = memory.next( prev_res_begin );
      evar_res_e = res;
    }
    return true;
  }

  public static bool copy_stvar(ref UInt64 stvar_res, UInt64 stvar_sample)
  {
    UInt64 end_of_sample;
    if( is_open_bracket( stvar_sample ) )
    {
      end_of_sample = memory.get_number(stvar_sample);
    }
    else
    {
      end_of_sample = stvar_sample;
    }

    UInt64 end_of_res = UInt64.MaxValue;
    return copy_evar(
      ref stvar_res, ref end_of_res,
      stvar_sample, end_of_sample
    );
  }

  //----------------------------------------------------------------------------
  // Операции для работы с объектами (замыкания и статические ящики)

  private static void get_object_content(
    UInt64 head, ref UInt64 begin, ref UInt64 end
    )
  {
    UInt64 left_br = memory.next(head);
    begin = memory.next(left_br);
    UInt64 right_br = memory.get_number(left_br);
    end = memory.prev(right_br);
  }

  private static UInt64 get_object_insert_pos(UInt64 head)
  {
    UInt64 left_br = memory.next(head);
    return memory.get_number(left_br);
  }

  private static void get_object_bounds(
    UInt64 head, ref UInt64 begin, ref UInt64 end
    )
  {
    begin = head;
    UInt64 left_br = memory.next(head);
    end = memory.get_number(left_br);
  }

  private static bool allocate_object(ref UInt64 res)
  {
    UInt64 pHead = UInt64.MaxValue;
    UInt64 pLeftBracket = UInt64.MaxValue;
    UInt64 pRightBracket = UInt64.MaxValue;

    bool allocated =
      alloc_number(ref pHead, 0)
      && alloc_open_bracket(ref pLeftBracket)
      && alloc_close_bracket(ref pRightBracket);

    if( allocated )
    {
      res = pHead;
      link_brackets(pLeftBracket, pRightBracket);
      return true;
    }
    else
    {
      return false;
    }
  }

  //----------------------------------------------------------------------------
  // Средства профилирования
  //----------------------------------------------------------------------------

  public static void this_is_a_generated_function()
  {
    profiler.start_generated_function();
  }

  class Profiler
  {
    public Profiler()
    {
      start_profiler();
    }

    public void start_profiler()
    {
      m_start_program_time = clock();
      m_start_gen_function_time = 0;
      m_total_gen_function_time = 0;
      m_in_generated = false;
    }

    public void end_profiler()
    {
      after_step();

      double full_time = 1.0e-3 * time_diff(m_start_program_time, clock());
      double pure_time = 1.0e-3 * m_total_gen_function_time;
      double io_time = full_time - pure_time;

      Console.Error.WriteLine("\nTotal program time: {0} seconds.", full_time);
      Console.Error.WriteLine("Pure calculation time: {0} seconds.", pure_time);
      Console.Error.WriteLine("In/out time: {0} seconds.", io_time);
    }

    public void start_generated_function()
    {
      m_start_gen_function_time = clock();
      m_in_generated = true;
    }

    public void after_step()
    {
      if( m_in_generated )
      {
        UInt64 function_time = time_diff(m_start_gen_function_time, clock());
        m_total_gen_function_time += function_time;
      }

      m_in_generated = false;
    }

    private UInt64 time_diff(UInt64 start, UInt64 end)
    {
      if( start <= end )
      {
        return end - start;
      }
      else
      {
        return uint.MaxValue - (start - end);
      }
    }

    private UInt64 clock()
    {
      return
        System.Convert.ToUInt64(
          System.Convert.ToInt64(Environment.TickCount)
          - int.MinValue
        );
    }

    private UInt64 m_start_program_time;
    private UInt64 m_start_gen_function_time;
    private UInt64 m_total_gen_function_time;
    private bool m_in_generated;
  }

  private static readonly Profiler profiler = new Profiler();

  //============================================================================
  // Распределитель памяти
  //============================================================================

  public class Memory
  {
    // Внешний интерфейс

    public Memory()
    {
      this.m_memory = new Node[3];
      m_memory[0].prev = UInt64.MaxValue;
      m_memory[0].next = 1;
      m_memory[1].prev = 0;
      m_memory[1].next = 2;
      m_memory[2].prev = 1;
      m_memory[2].next = UInt64.MaxValue;
      this.set_tag(0, DataTag.Start);
      this.set_tag(1, DataTag.Pivot);
      this.set_tag(2, DataTag.Last);
      this.m_pfree_head = 2;
    }

    // Доступ к памяти

    public DataTag get_tag(UInt64 pos)
    {
      return m_memory[pos].tag;
    }

    public void set_tag(UInt64 pos, DataTag value)
    {
      m_memory[pos].tag = value;
    }

    public UInt64 get_number(UInt64 pos)
    {
      return m_memory[pos].number;
    }

    public void set_number(UInt64 pos, UInt64 value)
    {
      m_memory[pos].number = value;
    }

    public Function get_function(UInt64 pos)
    {
      return m_memory[pos].func;
    }

    public void set_function(UInt64 pos, Function value)
    {
      m_memory[pos].func = value;
    }

    public UInt64 next(UInt64 pnode)
    {
      return m_memory[pnode].next;
    }

    public UInt64 prev(UInt64 pnode)
    {
      return m_memory[pnode].prev;
    }

    public bool is_empty(UInt64 begin, UInt64 end)
    {
      if ((begin == UInt64.MaxValue) && (end == UInt64.MaxValue))
        return true;
      return next(end) == begin;
    }

    // Управление двусвязным списком

    public UInt64 insert_before(UInt64 pos, UInt64 begin, UInt64 end)
    {
      //vm.make_dump(UInt64.MaxValue, UInt64.MaxValue);
      if (is_empty(begin, end)) return pos;

      UInt64 prev_pos = prev(pos);
      UInt64 prev_begin = prev(begin);
      UInt64 next_end = next(end);

      m_memory[prev_pos].next = begin;
      m_memory[begin].prev = prev_pos;

      m_memory[pos].prev = end;
      m_memory[end].next = pos;

      m_memory[prev_begin].next = next_end;
      m_memory[next_end].prev = prev_begin;

      //vm.make_dump(UInt64.MaxValue, UInt64.MaxValue);
      return begin;
    }

    // Опорный узел (граница между полем зрения и списком свободных узлов)
    public UInt64 pivot()
    {
      return 1;
    }

    //неподвижное начало поля зрения

    public UInt64 start()
    {
      return 0;
    }

    public UInt64 free_ptr()
    {
      return m_pfree_head;
    }

    public void garbage(UInt64 begin, UInt64 end)
    {
      insert_before(next(pivot()), begin, end);
    }

    public UInt64 allocate()
    {
      //vm.make_dump(UInt64.MaxValue, UInt64.MaxValue);
      if (m_memory[m_pfree_head].tag == DataTag.Last)
      {
        try
        {
          grow();
        }
        catch (OutOfMemoryException e)
        {
          return UInt64.MaxValue;
        }
      }

      UInt64 presult = m_pfree_head;
      m_pfree_head = next(m_pfree_head);
      if (get_tag(presult) == DataTag.Closure)
      {
        UInt64 head = get_number(presult);
        UInt64 counter = get_number(head);
        if (counter == 1)
        {
          UInt64 cl_b = UInt64.MaxValue;
          UInt64 cl_e = UInt64.MaxValue;

          get_object_bounds(head, ref cl_b, ref cl_e);
          m_pfree_head = insert_before(m_pfree_head, cl_b, cl_e);
        }
        else
        {
          set_number(head, counter - 1);
        }
      }
      return presult;
    }

    public void reset_allocator()
    {
      m_pfree_head = m_memory[pivot()].next;
    }

    public void array_dump(StreamWriter output)
    {
      output.WriteLine("Array:");
      for (int i = 0; i < m_memory.Length; ++i)
      {
        output.WriteLine(
          "[" + i + "], next:" + m_memory[i].next
          + ", prev: " + m_memory[i].prev
          + ", tag: " + m_memory[i].tag
          + ", number: " + m_memory[i].number
          + ", function: " + m_memory[i].func
        );
      }
    }

    // Реализация

    public struct Node
    {
      public UInt64 next;
      public UInt64 prev;
      public DataTag tag;
      public UInt64 number;
      public Function func;

      public Node(DataTag tag, UInt64 number)
      {
        this.next = UInt64.MaxValue;
        this.prev = UInt64.MaxValue;
        this.tag = tag;
        this.number = number;
        this.func = null;
      }

      public Node(DataTag tag, Function func)
      {
        this.next = UInt64.MaxValue;
        this.prev = UInt64.MaxValue;
        this.tag = tag;
        this.number = 0;
        this.func = func;
      }
    }

    private void grow()
    {
      Node[] new_memory = new Node[m_memory.Length * 2];
      // Копирование имеющейся информации
      for (int i = 0; i < m_memory.Length; ++i)
      {
        new_memory[i] = m_memory[i];
      }

      // Связываем в двусвязанный список новые элементы
      for (int i = m_memory.Length; i < new_memory.Length; ++i)
      {
        new_memory[i - 1].next = System.Convert.ToUInt64(i);
        new_memory[i].prev = System.Convert.ToUInt64(i - 1);
      }

      new_memory[new_memory.Length - 1].next = UInt64.MaxValue;
      new_memory[new_memory.Length - 1].tag = DataTag.Last;
      new_memory[m_memory.Length - 1].tag = DataTag.Illegal;
      m_memory = new_memory;
    }
    private Node[] m_memory;
    private UInt64 m_pfree_head;
  }

  public static readonly Memory memory = new Memory();

  //============================================================================
  // Упрощённый профилировщик
  //============================================================================





  //============================================================================
  // Виртуальная машина
  //============================================================================



  private class VM
  {
    private enum State
    {
      View,
      String,
      Finish
    }

    // Закрытые члены
    private UInt64 m_stack_ptr = UInt64.MaxValue;
    private int m_ret_code = 0;

    public void set_ret_code(int code)
    {
      m_ret_code = code;
    }

    public int ret_code()
    {
      return m_ret_code;
    }

    private FnResult execute_active(UInt64 begin, UInt64 end)
    {
      UInt64 function = memory.next( begin );
      if( DataTag.Function == memory.get_tag(function))
      {
        return (memory.get_function(function).perform(begin, end));
      }
      else if( DataTag.Closure == memory.get_tag(function))
      {
        UInt64 head = memory.get_number(function);
        UInt64 counter = memory.get_number(head);
        UInt64 content_begin = UInt64.MaxValue;
        UInt64 content_end = UInt64.MaxValue;
        get_object_content(head, ref content_begin, ref content_end);
        if( 1 == counter )
        {
          // Переносим контент в поле зрения
          memory.insert_before(function, content_begin, content_end);
          // Удаляем ненужные элементы:
          // а) из вызова функции:
          memory.set_tag(function, DataTag.Illegal);
          garbage(function, function);
          // б) остатки от замыкания:
          get_object_bounds(head, ref content_begin, ref content_end);
          garbage(head, content_end);
        }
        else
        {
          // Копируем контент в поле зрения
          UInt64 begin_argument = memory.next( function );
          UInt64 closure_b = UInt64.MaxValue;
          UInt64 closure_e = UInt64.MaxValue;

          check_evar(ref content_begin, ref content_end);

          reset_allocator();

          if(
	    ! copy_evar(
	      ref closure_b, ref closure_e, content_begin, content_end
	    )
	  )
            return FnResult.NoMemory;

          memory.insert_before( begin_argument, closure_b, closure_e );
          memory.set_tag(function, DataTag.Illegal);
          memory.set_number(head, counter - 1);
          garbage(function, function);
        }
        push_stack( end );
        push_stack( begin );
        return FnResult.Success;
      }
      else
      {
        return FnResult.RecognitionImpossible;
      }
    }

    // Открытый интерфейс

    public static UInt64 step_counter = 0;

    public void push_stack( UInt64 call_bracket )
    {
      memory.set_number(call_bracket, m_stack_ptr);
      m_stack_ptr = call_bracket;
    }

    public UInt64 pop_stack()
    {
      UInt64 res = m_stack_ptr;
      m_stack_ptr = memory.get_number(m_stack_ptr);
      return res;
    }

    public bool empty_stack()
    {
      return (m_stack_ptr == UInt64.MaxValue);
    }

    public FnResult init_view_field()
    {
      reset_allocator();
      UInt64 res = memory.pivot();

      UInt64 n0 = UInt64.MaxValue;
      if (!alloc_open_call(ref n0))
        return FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if (!alloc_function(ref n1, global_Go.instance))
        return FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! alloc_close_call( ref n2 ) )
        return FnResult.NoMemory;
      push_stack( n2 );
      push_stack( n0 );
      res = splice_elem( res, n2 );
      res = splice_elem( res, n1 );
      res = splice_elem( res, n0 );
      return FnResult.Success;

     }

    public FnResult main_loop()
    {
      FnResult res = FnResult.Success;
      while( ! empty_stack() )
      {
        UInt64 active_begin = pop_stack();
        UInt64 active_end = pop_stack();

        //Console.Error.WriteLine("===Step " + step_counter + "===");
        //make_dump(active_begin, active_end);
        res = execute_active(active_begin, active_end);
        profiler.after_step();
        ++ step_counter;

        if( res != FnResult.Success )
        {
          Console.WriteLine("Error, memory dumped to ___stderr.txt");
          switch( res )
          {
            case  FnResult.RecognitionImpossible:
              Console.Error.WriteLine("\nRECOGNITION IMPOSSIBLE");
              break;
            case  FnResult.NoMemory:
              Console.Error.WriteLine("\nNO MEMORY");
              break;
            case  FnResult.Exit:
              return res;
            default:
              Console.Error.WriteLine("\nUNKNOWN ERROR");
              break;
          }
          make_dump( active_begin, active_end );
          return res;
        }
        else
        {
          continue;
        }
      }
      return res;
    }

    public void print_seq(TextWriter output, UInt64 begin, UInt64 end)
    {
      State state = State.View;

      for( ; ; )
      {
        // Условия выхода из цикла
        if (state == State.Finish) break;
        if (end == UInt64.MaxValue)
        {
          if (begin == UInt64.MaxValue) break;
        }
        else
        {
          if (is_empty(begin, end)) break;
        }

        // Тело цикла
        //output.Write("[" + begin + "] ");
        switch (state)
        {
          case State.View:
            DataTag tag = memory.get_tag(begin);
            switch (tag)
            {
              case DataTag.Illegal:
                output.Write("[NONE] ");
                begin = memory.next(begin);
                continue;
              case DataTag.SwapHead:
                output.Write(
		  "\nSwap: " + memory.get_function(begin).func_name() + " "
		);
                begin = memory.next(begin);
                continue;
              case DataTag.Char:
                state = State.String;
                output.Write("\'");
                continue;
              case DataTag.Number:
                output.Write(memory.get_number(begin).ToString() + " ");
                begin = memory.next(begin);
                continue;
              case DataTag.Function:
                output.Write(
		  "&" + memory.get_function(begin).func_name() + " "
		);
                begin = memory.next(begin);
                continue;
              case DataTag.Handle:
                output.Write(
		  "*" + memory.get_function(begin).func_name() + " "
		);
                begin = memory.next(begin);
                continue;
              case DataTag.Identifier:
                output.Write(
		  "#" + memory.get_function(begin).func_name() + " "
		);
                begin = memory.next(begin);
                continue;
              case DataTag.OpenADT:
                output.Write("[ ");
                begin = memory.next(begin);
                continue;
              case DataTag.CloseADT:
                output.Write("] ");
                begin = memory.next(begin);
                continue;
              case DataTag.OpenBracket:
                output.Write("( ");
                begin = memory.next(begin);
                continue;
              case DataTag.CloseBracket:
                output.Write(") ");
                begin = memory.next(begin);
                continue;
              case DataTag.OpenCall:
                output.Write("<");
                begin = memory.next(begin);
                continue;
              case DataTag.CloseCall:
                output.Write("> ");
                begin = memory.next(begin);
                continue;
              case DataTag.Closure:
                output.Write("{ " + memory.get_number(begin) + " } ");
                begin = memory.next(begin);
                continue;
              case DataTag.ClosureHead:
                output.Write(
		  "\nClosure: " + begin + " [" + memory.get_number(begin) + "] "
		);
                begin = memory.next(begin);
                continue;
              case DataTag.Start:
                output.Write("\n\nVIEW FIELD:\n");
                begin = memory.next(begin);
                continue;
              case DataTag.Pivot:
                output.Write("\n\nFREE NODE LIST:\n");
                begin = memory.next(begin);
                continue;
              case DataTag.Last:
                output.Write("\n[END OF FREE LIST]\n");
                state = State.Finish;
                continue;
              default:
                UnexpectedTypeException unex =
                  new UnexpectedTypeException("Error in VM.print_seq()");
                throw unex;
              // break;
            }
          case State.String:
            switch (memory.get_tag(begin))
            {
              case DataTag.Char:
                {
                  char ch = Convert.ToChar(memory.get_number(begin));
                  switch (ch)
                  {
                    case '(':
                    case ')':
                    case '<':
                    case '>':
                    case '[':
                    case ']':
                      output.Write("\\" + ch);
                      break;
                    case '\n':
                      output.Write("\\n");
                      break;
                    case '\t':
                      output.Write("\\t");
                      break;
                    case '\\':
                      output.Write("\\\\");
                      break;
                    case '\'':
                      output.Write("\\\'");
                      break;
                    default:
                      if (ch < '\x20')
                      {
                        output.Write(String.Format("{0:x4}", ch)); //16
                      }
                      else
                      {
                        output.Write(ch);
                      }
                      break;
                  }
                  begin = memory.next(begin);
                  continue;
                }
              default:
                state = State.View;
                output.Write("\' ");
                continue;
            }
          case State.Finish:
            break;
          default:
            throw new UnexpectedTypeException("Error in VM.print_seq()");
        }
      }
      if(State.String == state )
      {
        output.Write("\'" );
      }
    }

    public void make_dump(UInt64 begin, UInt64 end )
    {
      //memory.array_dump(st);
      if (begin != UInt64.MaxValue)
      {
        Console.Error.Write("\nERROR EXPRESSION:\n");
        print_seq(Console.Error, begin, end);
      }
      print_seq(Console.Error, memory.start(), UInt64.MaxValue);
      Console.Error.Write("\nEnd dump\n");
      Console.Error.Flush();
    }

  }

  private static VM vm = new VM();

  //============================================================================

  // Используются в Library.cpp

  public static bool alloc_chars(ref UInt64 res_b, ref UInt64 res_e,
    char[] buffer, UInt64 buflen)
  {
    if( buflen == 0 )
    {
      res_b = UInt64.MaxValue;
      res_e = UInt64.MaxValue;
      return true;
    }
    else
    {
      UInt64 before_begin_seq = memory.prev( memory.free_ptr() );
      UInt64 end_seq = UInt64.MaxValue;

      for( UInt64 i = 0; i < buflen; ++ i )
      {
        if( ! alloc_char( ref end_seq, buffer[i] ) )
        {
          return false;
        }
      }
      res_b = memory.next( before_begin_seq );
      res_e = end_seq;

      return true;
    }
  }

  public static bool alloc_string(
    ref UInt64 res_b, ref UInt64 res_e, string str
  ) {
    if( str.Length == 0 )
    {
      res_b = UInt64.MaxValue;
      res_e = UInt64.MaxValue;
      return true;
    }
    else
    {
      UInt64 before_begin_seq = memory.prev(memory.free_ptr());
      UInt64 end_seq = UInt64.MaxValue;

      for(  int i = 0; i < str.Length; ++i )
      {
        if( ! alloc_char( ref end_seq, str[i] ) )
        {
          return false;
        }
      }

      res_b = memory.next( before_begin_seq );
      res_e = end_seq;

      return true;
    }
  }

  public static void set_ret_code(int retcode)
  {
    vm.set_ret_code(retcode);
  }

  public static string get_arg(UInt64 num)
  {
    if (num == 0)
    {
      return "progname.exe";
    }
    else if ((num - 1) < Convert.ToUInt64(sm_args.Length))
    {
      return sm_args[num - 1];
    }
    else
    {
      return "";
    }
  }

  private static string[] sm_args;

  public static int Main(string[] args)
  {
    sm_args = args;
    Console.WriteLine();

    RefalRTS.FnResult res;

    try
    {
      vm.init_view_field();
      res = vm.main_loop();
    }
    catch(RefalRTS.UnexpectedTypeException e)
    {
      Console.Error.WriteLine("INTERNAL ERROR: check all switches: " + e.Message);
      return 3;
    }
    catch(Exception e)
    {
      Console.Error.WriteLine("INTERNAL ERROR: unknown exception: " + e.Message);
      return 4;
    }

    profiler.end_profiler();

    res = FnResult.Success;
    switch (res)
    {
      case FnResult.Success:
        return 0;
      case FnResult.RecognitionImpossible:
        return 1;
      case FnResult.NoMemory:
        return 2;
      case FnResult.Exit:
        return vm.ret_code();
      default:
        {
          Console.Error.WriteLine("INTERNAL ERROR: check switch in main");
          return 5;
        }
    }

  }
}
