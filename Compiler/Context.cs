// Automatically generated file. Don't edit!
using System;


public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context() { }
  public override string func_name ()
  {
    return "Context";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent() { }
  public override string func_name ()
  {
    return "FreeVarsSent";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc() { }
  public override string func_name ()
  {
    return "FreeVarsFunc";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Cntx_Create: RefalRTS.Function
{
  private global_Cntx_Create() { }
  public override string func_name ()
  {
    return "global_Cntx_Create";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_Create();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
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
      if( ! RefalRTS.alloc_open_adt( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_adt( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
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

public class global_Cntx_Destroy: RefalRTS.Function
{
  private global_Cntx_Destroy() { }
  public override string func_name ()
  {
    return "global_Cntx_Destroy";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_Destroy();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context ]~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
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

class local_67_111_110_116_101_120_116_46_115_114_101_102_E_CSuccess {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CSuccess");
}

class local_67_111_110_116_101_120_116_46_115_114_101_102_E_CInvalidMode {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CInvalidMode");
}

public class global_Cntx_AddVariable: RefalRTS.Function
{
  private global_Cntx_AddVariable() { }
  public override string func_name ()
  {
    return "global_Cntx_AddVariable";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_AddVariable();

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
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
      //(0 0 )(1 1 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eVariables_B_b_1 = bb_1_0;
        eVariables_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sMode_2, sMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.repeated_evar_left( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_1_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_1_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_adt( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable.instance ) )
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
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_adt( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_ident( ref n10, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CSuccess.instance ) )
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n0, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n7, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sMode_2 );
        res = RefalRTS.splice_elem( res, n7 );
        RefalRTS.push_stack( n6 );
        RefalRTS.push_stack( n2 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
        RefalRTS.link_brackets( n4, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
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
      UInt64 sNewMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sOldMode_1 = UInt64.MaxValue;
      UInt64 sOldMode_2 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
      //(0 0 )(1 1 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNewMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eVariables_B_b_1 = bb_1_0;
        eVariables_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_evar_right( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_1_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_1_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        if( ! RefalRTS.svar_left( ref sOldMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sOldMode_2, sOldMode_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_adt( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_adt( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_ident( ref n5, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CInvalidMode.instance ) )
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sNewMode_1 );
        res = RefalRTS.splice_stvar( res, sOldMode_2 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n0, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n2, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sOldMode_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables ]~1 s.Mode e.Index
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eVariables_b_1 = bb_1_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_1_0;
      RefalRTS.use( ref eVariables_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_adt( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_adt( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n5, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CSuccess.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n0, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
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

public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable() { }
  public override string func_name ()
  {
    return "ShiftVariable";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable();

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
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eFree_b_1 = UInt64.MaxValue;
      UInt64 eFree_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent e.Free )~2 e.Variables_E
      //(0 1 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eVariables_B_b_1 = bb_0_0;
        eVariables_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eFree_b_1 = bb_2_0;
        RefalRTS.use( ref eFree_b_1 );
        eFree_e_1 = be_2_0;
        RefalRTS.use( ref eFree_e_1 );
        eVariables_E_b_1 = bb_0_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_0_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eFree_b_1, ref eFree_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable_Aux.instance ) )
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
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n9, local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n12 );
        RefalRTS.push_stack( n8 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n10, n11 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sMode_2 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_elem( res, n8 );
        RefalRTS.link_brackets( n0, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        RefalRTS.push_stack( n6 );
        RefalRTS.push_stack( n2 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_evar( res, eFree_b_1, eFree_e_1 );
        RefalRTS.link_brackets( n4, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_elem( res, n0 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVariables_b_1 = bb_0_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_0_0;
      RefalRTS.use( ref eVariables_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable_Aux: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable_Aux() { }
  public override string func_name ()
  {
    return "ShiftVariable_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable_Aux();

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
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
      //(0 1 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eVariables_B_b_1 = bb_0_0;
        eVariables_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sMode_2, sMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.repeated_evar_left( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_0_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_0_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n0, n1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
        res = RefalRTS.splice_elem( res, n0 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVariables_b_1 = bb_0_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_0_0;
      RefalRTS.use( ref eVariables_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );

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
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

class local_67_111_110_116_101_120_116_46_115_114_101_102_E_CExistVariable {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CExistVariable");
}

class local_67_111_110_116_101_120_116_46_115_114_101_102_E_CNotFound {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CNotFound");
}

public class global_Cntx_AddNewVariable: RefalRTS.Function
{
  private global_Cntx_AddNewVariable() { }
  public override string func_name ()
  {
    return "global_Cntx_AddNewVariable";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_AddNewVariable();

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
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
      //(0 0 )(1 1 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eVariables_B_b_1 = bb_1_0;
        eVariables_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sMode_2, sMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.repeated_evar_left( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_1_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_1_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_adt( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable.instance ) )
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
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_adt( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_ident( ref n10, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CSuccess.instance ) )
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n0, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n7, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sMode_2 );
        res = RefalRTS.splice_elem( res, n7 );
        RefalRTS.push_stack( n6 );
        RefalRTS.push_stack( n2 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
        RefalRTS.link_brackets( n4, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
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
      UInt64 sNewMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sOldMode_1 = UInt64.MaxValue;
      UInt64 sOldMode_2 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
      //(0 0 )(1 1 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNewMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eVariables_B_b_1 = bb_1_0;
        eVariables_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_evar_right( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_1_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_1_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        if( ! RefalRTS.svar_left( ref sOldMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sOldMode_2, sOldMode_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_adt( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_adt( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_ident( ref n5, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CInvalidMode.instance ) )
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sNewMode_1 );
        res = RefalRTS.splice_stvar( res, sOldMode_2 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n0, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n2, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sOldMode_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables ]~1 s.Mode e.Index
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eVariables_b_1 = bb_1_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_1_0;
      RefalRTS.use( ref eVariables_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_adt( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_adt( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n5, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CSuccess.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n0, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
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

public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable() { }
  public override string func_name ()
  {
    return "SetAsBoundVariable";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable();

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
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eFree_b_1 = UInt64.MaxValue;
      UInt64 eFree_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 sMode_3 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent e.Free )~2 e.Variables_E
      //(0 1 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eVariables_B_b_1 = bb_0_0;
        eVariables_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        eFree_b_1 = bb_2_0;
        RefalRTS.use( ref eFree_b_1 );
        eFree_e_1 = be_2_0;
        RefalRTS.use( ref eFree_e_1 );
        eVariables_E_b_1 = bb_0_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_0_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eFree_b_1, ref eFree_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_stvar( ref sMode_3, sMode_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
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
        if( ! RefalRTS.alloc_function( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n5, local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable_RemoveFromFree.instance ) )
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
        if( ! RefalRTS.alloc_open_call( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n11, local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n14 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.push_stack( n14 );
        RefalRTS.push_stack( n10 );
        res = RefalRTS.splice_elem( res, n14 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n12, n13 );
        res = RefalRTS.splice_elem( res, n13 );
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_stvar( res, sMode_3 );
        res = RefalRTS.splice_elem( res, n12 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n2, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        RefalRTS.push_stack( n8 );
        RefalRTS.push_stack( n4 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eFree_b_1, eFree_e_1 );
        RefalRTS.link_brackets( n6, n7 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sMode_2 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
        RefalRTS.link_brackets( n0, n1 );
        res = RefalRTS.splice_elem( res, n1 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
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
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVariables_b_1 = bb_0_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_0_0;
      RefalRTS.use( ref eVariables_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable_RemoveFromFree: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable_RemoveFromFree() { }
  public override string func_name ()
  {
    return "SetAsBoundVariable_RemoveFromFree";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_SetAsBoundVariable_RemoveFromFree();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
      //(0 1 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eVariables_B_b_1 = bb_0_0;
        eVariables_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sMode_2, sMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.repeated_evar_left( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_0_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_0_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // (~1 s.Mode e.Index )~1 e.Variables
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eVariables_b_1 = bb_0_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_0_0;
      RefalRTS.use( ref eVariables_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Cntx_CheckVariable: RefalRTS.Function
{
  private global_Cntx_CheckVariable() { }
  public override string func_name ()
  {
    return "global_Cntx_CheckVariable";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_CheckVariable();

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
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sMode_3 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
      //(0 0 )(1 1 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eVariables_B_b_1 = bb_1_0;
        eVariables_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_stvar_left( ref sMode_2, sMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.repeated_evar_left( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_1_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_1_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sMode_3, sMode_2 ) )
          return RefalRTS.FnResult.NoMemory;
        if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_adt( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_ShiftVariable.instance ) )
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
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_adt( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_ident( ref n10, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CExistVariable.instance ) )
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = RefalRTS.splice_stvar( res, sMode_3 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.link_brackets( n0, n9 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n7, n8 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sMode_2 );
        res = RefalRTS.splice_elem( res, n7 );
        RefalRTS.push_stack( n6 );
        RefalRTS.push_stack( n2 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
        RefalRTS.link_brackets( n4, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sMode_1 );
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
      UInt64 sNewMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eVariables_B_b_1 = UInt64.MaxValue;
      UInt64 eVariables_B_e_1 = UInt64.MaxValue;
      UInt64 eVariables_E_b_1 = UInt64.MaxValue;
      UInt64 eVariables_E_e_1 = UInt64.MaxValue;
      UInt64 sOldMode_1 = UInt64.MaxValue;
      UInt64 sOldMode_2 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
      //(0 0 )(1 1 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNewMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Variables_B
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eVariables_B_b_1 = bb_1_0;
        eVariables_B_e_1 = boe_1_0;
        RefalRTS.move_right( ref eVariables_B_b_1, ref eVariables_B_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.repeated_evar_right( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        eVariables_E_b_1 = bb_1_1;
        RefalRTS.use( ref eVariables_E_b_1 );
        eVariables_E_e_1 = be_1_1;
        RefalRTS.use( ref eVariables_E_e_1 );
        if( ! RefalRTS.svar_left( ref sOldMode_1, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
          continue;
        RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
        RefalRTS.check_evar( ref eVariables_E_b_1, ref eVariables_E_e_1 );
        RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
        RefalRTS.check_evar( ref eVariables_B_b_1, ref eVariables_B_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_stvar( ref sOldMode_2, sOldMode_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_adt( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_adt( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_ident( ref n5, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CInvalidMode.instance ) )
          return RefalRTS.FnResult.NoMemory;
        res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = RefalRTS.splice_stvar( res, sNewMode_1 );
        res = RefalRTS.splice_stvar( res, sOldMode_2 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n0, n4 );
        res = RefalRTS.splice_elem( res, n4 );
        res = RefalRTS.splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
        RefalRTS.link_brackets( n2, n3 );
        res = RefalRTS.splice_elem( res, n3 );
        res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = RefalRTS.splice_stvar( res, sOldMode_1 );
        res = RefalRTS.splice_elem( res, n2 );
        res = RefalRTS.splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables ]~1 s.Mode e.Index
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eVariables_b_1 = bb_1_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_1_0;
      RefalRTS.use( ref eVariables_e_1 );
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_adt( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_adt( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_CNotFound.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Cntx_ResetAfterSentence: RefalRTS.Function
{
  private global_Cntx_ResetAfterSentence() { }
  public override string func_name ()
  {
    return "global_Cntx_ResetAfterSentence";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_ResetAfterSentence();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFreeSent_b_1 = UInt64.MaxValue;
      UInt64 eFreeSent_e_1 = UInt64.MaxValue;
      UInt64 eFreeFunc_b_1 = UInt64.MaxValue;
      UInt64 eFreeFunc_e_1 = UInt64.MaxValue;
      UInt64 eOuters_b_1 = UInt64.MaxValue;
      UInt64 eOuters_e_1 = UInt64.MaxValue;
      UInt64 eLocals_b_1 = UInt64.MaxValue;
      UInt64 eLocals_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Locals (~2 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent e.FreeSent )~2 (~3 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc e.FreeFunc )~3 e.Outers ]~1
      //(0 0 )(1 1 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Locals
      for(
        UInt64 boe_1_0 = bb_1_0;
        ! RefalRTS.is_empty( boe_1_0, be_1_0 );
        RefalRTS.next_term( ref boe_1_0, ref be_1_0 )
      ) {
        UInt64 bb_1_1 = bb_1_0;
        UInt64 be_1_1 = be_1_0;
        bb_1_1 = boe_1_0;
        eLocals_b_1 = bb_1_0;
        eLocals_e_1 = boe_1_0;
        RefalRTS.move_right( ref eLocals_b_1, ref eLocals_e_1 );
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        UInt64 bb_3_0 = 0;
        UInt64 be_3_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_1_1, ref be_1_1 ) )
          continue;
        if( ! RefalRTS.function_left( local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc.instance, ref bb_3_0, ref be_3_0 ) )
          continue;
        eFreeSent_b_1 = bb_2_0;
        RefalRTS.use( ref eFreeSent_b_1 );
        eFreeSent_e_1 = be_2_0;
        RefalRTS.use( ref eFreeSent_e_1 );
        eFreeFunc_b_1 = bb_3_0;
        RefalRTS.use( ref eFreeFunc_b_1 );
        eFreeFunc_e_1 = be_3_0;
        RefalRTS.use( ref eFreeFunc_e_1 );
        eOuters_b_1 = bb_1_1;
        RefalRTS.use( ref eOuters_b_1 );
        eOuters_e_1 = be_1_1;
        RefalRTS.use( ref eOuters_e_1 );
        RefalRTS.check_evar( ref eOuters_b_1, ref eOuters_e_1 );
        RefalRTS.check_evar( ref eFreeFunc_b_1, ref eFreeFunc_e_1 );
        RefalRTS.check_evar( ref eFreeSent_b_1, ref eFreeSent_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_adt( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n6, local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n7 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n8, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Unique.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_call( ref n9 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_adt( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n0, n11 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_evar( res, eOuters_b_1, eOuters_e_1 );
        RefalRTS.link_brackets( n5, n10 );
        res = RefalRTS.splice_elem( res, n10 );
        RefalRTS.push_stack( n9 );
        RefalRTS.push_stack( n7 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eFreeFunc_b_1, eFreeFunc_e_1 );
        res = RefalRTS.splice_evar( res, eFreeSent_b_1, eFreeSent_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_elem( res, n6 );
        res = RefalRTS.splice_elem( res, n5 );
        RefalRTS.link_brackets( n2, n4 );
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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_67_111_110_116_101_120_116_46_115_114_101_102_E_Unique: RefalRTS.Function
{
  private local_67_111_110_116_101_120_116_46_115_114_101_102_E_Unique() { }
  public override string func_name ()
  {
    return "Unique";
  }

  public static readonly RefalRTS.Function instance = new local_67_111_110_116_101_120_116_46_115_114_101_102_E_Unique();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eBegin_b_1 = UInt64.MaxValue;
      UInt64 eBegin_e_1 = UInt64.MaxValue;
      UInt64 tCopy_1 = UInt64.MaxValue;
      UInt64 eMiddle_b_1 = UInt64.MaxValue;
      UInt64 eMiddle_e_1 = UInt64.MaxValue;
      UInt64 eEnd_b_1 = UInt64.MaxValue;
      UInt64 eEnd_e_1 = UInt64.MaxValue;
      UInt64 tCopy_2 = UInt64.MaxValue;
      // e.Begin t.Copy e.Middle t.Copy e.End
      //(0 2 )
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Begin
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eBegin_b_1 = bb_0_0;
        eBegin_e_1 = boe_0_0;
        RefalRTS.move_right( ref eBegin_b_1, ref eBegin_e_1 );
        if( ! RefalRTS.tvar_left( ref tCopy_1, ref bb_0_1, ref be_0_1 ) )
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
          if( ! RefalRTS.repeated_stvar_left( ref tCopy_2, tCopy_1, ref bb_0_2, ref be_0_2 ) )
            continue;
          eEnd_b_1 = bb_0_2;
          RefalRTS.use( ref eEnd_b_1 );
          eEnd_e_1 = be_0_2;
          RefalRTS.use( ref eEnd_e_1 );
          RefalRTS.check_evar( ref eEnd_b_1, ref eEnd_e_1 );
          RefalRTS.check_evar( ref eMiddle_b_1, ref eMiddle_e_1 );
          RefalRTS.check_evar( ref eBegin_b_1, ref eBegin_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Unique.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n2 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, eEnd_b_1, eEnd_e_1 );
          res = RefalRTS.splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
          res = RefalRTS.splice_stvar( res, tCopy_1 );
          res = RefalRTS.splice_elem( res, n1 );
          res = RefalRTS.splice_elem( res, n0 );
          res = RefalRTS.splice_evar( res, eBegin_b_1, eBegin_e_1 );
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
      UInt64 eUniques_b_1 = UInt64.MaxValue;
      UInt64 eUniques_e_1 = UInt64.MaxValue;
      // e.Uniques
      //(0 0 )
      eUniques_b_1 = bb_0_0;
      RefalRTS.use( ref eUniques_b_1 );
      eUniques_e_1 = be_0_0;
      RefalRTS.use( ref eUniques_e_1 );
      RefalRTS.check_evar( ref eUniques_b_1, ref eUniques_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eUniques_b_1, eUniques_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Cntx_PushScope: RefalRTS.Function
{
  private global_Cntx_PushScope() { }
  public override string func_name ()
  {
    return "global_Cntx_PushScope";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_PushScope();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eVariables_b_1 = UInt64.MaxValue;
      UInt64 eVariables_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context e.Variables ]~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eVariables_b_1 = bb_1_0;
      RefalRTS.use( ref eVariables_b_1 );
      eVariables_e_1 = be_1_0;
      RefalRTS.use( ref eVariables_e_1 );
      RefalRTS.check_evar( ref eVariables_b_1, ref eVariables_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_adt( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_adt( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eVariables_b_1, eVariables_e_1 );
      RefalRTS.link_brackets( n5, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n2, n4 );
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

public class global_Cntx_PopScope: RefalRTS.Function
{
  private global_Cntx_PopScope() { }
  public override string func_name ()
  {
    return "global_Cntx_PopScope";
  }

  public static readonly RefalRTS.Function instance = new global_Cntx_PopScope();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eClosureContext_b_1 = UInt64.MaxValue;
      UInt64 eClosureContext_e_1 = UInt64.MaxValue;
      UInt64 eOuters_b_1 = UInt64.MaxValue;
      UInt64 eOuters_e_1 = UInt64.MaxValue;
      // [~1 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context (~2 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent )~2 (~3 & local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc e.ClosureContext )~3 e.Outers ]~1
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.adt_left( ref bb_1_0, ref be_1_0, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsSent.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( local_67_111_110_116_101_120_116_46_115_114_101_102_E_FreeVarsFunc.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eClosureContext_b_1 = bb_3_0;
      RefalRTS.use( ref eClosureContext_b_1 );
      eClosureContext_e_1 = be_3_0;
      RefalRTS.use( ref eClosureContext_e_1 );
      eOuters_b_1 = bb_1_0;
      RefalRTS.use( ref eOuters_b_1 );
      eOuters_e_1 = be_1_0;
      RefalRTS.use( ref eOuters_e_1 );
      RefalRTS.check_evar( ref eClosureContext_b_1, ref eClosureContext_e_1 );
      RefalRTS.check_evar( ref eOuters_b_1, ref eOuters_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_adt( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_67_111_110_116_101_120_116_46_115_114_101_102_E_Context.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_adt( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eClosureContext_b_1, eClosureContext_e_1 );
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eOuters_b_1, eOuters_e_1 );
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
