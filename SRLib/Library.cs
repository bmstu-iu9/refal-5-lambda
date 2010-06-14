using System;
using System.IO;
using System.Diagnostics;

public class global_Success : RefalRTS.Function
{
  private global_Success() { }
  public override string func_name()
  {
    return "global_Success";
  }

  public static readonly RefalRTS.Function instance = new global_Success();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Fails : RefalRTS.Function
{
  private global_Fails() { }
  public override string func_name()
  {
    return "global_Fails";
  }

  public static readonly RefalRTS.Function instance = new global_Fails();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_True : RefalRTS.Function
{
  private global_True() { }
  public override string func_name()
  {
    return "global_True";
  }

  public static readonly RefalRTS.Function instance = new global_True();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_False : RefalRTS.Function
{
  private global_False() { }
  public override string func_name()
  {
    return "global_False";
  }

  public static readonly RefalRTS.Function instance = new global_False();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Add : RefalRTS.Function
{
  private global_Add() { }
  public override string func_name()
  {
    return "global_Add";
  }

  public static readonly RefalRTS.Function instance = new global_Add();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sX_1 = UInt64.MaxValue;
      UInt64 sY_1 = UInt64.MaxValue;
      if (!RefalRTS.svar_left(ref sX_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sX_1) )
        break;
      if (!RefalRTS.svar_left(ref sY_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sY_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      UInt64 resnum =
        RefalRTS.memory.get_number(sX_1) + RefalRTS.memory.get_number(sY_1);
      if (!RefalRTS.alloc_number(ref n0, resnum))
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Sub : RefalRTS.Function
{
  private global_Sub() { }
  public override string func_name()
  {
    return "global_Sub";
  }

  public static readonly RefalRTS.Function instance = new global_Sub();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sX_1 = UInt64.MaxValue;
      UInt64 sY_1 = UInt64.MaxValue;
      if (!RefalRTS.svar_left(ref sX_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sX_1))
        break;
      if (!RefalRTS.svar_left(ref sY_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sY_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      UInt64 resnum =
        RefalRTS.memory.get_number(sX_1) - RefalRTS.memory.get_number(sY_1);
      if (!RefalRTS.alloc_number(ref n0, resnum))
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Mul : RefalRTS.Function
{
  private global_Mul() { }
  public override string func_name()
  {
    return "global_Mul";
  }

  public static readonly RefalRTS.Function instance = new global_Mul();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sX_1 = UInt64.MaxValue;
      UInt64 sY_1 = UInt64.MaxValue;
      if (!RefalRTS.svar_left(ref sX_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sX_1))
        break;
      if (!RefalRTS.svar_left(ref sY_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sY_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      UInt64 resnum =
        RefalRTS.memory.get_number(sX_1) * RefalRTS.memory.get_number(sY_1);
      if (!RefalRTS.alloc_number(ref n0, resnum))
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Div : RefalRTS.Function
{
  private global_Div() { }
  public override string func_name()
  {
    return "global_Div";
  }

  public static readonly RefalRTS.Function instance = new global_Div();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sX_1 = UInt64.MaxValue;
      UInt64 sY_1 = UInt64.MaxValue;
      if (!RefalRTS.svar_left(ref sX_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sX_1))
        break;
      if (!RefalRTS.svar_left(ref sY_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sY_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      UInt64 resnum =
        RefalRTS.memory.get_number(sX_1) / RefalRTS.memory.get_number(sY_1);
      if (!RefalRTS.alloc_number(ref n0, resnum))
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Mod : RefalRTS.Function
{
  private global_Mod() { }
  public override string func_name()
  {
    return "global_Mod";
  }

  public static readonly RefalRTS.Function instance = new global_Mod();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sX_1 = UInt64.MaxValue;
      UInt64 sY_1 = UInt64.MaxValue;
      if (!RefalRTS.svar_left(ref sX_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sX_1))
        break;
      if (!RefalRTS.svar_left(ref sY_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sY_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      UInt64 resnum =
        RefalRTS.memory.get_number(sX_1) % RefalRTS.memory.get_number(sY_1);
      if (!RefalRTS.alloc_number(ref n0, resnum))
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Ord : RefalRTS.Function
{
  private global_Ord() { }
  public override string func_name()
  {
    return "global_Ord";
  }

  public static readonly RefalRTS.Function instance = new global_Ord();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sX_1 = UInt64.MaxValue;
      // s.X
      //(0 0 )
      if (!RefalRTS.svar_left(ref sX_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Char != RefalRTS.memory.get_tag(sX_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.memory.set_tag(sX_1, RefalRTS.DataTag.Number);
      res = RefalRTS.splice_stvar(res, sX_1);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}


public class global_Chr : RefalRTS.Function
{
  private global_Chr() { }
  public override string func_name()
  {
    return "global_Chr";
  }

  public static readonly RefalRTS.Function instance = new global_Chr();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sX_1 = UInt64.MaxValue;
      // s.X
      //(0 0 )
      if (!RefalRTS.svar_left(ref sX_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sX_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.memory.set_tag(sX_1, RefalRTS.DataTag.Char);
      res = RefalRTS.splice_stvar(res, sX_1);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}


public class global_Arg : RefalRTS.Function
{
  private global_Arg() { }
  public override string func_name()
  {
    return "global_Arg";
  }

  public static readonly RefalRTS.Function instance = new global_Arg();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);

      UInt64 sParamNumber_1 = UInt64.MaxValue;

      if (!RefalRTS.svar_left(ref sParamNumber_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.DataTag.Number != RefalRTS.memory.get_tag(sParamNumber_1))
        break;

      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      RefalRTS.reset_allocator();

      UInt64 arg_number = RefalRTS.memory.get_number(sParamNumber_1);
      UInt64 arg_b = UInt64.MaxValue;
      UInt64 arg_e = UInt64.MaxValue;
      bool string_allocated = RefalRTS.alloc_string(
	  ref arg_b, ref arg_e, RefalRTS.get_arg(arg_number)
	);
      if( ! string_allocated )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.splice_evar(arg_begin, arg_b, arg_e);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ExistFile : RefalRTS.Function
{
  private global_ExistFile() { }
  public override string func_name()
  {
    return "global_ExistFile";
  }

  public static readonly RefalRTS.Function instance = new global_ExistFile();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // e.FileName
      //(0 0 )
      eFileName_b_1 = bb_0_0;
      eFileName_e_1 = be_0_0;
      char[] ch_filename =
        RefalRTS.read_chars(ref eFileName_b_1, ref eFileName_e_1);
      if (!RefalRTS.is_empty(eFileName_b_1, eFileName_e_1))
        break;

      string str_filename = "";// = Convert.ToString(ch_filename);
      for (int k = 0; (k < ch_filename.Length) && ch_filename[k] != '\0' ; k++)
      {
        str_filename += ch_filename[k];
      }
      RefalRTS.Function result =
        File.Exists(str_filename)
        ? global_True.instance
        : global_False.instance;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if (!RefalRTS.alloc_function(ref n0, result))
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

class OutputHandle : RefalRTS.Function
{
  public OutputHandle(string filename)
  {
    m_name = filename;
    m_file = new StreamWriter(filename);
  }

  public override string func_name()
  {
    return "Handle [" + m_name + "]";
  }

  public override RefalRTS.FnResult perform(ulong arg_begin, ulong arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sHandle_1 = UInt64.MaxValue;
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // & global_FWriteLine s.Handle e.Line
      //(0 0 )
      if (!RefalRTS.function_left(global_FWriteLine.instance, ref bb_0_0, ref be_0_0))
        break;
      if (!RefalRTS.svar_left(ref sHandle_1, ref bb_0_0, ref be_0_0))
        break;
      eLine_b_1 = bb_0_0;
      eLine_e_1 = be_0_0;

      print(m_file, eLine_b_1, eLine_e_1);

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.splice_stvar(res, sHandle_1);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }

    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sHandle_1 = UInt64.MaxValue;
      // & global_FClose s.Handle
      //(0 0 )
      if (!RefalRTS.function_left(global_FClose.instance, ref bb_0_0, ref be_0_0))
        break;
      if (!RefalRTS.svar_left(ref sHandle_1, ref bb_0_0, ref be_0_0))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      m_file.Close();

      RefalRTS.reset_allocator();
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }

  public static void print(TextWriter output, UInt64 begin, UInt64 end)
  {
    for (
      UInt64 p = begin;
      !RefalRTS.is_empty(p, end);
      RefalRTS.move_left(ref p, ref end)
      )
    {
      switch (RefalRTS.memory.get_tag(p))
      {
        case RefalRTS.DataTag.Char:
          output.Write(Convert.ToChar(RefalRTS.memory.get_number(p)));
          break;
        case RefalRTS.DataTag.Number:
          output.Write(RefalRTS.memory.get_number(p) + " ");
          break;
        case RefalRTS.DataTag.Function:
          output.Write("&"+RefalRTS.memory.get_function(p).func_name());
          break;
        case RefalRTS.DataTag.Identifier:
          output.Write("#" + RefalRTS.memory.get_function(p).func_name());
          break;
        case RefalRTS.DataTag.OpenADT:
          output.Write("[");
          break;
        case RefalRTS.DataTag.CloseADT:
          output.Write("]");
          break;
        case RefalRTS.DataTag.OpenBracket:
          output.Write("(");
          break;
        case RefalRTS.DataTag.CloseBracket:
          output.Write(")");
          break;
        case RefalRTS.DataTag.Handle:
          output.Write("*" + RefalRTS.memory.get_function(p).func_name());
          break;
        case RefalRTS.DataTag.Closure:
          output.Write("{ "+RefalRTS.memory.get_number(p)+" }");
          break;
        default:
          throw new RefalRTS.UnexpectedTypeException(
	    "error in OutputHandle.print()"
	  );

      }
    }

    output.WriteLine();
  }

  private string m_name;
  private TextWriter m_file;
}

class InputHandle : RefalRTS.Function
{
  public InputHandle(string filename)
  {
    m_name = filename;
    m_file = new StreamReader(filename);
  }

  public override string func_name()
  {
    return "Handle [" + m_name + "]";
  }

  public override RefalRTS.FnResult perform(ulong arg_begin, ulong arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sHandle_1 = UInt64.MaxValue;
      // & global_FReadLine s.Handle
      //(0 0 )
      if (!RefalRTS.function_left(global_FReadLine.instance, ref bb_0_0, ref be_0_0))
        break;
      if (!RefalRTS.svar_left(ref sHandle_1, ref bb_0_0, ref be_0_0))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      UInt64 res_b = UInt64.MaxValue;
      UInt64 res_e = UInt64.MaxValue;

      RefalRTS.reset_allocator();

      RefalRTS.FnResult alloc_res = read(m_file, ref res_b, ref res_e);

      if (RefalRTS.FnResult.Success != alloc_res)
        return alloc_res;

      UInt64 res = arg_begin;
      res = RefalRTS.memory.insert_before(res, res_b, res_e);
      RefalRTS.splice_stvar(res, sHandle_1);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }

    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sHandle_1 = UInt64.MaxValue;
      // & global_FClose s.Handle
      //(0 0 )
      if (!RefalRTS.function_left(global_FClose.instance, ref bb_0_0, ref be_0_0))
        break;
      if (!RefalRTS.svar_left(ref sHandle_1, ref bb_0_0, ref be_0_0))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      m_file.Close();

      RefalRTS.reset_allocator();
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }

  public static RefalRTS.FnResult read(TextReader input, ref UInt64 begin, ref UInt64 end)
  {
    string result = input.ReadLine();

    if( result != null )
    {
      if (!RefalRTS.alloc_string(ref begin, ref end, result))
        return RefalRTS.FnResult.NoMemory;
    }
    else
    {
      if (!RefalRTS.alloc_number(ref begin, 0))
        return RefalRTS.FnResult.NoMemory;

      end = begin;
    }

    return RefalRTS.FnResult.Success;
  }

  private string m_name;
  private TextReader m_file;
}

public class global_WriteLine : RefalRTS.Function
{
  private global_WriteLine() { }
  public override string func_name()
  {
    return "global_WriteLine";
  }

  public static readonly RefalRTS.Function instance = new global_WriteLine();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    UInt64 bb_0_0 = arg_begin;
    UInt64 be_0_0 = arg_end;
    RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    RefalRTS.move_right(ref bb_0_0, ref be_0_0);
    UInt64 eLine_b_1 = UInt64.MaxValue;
    UInt64 eLine_e_1 = UInt64.MaxValue;
    // e.Line
    //(0 0 )
    eLine_b_1 = bb_0_0;
    RefalRTS.use(ref eLine_b_1);
    eLine_e_1 = be_0_0;
    RefalRTS.use(ref eLine_e_1);

    OutputHandle.print(Console.Out, eLine_b_1, eLine_e_1);

    RefalRTS.reset_allocator();
    UInt64 res = arg_begin;
    RefalRTS.use(ref res);
    RefalRTS.garbage(arg_begin, arg_end);
    return RefalRTS.FnResult.Success;
  }
}
public class global_ReadLine : RefalRTS.Function
{
  private global_ReadLine() { }
  public override string func_name()
  {
    return "global_ReadLine";
  }

  public static readonly RefalRTS.Function instance = new global_ReadLine();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      //
      //(0 0 )
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      UInt64 res_b = UInt64.MaxValue;
      UInt64 res_e = UInt64.MaxValue;

      RefalRTS.reset_allocator();

      RefalRTS.FnResult alloc_res =
        InputHandle.read(Console.In, ref res_b, ref res_e);

      if (alloc_res != RefalRTS.FnResult.Success)
        return alloc_res;

      UInt64 res = arg_begin;
      RefalRTS.memory.insert_before(res, res_b, res_e);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_FWriteLine : RefalRTS.Function
{
  private global_FWriteLine() { }
  public override string func_name()
  {
    return "global_FWriteLine";
  }

  public static readonly RefalRTS.Function instance = new global_FWriteLine();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sHandle_1 = UInt64.MaxValue;
      //UInt64 eLine_b_1 = UInt64.MaxValue;
      //UInt64 eLine_e_1 = UInt64.MaxValue;
      // s.Handle e.Line
      //(0 0 )
      if (!RefalRTS.svar_left(ref sHandle_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.memory.get_tag(sHandle_1) != RefalRTS.DataTag.Handle)
        break;
      //eLine_b_1 = bb_0_0;
      //RefalRTS.use(ref eLine_b_1);
      //eLine_e_1 = be_0_0;
      //RefalRTS.use(ref eLine_e_1);

      return RefalRTS.memory.get_function(sHandle_1)
        .perform(arg_begin, arg_end);
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_FReadLine : RefalRTS.Function
{
  private global_FReadLine() { }
  public override string func_name()
  {
    return "global_FReadLine";
  }

  public static readonly RefalRTS.Function instance = new global_FReadLine();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sHandle_1 = UInt64.MaxValue;
      // s.Handle
      //(0 0 )
      if (!RefalRTS.svar_left(ref sHandle_1, ref bb_0_0, ref be_0_0))
        break;
      if( RefalRTS.DataTag.Handle != RefalRTS.memory.get_tag(sHandle_1))
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      //RefalRTS.reset_allocator();
      //UInt64 res = arg_begin;
      //res = RefalRTS.splice_stvar(res, sHandle_1);
      //RefalRTS.use(ref res);
      //RefalRTS.garbage(arg_begin, arg_end);
      //return RefalRTS.FnResult.Success;

      return RefalRTS.memory.get_function(sHandle_1)
        .perform(arg_begin, arg_end);
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_FClose : RefalRTS.Function
{
  private global_FClose() { }
  public override string func_name()
  {
    return "global_FClose";
  }

  public static readonly RefalRTS.Function instance = new global_FClose();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sHandle_1 = UInt64.MaxValue;
      // s.Handle
      //(0 0 )
      if (!RefalRTS.svar_left(ref sHandle_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.memory.get_tag(sHandle_1) != RefalRTS.DataTag.Handle)
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      return RefalRTS.memory.get_function(sHandle_1).
        perform(arg_begin, arg_end);
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_FOpen: RefalRTS.Function
{
	private global_FOpen() { }
	public override string func_name ()
	{
		return "global_FOpen";
	}

	public static readonly RefalRTS.Function instance = new global_FOpen();

	public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
	{
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // 'w e.FileName
      //(0 0 )
      if (!RefalRTS.char_left('w', ref bb_0_0, ref be_0_0))
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use(ref eFileName_b_1);
      eFileName_e_1 = be_0_0;
      RefalRTS.use(ref eFileName_e_1);

      char[] ch_filename =
        RefalRTS.read_chars(ref eFileName_b_1, ref eFileName_e_1);
      if (!RefalRTS.is_empty(eFileName_b_1, eFileName_e_1))
        break;

      string str_filename = "";// = Convert.ToString(ch_filename);
      for (int k = 0; (k < ch_filename.Length) && ch_filename[k] != '\0'; k++)
      {
        str_filename += ch_filename[k];
      }

      RefalRTS.Function handle = null;

      try
      {
        handle = new OutputHandle(str_filename);
      }
      catch
      {
        return RefalRTS.FnResult.RecognitionImpossible;
      }

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if (!RefalRTS.alloc_function(ref n0, handle))
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.memory.set_tag(n0, RefalRTS.DataTag.Handle);
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }

    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // 'r e.FileName
      //(0 0 )
      if (!RefalRTS.char_left('r', ref bb_0_0, ref be_0_0))
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use(ref eFileName_b_1);
      eFileName_e_1 = be_0_0;
      RefalRTS.use(ref eFileName_e_1);

      char[] ch_filename =
        RefalRTS.read_chars(ref eFileName_b_1, ref eFileName_e_1);
      if (!RefalRTS.is_empty(eFileName_b_1, eFileName_e_1))
        break;

      string str_filename = "";// = Convert.ToString(ch_filename);
      for (int k = 0; (k < ch_filename.Length) && ch_filename[k] != '\0'; k++)
      {
        str_filename += ch_filename[k];
      }

      RefalRTS.Function handle = null;

      try
      {
        handle = new InputHandle(str_filename);
      }
      catch
      {
        return RefalRTS.FnResult.RecognitionImpossible;
      }

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if (!RefalRTS.alloc_function(ref n0, handle))
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.memory.set_tag(n0, RefalRTS.DataTag.Handle);
      res = RefalRTS.splice_elem(res, n0);
      RefalRTS.use(ref res);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


		return RefalRTS.FnResult.RecognitionImpossible;
	}
}

public class global_StrFromInt : RefalRTS.Function
{
  private global_StrFromInt() { }
  public override string func_name()
  {
    return "global_StrFromInt";
  }

  public static readonly RefalRTS.Function instance = new global_StrFromInt();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 sNum_1 = UInt64.MaxValue;
      // s.Num
      //(0 0 )
      if (!RefalRTS.svar_left(ref sNum_1, ref bb_0_0, ref be_0_0))
        break;
      if (RefalRTS.memory.get_tag(sNum_1) != RefalRTS.DataTag.Number)
        break;
      if (!RefalRTS.is_empty(bb_0_0, be_0_0))
        break;

      UInt64 rep_b = UInt64.MaxValue;
      UInt64 rep_e = UInt64.MaxValue;
      UInt64 value = RefalRTS.memory.get_number(sNum_1);

      RefalRTS.reset_allocator();

      if( ! RefalRTS.alloc_string(ref rep_b, ref rep_e, value.ToString()) )
        return RefalRTS.FnResult.NoMemory;

      RefalRTS.memory.insert_before(arg_begin, rep_b, rep_e);
      RefalRTS.garbage(arg_begin, arg_end);
      return RefalRTS.FnResult.Success;
    }


    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_IntFromStr : RefalRTS.Function
{
  private global_IntFromStr() { }
  public override string func_name()
  {
    return "global_IntFromStr";
  }

  public static readonly RefalRTS.Function instance = new global_IntFromStr();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    for (; ; )
    {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_left(ref bb_0_0, ref be_0_0);
      RefalRTS.move_right(ref bb_0_0, ref be_0_0);
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // e.Tail
      //(0 0 )

      bool first_is_digit =
        ! RefalRTS.is_empty(bb_0_0, be_0_0)
        && (RefalRTS.memory.get_tag(bb_0_0) == RefalRTS.DataTag.Char)
        && (is_char_digit(RefalRTS.memory.get_number(bb_0_0)));

      if (first_is_digit)
      {
        UInt64 acc = 0;

        for (; ; )
        {
          if (RefalRTS.is_empty(bb_0_0, be_0_0))
          {
            break;
          }
          else if (RefalRTS.memory.get_tag(bb_0_0) != RefalRTS.DataTag.Char)
          {
            break;
          }
          else if (!is_char_digit(RefalRTS.memory.get_number(bb_0_0)))
          {
            break;
          }
          else
          {
            acc *= 10;
            acc += num_from_digit(RefalRTS.memory.get_number(bb_0_0));
          }

          RefalRTS.move_left(ref bb_0_0, ref be_0_0);
        }

        eTail_b_1 = bb_0_0;
        RefalRTS.use(ref eTail_b_1);
        eTail_e_1 = be_0_0;
        RefalRTS.use(ref eTail_e_1);
        RefalRTS.check_evar(ref eTail_b_1, ref eTail_e_1);

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if (!RefalRTS.alloc_function(ref n0, global_Success.instance))
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if (!RefalRTS.alloc_number(ref n1, acc))
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_evar(res, eTail_b_1, eTail_e_1);
        res = RefalRTS.splice_elem(res, n1);
        res = RefalRTS.splice_elem(res, n0);
        RefalRTS.use(ref res);
        RefalRTS.garbage(arg_begin, arg_end);
        return RefalRTS.FnResult.Success;
      }
      else
      {
        eTail_b_1 = bb_0_0;
        RefalRTS.use(ref eTail_b_1);
        eTail_e_1 = be_0_0;
        RefalRTS.use(ref eTail_e_1);
        RefalRTS.check_evar(ref eTail_b_1, ref eTail_e_1);

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if (!RefalRTS.alloc_function(ref n0, global_Fails.instance))
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_evar(res, eTail_b_1, eTail_e_1);
        res = RefalRTS.splice_elem(res, n0);
        RefalRTS.use(ref res);
        RefalRTS.garbage(arg_begin, arg_end);
        return RefalRTS.FnResult.Success;
      }
    }
  }

  private bool is_char_digit(UInt64 number)
  {
    return Char.IsDigit(Convert.ToChar(number));
  }

  private UInt64 num_from_digit(UInt64 number)
  {
    return number - Convert.ToUInt64('0');
  }
}

public class global_System : RefalRTS.Function
{
  private global_System() { }
  public override string func_name()
  {
    return "global_System";
  }

  public static readonly RefalRTS.Function instance = new global_System();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    UInt64 bb_0_0 = arg_begin;
    UInt64 be_0_0 = arg_end;
    RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    RefalRTS.move_right(ref bb_0_0, ref be_0_0);
    UInt64 eCmdLine_b_1 = UInt64.MaxValue;
    UInt64 eCmdLine_e_1 = UInt64.MaxValue;
    // e.CmdLine
    //(0 0 )
    eCmdLine_b_1 = bb_0_0;
    eCmdLine_e_1 = be_0_0;
    char[] ch_cmdline = RefalRTS.read_chars(ref eCmdLine_b_1, ref eCmdLine_e_1);
    if (!RefalRTS.is_empty(eCmdLine_b_1, eCmdLine_e_1))
      return RefalRTS.FnResult.RecognitionImpossible;

    string str_cmdline = "";// = Convert.ToString(ch_cmdline);
    for (int k = 0; (k < ch_cmdline.Length) && ch_cmdline[k] != '\0'; k++)
    {
      str_cmdline += ch_cmdline[k];
    }

    ProcessStartInfo psi = new ProcessStartInfo("cmd.exe", "/c " + str_cmdline);
    //psi.CreateNoWindow = true;
    //psi.WindowStyle = ProcessWindowStyle.Hidden;
    psi.UseShellExecute = false;
    Process p = Process.Start(psi);
    p.WaitForExit();

    RefalRTS.reset_allocator();
    RefalRTS.garbage(arg_begin, arg_end);
    return RefalRTS.FnResult.Success;
  }
}

public class global_SymbCompare : RefalRTS.Function
{
  private global_SymbCompare() { }
  public override string func_name()
  {
    return "global_SymbCompare";
  }

  public static readonly RefalRTS.Function instance = new global_SymbCompare();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    //for (; ; )
    //{
    //  UInt64 bb_0_0 = arg_begin;
    //  UInt64 be_0_0 = arg_end;
    //  RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    //  RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    //  RefalRTS.move_right(ref bb_0_0, ref be_0_0);
    //  UInt64 sLeft_1 = UInt64.MaxValue;
    //  UInt64 sRight_1 = UInt64.MaxValue;
    //  // s.Left s.Right
    //  //(0 0 )
    //  if (!RefalRTS.svar_left(ref sLeft_1, ref bb_0_0, ref be_0_0))
    //    break;
    //  if (!RefalRTS.svar_left(ref sRight_1, ref bb_0_0, ref be_0_0))
    //    break;
    //  if (!RefalRTS.is_empty(bb_0_0, be_0_0))
    //    break;
    //
    //  RefalRTS.reset_allocator();
    //  UInt64 res = arg_begin;
    //  UInt64 n0 = UInt64.MaxValue;
    //  if (!RefalRTS.alloc_char(ref n0, '='))
    //    return RefalRTS.FnResult.NoMemory;
    //  res = RefalRTS.splice_elem(res, n0);
    //  RefalRTS.use(ref res);
    //  RefalRTS.garbage(arg_begin, arg_end);
    //  return RefalRTS.FnResult.Success;
    //}

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_SymbType : RefalRTS.Function
{
  private global_SymbType() { }
  public override string func_name()
  {
    return "global_SymbType";
  }

  public static readonly RefalRTS.Function instance = new global_SymbType();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    //for (; ; )
    //{
    //  UInt64 bb_0_0 = arg_begin;
    //  UInt64 be_0_0 = arg_end;
    //  RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    //  RefalRTS.move_left(ref bb_0_0, ref be_0_0);
    //  RefalRTS.move_right(ref bb_0_0, ref be_0_0);
    //  UInt64 sSymbol_1 = UInt64.MaxValue;
    //  // s.Symbol
    //  //(0 0 )
    //  if (!RefalRTS.svar_left(ref sSymbol_1, ref bb_0_0, ref be_0_0))
    //    break;
    //  if (!RefalRTS.is_empty(bb_0_0, be_0_0))
    //    break;
    //
    //  RefalRTS.reset_allocator();
    //  UInt64 res = arg_begin;
    //  UInt64 n0 = UInt64.MaxValue;
    //  if (!RefalRTS.alloc_number(ref n0, 0UL))
    //    return RefalRTS.FnResult.NoMemory;
    //  res = RefalRTS.splice_elem(res, n0);
    //  RefalRTS.use(ref res);
    //  RefalRTS.garbage(arg_begin, arg_end);
    //  return RefalRTS.FnResult.Success;
    //}
    
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}
