// Automatically generated file. Don't edit!
using System;


public class global_MakeAlgorithm: RefalRTS.Function
{
  private global_MakeAlgorithm() { }
  public override string func_name ()
  {
    return "global_MakeAlgorithm";
  }

  public static readonly RefalRTS.Function instance = new global_MakeAlgorithm();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      // (~1 e.Pattern )~1 (~2 e.Result )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      ePattern_b_1 = bb_1_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_1_0;
      RefalRTS.use( ref ePattern_e_1 );
      eResult_b_1 = bb_2_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_2_0;
      RefalRTS.use( ref eResult_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n6, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n10, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n18, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n23, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n25 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n25 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n25 );
      RefalRTS.push_stack( n24 );
      RefalRTS.push_stack( n17 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_elem( res, n23 );
      RefalRTS.link_brackets( n21, n22 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      RefalRTS.link_brackets( n19, n20 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n8, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      RefalRTS.link_brackets( n4, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr() { }
  public override string func_name ()
  {
    return "LeftPtr";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr() { }
  public override string func_name ()
  {
    return "RightPtr";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_AlgLeft: RefalRTS.Function
{
  private global_AlgLeft() { }
  public override string func_name ()
  {
    return "global_AlgLeft";
  }

  public static readonly RefalRTS.Function instance = new global_AlgLeft();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_AlgRight: RefalRTS.Function
{
  private global_AlgRight() { }
  public override string func_name ()
  {
    return "global_AlgRight";
  }

  public static readonly RefalRTS.Function instance = new global_AlgRight();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_TkIdentifier: RefalRTS.Function
{
  private global_TkIdentifier() { }
  public override string func_name ()
  {
    return "global_TkIdentifier";
  }

  public static readonly RefalRTS.Function instance = new global_TkIdentifier();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdChar: RefalRTS.Function
{
  private global_CmdChar() { }
  public override string func_name ()
  {
    return "global_CmdChar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdChar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdNumber: RefalRTS.Function
{
  private global_CmdNumber() { }
  public override string func_name ()
  {
    return "global_CmdNumber";
  }

  public static readonly RefalRTS.Function instance = new global_CmdNumber();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdName: RefalRTS.Function
{
  private global_CmdName() { }
  public override string func_name ()
  {
    return "global_CmdName";
  }

  public static readonly RefalRTS.Function instance = new global_CmdName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdIdent: RefalRTS.Function
{
  private global_CmdIdent() { }
  public override string func_name ()
  {
    return "global_CmdIdent";
  }

  public static readonly RefalRTS.Function instance = new global_CmdIdent();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdBrackets: RefalRTS.Function
{
  private global_CmdBrackets() { }
  public override string func_name ()
  {
    return "global_CmdBrackets";
  }

  public static readonly RefalRTS.Function instance = new global_CmdBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdADT: RefalRTS.Function
{
  private global_CmdADT() { }
  public override string func_name ()
  {
    return "global_CmdADT";
  }

  public static readonly RefalRTS.Function instance = new global_CmdADT();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdEmpty: RefalRTS.Function
{
  private global_CmdEmpty() { }
  public override string func_name ()
  {
    return "global_CmdEmpty";
  }

  public static readonly RefalRTS.Function instance = new global_CmdEmpty();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdRepeated: RefalRTS.Function
{
  private global_CmdRepeated() { }
  public override string func_name ()
  {
    return "global_CmdRepeated";
  }

  public static readonly RefalRTS.Function instance = new global_CmdRepeated();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdVar: RefalRTS.Function
{
  private global_CmdVar() { }
  public override string func_name ()
  {
    return "global_CmdVar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdOpenedE: RefalRTS.Function
{
  private global_CmdOpenedE() { }
  public override string func_name ()
  {
    return "global_CmdOpenedE";
  }

  public static readonly RefalRTS.Function instance = new global_CmdOpenedE();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdClosedE: RefalRTS.Function
{
  private global_CmdClosedE() { }
  public override string func_name ()
  {
    return "global_CmdClosedE";
  }

  public static readonly RefalRTS.Function instance = new global_CmdClosedE();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdComment: RefalRTS.Function
{
  private global_CmdComment() { }
  public override string func_name ()
  {
    return "global_CmdComment";
  }

  public static readonly RefalRTS.Function instance = new global_CmdComment();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdPrint: RefalRTS.Function
{
  private global_CmdPrint() { }
  public override string func_name ()
  {
    return "global_CmdPrint";
  }

  public static readonly RefalRTS.Function instance = new global_CmdPrint();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern() { }
  public override string func_name ()
  {
    return "GenPattern";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      UInt64 sChar_2 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkChar s.Char )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkChar.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sChar_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sChar_2, sChar_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkChar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdChar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_stvar( res, sChar_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sChar_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 sNumber_2 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkNumber s.Number )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkNumber.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNumber_2, sNumber_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkNumber.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdNumber.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_stvar( res, sNumber_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sNumber_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkName e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkName.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eName_b_1 = bb_2_0;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_2_0;
        RefalRTS.use( ref eName_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkName.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdName.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkIdentifier e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkIdentifier.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eName_b_1 = bb_2_0;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_2_0;
        RefalRTS.use( ref eName_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkIdentifier.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdIdent.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 sChar_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkChar s.Char )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkChar.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sChar_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sChar_2, sChar_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, global_TkChar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdChar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgRight.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_stvar( res, sChar_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sChar_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 sNumber_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkNumber s.Number )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkNumber.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNumber_2, sNumber_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, global_TkNumber.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdNumber.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgRight.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_stvar( res, sNumber_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sNumber_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkName e.Name )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkName.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eName_b_1 = bb_1_0;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_1_0;
        RefalRTS.use( ref eName_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, global_TkName.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdName.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgRight.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkIdentifier e.Name )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkIdentifier.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eName_b_1 = bb_1_0;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_1_0;
        RefalRTS.use( ref eName_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, global_TkIdentifier.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n12, global_CmdIdent.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_AlgRight.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n16 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n11, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n8, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sInner_1 = UInt64.MaxValue;
      UInt64 sInner_2 = UInt64.MaxValue;
      UInt64 ePattern_M_b_1 = UInt64.MaxValue;
      UInt64 ePattern_M_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sInner_3 = UInt64.MaxValue;
      UInt64 sInner_4 = UInt64.MaxValue;
      UInt64 sInner_5 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkOpenBracket s.Inner )~2 e.Pattern_M (~3 & global_TkCloseBracket s.Inner )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
      //(0 2 )(5 0 )(4 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_4_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_4_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_5_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_5_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sInner_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          ePattern_M_b_1 = bb_0_1;
          ePattern_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          UInt64 bb_3_0 = 0;
          UInt64 be_3_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.function_left( global_TkCloseBracket.instance, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.repeated_stvar_left( ref sInner_2, sInner_1, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
            continue;
          ePattern_E_b_1 = bb_0_2;
          RefalRTS.use( ref ePattern_E_b_1 );
          ePattern_E_e_1 = be_0_2;
          RefalRTS.use( ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
          RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
          RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_stvar( ref sInner_3, sInner_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_4, sInner_3 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_5, sInner_4 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n3, global_TkOpenBracket.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n9, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n12, global_TkCloseBracket.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n14 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n15, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n17 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n18 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n19 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n20 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n20 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n21 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n21, global_CmdBrackets.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n22 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n22, global_AlgLeft.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n23 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n23 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n24 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n24 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n25 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n25 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n25 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n25 );
          RefalRTS.link_brackets( n19, n24 );
          res = RefalRTS.splice_elem( res, n24 );
          RefalRTS.link_brackets( n20, n23 );
          res = RefalRTS.splice_elem( res, n23 );
          res = RefalRTS.splice_stvar( res, sInner_5 );
          res = RefalRTS.splice_stvar( res, sNum_2 );
          res = RefalRTS.splice_elem( res, n22 );
          res = RefalRTS.splice_elem( res, n21 );
          res = RefalRTS.splice_elem( res, n20 );
          res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
          res = RefalRTS.splice_elem( res, n19 );
          RefalRTS.link_brackets( n17, n18 );
          res = RefalRTS.splice_elem( res, n18 );
          res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
          res = RefalRTS.splice_elem( res, n17 );
          res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
          RefalRTS.link_brackets( n14, n16 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_stvar( res, sNum_1 );
          res = RefalRTS.splice_elem( res, n15 );
          res = RefalRTS.splice_elem( res, n14 );
          RefalRTS.link_brackets( n11, n13 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_stvar( res, sInner_4 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_elem( res, n11 );
          RefalRTS.link_brackets( n8, n10 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_stvar( res, sInner_3 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_elem( res, n8 );
          res = RefalRTS.splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
          RefalRTS.link_brackets( n5, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_stvar( res, sInner_2 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_elem( res, n5 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_stvar( res, sInner_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 sInner_1 = UInt64.MaxValue;
      UInt64 sInner_2 = UInt64.MaxValue;
      UInt64 ePattern_M_b_1 = UInt64.MaxValue;
      UInt64 ePattern_M_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 sInner_3 = UInt64.MaxValue;
      UInt64 sInner_4 = UInt64.MaxValue;
      UInt64 sInner_5 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkOpenBracket s.Inner )~1 e.Pattern_M (~2 & global_TkCloseBracket s.Inner )~2 (~3 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
      //(0 2 )(5 0 )(4 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_4_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_4_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_5_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_5_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sInner_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          ePattern_M_b_1 = bb_0_1;
          ePattern_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          UInt64 bb_2_0 = 0;
          UInt64 be_2_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.function_left( global_TkCloseBracket.instance, ref bb_2_0, ref be_2_0 ) )
            continue;
          UInt64 bb_3_0 = 0;
          UInt64 be_3_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.repeated_stvar_left( ref sInner_2, sInner_1, ref bb_2_0, ref be_2_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
            continue;
          ePattern_E_b_1 = bb_0_2;
          RefalRTS.use( ref ePattern_E_b_1 );
          ePattern_E_e_1 = be_0_2;
          RefalRTS.use( ref ePattern_E_e_1 );
          if( ! RefalRTS.svar_left( ref sNum_1, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
            continue;
          RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
          RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
          RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_3, sInner_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_4, sInner_3 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_5, sInner_4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n6, global_TkOpenBracket.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n9, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n12, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n14 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n15, global_TkCloseBracket.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n17 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n18 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n19 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n20 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n20 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n21 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n21, global_CmdBrackets.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n22 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n22, global_AlgRight.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n23 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n23 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n24 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n24 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n25 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n25 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n25 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n25 );
          RefalRTS.link_brackets( n19, n24 );
          res = RefalRTS.splice_elem( res, n24 );
          RefalRTS.link_brackets( n20, n23 );
          res = RefalRTS.splice_elem( res, n23 );
          res = RefalRTS.splice_stvar( res, sInner_5 );
          res = RefalRTS.splice_stvar( res, sNum_2 );
          res = RefalRTS.splice_elem( res, n22 );
          res = RefalRTS.splice_elem( res, n21 );
          res = RefalRTS.splice_elem( res, n20 );
          res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
          res = RefalRTS.splice_elem( res, n19 );
          RefalRTS.link_brackets( n17, n18 );
          res = RefalRTS.splice_elem( res, n18 );
          res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
          res = RefalRTS.splice_elem( res, n17 );
          res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
          RefalRTS.link_brackets( n14, n16 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_stvar( res, sInner_4 );
          res = RefalRTS.splice_elem( res, n15 );
          res = RefalRTS.splice_elem( res, n14 );
          RefalRTS.link_brackets( n11, n13 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_stvar( res, sInner_3 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_elem( res, n11 );
          res = RefalRTS.splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
          RefalRTS.link_brackets( n8, n10 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_stvar( res, sInner_2 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_elem( res, n8 );
          RefalRTS.link_brackets( n5, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_stvar( res, sInner_1 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_elem( res, n5 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_stvar( res, sNum_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sInner_1 = UInt64.MaxValue;
      UInt64 sInner_2 = UInt64.MaxValue;
      UInt64 ePattern_M_b_1 = UInt64.MaxValue;
      UInt64 ePattern_M_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sInner_3 = UInt64.MaxValue;
      UInt64 sInner_4 = UInt64.MaxValue;
      UInt64 sInner_5 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkOpenADT s.Inner )~2 (~3 & global_TkName e.Name )~3 e.Pattern_M (~4 & global_TkCloseADT s.Inner )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
      //(0 2 )(6 0 )(5 0 )(1 0 )(2 0 )(3 0 )(4 0 )
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_5_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_5_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_6_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_6_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        UInt64 bb_3_0 = 0;
        UInt64 be_3_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkName.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        eName_b_1 = bb_3_0;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_3_0;
        RefalRTS.use( ref eName_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sInner_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          ePattern_M_b_1 = bb_0_1;
          ePattern_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          UInt64 bb_4_0 = 0;
          UInt64 be_4_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.function_left( global_TkCloseADT.instance, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.repeated_stvar_left( ref sInner_2, sInner_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
            continue;
          ePattern_E_b_1 = bb_0_2;
          RefalRTS.use( ref ePattern_E_b_1 );
          ePattern_E_e_1 = be_0_2;
          RefalRTS.use( ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
          RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
          RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
          RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
          RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_stvar( ref sInner_3, sInner_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_4, sInner_3 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_5, sInner_4 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n3, global_TkOpenADT.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n6, global_TkName.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n9, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n12, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n14 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n15, global_TkCloseADT.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n17 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n18, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n20 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n20 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n21 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n22 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n22 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n23 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n23 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n24 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n24, global_CmdADT.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n25 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n25, global_AlgLeft.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n26 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n26 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n27 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n27 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n28 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n28 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n28 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n28 );
          RefalRTS.link_brackets( n22, n27 );
          res = RefalRTS.splice_elem( res, n27 );
          RefalRTS.link_brackets( n23, n26 );
          res = RefalRTS.splice_elem( res, n26 );
          res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
          res = RefalRTS.splice_stvar( res, sInner_5 );
          res = RefalRTS.splice_stvar( res, sNum_2 );
          res = RefalRTS.splice_elem( res, n25 );
          res = RefalRTS.splice_elem( res, n24 );
          res = RefalRTS.splice_elem( res, n23 );
          res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
          res = RefalRTS.splice_elem( res, n22 );
          RefalRTS.link_brackets( n20, n21 );
          res = RefalRTS.splice_elem( res, n21 );
          res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
          res = RefalRTS.splice_elem( res, n20 );
          res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
          RefalRTS.link_brackets( n17, n19 );
          res = RefalRTS.splice_elem( res, n19 );
          res = RefalRTS.splice_stvar( res, sNum_1 );
          res = RefalRTS.splice_elem( res, n18 );
          res = RefalRTS.splice_elem( res, n17 );
          RefalRTS.link_brackets( n14, n16 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_stvar( res, sInner_4 );
          res = RefalRTS.splice_elem( res, n15 );
          res = RefalRTS.splice_elem( res, n14 );
          RefalRTS.link_brackets( n11, n13 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_stvar( res, sInner_3 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_elem( res, n11 );
          res = RefalRTS.splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
          RefalRTS.link_brackets( n8, n10 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_stvar( res, sInner_2 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_elem( res, n8 );
          RefalRTS.link_brackets( n5, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_elem( res, n5 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_stvar( res, sInner_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sInner_1 = UInt64.MaxValue;
      UInt64 sInner_2 = UInt64.MaxValue;
      UInt64 ePattern_M_b_1 = UInt64.MaxValue;
      UInt64 ePattern_M_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 sInner_3 = UInt64.MaxValue;
      UInt64 sInner_4 = UInt64.MaxValue;
      UInt64 sInner_5 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkOpenADT s.Inner )~1 (~2 & global_TkName e.Name )~2 e.Pattern_M (~3 & global_TkCloseADT s.Inner )~3 (~4 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
      //(0 2 )(6 0 )(5 0 )(1 0 )(2 0 )(3 0 )(4 0 )
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_5_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_5_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_6_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_6_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkName.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eName_b_1 = bb_2_0;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_2_0;
        RefalRTS.use( ref eName_e_1 );
        if( ! RefalRTS.svar_left( ref sInner_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          ePattern_M_b_1 = bb_0_1;
          ePattern_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          UInt64 bb_3_0 = 0;
          UInt64 be_3_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.function_left( global_TkCloseADT.instance, ref bb_3_0, ref be_3_0 ) )
            continue;
          UInt64 bb_4_0 = 0;
          UInt64 be_4_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.repeated_stvar_left( ref sInner_2, sInner_1, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
            continue;
          ePattern_E_b_1 = bb_0_2;
          RefalRTS.use( ref ePattern_E_b_1 );
          ePattern_E_e_1 = be_0_2;
          RefalRTS.use( ref ePattern_E_e_1 );
          if( ! RefalRTS.svar_left( ref sNum_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
            continue;
          RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
          RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
          RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
          RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref ePattern_M_b_1, ref ePattern_M_e_1 );
          RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
          RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_3, sInner_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_4, sInner_3 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sInner_5, sInner_4 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n6, global_TkOpenADT.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n9, global_TkName.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n12, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n14 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n15, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n17 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n18, global_TkCloseADT.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n20 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n20 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n21 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n22 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n22 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n23 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n23 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n24 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n24, global_CmdADT.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n25 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n25, global_AlgRight.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n26 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n26 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n27 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n27 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n28 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n28 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n28 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n28 );
          RefalRTS.link_brackets( n22, n27 );
          res = RefalRTS.splice_elem( res, n27 );
          RefalRTS.link_brackets( n23, n26 );
          res = RefalRTS.splice_elem( res, n26 );
          res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
          res = RefalRTS.splice_stvar( res, sInner_5 );
          res = RefalRTS.splice_stvar( res, sNum_2 );
          res = RefalRTS.splice_elem( res, n25 );
          res = RefalRTS.splice_elem( res, n24 );
          res = RefalRTS.splice_elem( res, n23 );
          res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
          res = RefalRTS.splice_elem( res, n22 );
          RefalRTS.link_brackets( n20, n21 );
          res = RefalRTS.splice_elem( res, n21 );
          res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
          res = RefalRTS.splice_elem( res, n20 );
          res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
          RefalRTS.link_brackets( n17, n19 );
          res = RefalRTS.splice_elem( res, n19 );
          res = RefalRTS.splice_stvar( res, sInner_4 );
          res = RefalRTS.splice_elem( res, n18 );
          res = RefalRTS.splice_elem( res, n17 );
          RefalRTS.link_brackets( n14, n16 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_stvar( res, sInner_3 );
          res = RefalRTS.splice_elem( res, n15 );
          res = RefalRTS.splice_elem( res, n14 );
          res = RefalRTS.splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
          RefalRTS.link_brackets( n11, n13 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_stvar( res, sInner_2 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_elem( res, n11 );
          RefalRTS.link_brackets( n8, n10 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_elem( res, n8 );
          RefalRTS.link_brackets( n5, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_stvar( res, sInner_1 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_elem( res, n5 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_stvar( res, sNum_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sNum_2, sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, global_CmdEmpty.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n9 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n9 );
        RefalRTS.link_brackets( n4, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        RefalRTS.link_brackets( n5, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        RefalRTS.link_brackets( n2, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVars_B_b_1 = UInt64.MaxValue;
      UInt64 eVars_B_e_1 = UInt64.MaxValue;
      UInt64 eVars_E_b_1 = UInt64.MaxValue;
      UInt64 eVars_E_e_1 = UInt64.MaxValue;
      UInt64 sCount_1 = UInt64.MaxValue;
      UInt64 sMode_3 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 sCount_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkVariable s.Mode e.Index )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
      //(0 1 )(5 0 )(3 2 )(1 0 )(2 0 )(4 0 )
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eCommands_b_1 = bb_5_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_5_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        UInt64 bb_3_1 = bb_3_0;
        UInt64 be_3_1 = be_3_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.svar_left( ref sMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eIndex_b_1 = bb_2_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_2_0;
        RefalRTS.use( ref eIndex_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Vars_B
        for(
          UInt64 boe_3_1 = bb_3_1;
          ! RefalRTS.is_empty( boe_3_1, be_3_1 );
          RefalRTS.next_term( ref boe_3_1, ref be_3_1 )
        ) {
          UInt64 bb_3_2 = bb_3_1;
          UInt64 be_3_2 = be_3_1;
          bb_3_2 = boe_3_1;
          eVars_B_b_1 = bb_3_1;
          eVars_B_e_1 = boe_3_1;
          RefalRTS.move_right( ref eVars_B_b_1, ref eVars_B_e_1 );
          UInt64 bb_4_0 = 0;
          UInt64 be_4_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_3_2, ref be_3_2 ) )
            continue;
          if( ! RefalRTS.repeated_evar_right( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.repeated_stvar_right( ref sMode_2, sMode_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          eVars_E_b_1 = bb_3_2;
          RefalRTS.use( ref eVars_E_b_1 );
          eVars_E_e_1 = be_3_2;
          RefalRTS.use( ref eVars_E_e_1 );
          if( ! RefalRTS.svar_left( ref sCount_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
            continue;
          RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
          RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
          RefalRTS.check_evar( ref eVars_E_b_1, ref eVars_E_e_1 );
          RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
          RefalRTS.check_evar( ref eVars_B_b_1, ref eVars_B_e_1 );
          RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
          RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_stvar( ref sMode_3, sMode_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sCount_2, sCount_1 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n3, global_TkVariable.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n11, global_Inc.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n12 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n17, global_CmdRepeated.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n18, global_AlgLeft.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n19 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n20 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n20, global_Inc.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n21 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n21 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n22 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n22 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n23 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n23 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n24 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n24 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n24 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n24 );
          RefalRTS.link_brackets( n15, n23 );
          res = RefalRTS.splice_elem( res, n23 );
          RefalRTS.link_brackets( n16, n22 );
          res = RefalRTS.splice_elem( res, n22 );
          res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
          res = RefalRTS.splice_stvar( res, sMode_3 );
          RefalRTS.push_stack( n21 );
          RefalRTS.push_stack( n19 );
          res = RefalRTS.splice_elem( res, n21 );
          res = RefalRTS.splice_stvar( res, sCount_2 );
          res = RefalRTS.splice_elem( res, n20 );
          res = RefalRTS.splice_elem( res, n19 );
          res = RefalRTS.splice_stvar( res, sNum_2 );
          res = RefalRTS.splice_elem( res, n18 );
          res = RefalRTS.splice_elem( res, n17 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
          res = RefalRTS.splice_elem( res, n15 );
          RefalRTS.link_brackets( n8, n14 );
          res = RefalRTS.splice_elem( res, n14 );
          res = RefalRTS.splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
          RefalRTS.link_brackets( n9, n13 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
          res = RefalRTS.splice_stvar( res, sMode_2 );
          RefalRTS.push_stack( n12 );
          RefalRTS.push_stack( n10 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_stvar( res, sCount_1 );
          res = RefalRTS.splice_elem( res, n11 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
          res = RefalRTS.splice_elem( res, n8 );
          res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
          RefalRTS.link_brackets( n5, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_stvar( res, sNum_1 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_elem( res, n5 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
          res = RefalRTS.splice_stvar( res, sMode_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eVars_B_b_1 = UInt64.MaxValue;
      UInt64 eVars_B_e_1 = UInt64.MaxValue;
      UInt64 eVars_E_b_1 = UInt64.MaxValue;
      UInt64 eVars_E_e_1 = UInt64.MaxValue;
      UInt64 sCount_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 sMode_3 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 sCount_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkVariable s.Mode e.Index )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
      //(0 1 )(5 0 )(3 2 )(1 0 )(2 0 )(4 0 )
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eCommands_b_1 = bb_5_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_5_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        UInt64 bb_3_1 = bb_3_0;
        UInt64 be_3_1 = be_3_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        eIndex_b_1 = bb_1_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_1_0;
        RefalRTS.use( ref eIndex_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Vars_B
        for(
          UInt64 boe_3_1 = bb_3_1;
          ! RefalRTS.is_empty( boe_3_1, be_3_1 );
          RefalRTS.next_term( ref boe_3_1, ref be_3_1 )
        ) {
          UInt64 bb_3_2 = bb_3_1;
          UInt64 be_3_2 = be_3_1;
          bb_3_2 = boe_3_1;
          eVars_B_b_1 = bb_3_1;
          eVars_B_e_1 = boe_3_1;
          RefalRTS.move_right( ref eVars_B_b_1, ref eVars_B_e_1 );
          UInt64 bb_4_0 = 0;
          UInt64 be_4_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_3_2, ref be_3_2 ) )
            continue;
          if( ! RefalRTS.repeated_evar_right( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.repeated_stvar_right( ref sMode_2, sMode_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          eVars_E_b_1 = bb_3_2;
          RefalRTS.use( ref eVars_E_b_1 );
          eVars_E_e_1 = be_3_2;
          RefalRTS.use( ref eVars_E_e_1 );
          if( ! RefalRTS.svar_left( ref sCount_1, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
            continue;
          RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
          RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
          RefalRTS.check_evar( ref eVars_E_b_1, ref eVars_E_e_1 );
          RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
          RefalRTS.check_evar( ref eVars_B_b_1, ref eVars_B_e_1 );
          RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
          RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
          RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sMode_3, sMode_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
            return RefalRTS.FnResult.NoMemory;
          if( ! RefalRTS.copy_stvar( ref sCount_2, sCount_1 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n6, global_TkVariable.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n11, global_Inc.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n12 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n17, global_CmdRepeated.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n18, global_AlgRight.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n19 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n20 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n20, global_Inc.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n21 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n21 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n22 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n22 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n23 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n23 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n24 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n24 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n24 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n24 );
          RefalRTS.link_brackets( n15, n23 );
          res = RefalRTS.splice_elem( res, n23 );
          RefalRTS.link_brackets( n16, n22 );
          res = RefalRTS.splice_elem( res, n22 );
          res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
          res = RefalRTS.splice_stvar( res, sMode_3 );
          RefalRTS.push_stack( n21 );
          RefalRTS.push_stack( n19 );
          res = RefalRTS.splice_elem( res, n21 );
          res = RefalRTS.splice_stvar( res, sCount_2 );
          res = RefalRTS.splice_elem( res, n20 );
          res = RefalRTS.splice_elem( res, n19 );
          res = RefalRTS.splice_stvar( res, sNum_2 );
          res = RefalRTS.splice_elem( res, n18 );
          res = RefalRTS.splice_elem( res, n17 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
          res = RefalRTS.splice_elem( res, n15 );
          RefalRTS.link_brackets( n8, n14 );
          res = RefalRTS.splice_elem( res, n14 );
          res = RefalRTS.splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
          RefalRTS.link_brackets( n9, n13 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
          res = RefalRTS.splice_stvar( res, sMode_2 );
          RefalRTS.push_stack( n12 );
          RefalRTS.push_stack( n10 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_stvar( res, sCount_1 );
          res = RefalRTS.splice_elem( res, n11 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
          res = RefalRTS.splice_elem( res, n8 );
          res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
          RefalRTS.link_brackets( n5, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
          res = RefalRTS.splice_stvar( res, sMode_1 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_elem( res, n5 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_stvar( res, sNum_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkVariable 'e e.Index )~2 (~3 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
      //(0 1 )(5 0 )(4 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_4_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_4_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_5_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_5_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
          continue;
        UInt64 bb_3_0 = 0;
        UInt64 be_3_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        eIndex_b_1 = bb_2_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_2_0;
        RefalRTS.use( ref eIndex_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sNum_2, sNum_1, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n8, 1UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n14, global_CmdClosedE.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n15, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n16, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n18 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n19 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n19 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n19 );
        RefalRTS.link_brackets( n12, n18 );
        res = RefalRTS.splice_elem( res, n18 );
        RefalRTS.link_brackets( n13, n17 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_elem( res, n16 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n15 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n12 );
        RefalRTS.link_brackets( n6, n11 );
        res = RefalRTS.splice_elem( res, n11 );
        RefalRTS.link_brackets( n7, n10 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n2, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkVariable 's e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.char_left( 's', ref bb_2_0, ref be_2_0 ) )
          continue;
        eIndex_b_1 = bb_2_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_2_0;
        RefalRTS.use( ref eIndex_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n4, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n11, 1UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n12, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, global_CmdVar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n19, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n22 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n22 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n22 );
        RefalRTS.link_brackets( n15, n21 );
        res = RefalRTS.splice_elem( res, n21 );
        RefalRTS.link_brackets( n16, n20 );
        res = RefalRTS.splice_elem( res, n20 );
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n9, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        RefalRTS.link_brackets( n10, n13 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n6, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        RefalRTS.link_brackets( n2, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkVariable 't e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.char_left( 't', ref bb_2_0, ref be_2_0 ) )
          continue;
        eIndex_b_1 = bb_2_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_2_0;
        RefalRTS.use( ref eIndex_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n4, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n11, 1UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n12, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, global_CmdVar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n19, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n22 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n22 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n22 );
        RefalRTS.link_brackets( n15, n21 );
        res = RefalRTS.splice_elem( res, n21 );
        RefalRTS.link_brackets( n16, n20 );
        res = RefalRTS.splice_elem( res, n20 );
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n9, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        RefalRTS.link_brackets( n10, n13 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n6, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        RefalRTS.link_brackets( n2, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkVariable 's e.Index )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.char_left( 's', ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eIndex_b_1 = bb_1_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_1_0;
        RefalRTS.use( ref eIndex_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, global_TkVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n7, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n11, 1UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n12, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, global_CmdVar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, global_AlgRight.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n19, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n22 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n22 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n22 );
        RefalRTS.link_brackets( n15, n21 );
        res = RefalRTS.splice_elem( res, n21 );
        RefalRTS.link_brackets( n16, n20 );
        res = RefalRTS.splice_elem( res, n20 );
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n9, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        RefalRTS.link_brackets( n10, n13 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      // e.Pattern_B (~1 & global_TkVariable 't e.Index )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.char_left( 't', ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eIndex_b_1 = bb_1_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_1_0;
        RefalRTS.use( ref eIndex_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RightPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, global_TkVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n7, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n11, 1UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n12, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, global_CmdVar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, global_AlgRight.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n19, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n22 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n22 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n22 );
        RefalRTS.link_brackets( n15, n21 );
        res = RefalRTS.splice_elem( res, n21 );
        RefalRTS.link_brackets( n16, n20 );
        res = RefalRTS.splice_elem( res, n20 );
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n9, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        RefalRTS.link_brackets( n10, n13 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n5, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 ePattern_B_b_1 = UInt64.MaxValue;
      UInt64 ePattern_B_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 ePattern_E_b_1 = UInt64.MaxValue;
      UInt64 ePattern_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      // e.Pattern_B (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr s.Num )~1 (~2 & global_TkVariable 'e e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
      //(0 1 )(4 0 )(3 0 )(1 0 )(2 0 )
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_3_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_3_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_4_0;
      RefalRTS.use( ref eCommands_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Pattern_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePattern_B_b_1 = bb_0_0;
        ePattern_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePattern_B_b_1, ref ePattern_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
          continue;
        eIndex_b_1 = bb_2_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_2_0;
        RefalRTS.use( ref eIndex_e_1 );
        ePattern_E_b_1 = bb_0_1;
        RefalRTS.use( ref ePattern_E_b_1 );
        ePattern_E_e_1 = be_0_1;
        RefalRTS.use( ref ePattern_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );
        RefalRTS.check_evar( ref ePattern_E_b_1, ref ePattern_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref ePattern_B_b_1, ref ePattern_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenPattern.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, global_TkVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_LeftPtr.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n11, 1UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, global_CmdOpenedE.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n19, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n22 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n22 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n22 );
        RefalRTS.link_brackets( n15, n21 );
        res = RefalRTS.splice_elem( res, n21 );
        RefalRTS.link_brackets( n16, n20 );
        res = RefalRTS.splice_elem( res, n20 );
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n15 );
        RefalRTS.link_brackets( n9, n14 );
        res = RefalRTS.splice_elem( res, n14 );
        RefalRTS.link_brackets( n10, n13 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        RefalRTS.link_brackets( n6, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        RefalRTS.link_brackets( n2, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      // e.Pattern (~1 e.Vars )~1 (~2 e.Commands )~2
      //(0 0 )(2 0 )(1 0 )
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      ePattern_b_1 = bb_0_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_0_0;
      RefalRTS.use( ref ePattern_e_1 );
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_CmdComment.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SaveBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n3, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SaveBrackets: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SaveBrackets() { }
  public override string func_name ()
  {
    return "SaveBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SaveBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      // e.Commands
      //(0 0 )
      eCommands_b_1 = bb_0_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_0_0;
      RefalRTS.use( ref eCommands_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Renumerate_Comment.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_MapReduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RenumerateSavedBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n7, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n8, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n11 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      RefalRTS.link_brackets( n13, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n5, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n6, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Renumerate_Comment: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Renumerate_Comment() { }
  public override string func_name ()
  {
    return "Renumerate_Comment";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Renumerate_Comment();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eRenumerateMap_b_1 = UInt64.MaxValue;
      UInt64 eRenumerateMap_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      // (~1 e.RenumerateMap )~1 e.Commands
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eRenumerateMap_b_1 = bb_1_0;
      RefalRTS.use( ref eRenumerateMap_b_1 );
      eRenumerateMap_e_1 = be_1_0;
      RefalRTS.use( ref eRenumerateMap_e_1 );
      eCommands_b_1 = bb_0_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_0_0;
      RefalRTS.use( ref eCommands_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eRenumerateMap_b_1, ref eRenumerateMap_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdComment.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eRenumerateMap_b_1, eRenumerateMap_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets() { }
  public override string func_name ()
  {
    return "DoSaveBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eCommands_B_b_1 = UInt64.MaxValue;
      UInt64 eCommands_B_e_1 = UInt64.MaxValue;
      UInt64 eCommands_E_b_1 = UInt64.MaxValue;
      UInt64 eCommands_E_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 e.Scanned )~1 e.Commands_B (~2 & global_CmdOpenedE & global_AlgLeft s.Num 'e e.Index )~2 e.Commands_E
      //(0 1 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_1_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_1_0;
      RefalRTS.use( ref eScanned_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Commands_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eCommands_B_b_1 = bb_0_0;
        eCommands_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_CmdOpenedE.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.function_left( global_AlgLeft.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eCommands_E_b_1 = bb_0_1;
        RefalRTS.use( ref eCommands_E_b_1 );
        eCommands_E_e_1 = be_0_1;
        RefalRTS.use( ref eCommands_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
          continue;
        eIndex_b_1 = bb_2_0;
        RefalRTS.use( ref eIndex_b_1 );
        eIndex_e_1 = be_2_0;
        RefalRTS.use( ref eIndex_e_1 );
        RefalRTS.check_evar( ref eCommands_E_b_1, ref eCommands_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets_Aux.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n4, global_CmdOpenedE.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n5, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n9 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
        RefalRTS.link_brackets( n2, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        RefalRTS.link_brackets( n3, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
        res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      // (~1 e.Scanned )~1 e.Commands
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_1_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_1_0;
      RefalRTS.use( ref eScanned_e_1 );
      eCommands_b_1 = bb_0_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_0_0;
      RefalRTS.use( ref eCommands_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets_Aux: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets_Aux() { }
  public override string func_name ()
  {
    return "DoSaveBrackets_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_2 = UInt64.MaxValue;
      UInt64 eScanned_e_2 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 sNum_3 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 eCommands_b_2 = UInt64.MaxValue;
      UInt64 eCommands_e_2 = UInt64.MaxValue;
      // (~1 e.Scanned (~2 & global_CmdOpenedE & global_AlgLeft s.Num 'e e.Index )~2 )~1 e.Commands
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdOpenedE.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.function_left( global_AlgLeft.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      eScanned_b_1 = bb_1_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_1_0;
      RefalRTS.use( ref eScanned_e_1 );
      eCommands_b_1 = bb_0_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_0_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eCommands_b_2, ref eCommands_e_2 );
      RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eScanned_b_2, ref eScanned_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eScanned_b_2, ref eScanned_e_2, eScanned_b_1, eScanned_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNum_2, sNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNum_3, sNum_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eCommands_b_2, ref eCommands_e_2, eCommands_b_1, eCommands_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_DoSaveBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_CmdOpenedE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_AlgLeft.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CalcSavedBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, global_CmdOpenedE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_AlgLeft.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n18, global_CmdOpenedE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n19, global_AlgLeft.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n25 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n26 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_evar( res, eCommands_b_2, eCommands_e_2 );
      RefalRTS.link_brackets( n2, n25 );
      res = RefalRTS.splice_elem( res, n25 );
      RefalRTS.link_brackets( n3, n24 );
      res = RefalRTS.splice_elem( res, n24 );
      RefalRTS.link_brackets( n7, n23 );
      res = RefalRTS.splice_elem( res, n23 );
      RefalRTS.push_stack( n22 );
      RefalRTS.push_stack( n8 );
      res = RefalRTS.splice_elem( res, n22 );
      RefalRTS.link_brackets( n17, n21 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_stvar( res, sNum_3 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      RefalRTS.link_brackets( n10, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n11, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sNum_2 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_2, eScanned_e_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sNum_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CalcSavedBrackets: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CalcSavedBrackets() { }
  public override string func_name ()
  {
    return "CalcSavedBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CalcSavedBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      // (~1 e.Scanned )~1 e.Commands
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_1_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_1_0;
      RefalRTS.use( ref eScanned_e_1 );
      eCommands_b_1 = bb_0_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_0_0;
      RefalRTS.use( ref eCommands_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Intersect.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Set.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ExtractBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Set.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n15, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n16, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ExtractBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n11, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n14 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n2, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RenumerateSavedBrackets: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RenumerateSavedBrackets() { }
  public override string func_name ()
  {
    return "RenumerateSavedBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_RenumerateSavedBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSaved_b_1 = UInt64.MaxValue;
      UInt64 eSaved_e_1 = UInt64.MaxValue;
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sBracket_2 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_e_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eSaved_b_2 = UInt64.MaxValue;
      UInt64 eSaved_e_2 = UInt64.MaxValue;
      UInt64 eBrackets_B_b_2 = UInt64.MaxValue;
      UInt64 eBrackets_B_e_2 = UInt64.MaxValue;
      UInt64 sBracket_3 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      UInt64 sNested_3 = UInt64.MaxValue;
      UInt64 eBrackets_E_b_2 = UInt64.MaxValue;
      UInt64 eBrackets_E_e_2 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Brackets_B (~2 s.Bracket s.Nested )~2 e.Brackets_E )~1 (~3 & global_CmdOpenedE & global_AlgLeft s.Bracket s.Mode e.Index (~4 e.Saved )~4 )~3
      //(0 0 )(1 1 )(3 0 )(4 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdOpenedE.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.function_left( global_AlgLeft.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eSaved_b_1 = bb_4_0;
      RefalRTS.use( ref eSaved_b_1 );
      eSaved_e_1 = be_4_0;
      RefalRTS.use( ref eSaved_e_1 );
      if( ! RefalRTS.svar_left( ref sBracket_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eIndex_b_1 = bb_3_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_3_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Brackets_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eBrackets_B_b_1 = bb_1_0;
        eBrackets_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sBracket_2, sBracket_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eBrackets_E_b_1 = bb_1_1;
        RefalRTS.use( ref eBrackets_E_b_1 );
        eBrackets_E_e_1 = be_1_1;
        RefalRTS.use( ref eBrackets_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eSaved_b_2, ref eSaved_e_2 );
        RefalRTS.check_evar( ref eBrackets_E_b_2, ref eBrackets_E_e_2 );
        RefalRTS.check_evar( ref eBrackets_B_b_2, ref eBrackets_B_e_2 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eBrackets_E_b_1, ref eBrackets_E_e_1 );
        RefalRTS.check_evar( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );
        RefalRTS.check_evar( ref eSaved_b_1, ref eSaved_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eSaved_b_2, ref eSaved_e_2, eSaved_b_1, eSaved_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eBrackets_B_b_2, ref eBrackets_B_e_2, eBrackets_B_b_1, eBrackets_B_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sBracket_3, sBracket_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sNested_3, sNested_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eBrackets_E_b_2, ref eBrackets_E_e_2, eBrackets_E_b_1, eBrackets_E_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n2, global_Map.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementBySaved.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n11, global_CmdComment.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n12, 'О' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n13, 'т' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n14, 'к' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n15, 'р' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n16, 'ы' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n17, 'т' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n18, 'а' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n19, 'я' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n20, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n21, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n22, '-' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n23 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n23, 'п' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n24 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n24, 'е' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n25 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n25, 'р' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n26 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n26, 'е' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n27 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n27, 'м' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n28 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n28, 'е' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n29 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n29, 'н' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n30 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n30, 'н' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n31 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n31, 'а' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n32 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n32, 'я' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n33 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n34 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n34, '.' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n35 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n35 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n36 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n36 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n37 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n37, global_CmdOpenedE.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n38 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n38, global_AlgLeft.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n39 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n39 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n40 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n40 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n41 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n41, global_Map.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n42 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n42 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n43 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n43, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementSaved.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n44 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n44 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n45 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n45 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n46 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n46 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n47 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n47 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n48 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n48 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n49 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n49 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n36, n49 );
        res = RefalRTS.splice_elem( res, n49 );
        RefalRTS.link_brackets( n39, n48 );
        res = RefalRTS.splice_elem( res, n48 );
        RefalRTS.push_stack( n47 );
        RefalRTS.push_stack( n40 );
        res = RefalRTS.splice_elem( res, n47 );
        res = RefalRTS.splice_evar( res, eSaved_b_2, eSaved_e_2 );
        RefalRTS.link_brackets( n42, n46 );
        res = RefalRTS.splice_elem( res, n46 );
        res = RefalRTS.splice_evar( res, eBrackets_E_b_2, eBrackets_E_e_2 );
        RefalRTS.link_brackets( n44, n45 );
        res = RefalRTS.splice_elem( res, n45 );
        res = RefalRTS.splice_stvar( res, sNested_3 );
        res = RefalRTS.splice_stvar( res, sBracket_3 );
        res = RefalRTS.splice_elem( res, n44 );
        res = RefalRTS.splice_evar( res, eBrackets_B_b_2, eBrackets_B_e_2 );
        res = RefalRTS.splice_elem( res, n43 );
        res = RefalRTS.splice_elem( res, n42 );
        res = RefalRTS.splice_elem( res, n41 );
        res = RefalRTS.splice_elem( res, n40 );
        res = RefalRTS.splice_elem( res, n39 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sMode_2 );
        res = RefalRTS.splice_stvar( res, sNested_2 );
        res = RefalRTS.splice_stvar( res, sBracket_2 );
        res = RefalRTS.splice_elem( res, n38 );
        res = RefalRTS.splice_elem( res, n37 );
        res = RefalRTS.splice_elem( res, n36 );
        RefalRTS.link_brackets( n10, n35 );
        res = RefalRTS.splice_elem( res, n35 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_elem( res, n34 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
        res = RefalRTS.splice_elem( res, n33 );
        res = RefalRTS.splice_elem( res, n32 );
        res = RefalRTS.splice_elem( res, n31 );
        res = RefalRTS.splice_elem( res, n30 );
        res = RefalRTS.splice_elem( res, n29 );
        res = RefalRTS.splice_elem( res, n28 );
        res = RefalRTS.splice_elem( res, n27 );
        res = RefalRTS.splice_elem( res, n26 );
        res = RefalRTS.splice_elem( res, n25 );
        res = RefalRTS.splice_elem( res, n24 );
        res = RefalRTS.splice_elem( res, n23 );
        res = RefalRTS.splice_elem( res, n22 );
        res = RefalRTS.splice_elem( res, n21 );
        res = RefalRTS.splice_elem( res, n20 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        res = RefalRTS.splice_elem( res, n15 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n0, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        RefalRTS.push_stack( n8 );
        RefalRTS.push_stack( n1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eBrackets_E_b_1, eBrackets_E_e_1 );
        RefalRTS.link_brackets( n6, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_stvar( res, sNested_1 );
        res = RefalRTS.splice_stvar( res, sBracket_1 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_evar( res, eBrackets_B_b_1, eBrackets_B_e_1 );
        RefalRTS.link_brackets( n3, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eSaved_b_1, eSaved_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sBracket_2 = UInt64.MaxValue;
      UInt64 eBrackets_B_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_e_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      // (~1 e.Brackets_B (~2 s.Bracket s.Nested )~2 e.Brackets_E )~1 (~3 & global_CmdEmpty s.Bracket )~3
      //(0 0 )(1 1 )(3 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdEmpty.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracket_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Brackets_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eBrackets_B_b_1 = bb_1_0;
        eBrackets_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sBracket_2, sBracket_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eBrackets_E_b_1 = bb_1_1;
        RefalRTS.use( ref eBrackets_E_b_1 );
        eBrackets_E_e_1 = be_1_1;
        RefalRTS.use( ref eBrackets_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eBrackets_E_b_1, ref eBrackets_E_e_1 );
        RefalRTS.check_evar( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n5, global_CmdEmpty.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n4, n6 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_stvar( res, sNested_2 );
        res = RefalRTS.splice_stvar( res, sBracket_2 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_elem( res, n4 );
        RefalRTS.link_brackets( n0, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eBrackets_E_b_1, eBrackets_E_e_1 );
        RefalRTS.link_brackets( n1, n2 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_stvar( res, sNested_1 );
        res = RefalRTS.splice_stvar( res, sBracket_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_evar( res, eBrackets_B_b_1, eBrackets_B_e_1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sBracket_2 = UInt64.MaxValue;
      UInt64 sInner_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_e_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      UInt64 sInner_2 = UInt64.MaxValue;
      // (~1 e.Brackets_B (~2 s.Bracket s.Nested )~2 e.Brackets_E )~1 (~3 & global_CmdBrackets s.Direction s.Bracket s.Inner )~3
      //(0 0 )(1 1 )(3 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdBrackets.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracket_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInner_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Brackets_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eBrackets_B_b_1 = bb_1_0;
        eBrackets_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sBracket_2, sBracket_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eBrackets_E_b_1 = bb_1_1;
        RefalRTS.use( ref eBrackets_E_b_1 );
        eBrackets_E_e_1 = be_1_1;
        RefalRTS.use( ref eBrackets_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eBrackets_E_b_1, ref eBrackets_E_e_1 );
        RefalRTS.check_evar( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sInner_2, sInner_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n4, 0UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n8, global_CmdBrackets.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n7, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_stvar( res, sInner_2 );
        res = RefalRTS.splice_stvar( res, sNested_2 );
        res = RefalRTS.splice_stvar( res, sBracket_2 );
        res = RefalRTS.splice_stvar( res, sDirection_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_elem( res, n7 );
        RefalRTS.link_brackets( n0, n6 );
        res = RefalRTS.splice_elem( res, n6 );
        RefalRTS.link_brackets( n3, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sInner_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eBrackets_E_b_1, eBrackets_E_e_1 );
        RefalRTS.link_brackets( n1, n2 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_stvar( res, sNested_1 );
        res = RefalRTS.splice_stvar( res, sBracket_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_evar( res, eBrackets_B_b_1, eBrackets_B_e_1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sBracket_2 = UInt64.MaxValue;
      UInt64 sInner_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_e_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      UInt64 sInner_2 = UInt64.MaxValue;
      // (~1 e.Brackets_B (~2 s.Bracket s.Nested )~2 e.Brackets_E )~1 (~3 & global_CmdADT s.Direction s.Bracket s.Inner e.Name )~3
      //(0 0 )(1 1 )(3 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdADT.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracket_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInner_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eName_b_1 = bb_3_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_3_0;
      RefalRTS.use( ref eName_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Brackets_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eBrackets_B_b_1 = bb_1_0;
        eBrackets_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sBracket_2, sBracket_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eBrackets_E_b_1 = bb_1_1;
        RefalRTS.use( ref eBrackets_E_b_1 );
        eBrackets_E_e_1 = be_1_1;
        RefalRTS.use( ref eBrackets_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
        RefalRTS.check_evar( ref eBrackets_E_b_1, ref eBrackets_E_e_1 );
        RefalRTS.check_evar( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sInner_2, sInner_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_number( ref n4, 0UL ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n8, global_CmdADT.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n7, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
        res = RefalRTS.splice_stvar( res, sInner_2 );
        res = RefalRTS.splice_stvar( res, sNested_2 );
        res = RefalRTS.splice_stvar( res, sBracket_2 );
        res = RefalRTS.splice_stvar( res, sDirection_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_elem( res, n7 );
        RefalRTS.link_brackets( n0, n6 );
        res = RefalRTS.splice_elem( res, n6 );
        RefalRTS.link_brackets( n3, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_stvar( res, sInner_1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eBrackets_E_b_1, eBrackets_E_e_1 );
        RefalRTS.link_brackets( n1, n2 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_stvar( res, sNested_1 );
        res = RefalRTS.splice_stvar( res, sBracket_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_evar( res, eBrackets_B_b_1, eBrackets_B_e_1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sCommand_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sBracket_2 = UInt64.MaxValue;
      UInt64 eInfo_b_1 = UInt64.MaxValue;
      UInt64 eInfo_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_B_e_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_b_1 = UInt64.MaxValue;
      UInt64 eBrackets_E_e_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      // (~1 e.Brackets_B (~2 s.Bracket s.Nested )~2 e.Brackets_E )~1 (~3 s.Command s.Direction s.Bracket e.Info )~3
      //(0 0 )(1 1 )(3 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCommand_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracket_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eInfo_b_1 = bb_3_0;
      RefalRTS.use( ref eInfo_b_1 );
      eInfo_e_1 = be_3_0;
      RefalRTS.use( ref eInfo_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Brackets_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eBrackets_B_b_1 = bb_1_0;
        eBrackets_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sBracket_2, sBracket_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eBrackets_E_b_1 = bb_1_1;
        RefalRTS.use( ref eBrackets_E_b_1 );
        eBrackets_E_e_1 = be_1_1;
        RefalRTS.use( ref eBrackets_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eInfo_b_1, ref eInfo_e_1 );
        RefalRTS.check_evar( ref eBrackets_E_b_1, ref eBrackets_E_e_1 );
        RefalRTS.check_evar( ref eBrackets_B_b_1, ref eBrackets_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n4, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eInfo_b_1, eInfo_e_1 );
        res = RefalRTS.splice_stvar( res, sNested_2 );
        res = RefalRTS.splice_stvar( res, sBracket_2 );
        res = RefalRTS.splice_stvar( res, sDirection_1 );
        res = RefalRTS.splice_stvar( res, sCommand_1 );
        res = RefalRTS.splice_elem( res, n4 );
        RefalRTS.link_brackets( n0, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eBrackets_E_b_1, eBrackets_E_e_1 );
        RefalRTS.link_brackets( n1, n2 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_stvar( res, sNested_1 );
        res = RefalRTS.splice_stvar( res, sBracket_1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_evar( res, eBrackets_B_b_1, eBrackets_B_e_1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementBySaved: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementBySaved() { }
  public override string func_name ()
  {
    return "IncrementBySaved";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementBySaved();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sBracket_2 = UInt64.MaxValue;
      UInt64 eSaved_B_b_1 = UInt64.MaxValue;
      UInt64 eSaved_B_e_1 = UInt64.MaxValue;
      UInt64 eSaved_E_b_1 = UInt64.MaxValue;
      UInt64 eSaved_E_e_1 = UInt64.MaxValue;
      // e.Saved_B s.Bracket e.Saved_E (~1 s.Bracket s.Nested )~1
      //(0 1 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracket_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Saved_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eSaved_B_b_1 = bb_0_0;
        eSaved_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eSaved_B_b_1, ref eSaved_B_e_1 );
        if( ! RefalRTS.repeated_stvar_left( ref sBracket_2, sBracket_1, ref bb_0_1, ref be_0_1 ) )
          continue;
        eSaved_E_b_1 = bb_0_1;
        RefalRTS.use( ref eSaved_E_b_1 );
        eSaved_E_e_1 = be_0_1;
        RefalRTS.use( ref eSaved_E_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n2, global_Inc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n0, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        RefalRTS.push_stack( n3 );
        RefalRTS.push_stack( n1 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_stvar( res, sNested_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_stvar( res, sBracket_1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eSaved_b_1 = UInt64.MaxValue;
      UInt64 eSaved_e_1 = UInt64.MaxValue;
      // e.Saved (~1 s.Bracket s.Nested )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSaved_b_1 = bb_0_0;
      RefalRTS.use( ref eSaved_b_1 );
      eSaved_e_1 = be_0_0;
      RefalRTS.use( ref eSaved_e_1 );
      if( ! RefalRTS.svar_left( ref sBracket_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracket_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementSaved: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementSaved() { }
  public override string func_name ()
  {
    return "IncrementSaved";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_IncrementSaved();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracket_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sBracket_2 = UInt64.MaxValue;
      UInt64 eNumerated_B_b_1 = UInt64.MaxValue;
      UInt64 eNumerated_B_e_1 = UInt64.MaxValue;
      UInt64 eNumerated_E_b_1 = UInt64.MaxValue;
      UInt64 eNumerated_E_e_1 = UInt64.MaxValue;
      // e.Numerated_B (~1 s.Bracket s.Nested )~1 e.Numerated_E s.Bracket
      //(0 1 )(1 0 )
      if( ! RefalRTS.svar_right( ref sBracket_1, ref bb_0_0, ref be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Numerated_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eNumerated_B_b_1 = bb_0_0;
        eNumerated_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eNumerated_B_b_1, ref eNumerated_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sBracket_2, sBracket_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        eNumerated_E_b_1 = bb_0_1;
        RefalRTS.use( ref eNumerated_E_b_1 );
        eNumerated_E_e_1 = be_0_1;
        RefalRTS.use( ref eNumerated_E_e_1 );
        if( ! RefalRTS.svar_left( ref sNested_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
          continue;

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n0, n1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_stvar( res, sNested_1 );
        res = RefalRTS.splice_stvar( res, sBracket_1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ExtractBrackets: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ExtractBrackets() { }
  public override string func_name ()
  {
    return "ExtractBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ExtractBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      // (~1 & global_CmdEmpty s.BracketNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdEmpty.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sInnerNum_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      // (~1 & global_CmdBrackets s.Direction s.BracketNum s.InnerNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdBrackets.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sInnerNum_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sCommand_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 eInfo_b_1 = UInt64.MaxValue;
      UInt64 eInfo_e_1 = UInt64.MaxValue;
      // (~1 s.Command s.Direction s.BracketNum e.Info )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCommand_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eInfo_b_1 = bb_1_0;
      RefalRTS.use( ref eInfo_b_1 );
      eInfo_e_1 = be_1_0;
      RefalRTS.use( ref eInfo_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Set: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Set() { }
  public override string func_name ()
  {
    return "Brackets_Set";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Set();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eUnique_b_1 = UInt64.MaxValue;
      UInt64 eUnique_e_1 = UInt64.MaxValue;
      UInt64 sRepeated_1 = UInt64.MaxValue;
      UInt64 eMiddle_b_1 = UInt64.MaxValue;
      UInt64 eMiddle_e_1 = UInt64.MaxValue;
      UInt64 eRest_b_1 = UInt64.MaxValue;
      UInt64 eRest_e_1 = UInt64.MaxValue;
      UInt64 sRepeated_2 = UInt64.MaxValue;
      // e.Unique s.Repeated e.Middle s.Repeated e.Rest
      //(0 2 )
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Unique
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eUnique_b_1 = bb_0_0;
        eUnique_e_1 = boe_0_0;
        RefalRTS.move_right( ref eUnique_b_1, ref eUnique_e_1 );
        if( ! RefalRTS.svar_left( ref sRepeated_1, ref bb_0_1, ref be_0_1 ) )
          continue;
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Middle
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          eMiddle_b_1 = bb_0_1;
          eMiddle_e_1 = boe_0_1;
          RefalRTS.move_right( ref eMiddle_b_1, ref eMiddle_e_1 );
          if( ! RefalRTS.repeated_stvar_left( ref sRepeated_2, sRepeated_1, ref bb_0_2, ref be_0_2 ) )
            continue;
          eRest_b_1 = bb_0_2;
          RefalRTS.use( ref eRest_b_1 );
          eRest_e_1 = be_0_2;
          RefalRTS.use( ref eRest_e_1 );
          RefalRTS.check_evar( ref eRest_b_1, ref eRest_e_1 );
          RefalRTS.check_evar( ref eMiddle_b_1, ref eMiddle_e_1 );
          RefalRTS.check_evar( ref eUnique_b_1, ref eUnique_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Set.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n2 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, eRest_b_1, eRest_e_1 );
          res = RefalRTS.splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
          res = RefalRTS.splice_stvar( res, sRepeated_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          res = RefalRTS.splice_evar( res, eUnique_b_1, eUnique_e_1 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eUnique_b_1 = UInt64.MaxValue;
      UInt64 eUnique_e_1 = UInt64.MaxValue;
      // e.Unique
      //(0 0 )
      eUnique_b_1 = bb_0_0;
      RefalRTS.use( ref eUnique_b_1 );
      eUnique_e_1 = be_0_0;
      RefalRTS.use( ref eUnique_e_1 );
      RefalRTS.check_evar( ref eUnique_b_1, ref eUnique_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eUnique_b_1, eUnique_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Intersect: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Intersect() { }
  public override string func_name ()
  {
    return "Brackets_Intersect";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Intersect();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sCommon_1 = UInt64.MaxValue;
      UInt64 eSet1_E_b_1 = UInt64.MaxValue;
      UInt64 eSet1_E_e_1 = UInt64.MaxValue;
      UInt64 eSet2_B_b_1 = UInt64.MaxValue;
      UInt64 eSet2_B_e_1 = UInt64.MaxValue;
      UInt64 eSet2_E_b_1 = UInt64.MaxValue;
      UInt64 eSet2_E_e_1 = UInt64.MaxValue;
      UInt64 eSet1_B_b_1 = UInt64.MaxValue;
      UInt64 eSet1_B_e_1 = UInt64.MaxValue;
      UInt64 sCommon_2 = UInt64.MaxValue;
      // (~1 e.Set1_B s.Common e.Set1_E )~1 (~2 e.Set2_B s.Common e.Set2_E )~2
      //(0 0 )(1 1 )(2 2 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Set1_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        UInt64 bb_2_1 = bb_2_0;
        UInt64 be_2_1 = be_2_0;
        bb_1_1 = boe_1_0;
        eSet1_B_b_1 = bb_1_0;
        eSet1_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eSet1_B_b_1, ref eSet1_B_e_1 );
        if( ! RefalRTS.svar_left( ref sCommon_1, ref bb_1_1, ref be_1_1 ) )
          continue;
        eSet1_E_b_1 = bb_1_1;
        RefalRTS.use( ref eSet1_E_b_1 );
        eSet1_E_e_1 = be_1_1;
        RefalRTS.use( ref eSet1_E_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Set2_B
        for(
          UInt64 boe_2_1 = bb_2_1;
          ! RefalRTS.is_empty( boe_2_1, be_2_1 );
          RefalRTS.next_term( ref boe_2_1, ref be_2_1 )
        ) {
          UInt64 bb_2_2 = bb_2_1;
          UInt64 be_2_2 = be_2_1;
          bb_2_2 = boe_2_1;
          eSet2_B_b_1 = bb_2_1;
          eSet2_B_e_1 = boe_2_1;
          RefalRTS.move_right( ref eSet2_B_b_1, ref eSet2_B_e_1 );
          if( ! RefalRTS.repeated_stvar_left( ref sCommon_2, sCommon_1, ref bb_2_2, ref be_2_2 ) )
            continue;
          eSet2_E_b_1 = bb_2_2;
          RefalRTS.use( ref eSet2_E_b_1 );
          eSet2_E_e_1 = be_2_2;
          RefalRTS.use( ref eSet2_E_e_1 );
          RefalRTS.check_evar( ref eSet2_E_b_1, ref eSet2_E_e_1 );
          RefalRTS.check_evar( ref eSet2_B_b_1, ref eSet2_B_e_1 );
          RefalRTS.check_evar( ref eSet1_E_b_1, ref eSet1_E_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Brackets_Intersect.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n6 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n6 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n6 );
          RefalRTS.link_brackets( n4, n5 );
          res = RefalRTS.splice_elem( res, n5 );
          res = RefalRTS.splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
          res = RefalRTS.splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
          res = RefalRTS.splice_elem( res, n4 );
          RefalRTS.link_brackets( n2, n3 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          res = RefalRTS.splice_stvar( res, sCommon_1 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSet1_b_1 = UInt64.MaxValue;
      UInt64 eSet1_e_1 = UInt64.MaxValue;
      UInt64 eSet2_b_1 = UInt64.MaxValue;
      UInt64 eSet2_e_1 = UInt64.MaxValue;
      // (~1 e.Set1 )~1 (~2 e.Set2 )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eSet1_b_1 = bb_1_0;
      RefalRTS.use( ref eSet1_b_1 );
      eSet1_e_1 = be_1_0;
      RefalRTS.use( ref eSet1_e_1 );
      eSet2_b_1 = bb_2_0;
      RefalRTS.use( ref eSet2_b_1 );
      eSet2_e_1 = be_2_0;
      RefalRTS.use( ref eSet2_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern() { }
  public override string func_name ()
  {
    return "TextFromPattern";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & global_TkOpenBracket s.Number )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '~' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n6 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & global_TkCloseBracket s.Number )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseBracket.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '~' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n6 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & global_TkOpenADT s.Number )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '[' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '~' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n6 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & global_TkCloseADT s.Number )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseADT.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ']' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '~' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n6 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      // (~1 & global_TkChar s.Char )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkChar.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern_Char.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_TkChar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n4, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & global_TkNumber s.Number )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkNumber.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // (~1 & global_TkName e.Name )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '&' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 & global_TkVariable s.Mode e.Index )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // (~1 & global_TkIdentifier e.Name )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkIdentifier.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '#' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      //
      //(0 0 )
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Escape: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Escape() { }
  public override string func_name ()
  {
    return "Escape";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Escape();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '\n'
      //(0 0 )
      if( ! RefalRTS.char_left( '\n', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '\r'
      //(0 0 )
      if( ! RefalRTS.char_left( '\r', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '\t'
      //(0 0 )
      if( ! RefalRTS.char_left( '\t', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '\\'
      //(0 0 )
      if( ! RefalRTS.char_left( '\\', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '\''
      //(0 0 )
      if( ! RefalRTS.char_left( '\'', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '\"'
      //(0 0 )
      if( ! RefalRTS.char_left( '"', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sOther_1 = UInt64.MaxValue;
      // s.Other
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sOther_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sOther_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern_Char: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern_Char() { }
  public override string func_name ()
  {
    return "TextFromPattern_Char";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern_Char();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      // (~1 & global_TkChar s.Char )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkChar.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Escape.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern_Char.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      //
      //(0 0 )
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eOther_b_1 = UInt64.MaxValue;
      UInt64 eOther_e_1 = UInt64.MaxValue;
      // e.Other
      //(0 0 )
      eOther_b_1 = bb_0_0;
      RefalRTS.use( ref eOther_b_1 );
      eOther_e_1 = be_0_0;
      RefalRTS.use( ref eOther_e_1 );
      RefalRTS.check_evar( ref eOther_b_1, ref eOther_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_TextFromPattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eOther_b_1, eOther_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc() { }
  public override string func_name ()
  {
    return "CtAlloc";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert() { }
  public override string func_name ()
  {
    return "CtInsert";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets() { }
  public override string func_name ()
  {
    return "CtBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar() { }
  public override string func_name ()
  {
    return "CtInsertVar";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StChar: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StChar() { }
  public override string func_name ()
  {
    return "StChar";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StChar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StName: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StName() { }
  public override string func_name ()
  {
    return "StName";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StNumber: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StNumber() { }
  public override string func_name ()
  {
    return "StNumber";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StNumber();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StIdent: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StIdent() { }
  public override string func_name ()
  {
    return "StIdent";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StIdent();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket() { }
  public override string func_name ()
  {
    return "StOpenBracket";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseBracket: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseBracket() { }
  public override string func_name ()
  {
    return "StCloseBracket";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall() { }
  public override string func_name ()
  {
    return "StOpenCall";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseCall: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseCall() { }
  public override string func_name ()
  {
    return "StCloseCall";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseCall();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT() { }
  public override string func_name ()
  {
    return "StOpenADT";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseADT: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseADT() { }
  public override string func_name ()
  {
    return "StCloseADT";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseADT();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StLink: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StLink() { }
  public override string func_name ()
  {
    return "StLink";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StLink();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StStack: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StStack() { }
  public override string func_name ()
  {
    return "StStack";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StStack();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult() { }
  public override string func_name ()
  {
    return "GenResult";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sValue_1 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkChar s.Value )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkChar.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sValue_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StChar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sCounter_3 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n4, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sCounter_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n5, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_stvar( res, sValue_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkName e.Name )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eName_b_1 = bb_3_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_3_0;
      RefalRTS.use( ref eName_e_1 );
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sCounter_3 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n4, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sCounter_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n5, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkNumber s.Number )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkNumber.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StNumber.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sCounter_3 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n4, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sCounter_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n5, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkIdentifier e.Name )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkIdentifier.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eName_b_1 = bb_3_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_3_0;
      RefalRTS.use( ref eName_e_1 );
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StIdent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sCounter_3 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n4, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sCounter_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n5, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkOpenBracket s.Num )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sCounter_3 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n4, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sCounter_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n5, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_stvar( res, sNum_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkOpenCall s.Num )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenCall.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sCounter_3 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n4, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sCounter_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n5, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_stvar( res, sNum_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkOpenADT s.Num )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sCounter_3 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n4, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sCounter_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n5, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_stvar( res, sNum_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eCommands_B_b_1 = UInt64.MaxValue;
      UInt64 eCommands_B_e_1 = UInt64.MaxValue;
      UInt64 eCommands_E_b_1 = UInt64.MaxValue;
      UInt64 eCommands_E_e_1 = UInt64.MaxValue;
      UInt64 sOpenCounter_1 = UInt64.MaxValue;
      UInt64 sOpenCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      UInt64 sCounter_4 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & global_TkCloseBracket s.Num )~4 e.Result
      //(0 0 )(1 0 )(2 1 )(4 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseBracket.instance, ref bb_4_0, ref be_4_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Commands_B
      for(
        UInt64 boe_2_0 = bb_2_0;
        ! RefalRTS.is_empty( boe_2_0, be_2_0 );
        RefalRTS.next_term( ref boe_2_0, ref be_2_0 )
      ) {
        UInt64 bb_2_1 = bb_2_0;
        UInt64 be_2_1 = be_2_0;
        bb_2_1 = boe_2_0;
        eCommands_B_b_1 = bb_2_0;
        eCommands_B_e_1 = boe_2_0;
        RefalRTS.move_right( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        UInt64 bb_3_0 = 0;
        UInt64 be_3_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_2_1, ref be_2_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_right( ref sNum_2, sNum_1, ref bb_3_0, ref be_3_0 ) )
          continue;
        eCommands_E_b_1 = bb_2_1;
        RefalRTS.use( ref eCommands_E_b_1 );
        eCommands_E_e_1 = be_2_1;
        RefalRTS.use( ref eCommands_E_e_1 );
        if( ! RefalRTS.svar_left( ref sOpenCounter_1, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
          continue;
        RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
        RefalRTS.check_evar( ref eCommands_E_b_1, ref eCommands_E_e_1 );
        RefalRTS.check_evar( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sOpenCounter_2, sOpenCounter_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_4, sCounter_3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n11, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseBracket.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n14, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StLink.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n21 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n22, global_Inc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n23 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n23 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n24 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n24 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n24 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n24 );
        res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
        RefalRTS.push_stack( n23 );
        RefalRTS.push_stack( n21 );
        res = RefalRTS.splice_elem( res, n23 );
        res = RefalRTS.splice_stvar( res, sCounter_4 );
        res = RefalRTS.splice_elem( res, n22 );
        res = RefalRTS.splice_elem( res, n21 );
        RefalRTS.link_brackets( n4, n20 );
        res = RefalRTS.splice_elem( res, n20 );
        RefalRTS.link_brackets( n16, n19 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sCounter_3 );
        res = RefalRTS.splice_stvar( res, sOpenCounter_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n13, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        res = RefalRTS.splice_stvar( res, sCounter_2 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_elem( res, n13 );
        RefalRTS.link_brackets( n9, n12 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_stvar( res, sCounter_1 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
        RefalRTS.link_brackets( n5, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_stvar( res, sOpenCounter_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        RefalRTS.link_brackets( n2, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eCommands_B_b_1 = UInt64.MaxValue;
      UInt64 eCommands_B_e_1 = UInt64.MaxValue;
      UInt64 eCommands_E_b_1 = UInt64.MaxValue;
      UInt64 eCommands_E_e_1 = UInt64.MaxValue;
      UInt64 sOpenCounter_1 = UInt64.MaxValue;
      UInt64 sOpenCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      UInt64 sCounter_4 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & global_TkCloseADT s.Num )~4 e.Result
      //(0 0 )(1 0 )(2 1 )(4 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseADT.instance, ref bb_4_0, ref be_4_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Commands_B
      for(
        UInt64 boe_2_0 = bb_2_0;
        ! RefalRTS.is_empty( boe_2_0, be_2_0 );
        RefalRTS.next_term( ref boe_2_0, ref be_2_0 )
      ) {
        UInt64 bb_2_1 = bb_2_0;
        UInt64 be_2_1 = be_2_0;
        bb_2_1 = boe_2_0;
        eCommands_B_b_1 = bb_2_0;
        eCommands_B_e_1 = boe_2_0;
        RefalRTS.move_right( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        UInt64 bb_3_0 = 0;
        UInt64 be_3_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_2_1, ref be_2_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_right( ref sNum_2, sNum_1, ref bb_3_0, ref be_3_0 ) )
          continue;
        eCommands_E_b_1 = bb_2_1;
        RefalRTS.use( ref eCommands_E_b_1 );
        eCommands_E_e_1 = be_2_1;
        RefalRTS.use( ref eCommands_E_e_1 );
        if( ! RefalRTS.svar_left( ref sOpenCounter_1, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
          continue;
        RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
        RefalRTS.check_evar( ref eCommands_E_b_1, ref eCommands_E_e_1 );
        RefalRTS.check_evar( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sOpenCounter_2, sOpenCounter_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_4, sCounter_3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n11, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseADT.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n14, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StLink.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n21 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n22, global_Inc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n23 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n23 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n24 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n24 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n24 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n24 );
        res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
        RefalRTS.push_stack( n23 );
        RefalRTS.push_stack( n21 );
        res = RefalRTS.splice_elem( res, n23 );
        res = RefalRTS.splice_stvar( res, sCounter_4 );
        res = RefalRTS.splice_elem( res, n22 );
        res = RefalRTS.splice_elem( res, n21 );
        RefalRTS.link_brackets( n4, n20 );
        res = RefalRTS.splice_elem( res, n20 );
        RefalRTS.link_brackets( n16, n19 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sCounter_3 );
        res = RefalRTS.splice_stvar( res, sOpenCounter_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n13, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        res = RefalRTS.splice_stvar( res, sCounter_2 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_elem( res, n13 );
        RefalRTS.link_brackets( n9, n12 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_stvar( res, sCounter_1 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
        RefalRTS.link_brackets( n5, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_stvar( res, sOpenCounter_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        RefalRTS.link_brackets( n2, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 sNum_2 = UInt64.MaxValue;
      UInt64 eCommands_B_b_1 = UInt64.MaxValue;
      UInt64 eCommands_B_e_1 = UInt64.MaxValue;
      UInt64 eCommands_E_b_1 = UInt64.MaxValue;
      UInt64 eCommands_E_e_1 = UInt64.MaxValue;
      UInt64 sOpenCounter_1 = UInt64.MaxValue;
      UInt64 sOpenCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_2 = UInt64.MaxValue;
      UInt64 sCounter_3 = UInt64.MaxValue;
      UInt64 sCounter_4 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & global_TkCloseCall s.Num )~4 e.Result
      //(0 0 )(1 0 )(2 1 )(4 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseCall.instance, ref bb_4_0, ref be_4_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Commands_B
      for(
        UInt64 boe_2_0 = bb_2_0;
        ! RefalRTS.is_empty( boe_2_0, be_2_0 );
        RefalRTS.next_term( ref boe_2_0, ref be_2_0 )
      ) {
        UInt64 bb_2_1 = bb_2_0;
        UInt64 be_2_1 = be_2_0;
        bb_2_1 = boe_2_0;
        eCommands_B_b_1 = bb_2_0;
        eCommands_B_e_1 = boe_2_0;
        RefalRTS.move_right( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        UInt64 bb_3_0 = 0;
        UInt64 be_3_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_2_1, ref be_2_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_right( ref sNum_2, sNum_1, ref bb_3_0, ref be_3_0 ) )
          continue;
        eCommands_E_b_1 = bb_2_1;
        RefalRTS.use( ref eCommands_E_b_1 );
        eCommands_E_e_1 = be_2_1;
        RefalRTS.use( ref eCommands_E_e_1 );
        if( ! RefalRTS.svar_left( ref sOpenCounter_1, ref bb_3_0, ref be_3_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
          continue;
        RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
        RefalRTS.check_evar( ref eCommands_E_b_1, ref eCommands_E_e_1 );
        RefalRTS.check_evar( ref eCommands_B_b_1, ref eCommands_B_e_1 );
        RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sOpenCounter_2, sOpenCounter_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_2, sCounter_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_3, sCounter_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sCounter_4, sCounter_3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n7, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n10, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n11, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseCall.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n14, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n17, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n18, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StStack.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n20 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n21, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n22, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StStack.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n23 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n23 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n24 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n24 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n25 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n25 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n26 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n26, global_Inc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n27 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n27 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n28 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n28 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n28 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n28 );
        res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
        RefalRTS.push_stack( n27 );
        RefalRTS.push_stack( n25 );
        res = RefalRTS.splice_elem( res, n27 );
        res = RefalRTS.splice_stvar( res, sCounter_4 );
        res = RefalRTS.splice_elem( res, n26 );
        res = RefalRTS.splice_elem( res, n25 );
        RefalRTS.link_brackets( n4, n24 );
        res = RefalRTS.splice_elem( res, n24 );
        RefalRTS.link_brackets( n20, n23 );
        res = RefalRTS.splice_elem( res, n23 );
        res = RefalRTS.splice_stvar( res, sCounter_3 );
        res = RefalRTS.splice_elem( res, n22 );
        res = RefalRTS.splice_elem( res, n21 );
        res = RefalRTS.splice_elem( res, n20 );
        RefalRTS.link_brackets( n16, n19 );
        res = RefalRTS.splice_elem( res, n19 );
        res = RefalRTS.splice_stvar( res, sOpenCounter_2 );
        res = RefalRTS.splice_elem( res, n18 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n13, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        res = RefalRTS.splice_stvar( res, sCounter_2 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_elem( res, n13 );
        RefalRTS.link_brackets( n9, n12 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_stvar( res, sNum_2 );
        res = RefalRTS.splice_stvar( res, sCounter_1 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
        RefalRTS.link_brackets( n5, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_stvar( res, sNum_1 );
        res = RefalRTS.splice_stvar( res, sOpenCounter_1 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
        res = RefalRTS.splice_elem( res, n4 );
        RefalRTS.link_brackets( n2, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVars_B_b_1 = UInt64.MaxValue;
      UInt64 eVars_B_e_1 = UInt64.MaxValue;
      UInt64 eVars_E_b_1 = UInt64.MaxValue;
      UInt64 eVars_E_e_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sUsings_2 = UInt64.MaxValue;
      // (~1 e.Vars_B (~2 s.Usings s.Mode e.Index )~2 e.Vars_E )~1 (~3 e.Commands )~3 s.Counter (~4 & global_TkVariable s.Mode e.Index )~4 e.Result
      //(0 0 )(1 1 )(3 0 )(4 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eCommands_b_1 = bb_3_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_3_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_4_0, ref be_4_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eIndex_b_1 = bb_4_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_4_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Vars_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eVars_B_b_1 = bb_1_0;
        eVars_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eVars_B_b_1, ref eVars_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_evar_right( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_right( ref sMode_2, sMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eVars_E_b_1 = bb_1_1;
        RefalRTS.use( ref eVars_E_b_1 );
        eVars_E_e_1 = be_1_1;
        RefalRTS.use( ref eVars_E_e_1 );
        if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
        RefalRTS.check_evar( ref eVars_E_b_1, ref eVars_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eVars_B_b_1, ref eVars_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sUsings_2, sUsings_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n5, global_Inc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n6 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n11, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n13, global_Inc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n17 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n17 );
        RefalRTS.push_stack( n0 );
        res = RefalRTS.splice_elem( res, n17 );
        res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
        res = RefalRTS.splice_stvar( res, sCounter_1 );
        RefalRTS.link_brackets( n9, n16 );
        res = RefalRTS.splice_elem( res, n16 );
        RefalRTS.link_brackets( n10, n15 );
        res = RefalRTS.splice_elem( res, n15 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sMode_2 );
        RefalRTS.push_stack( n14 );
        RefalRTS.push_stack( n12 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_stvar( res, sUsings_2 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = RefalRTS.splice_elem( res, n9 );
        RefalRTS.link_brackets( n2, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        RefalRTS.link_brackets( n3, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
        RefalRTS.push_stack( n6 );
        RefalRTS.push_stack( n4 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_stvar( res, sUsings_1 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        RefalRTS.use( ref res );
        RefalRTS.garbage( arg_begin, arg_end );
        return RefalRTS.FnResult.Success;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & global_TkVariable s.Mode e.Index )~3 e.Result
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eResult_b_1 = bb_0_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_0_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eIndex_b_1 = bb_3_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_3_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n4, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n10, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_stvar( res, sCounter_1 );
      RefalRTS.link_brackets( n7, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n8, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n2, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n3, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      UInt64 sCounter_1 = UInt64.MaxValue;
      // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVars_b_1 = bb_1_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_1_0;
      RefalRTS.use( ref eVars_e_1 );
      eCommands_b_1 = bb_2_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_2_0;
      RefalRTS.use( ref eCommands_e_1 );
      if( ! RefalRTS.svar_left( ref sCounter_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult_Commands.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SeparateAllocates: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SeparateAllocates() { }
  public override string func_name ()
  {
    return "SeparateAllocates";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SeparateAllocates();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eAllocates_b_1 = UInt64.MaxValue;
      UInt64 eAllocates_e_1 = UInt64.MaxValue;
      UInt64 eInfo_b_1 = UInt64.MaxValue;
      UInt64 eInfo_e_1 = UInt64.MaxValue;
      // (~1 e.Allocates )~1 (~2 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc e.Info )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eAllocates_b_1 = bb_1_0;
      RefalRTS.use( ref eAllocates_b_1 );
      eAllocates_e_1 = be_1_0;
      RefalRTS.use( ref eAllocates_e_1 );
      eInfo_b_1 = bb_2_0;
      RefalRTS.use( ref eInfo_b_1 );
      eInfo_e_1 = be_2_0;
      RefalRTS.use( ref eInfo_e_1 );
      RefalRTS.check_evar( ref eInfo_b_1, ref eInfo_e_1 );
      RefalRTS.check_evar( ref eAllocates_b_1, ref eAllocates_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n1, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eInfo_b_1, eInfo_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eAllocates_b_1 = UInt64.MaxValue;
      UInt64 eAllocates_e_1 = UInt64.MaxValue;
      UInt64 tOther_1 = UInt64.MaxValue;
      // (~1 e.Allocates )~1 t.Other
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eAllocates_b_1 = bb_1_0;
      RefalRTS.use( ref eAllocates_b_1 );
      eAllocates_e_1 = be_1_0;
      RefalRTS.use( ref eAllocates_e_1 );
      if( ! RefalRTS.tvar_left( ref tOther_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eAllocates_b_1, ref eAllocates_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, tOther_1 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult_Commands: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult_Commands() { }
  public override string func_name ()
  {
    return "GenResult_Commands";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GenResult_Commands();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eCommands_b_1 = UInt64.MaxValue;
      UInt64 eCommands_e_1 = UInt64.MaxValue;
      // e.Commands
      //(0 0 )
      eCommands_b_1 = bb_0_0;
      RefalRTS.use( ref eCommands_b_1 );
      eCommands_e_1 = be_0_0;
      RefalRTS.use( ref eCommands_e_1 );
      RefalRTS.check_evar( ref eCommands_b_1, ref eCommands_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommands_Separated.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_MapReduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_SeparateAllocates.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eCommands_b_1, eCommands_e_1 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommands_Separated: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommands_Separated() { }
  public override string func_name ()
  {
    return "ConvertCommands_Separated";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommands_Separated();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eAllocates_b_1 = UInt64.MaxValue;
      UInt64 eAllocates_e_1 = UInt64.MaxValue;
      UInt64 eOtherCommands_b_1 = UInt64.MaxValue;
      UInt64 eOtherCommands_e_1 = UInt64.MaxValue;
      // (~1 e.Allocates )~1 e.OtherCommands
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eAllocates_b_1 = bb_1_0;
      RefalRTS.use( ref eAllocates_b_1 );
      eAllocates_e_1 = be_1_0;
      RefalRTS.use( ref eAllocates_e_1 );
      eOtherCommands_b_1 = bb_0_0;
      RefalRTS.use( ref eOtherCommands_b_1 );
      eOtherCommands_e_1 = be_0_0;
      RefalRTS.use( ref eOtherCommands_e_1 );
      RefalRTS.check_evar( ref eOtherCommands_b_1, ref eOtherCommands_e_1 );
      RefalRTS.check_evar( ref eAllocates_b_1, ref eAllocates_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertAllocates.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommand.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Reverse.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eOtherCommands_b_1, eOtherCommands_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Reverse: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Reverse() { }
  public override string func_name ()
  {
    return "Reverse";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Reverse();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFirst_1 = UInt64.MaxValue;
      UInt64 tLast_1 = UInt64.MaxValue;
      UInt64 eMedium_b_1 = UInt64.MaxValue;
      UInt64 eMedium_e_1 = UInt64.MaxValue;
      // t.First e.Medium t.Last
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tFirst_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_right( ref tLast_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eMedium_b_1 = bb_0_0;
      RefalRTS.use( ref eMedium_b_1 );
      eMedium_e_1 = be_0_0;
      RefalRTS.use( ref eMedium_e_1 );
      RefalRTS.check_evar( ref eMedium_b_1, ref eMedium_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_Reverse.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, tFirst_1 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eMedium_b_1, eMedium_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_stvar( res, tLast_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tOne_1 = UInt64.MaxValue;
      // t.One
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tOne_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tOne_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      //
      //(0 0 )
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdAllocateElem: RefalRTS.Function
{
  private global_CmdAllocateElem() { }
  public override string func_name ()
  {
    return "global_CmdAllocateElem";
  }

  public static readonly RefalRTS.Function instance = new global_CmdAllocateElem();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdLinkBrackets: RefalRTS.Function
{
  private global_CmdLinkBrackets() { }
  public override string func_name ()
  {
    return "global_CmdLinkBrackets";
  }

  public static readonly RefalRTS.Function instance = new global_CmdLinkBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdPushStack: RefalRTS.Function
{
  private global_CmdPushStack() { }
  public override string func_name ()
  {
    return "global_CmdPushStack";
  }

  public static readonly RefalRTS.Function instance = new global_CmdPushStack();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdInsertElem: RefalRTS.Function
{
  private global_CmdInsertElem() { }
  public override string func_name ()
  {
    return "global_CmdInsertElem";
  }

  public static readonly RefalRTS.Function instance = new global_CmdInsertElem();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdInsertEVar: RefalRTS.Function
{
  private global_CmdInsertEVar() { }
  public override string func_name ()
  {
    return "global_CmdInsertEVar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdInsertEVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdCheckEVar: RefalRTS.Function
{
  private global_CmdCheckEVar() { }
  public override string func_name ()
  {
    return "global_CmdCheckEVar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdCheckEVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElChar: RefalRTS.Function
{
  private global_ElChar() { }
  public override string func_name ()
  {
    return "global_ElChar";
  }

  public static readonly RefalRTS.Function instance = new global_ElChar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElName: RefalRTS.Function
{
  private global_ElName() { }
  public override string func_name ()
  {
    return "global_ElName";
  }

  public static readonly RefalRTS.Function instance = new global_ElName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElNumber: RefalRTS.Function
{
  private global_ElNumber() { }
  public override string func_name ()
  {
    return "global_ElNumber";
  }

  public static readonly RefalRTS.Function instance = new global_ElNumber();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElIdent: RefalRTS.Function
{
  private global_ElIdent() { }
  public override string func_name ()
  {
    return "global_ElIdent";
  }

  public static readonly RefalRTS.Function instance = new global_ElIdent();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElOpenADT: RefalRTS.Function
{
  private global_ElOpenADT() { }
  public override string func_name ()
  {
    return "global_ElOpenADT";
  }

  public static readonly RefalRTS.Function instance = new global_ElOpenADT();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElCloseADT: RefalRTS.Function
{
  private global_ElCloseADT() { }
  public override string func_name ()
  {
    return "global_ElCloseADT";
  }

  public static readonly RefalRTS.Function instance = new global_ElCloseADT();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElOpenBracket: RefalRTS.Function
{
  private global_ElOpenBracket() { }
  public override string func_name ()
  {
    return "global_ElOpenBracket";
  }

  public static readonly RefalRTS.Function instance = new global_ElOpenBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElCloseBracket: RefalRTS.Function
{
  private global_ElCloseBracket() { }
  public override string func_name ()
  {
    return "global_ElCloseBracket";
  }

  public static readonly RefalRTS.Function instance = new global_ElCloseBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElOpenCall: RefalRTS.Function
{
  private global_ElOpenCall() { }
  public override string func_name ()
  {
    return "global_ElOpenCall";
  }

  public static readonly RefalRTS.Function instance = new global_ElOpenCall();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElCloseCall: RefalRTS.Function
{
  private global_ElCloseCall() { }
  public override string func_name ()
  {
    return "global_ElCloseCall";
  }

  public static readonly RefalRTS.Function instance = new global_ElCloseCall();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElElem: RefalRTS.Function
{
  private global_ElElem() { }
  public override string func_name ()
  {
    return "global_ElElem";
  }

  public static readonly RefalRTS.Function instance = new global_ElElem();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_ElSTVar: RefalRTS.Function
{
  private global_ElSTVar() { }
  public override string func_name ()
  {
    return "global_ElSTVar";
  }

  public static readonly RefalRTS.Function instance = new global_ElSTVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ElemType: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ElemType() { }
  public override string func_name ()
  {
    return "ElemType";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ElemType();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sChar_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StChar s.Char
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StChar.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElChar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StName e.Name
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StName.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNumber_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StNumber s.Number
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StNumber.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElNumber.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StIdent e.Name
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StIdent.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElIdent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT s.Num
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElOpenADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseADT s.Num
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElCloseADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket s.Num
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElOpenBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseBracket s.Num
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElCloseBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall s.Num
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StOpenCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElOpenCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseCall s.Num
      //(0 0 )
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StCloseCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_ElCloseCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertAllocates: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertAllocates() { }
  public override string func_name ()
  {
    return "ConvertAllocates";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertAllocates();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sType_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 eValue_b_1 = UInt64.MaxValue;
      UInt64 eValue_e_1 = UInt64.MaxValue;
      // (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc s.Type s.Number e.Value )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtAlloc.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sType_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eValue_b_1 = bb_1_0;
      RefalRTS.use( ref eValue_b_1 );
      eValue_e_1 = be_1_0;
      RefalRTS.use( ref eValue_e_1 );
      RefalRTS.check_evar( ref eValue_b_1, ref eValue_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdAllocateElem.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ElemType.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eValue_b_1, eValue_e_1 );
      res = RefalRTS.splice_stvar( res, sType_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommand: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommand() { }
  public override string func_name ()
  {
    return "ConvertCommand";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ConvertCommand();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert s.Number )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsert.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdInsertElem.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_ElElem.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar s.Usings 'e e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdInsertEVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sSTMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar s.Usings s.STMode e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtInsertVar.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sSTMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdInsertElem.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_ElSTVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sSTMode_1 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StStack s.Number )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StStack.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdPushStack.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sLeftNumber_1 = UInt64.MaxValue;
      UInt64 sRightNumber_1 = UInt64.MaxValue;
      // (~1 & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets & local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StLink s.LeftNumber s.RightNumber )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_CtBrackets.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_StLink.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLeftNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sRightNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdLinkBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sRightNumber_1 );
      res = RefalRTS.splice_stvar( res, sLeftNumber_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult() { }
  public override string func_name ()
  {
    return "GeneralizeResult";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 ePatternVars_b_1 = UInt64.MaxValue;
      UInt64 ePatternVars_e_1 = UInt64.MaxValue;
      UInt64 ePatternCommands_b_1 = UInt64.MaxValue;
      UInt64 ePatternCommands_e_1 = UInt64.MaxValue;
      UInt64 eResultVars_b_1 = UInt64.MaxValue;
      UInt64 eResultVars_e_1 = UInt64.MaxValue;
      UInt64 eResultCommands_b_1 = UInt64.MaxValue;
      UInt64 eResultCommands_e_1 = UInt64.MaxValue;
      // (~1 e.PatternVars )~1 (~2 e.PatternCommands )~2 (~3 e.ResultVars )~3 (~4 e.ResultCommands )~4
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      ePatternVars_b_1 = bb_1_0;
      RefalRTS.use( ref ePatternVars_b_1 );
      ePatternVars_e_1 = be_1_0;
      RefalRTS.use( ref ePatternVars_e_1 );
      ePatternCommands_b_1 = bb_2_0;
      RefalRTS.use( ref ePatternCommands_b_1 );
      ePatternCommands_e_1 = be_2_0;
      RefalRTS.use( ref ePatternCommands_e_1 );
      eResultVars_b_1 = bb_3_0;
      RefalRTS.use( ref eResultVars_b_1 );
      eResultVars_e_1 = be_3_0;
      RefalRTS.use( ref eResultVars_e_1 );
      eResultCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eResultCommands_b_1 );
      eResultCommands_e_1 = be_4_0;
      RefalRTS.use( ref eResultCommands_e_1 );
      RefalRTS.check_evar( ref eResultCommands_b_1, ref eResultCommands_e_1 );
      RefalRTS.check_evar( ref ePatternCommands_b_1, ref ePatternCommands_e_1 );
      RefalRTS.check_evar( ref eResultVars_b_1, ref eResultVars_e_1 );
      RefalRTS.check_evar( ref ePatternVars_b_1, ref ePatternVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_Vars.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVars.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVars.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n7, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n8 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n2, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVar: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVar() { }
  public override string func_name ()
  {
    return "ReplicateVar";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 1 s.Mode e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.number_left( 1UL, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n1, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsing_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sUsing_2 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 s.Using s.Mode e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsing_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sUsing_2, sUsing_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      res = RefalRTS.splice_stvar( res, sUsing_2 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n2, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sUsing_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVars: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVars() { }
  public override string func_name ()
  {
    return "ReplicateVars";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVars();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVars_b_1 = UInt64.MaxValue;
      UInt64 eVars_e_1 = UInt64.MaxValue;
      // e.Vars
      //(0 0 )
      eVars_b_1 = bb_0_0;
      RefalRTS.use( ref eVars_b_1 );
      eVars_e_1 = be_0_0;
      RefalRTS.use( ref eVars_e_1 );
      RefalRTS.check_evar( ref eVars_b_1, ref eVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_ReplicateVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eVars_b_1, eVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_Vars: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_Vars() { }
  public override string func_name ()
  {
    return "GeneralizeResult_Vars";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_Vars();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 ePatternVars_b_1 = UInt64.MaxValue;
      UInt64 ePatternVars_e_1 = UInt64.MaxValue;
      UInt64 eResultVars_b_1 = UInt64.MaxValue;
      UInt64 eResultVars_e_1 = UInt64.MaxValue;
      UInt64 ePatternCommands_b_1 = UInt64.MaxValue;
      UInt64 ePatternCommands_e_1 = UInt64.MaxValue;
      UInt64 eResultCommands_b_1 = UInt64.MaxValue;
      UInt64 eResultCommands_e_1 = UInt64.MaxValue;
      UInt64 ePatternVars_b_2 = UInt64.MaxValue;
      UInt64 ePatternVars_e_2 = UInt64.MaxValue;
      UInt64 eResultVars_b_2 = UInt64.MaxValue;
      UInt64 eResultVars_e_2 = UInt64.MaxValue;
      // (~1 e.PatternVars )~1 (~2 e.ResultVars )~2 (~3 e.PatternCommands )~3 (~4 e.ResultCommands )~4
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      ePatternVars_b_1 = bb_1_0;
      RefalRTS.use( ref ePatternVars_b_1 );
      ePatternVars_e_1 = be_1_0;
      RefalRTS.use( ref ePatternVars_e_1 );
      eResultVars_b_1 = bb_2_0;
      RefalRTS.use( ref eResultVars_b_1 );
      eResultVars_e_1 = be_2_0;
      RefalRTS.use( ref eResultVars_e_1 );
      ePatternCommands_b_1 = bb_3_0;
      RefalRTS.use( ref ePatternCommands_b_1 );
      ePatternCommands_e_1 = be_3_0;
      RefalRTS.use( ref ePatternCommands_e_1 );
      eResultCommands_b_1 = bb_4_0;
      RefalRTS.use( ref eResultCommands_b_1 );
      eResultCommands_e_1 = be_4_0;
      RefalRTS.use( ref eResultCommands_e_1 );
      RefalRTS.check_evar( ref eResultCommands_b_1, ref eResultCommands_e_1 );
      RefalRTS.check_evar( ref ePatternVars_b_2, ref ePatternVars_e_2 );
      RefalRTS.check_evar( ref eResultVars_b_2, ref eResultVars_e_2 );
      RefalRTS.check_evar( ref ePatternCommands_b_1, ref ePatternCommands_e_1 );
      RefalRTS.check_evar( ref eResultVars_b_1, ref eResultVars_e_1 );
      RefalRTS.check_evar( ref ePatternVars_b_1, ref ePatternVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref ePatternVars_b_2, ref ePatternVars_e_2, ePatternVars_b_1, ePatternVars_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eResultVars_b_2, ref eResultVars_e_2, eResultVars_b_1, eResultVars_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetUnion.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n15, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetDifference.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n24 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n24 );
      RefalRTS.link_brackets( n22, n23 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
      res = RefalRTS.splice_elem( res, n22 );
      RefalRTS.link_brackets( n13, n21 );
      res = RefalRTS.splice_elem( res, n21 );
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n14 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n18, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_evar( res, ePatternVars_b_2, ePatternVars_e_2 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n16, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eResultVars_b_2, eResultVars_e_2 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n11, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n2, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetUnion: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetUnion() { }
  public override string func_name ()
  {
    return "VarSetUnion";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetUnion();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSet1_B_b_1 = UInt64.MaxValue;
      UInt64 eSet1_B_e_1 = UInt64.MaxValue;
      UInt64 tCommon_1 = UInt64.MaxValue;
      UInt64 eSet1_E_b_1 = UInt64.MaxValue;
      UInt64 eSet1_E_e_1 = UInt64.MaxValue;
      UInt64 eSet2_B_b_1 = UInt64.MaxValue;
      UInt64 eSet2_B_e_1 = UInt64.MaxValue;
      UInt64 eSet2_E_b_1 = UInt64.MaxValue;
      UInt64 eSet2_E_e_1 = UInt64.MaxValue;
      UInt64 tCommon_2 = UInt64.MaxValue;
      // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
      //(0 0 )(1 1 )(2 2 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Set1_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        UInt64 bb_2_1 = bb_2_0;
        UInt64 be_2_1 = be_2_0;
        bb_1_1 = boe_1_0;
        eSet1_B_b_1 = bb_1_0;
        eSet1_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eSet1_B_b_1, ref eSet1_B_e_1 );
        if( ! RefalRTS.tvar_left( ref tCommon_1, ref bb_1_1, ref be_1_1 ) )
          continue;
        eSet1_E_b_1 = bb_1_1;
        RefalRTS.use( ref eSet1_E_b_1 );
        eSet1_E_e_1 = be_1_1;
        RefalRTS.use( ref eSet1_E_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Set2_B
        for(
          UInt64 boe_2_1 = bb_2_1;
          ! RefalRTS.is_empty( boe_2_1, be_2_1 );
          RefalRTS.next_term( ref boe_2_1, ref be_2_1 )
        ) {
          UInt64 bb_2_2 = bb_2_1;
          UInt64 be_2_2 = be_2_1;
          bb_2_2 = boe_2_1;
          eSet2_B_b_1 = bb_2_1;
          eSet2_B_e_1 = boe_2_1;
          RefalRTS.move_right( ref eSet2_B_b_1, ref eSet2_B_e_1 );
          if( ! RefalRTS.repeated_stvar_left( ref tCommon_2, tCommon_1, ref bb_2_2, ref be_2_2 ) )
            continue;
          eSet2_E_b_1 = bb_2_2;
          RefalRTS.use( ref eSet2_E_b_1 );
          eSet2_E_e_1 = be_2_2;
          RefalRTS.use( ref eSet2_E_e_1 );
          RefalRTS.check_evar( ref eSet2_E_b_1, ref eSet2_E_e_1 );
          RefalRTS.check_evar( ref eSet2_B_b_1, ref eSet2_B_e_1 );
          RefalRTS.check_evar( ref eSet1_E_b_1, ref eSet1_E_e_1 );
          RefalRTS.check_evar( ref eSet1_B_b_1, ref eSet1_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetUnion.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n6 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n6 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n6 );
          RefalRTS.link_brackets( n4, n5 );
          res = RefalRTS.splice_elem( res, n5 );
          res = RefalRTS.splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
          res = RefalRTS.splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
          res = RefalRTS.splice_elem( res, n4 );
          RefalRTS.link_brackets( n2, n3 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
          res = RefalRTS.splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          res = RefalRTS.splice_stvar( res, tCommon_1 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSet1_b_1 = UInt64.MaxValue;
      UInt64 eSet1_e_1 = UInt64.MaxValue;
      UInt64 eSet2_b_1 = UInt64.MaxValue;
      UInt64 eSet2_e_1 = UInt64.MaxValue;
      // (~1 e.Set1 )~1 (~2 e.Set2 )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eSet1_b_1 = bb_1_0;
      RefalRTS.use( ref eSet1_b_1 );
      eSet1_e_1 = be_1_0;
      RefalRTS.use( ref eSet1_e_1 );
      eSet2_b_1 = bb_2_0;
      RefalRTS.use( ref eSet2_b_1 );
      eSet2_e_1 = be_2_0;
      RefalRTS.use( ref eSet2_e_1 );
      RefalRTS.check_evar( ref eSet2_b_1, ref eSet2_e_1 );
      RefalRTS.check_evar( ref eSet1_b_1, ref eSet1_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eSet2_b_1, eSet2_e_1 );
      res = RefalRTS.splice_evar( res, eSet1_b_1, eSet1_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetDifference: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetDifference() { }
  public override string func_name ()
  {
    return "VarSetDifference";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetDifference();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSet1_B_b_1 = UInt64.MaxValue;
      UInt64 eSet1_B_e_1 = UInt64.MaxValue;
      UInt64 eSet1_E_b_1 = UInt64.MaxValue;
      UInt64 eSet1_E_e_1 = UInt64.MaxValue;
      UInt64 eSet2_B_b_1 = UInt64.MaxValue;
      UInt64 eSet2_B_e_1 = UInt64.MaxValue;
      UInt64 eSet2_E_b_1 = UInt64.MaxValue;
      UInt64 eSet2_E_e_1 = UInt64.MaxValue;
      UInt64 tCommon_1 = UInt64.MaxValue;
      UInt64 tCommon_2 = UInt64.MaxValue;
      // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
      //(0 0 )(1 1 )(2 2 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Set1_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        UInt64 bb_2_1 = bb_2_0;
        UInt64 be_2_1 = be_2_0;
        bb_1_1 = boe_1_0;
        eSet1_B_b_1 = bb_1_0;
        eSet1_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eSet1_B_b_1, ref eSet1_B_e_1 );
        if( ! RefalRTS.tvar_left( ref tCommon_1, ref bb_1_1, ref be_1_1 ) )
          continue;
        eSet1_E_b_1 = bb_1_1;
        RefalRTS.use( ref eSet1_E_b_1 );
        eSet1_E_e_1 = be_1_1;
        RefalRTS.use( ref eSet1_E_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Set2_B
        for(
          UInt64 boe_2_1 = bb_2_1;
          ! RefalRTS.is_empty( boe_2_1, be_2_1 );
          RefalRTS.next_term( ref boe_2_1, ref be_2_1 )
        ) {
          UInt64 bb_2_2 = bb_2_1;
          UInt64 be_2_2 = be_2_1;
          bb_2_2 = boe_2_1;
          eSet2_B_b_1 = bb_2_1;
          eSet2_B_e_1 = boe_2_1;
          RefalRTS.move_right( ref eSet2_B_b_1, ref eSet2_B_e_1 );
          if( ! RefalRTS.repeated_stvar_left( ref tCommon_2, tCommon_1, ref bb_2_2, ref be_2_2 ) )
            continue;
          eSet2_E_b_1 = bb_2_2;
          RefalRTS.use( ref eSet2_E_b_1 );
          eSet2_E_e_1 = be_2_2;
          RefalRTS.use( ref eSet2_E_e_1 );
          RefalRTS.check_evar( ref eSet2_E_b_1, ref eSet2_E_e_1 );
          RefalRTS.check_evar( ref eSet2_B_b_1, ref eSet2_B_e_1 );
          RefalRTS.check_evar( ref eSet1_E_b_1, ref eSet1_E_e_1 );
          RefalRTS.check_evar( ref eSet1_B_b_1, ref eSet1_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_VarSetDifference.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n6 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n6 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n6 );
          RefalRTS.link_brackets( n4, n5 );
          res = RefalRTS.splice_elem( res, n5 );
          res = RefalRTS.splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
          res = RefalRTS.splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
          res = RefalRTS.splice_elem( res, n4 );
          RefalRTS.link_brackets( n2, n3 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          res = RefalRTS.splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
          RefalRTS.use( ref res );
          RefalRTS.garbage( arg_begin, arg_end );
          return RefalRTS.FnResult.Success;
        }
        continue;
      }
      break;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSet1_b_1 = UInt64.MaxValue;
      UInt64 eSet1_e_1 = UInt64.MaxValue;
      UInt64 eSet2_b_1 = UInt64.MaxValue;
      UInt64 eSet2_e_1 = UInt64.MaxValue;
      // (~1 e.Set1 )~1 (~2 e.Set2 )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eSet1_b_1 = bb_1_0;
      RefalRTS.use( ref eSet1_b_1 );
      eSet1_e_1 = be_1_0;
      RefalRTS.use( ref eSet1_e_1 );
      eSet2_b_1 = bb_2_0;
      RefalRTS.use( ref eSet2_b_1 );
      eSet2_e_1 = be_2_0;
      RefalRTS.use( ref eSet2_e_1 );
      RefalRTS.check_evar( ref eSet1_b_1, ref eSet1_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eSet1_b_1, eSet1_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdEmptyResult: RefalRTS.Function
{
  private global_CmdEmptyResult() { }
  public override string func_name ()
  {
    return "global_CmdEmptyResult";
  }

  public static readonly RefalRTS.Function instance = new global_CmdEmptyResult();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdReturnResult: RefalRTS.Function
{
  private global_CmdReturnResult() { }
  public override string func_name ()
  {
    return "global_CmdReturnResult";
  }

  public static readonly RefalRTS.Function instance = new global_CmdReturnResult();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdIfDef: RefalRTS.Function
{
  private global_CmdIfDef() { }
  public override string func_name ()
  {
    return "global_CmdIfDef";
  }

  public static readonly RefalRTS.Function instance = new global_CmdIfDef();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdElse: RefalRTS.Function
{
  private global_CmdElse() { }
  public override string func_name ()
  {
    return "global_CmdElse";
  }

  public static readonly RefalRTS.Function instance = new global_CmdElse();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdEndIf: RefalRTS.Function
{
  private global_CmdEndIf() { }
  public override string func_name ()
  {
    return "global_CmdEndIf";
  }

  public static readonly RefalRTS.Function instance = new global_CmdEndIf();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdInitRAA: RefalRTS.Function
{
  private global_CmdInitRAA() { }
  public override string func_name ()
  {
    return "global_CmdInitRAA";
  }

  public static readonly RefalRTS.Function instance = new global_CmdInitRAA();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdFinRAA: RefalRTS.Function
{
  private global_CmdFinRAA() { }
  public override string func_name ()
  {
    return "global_CmdFinRAA";
  }

  public static readonly RefalRTS.Function instance = new global_CmdFinRAA();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class lambda_local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars_0: RefalRTS.Function
{
  private lambda_local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars_0() { }
  public override string func_name ()
  {
    return "GeneralizeResult_CopyVars_0";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars_0();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 & global_CmdInsertEVar s.Usings 'e e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdInsertEVar.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdCheckEVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tOtherCommand_1 = UInt64.MaxValue;
      // t.OtherCommand
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tOtherCommand_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars() { }
  public override string func_name ()
  {
    return "GeneralizeResult_CopyVars";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eCommonVars_b_1 = UInt64.MaxValue;
      UInt64 eCommonVars_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eCopiedVars_b_1 = UInt64.MaxValue;
      UInt64 eCopiedVars_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_2 = UInt64.MaxValue;
      UInt64 eResult_e_2 = UInt64.MaxValue;
      // (~1 e.CommonVars )~1 (~2 e.Pattern )~2 (~3 e.CopiedVars )~3 (~4 e.Result )~4
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eCommonVars_b_1 = bb_1_0;
      RefalRTS.use( ref eCommonVars_b_1 );
      eCommonVars_e_1 = be_1_0;
      RefalRTS.use( ref eCommonVars_e_1 );
      ePattern_b_1 = bb_2_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_2_0;
      RefalRTS.use( ref ePattern_e_1 );
      eCopiedVars_b_1 = bb_3_0;
      RefalRTS.use( ref eCopiedVars_b_1 );
      eCopiedVars_e_1 = be_3_0;
      RefalRTS.use( ref eCopiedVars_e_1 );
      eResult_b_1 = bb_4_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_4_0;
      RefalRTS.use( ref eResult_e_1 );
      RefalRTS.check_evar( ref eResult_b_2, ref eResult_e_2 );
      RefalRTS.check_evar( ref eCopiedVars_b_1, ref eCopiedVars_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eCommonVars_b_1, ref eCommonVars_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eResult_b_2, ref eResult_e_2, eResult_b_1, eResult_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeDeclaration.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, lambda_local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_GeneralizeResult_CopyVars_0.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, global_CmdEmptyResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeCopyVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n16, global_CmdReturnResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n15, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eResult_b_2, eResult_e_2 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n11 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n8, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eCommonVars_b_1, eCommonVars_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdDeclareEVar: RefalRTS.Function
{
  private global_CmdDeclareEVar() { }
  public override string func_name ()
  {
    return "global_CmdDeclareEVar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdDeclareEVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdDeclareVar: RefalRTS.Function
{
  private global_CmdDeclareVar() { }
  public override string func_name ()
  {
    return "global_CmdDeclareVar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdDeclareVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeDeclaration: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeDeclaration() { }
  public override string func_name ()
  {
    return "MakeDeclaration";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeDeclaration();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Usings 'e e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdDeclareEVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Usings s.Mode e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdDeclareVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdCopyEVar: RefalRTS.Function
{
  private global_CmdCopyEVar() { }
  public override string func_name ()
  {
    return "global_CmdCopyEVar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdCopyEVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdCopyVar: RefalRTS.Function
{
  private global_CmdCopyVar() { }
  public override string func_name ()
  {
    return "global_CmdCopyVar";
  }

  public static readonly RefalRTS.Function instance = new global_CmdCopyVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeCopyVar: RefalRTS.Function
{
  private local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeCopyVar() { }
  public override string func_name ()
  {
    return "MakeCopyVar";
  }

  public static readonly RefalRTS.Function instance = new local_65_108_103_111_114_105_116_104_109_46_115_114_101_102_E_MakeCopyVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Usings 'e e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdCopyEVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Usings s.Mode e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdCopyVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}


//End of file
