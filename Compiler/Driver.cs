// Automatically generated file. Don't edit!
using System;


public class global_CompileFile: RefalRTS.Function
{
  private global_CompileFile() { }
  public override string func_name ()
  {
    return "global_CompileFile";
  }

  public static readonly RefalRTS.Function instance = new global_CompileFile();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSrcName_b_1 = UInt64.MaxValue;
      UInt64 eSrcName_e_1 = UInt64.MaxValue;
      UInt64 eOutputName_b_1 = UInt64.MaxValue;
      UInt64 eOutputName_e_1 = UInt64.MaxValue;
      UInt64 eSrcName_b_2 = UInt64.MaxValue;
      UInt64 eSrcName_e_2 = UInt64.MaxValue;
      // (~1 e.SrcName )~1 e.OutputName
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSrcName_b_1 = bb_1_0;
      RefalRTS.use( ref eSrcName_b_1 );
      eSrcName_e_1 = be_1_0;
      RefalRTS.use( ref eSrcName_e_1 );
      eOutputName_b_1 = bb_0_0;
      RefalRTS.use( ref eOutputName_b_1 );
      eOutputName_e_1 = be_0_0;
      RefalRTS.use( ref eOutputName_e_1 );
      RefalRTS.check_evar( ref eSrcName_b_2, ref eSrcName_e_2 );
      RefalRTS.check_evar( ref eSrcName_b_1, ref eSrcName_e_1 );
      RefalRTS.check_evar( ref eOutputName_b_1, ref eOutputName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eSrcName_b_2, ref eSrcName_e_2, eSrcName_b_1, eSrcName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseAndGenerate.instance ) )
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
      if( ! RefalRTS.alloc_open_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, global_LexFolding.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n6 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eSrcName_b_2, eSrcName_e_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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

class local_68_114_105_118_101_114_46_115_114_101_102_E_COpen {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("COpen");
}

class local_68_114_105_118_101_114_46_115_114_101_102_E_CClose {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CClose");
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareBracket: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareBracket() { }
  public override string func_name ()
  {
    return "PrepareBracket";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 & global_TkOpenBracket s.LnNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_TkOpenBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
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
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 & global_TkCloseBracket s.LnNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseBracket.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_TkCloseBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
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
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 & global_TkOpenADT s.LnNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_TkOpenADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
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
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 & global_TkCloseADT s.LnNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseADT.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_TkCloseADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
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
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 & global_TkOpenCall s.LnNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenCall.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_TkOpenCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
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
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 & global_TkCloseCall s.LnNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseCall.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_TkCloseCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
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
      UInt64 tOtherToken_1 = UInt64.MaxValue;
      // t.OtherToken
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tOtherToken_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tOtherToken_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseAndGenerate: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseAndGenerate() { }
  public override string func_name ()
  {
    return "ParseAndGenerate";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseAndGenerate();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eOutputName_b_1 = UInt64.MaxValue;
      UInt64 eOutputName_e_1 = UInt64.MaxValue;
      UInt64 eSrcName_b_1 = UInt64.MaxValue;
      UInt64 eSrcName_e_1 = UInt64.MaxValue;
      UInt64 eLexFolding_b_1 = UInt64.MaxValue;
      UInt64 eLexFolding_e_1 = UInt64.MaxValue;
      // (~1 e.OutputName )~1 (~2 e.SrcName )~2 e.LexFolding
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eOutputName_b_1 = bb_1_0;
      RefalRTS.use( ref eOutputName_b_1 );
      eOutputName_e_1 = be_1_0;
      RefalRTS.use( ref eOutputName_e_1 );
      eSrcName_b_1 = bb_2_0;
      RefalRTS.use( ref eSrcName_b_1 );
      eSrcName_e_1 = be_2_0;
      RefalRTS.use( ref eSrcName_e_1 );
      eLexFolding_b_1 = bb_0_0;
      RefalRTS.use( ref eLexFolding_b_1 );
      eLexFolding_e_1 = be_0_0;
      RefalRTS.use( ref eLexFolding_e_1 );
      RefalRTS.check_evar( ref eLexFolding_b_1, ref eLexFolding_e_1 );
      RefalRTS.check_evar( ref eSrcName_b_1, ref eSrcName_e_1 );
      RefalRTS.check_evar( ref eOutputName_b_1, ref eOutputName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_WriteGenerated.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_GenCommonHeaders.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, global_EL_Create.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_ST_Create.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
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
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eLexFolding_b_1, eLexFolding_e_1 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_WriteGenerated: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_WriteGenerated() { }
  public override string func_name ()
  {
    return "WriteGenerated";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_WriteGenerated();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eOutputName_b_1 = UInt64.MaxValue;
      UInt64 eOutputName_e_1 = UInt64.MaxValue;
      UInt64 eLines_b_1 = UInt64.MaxValue;
      UInt64 eLines_e_1 = UInt64.MaxValue;
      UInt64 eOutputName_b_2 = UInt64.MaxValue;
      UInt64 eOutputName_e_2 = UInt64.MaxValue;
      // (~1 e.OutputName )~1 e.Lines & global_EL_NoErrors
      //(0 0 )(1 0 )
      if( ! RefalRTS.function_right( global_EL_NoErrors.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eOutputName_b_1 = bb_1_0;
      RefalRTS.use( ref eOutputName_b_1 );
      eOutputName_e_1 = be_1_0;
      RefalRTS.use( ref eOutputName_e_1 );
      eLines_b_1 = bb_0_0;
      RefalRTS.use( ref eLines_b_1 );
      eLines_e_1 = be_0_0;
      RefalRTS.use( ref eLines_e_1 );
      RefalRTS.check_evar( ref eOutputName_b_2, ref eOutputName_e_2 );
      RefalRTS.check_evar( ref eLines_b_1, ref eLines_e_1 );
      RefalRTS.check_evar( ref eOutputName_b_1, ref eOutputName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eOutputName_b_2, ref eOutputName_e_2, eOutputName_b_1, eOutputName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_SaveFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_Success.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eOutputName_b_2, eOutputName_e_2 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eLines_b_1, eLines_e_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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
      UInt64 eOutputName_b_1 = UInt64.MaxValue;
      UInt64 eOutputName_e_1 = UInt64.MaxValue;
      UInt64 eLines_b_1 = UInt64.MaxValue;
      UInt64 eLines_e_1 = UInt64.MaxValue;
      // (~1 e.OutputName )~1 e.Lines & global_EL_HasErrors
      //(0 0 )(1 0 )
      if( ! RefalRTS.function_right( global_EL_HasErrors.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eOutputName_b_1 = bb_1_0;
      RefalRTS.use( ref eOutputName_b_1 );
      eOutputName_e_1 = be_1_0;
      RefalRTS.use( ref eOutputName_e_1 );
      eLines_b_1 = bb_0_0;
      RefalRTS.use( ref eLines_b_1 );
      eLines_e_1 = be_0_0;
      RefalRTS.use( ref eLines_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_Fails.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements() { }
  public override string func_name ()
  {
    return "ParseElements";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable (~1 & global_TkEOF s.LnNum )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkEOF.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_GenCommonTailer.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_EL_IsEmpty.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_EL_Print.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sDirective_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable (~1 & global_TkDirective s.LnNum s.Directive )~1 e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkDirective.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sDirective_1, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElement_SwDirective.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, sDirective_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable (~1 & global_TkName s.LnNum e.Name )~1 e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_ST_AddDefined.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable (~1 & global_TkSemicolon s.LnNum )~1 e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkSemicolon.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tUnexpected_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable t.Unexpected e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tUnexpected_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_EL_AddUnexpected.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n22 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n2 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tUnexpected_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionsFromDirective: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionsFromDirective() { }
  public override string func_name ()
  {
    return "GenFunctionsFromDirective";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionsFromDirective();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // & global_EEnum
      //(0 0 )
      if( ! RefalRTS.function_left( global_EEnum.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_GenEEnum.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ST_AddDefined.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Entry.instance ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_Enum
      //(0 0 )
      if( ! RefalRTS.function_left( global_Enum.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_GenEnum.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ST_AddDefined.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_Extern
      //(0 0 )
      if( ! RefalRTS.function_left( global_Extern.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_GenExtern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ST_AddDeclared.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Entry.instance ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_Forward
      //(0 0 )
      if( ! RefalRTS.function_left( global_Forward.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_GenForward.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ST_AddDeclared.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ESwap
      //(0 0 )
      if( ! RefalRTS.function_left( global_ESwap.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_GenESwap.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ST_AddDefined.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Entry.instance ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_Swap
      //(0 0 )
      if( ! RefalRTS.function_left( global_Swap.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_GenSwap.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ST_AddDefined.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_Ident
      //(0 0 )
      if( ! RefalRTS.function_left( global_Ident.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_GenIdent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ST_AddIdent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElement_SwDirective: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElement_SwDirective() { }
  public override string func_name ()
  {
    return "ParseElement_SwDirective";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElement_SwDirective();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable & global_Entry (~1 & global_TkName s.LnNum e.Name )~1 e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Entry.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Entry.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_ST_AddDefined.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, global_GN_Entry.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tUnexpected_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tUnexpected_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable & global_Entry t.Unexpected e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Entry.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tUnexpected_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref tUnexpected_2, tUnexpected_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_EL_AddUnexpected.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tUnexpected_2 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tUnexpected_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 sDirective_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.Directive e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sDirective_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionsFromDirective.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sDirective_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList() { }
  public override string func_name ()
  {
    return "ParseNameList";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 sGenFunc_1 = UInt64.MaxValue;
      UInt64 sTableChangeFunc_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sGenFunc_2 = UInt64.MaxValue;
      UInt64 tSymTable_2 = UInt64.MaxValue;
      UInt64 sScopeClass_2 = UInt64.MaxValue;
      UInt64 sScopeClass_3 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      UInt64 sTableChangeFunc_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.GenFunc s.TableChangeFunc s.ScopeClass (~1 & global_TkName s.LnNum e.Name )~1 e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sGenFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sTableChangeFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sGenFunc_2, sGenFunc_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref tSymTable_2, tSymTable_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sScopeClass_2, sScopeClass_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sScopeClass_3, sScopeClass_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sTableChangeFunc_2, sTableChangeFunc_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_ST_MakePrefixed.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList_Tail.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, sScopeClass_3 );
      res = RefalRTS.splice_stvar( res, sTableChangeFunc_2 );
      res = RefalRTS.splice_stvar( res, sGenFunc_2 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, sScopeClass_2 );
      res = RefalRTS.splice_stvar( res, tSymTable_2 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_stvar( res, sTableChangeFunc_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_stvar( res, sGenFunc_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tUnexpected_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sGenFunc_1 = UInt64.MaxValue;
      UInt64 sTableChangeFunc_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 tUnexpected_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.GenFunc s.TableChangeFunc s.ScopeClass t.Unexpected e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sGenFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sTableChangeFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tUnexpected_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref tUnexpected_2, tUnexpected_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_EL_AddUnexpected.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tUnexpected_2 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tUnexpected_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList_Tail: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList_Tail() { }
  public override string func_name ()
  {
    return "ParseNameList_Tail";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList_Tail();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 sGenFunc_1 = UInt64.MaxValue;
      UInt64 sTableChangeFunc_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.GenFunc s.TableChangeFunc s.ScopeClass (~1 & global_TkComma s.LnNum )~1 e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sGenFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sTableChangeFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkComma.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseNameList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
      res = RefalRTS.splice_stvar( res, sTableChangeFunc_1 );
      res = RefalRTS.splice_stvar( res, sGenFunc_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sGenFunc_1 = UInt64.MaxValue;
      UInt64 sTableChangeFunc_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.GenFunc s.TableChangeFunc s.ScopeClass (~1 & global_TkSemicolon s.LnNum )~1 e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sGenFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sTableChangeFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkSemicolon.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tUnexpected_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sGenFunc_1 = UInt64.MaxValue;
      UInt64 sTableChangeFunc_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 tUnexpected_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.GenFunc s.TableChangeFunc s.ScopeClass t.Unexpected e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sGenFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sTableChangeFunc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tUnexpected_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref tUnexpected_2, tUnexpected_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_EL_AddUnexpected.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n23 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tUnexpected_2 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n22 );
      RefalRTS.push_stack( n2 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tUnexpected_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction() { }
  public override string func_name ()
  {
    return "ParseFunction";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sScopeClass_2 = UInt64.MaxValue;
      UInt64 tSymTable_2 = UInt64.MaxValue;
      // s.ScopeClass (~1 e.Name )~1 t.ErrorList t.SymTable (~2 & global_TkOpenBlock s.LnNum )~2 e.Tail
      //(0 0 )(1 0 )(2 0 )
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenBlock.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sScopeClass_2, sScopeClass_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref tSymTable_2, tSymTable_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_ST_MakePrefixed.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n10, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_Cntx_Create.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
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
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, tSymTable_2 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n2, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sScopeClass_2 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tUnexpected_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 tUnexpected_2 = UInt64.MaxValue;
      // s.ScopeClass (~1 e.Name )~1 t.ErrorList t.SymTable t.Unexpected e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tUnexpected_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref tUnexpected_2, tUnexpected_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_EL_AddUnexpected.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tUnexpected_2 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tUnexpected_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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

class local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaScope {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CLambdaScope");
}

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_0: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_0() { }
  public override string func_name ()
  {
    return "ParseFunction_Aux_0";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_0();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // (~1 e.Name )~1 & global_GN_Entry
      //(0 0 )(1 0 )
      if( ! RefalRTS.function_right( global_GN_Entry.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_GenExtern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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
      // (~1 e.Name )~1 & global_GN_Local
      //(0 0 )(1 0 )
      if( ! RefalRTS.function_right( global_GN_Local.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_GenForward.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_1: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_1() { }
  public override string func_name ()
  {
    return "ParseFunction_Aux_1";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_1();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      // (~2 e.Name )~2 (~1 s.Number e.Sentences )~1
      //(0 0 )(2 0 )(1 0 )
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eName_b_1 = bb_2_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_2_0;
      RefalRTS.use( ref eName_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eSentences_b_1 = bb_1_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_1_0;
      RefalRTS.use( ref eSentences_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n2, local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaScope.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_2: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_2() { }
  public override string func_name ()
  {
    return "ParseFunction_Aux_2";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_2();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      // s.ScopeClass (~1 e.Name )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
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
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eFunctionBodies1_b_1 = UInt64.MaxValue;
      UInt64 eFunctionBodies1_e_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // s.ScopeClass (~1 e.Name )~1 e.FunctionBodies1
      //(0 0 )(1 0 )
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      eFunctionBodies1_b_1 = bb_0_0;
      RefalRTS.use( ref eFunctionBodies1_b_1 );
      eFunctionBodies1_e_1 = be_0_0;
      RefalRTS.use( ref eFunctionBodies1_e_1 );
      RefalRTS.check_evar( ref eFunctionBodies1_b_1, ref eFunctionBodies1_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_0.instance ) )
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
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_1.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eFunctionBodies1_b_1, eFunctionBodies1_e_1 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n11 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux() { }
  public override string func_name ()
  {
    return "ParseFunction_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 tMainBody_1 = UInt64.MaxValue;
      UInt64 eFunctionBodies_b_1 = UInt64.MaxValue;
      UInt64 eFunctionBodies_e_1 = UInt64.MaxValue;
      UInt64 sNextNumber_1 = UInt64.MaxValue;
      UInt64 sScopeClass_2 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // s.ScopeClass (~1 e.Name )~1 (~2 s.NextNumber e.FunctionBodies t.MainBody )~2 t.ErrorList t.SymTable (~3 t.Context )~3 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_1_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_1_0;
      RefalRTS.use( ref eName_e_1 );
      if( ! RefalRTS.svar_left( ref sNextNumber_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      if( ! RefalRTS.tvar_right( ref tMainBody_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eFunctionBodies_b_1 = bb_2_0;
      RefalRTS.use( ref eFunctionBodies_b_1 );
      eFunctionBodies_e_1 = be_2_0;
      RefalRTS.use( ref eFunctionBodies_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eFunctionBodies_b_1, ref eFunctionBodies_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sScopeClass_2, sScopeClass_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseFunction_Aux_2.instance ) )
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
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_Cntx_Destroy.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n16, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseElements.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n15 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, tMainBody_1 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_stvar( res, sScopeClass_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eFunctionBodies_b_1, eFunctionBodies_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody() { }
  public override string func_name ()
  {
    return "GenFunctionBody";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // # local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaScope e.Name (~1 s.Number e.Sentences )~1
      //(0 0 )(1 0 )
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaScope.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eSentences_b_1 = bb_1_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_1_0;
      RefalRTS.use( ref eSentences_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_68_114_105_118_101_114_46_115_114_101_102_E_CreateLambdaName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      RefalRTS.link_brackets( n5, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n6 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // s.ScopeClass e.Name (~1 s.Number e.Sentences )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eSentences_b_1 = bb_1_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_1_0;
      RefalRTS.use( ref eSentences_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody_Aux.instance ) )
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
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_CreateLambdaName: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_CreateLambdaName() { }
  public override string func_name ()
  {
    return "CreateLambdaName";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_CreateLambdaName();

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
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // e.Name s.Number
      //(0 0 )
      if( ! RefalRTS.svar_right( ref sNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n8 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody_Aux: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody_Aux() { }
  public override string func_name ()
  {
    return "GenFunctionBody_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_GenFunctionBody_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eMainName_b_1 = UInt64.MaxValue;
      UInt64 eMainName_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      // s.ScopeClass (~1 e.MainName )~1 (~2 e.Name )~2 e.Sentences (~3 (~4 (~5 & global_TkVariable 'e e.Index )~5 )~4 (~6 e.Result )~6 )~3
      //(0 0 )(3 0 )(4 0 )(5 0 )(6 0 )(1 0 )(2 0 )
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_5_0, ref be_5_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eIndex_b_1 = bb_5_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_5_0;
      RefalRTS.use( ref eIndex_e_1 );
      eResult_b_1 = bb_6_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_6_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eMainName_b_1 = bb_1_0;
      RefalRTS.use( ref eMainName_b_1 );
      eMainName_e_1 = be_1_0;
      RefalRTS.use( ref eMainName_e_1 );
      eName_b_1 = bb_2_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_2_0;
      RefalRTS.use( ref eName_e_1 );
      eSentences_b_1 = bb_0_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_0_0;
      RefalRTS.use( ref eSentences_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eMainName_b_1, ref eMainName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_GenFnStart.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareAndGenSentence.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, global_TkVariable.instance ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n20, global_GenFnEnd_Success.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n19 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n8, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.link_brackets( n15, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.link_brackets( n9, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n10, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      RefalRTS.link_brackets( n5, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMainName_b_1, eMainName_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
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
      UInt64 sScopeClass_1 = UInt64.MaxValue;
      UInt64 eMainName_b_1 = UInt64.MaxValue;
      UInt64 eMainName_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      // s.ScopeClass (~1 e.MainName )~1 (~2 e.Name )~2 e.Sentences
      //(0 0 )(1 0 )(2 0 )
      if( ! RefalRTS.svar_left( ref sScopeClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eMainName_b_1 = bb_1_0;
      RefalRTS.use( ref eMainName_b_1 );
      eMainName_e_1 = be_1_0;
      RefalRTS.use( ref eMainName_e_1 );
      eName_b_1 = bb_2_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_2_0;
      RefalRTS.use( ref eName_e_1 );
      eSentences_b_1 = bb_0_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_0_0;
      RefalRTS.use( ref eSentences_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eMainName_b_1, ref eMainName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_GenFnStart.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareAndGenSentence.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, global_GenFnEnd.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      RefalRTS.link_brackets( n5, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMainName_b_1, eMainName_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sScopeClass_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareAndGenSentence: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareAndGenSentence() { }
  public override string func_name ()
  {
    return "PrepareAndGenSentence";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_PrepareAndGenSentence();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eMainName_b_1 = UInt64.MaxValue;
      UInt64 eMainName_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      // e.MainName (~1 (~2 e.Pattern )~2 (~3 e.Result )~3 )~1
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      eMainName_b_1 = bb_0_0;
      RefalRTS.use( ref eMainName_b_1 );
      eMainName_e_1 = be_0_0;
      RefalRTS.use( ref eMainName_e_1 );
      ePattern_b_1 = bb_2_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_2_0;
      RefalRTS.use( ref ePattern_e_1 );
      eResult_b_1 = bb_3_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_3_0;
      RefalRTS.use( ref eResult_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref eMainName_b_1, ref eMainName_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_GenSentence.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_MakeAlgorithm.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, local_68_114_105_118_101_114_46_115_114_101_102_E_InsertMainName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n6, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eMainName_b_1, eMainName_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
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

class local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaName {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CLambdaName");
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_InsertMainName: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_InsertMainName() { }
  public override string func_name ()
  {
    return "InsertMainName";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_InsertMainName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eMainName_b_1 = UInt64.MaxValue;
      UInt64 eMainName_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      // e.MainName (~1 & global_TkName # local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaName s.Number )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaName.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eMainName_b_1 = bb_0_0;
      RefalRTS.use( ref eMainName_b_1 );
      eMainName_e_1 = be_0_0;
      RefalRTS.use( ref eMainName_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eMainName_b_1, ref eMainName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_68_114_105_118_101_114_46_115_114_101_102_E_CreateLambdaName.instance ) )
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
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_evar( res, eMainName_b_1, eMainName_e_1 );
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
      UInt64 tOtherToken_1 = UInt64.MaxValue;
      UInt64 eMainName_b_1 = UInt64.MaxValue;
      UInt64 eMainName_e_1 = UInt64.MaxValue;
      // e.MainName t.OtherToken
      //(0 0 )
      if( ! RefalRTS.tvar_right( ref tOtherToken_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eMainName_b_1 = bb_0_0;
      RefalRTS.use( ref eMainName_b_1 );
      eMainName_e_1 = be_0_0;
      RefalRTS.use( ref eMainName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tOtherToken_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock() { }
  public override string func_name ()
  {
    return "ParseBlock";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eTokens_b_1 = UInt64.MaxValue;
      UInt64 eTokens_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context e.Tokens
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTokens_b_1 = bb_0_0;
      RefalRTS.use( ref eTokens_b_1 );
      eTokens_e_1 = be_0_0;
      RefalRTS.use( ref eTokens_e_1 );
      RefalRTS.check_evar( ref eTokens_b_1, ref eTokens_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_DoParseBlock.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_Cntx_PushScope.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eTokens_b_1, eTokens_e_1 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_DoParseBlock: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_DoParseBlock() { }
  public override string func_name ()
  {
    return "DoParseBlock";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_DoParseBlock();

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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNumber_1 = UInt64.MaxValue;
      UInt64 sNumber_2 = UInt64.MaxValue;
      // (~1 s.Number e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 & global_TkCloseBlock s.LnNumber )~3 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseBlock.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sNumber_2, sNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock_SetContext.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_Inc.instance ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, global_Cntx_PopScope.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n9, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_stvar( res, sNumber_2 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n2, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sNumber_2 = UInt64.MaxValue;
      UInt64 sLnNum_2 = UInt64.MaxValue;
      // (~1 s.Number e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 & global_TkEOF s.LnNum )~3 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkEOF.instance, ref bb_3_0, ref be_3_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sNumber_2, sNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sLnNum_2, sLnNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
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
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n40, global_Cntx_PopScope.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n44, global_TkEOF.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n43, n45 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_stvar( res, sLnNum_2 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_elem( res, n43 );
      RefalRTS.link_brackets( n38, n42 );
      res = RefalRTS.splice_elem( res, n42 );
      RefalRTS.push_stack( n41 );
      RefalRTS.push_stack( n39 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n37 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n0, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_stvar( res, sNumber_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eTokens_b_1 = UInt64.MaxValue;
      UInt64 eTokens_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 e.Tokens
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eTokens_b_1 = bb_0_0;
      RefalRTS.use( ref eTokens_b_1 );
      eTokens_e_1 = be_0_0;
      RefalRTS.use( ref eTokens_e_1 );
      RefalRTS.check_evar( ref eTokens_b_1, ref eTokens_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_DoParseBlock.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseSentence.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
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
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eTokens_b_1, eTokens_e_1 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock_SetContext: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock_SetContext() { }
  public override string func_name ()
  {
    return "ParseBlock_SetContext";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock_SetContext();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTokens_b_1 = UInt64.MaxValue;
      UInt64 eTokens_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eFreeContext_b_1 = UInt64.MaxValue;
      UInt64 eFreeContext_e_1 = UInt64.MaxValue;
      UInt64 eFreeContext_b_2 = UInt64.MaxValue;
      UInt64 eFreeContext_e_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 (~2 s.Number e.Sentences )~2 t.ErrorList t.SymTable (~3 t.Context e.FreeContext )~3 e.Tokens
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eTokens_b_1 = bb_0_0;
      RefalRTS.use( ref eTokens_b_1 );
      eTokens_e_1 = be_0_0;
      RefalRTS.use( ref eTokens_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eFreeContext_b_1 = bb_3_0;
      RefalRTS.use( ref eFreeContext_b_1 );
      eFreeContext_e_1 = be_3_0;
      RefalRTS.use( ref eFreeContext_e_1 );
      RefalRTS.check_evar( ref eTokens_b_1, ref eTokens_e_1 );
      RefalRTS.check_evar( ref eFreeContext_b_2, ref eFreeContext_e_2 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFreeContext_b_1, ref eFreeContext_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eFreeContext_b_2, ref eFreeContext_e_2, eFreeContext_b_1, eFreeContext_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, local_68_114_105_118_101_114_46_115_114_101_102_E_AddContextToSentence.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTokens_b_1, eTokens_e_1 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eFreeContext_b_2, eFreeContext_e_2 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n0, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n1, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      RefalRTS.link_brackets( n4, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eFreeContext_b_1, eFreeContext_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_DelFirst: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_DelFirst() { }
  public override string func_name ()
  {
    return "DelFirst";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_DelFirst();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eExpr_b_1 = UInt64.MaxValue;
      UInt64 eExpr_e_1 = UInt64.MaxValue;
      UInt64 sFirst_1 = UInt64.MaxValue;
      // s.First e.Expr
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sFirst_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eExpr_b_1 = bb_0_0;
      RefalRTS.use( ref eExpr_b_1 );
      eExpr_e_1 = be_0_0;
      RefalRTS.use( ref eExpr_e_1 );
      RefalRTS.check_evar( ref eExpr_b_1, ref eExpr_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eExpr_b_1, eExpr_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_AddContextToSentence: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_AddContextToSentence() { }
  public override string func_name ()
  {
    return "AddContextToSentence";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_AddContextToSentence();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eContext_b_1 = UInt64.MaxValue;
      UInt64 eContext_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 sLastBracket_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      // e.Context (~1 (~2 s.LastBracket e.Pattern )~2 (~3 e.Result )~3 )~1
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      eContext_b_1 = bb_0_0;
      RefalRTS.use( ref eContext_b_1 );
      eContext_e_1 = be_0_0;
      RefalRTS.use( ref eContext_e_1 );
      eResult_b_1 = bb_3_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_3_0;
      RefalRTS.use( ref eResult_e_1 );
      if( ! RefalRTS.svar_left( ref sLastBracket_1, ref bb_2_0, ref be_2_0 ) )
        break;
      ePattern_b_1 = bb_2_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_2_0;
      RefalRTS.use( ref ePattern_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eContext_b_1, ref eContext_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_68_114_105_118_101_114_46_115_114_101_102_E_DelFirst.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_MapReduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_68_114_105_118_101_114_46_115_114_101_102_E_CreateContext.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n1, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eContext_b_1, eContext_e_1 );
      res = RefalRTS.splice_stvar( res, sLastBracket_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_CreateContext: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_CreateContext() { }
  public override string func_name ()
  {
    return "CreateContext";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_CreateContext();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      UInt64 sBracketNumber_3 = UInt64.MaxValue;
      // s.BracketNumber (~1 'e e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_1_0, ref be_1_0 ) )
        break;
      eIndex_b_1 = bb_1_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_1_0;
      RefalRTS.use( ref eIndex_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_3, sBracketNumber_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_TkOpenBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, global_TkVariable.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, global_TkCloseBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n10, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_3 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n6, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n3, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
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
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // s.BracketNumber (~1 s.Mode e.Index )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, global_TkVariable.instance ) )
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
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseSentence: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseSentence() { }
  public override string func_name ()
  {
    return "ParseSentence";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseSentence();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eTokens_b_1 = UInt64.MaxValue;
      UInt64 eTokens_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 e.Tokens
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eTokens_b_1 = bb_0_0;
      RefalRTS.use( ref eTokens_b_1 );
      eTokens_e_1 = be_0_0;
      RefalRTS.use( ref eTokens_e_1 );
      RefalRTS.check_evar( ref eTokens_b_1, ref eTokens_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n7, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eTokens_b_1, eTokens_e_1 );
      RefalRTS.link_brackets( n9, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n6, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_0: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_0() { }
  public override string func_name ()
  {
    return "ParsePattern_0";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_0();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_b_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tErrorList1_1 = UInt64.MaxValue;
      UInt64 tSymTable1_1 = UInt64.MaxValue;
      UInt64 eNewName_b_1 = UInt64.MaxValue;
      UInt64 eNewName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.Context (~2 e.Sentences )~2 (~3 e.MultiBrackets )~3 (~4 e.Scanned )~4 (~5 e.Tail )~5 t.ErrorList1 t.SymTable1 e.NewName
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBrackets_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBrackets_b_1 );
      eMultiBrackets_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBrackets_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_5_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_5_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eNewName_b_1 = bb_0_0;
      RefalRTS.use( ref eNewName_b_1 );
      eNewName_e_1 = be_0_0;
      RefalRTS.use( ref eNewName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eNewName_b_1, ref eNewName_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBrackets_b_1, ref eMultiBrackets_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n10, global_TkName.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n8, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eNewName_b_1, eNewName_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable1_1 );
      res = RefalRTS.splice_stvar( res, tErrorList1_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_1: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_1() { }
  public override string func_name ()
  {
    return "ParsePattern_1";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_1();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_b_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tErrorList1_1 = UInt64.MaxValue;
      UInt64 tSymTable1_1 = UInt64.MaxValue;
      UInt64 eNewName_b_1 = UInt64.MaxValue;
      UInt64 eNewName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.Context (~2 e.Sentences )~2 (~3 e.MultiBrackets )~3 (~4 e.Scanned )~4 (~5 e.Tail )~5 t.ErrorList1 t.SymTable1 e.NewName
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBrackets_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBrackets_b_1 );
      eMultiBrackets_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBrackets_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_5_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_5_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eNewName_b_1 = bb_0_0;
      RefalRTS.use( ref eNewName_b_1 );
      eNewName_e_1 = be_0_0;
      RefalRTS.use( ref eNewName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eNewName_b_1, ref eNewName_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBrackets_b_1, ref eMultiBrackets_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n10, global_TkIdentifier.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n8, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eNewName_b_1, eNewName_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable1_1 );
      res = RefalRTS.splice_stvar( res, tErrorList1_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_2: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_2() { }
  public override string func_name ()
  {
    return "ParsePattern_2";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_2();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNumBracket_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tErrorList1_1 = UInt64.MaxValue;
      UInt64 tSymTable1_1 = UInt64.MaxValue;
      UInt64 eNewName_b_1 = UInt64.MaxValue;
      UInt64 eNewName_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.Context (~2 e.Sentences )~2 s.BracketNumber (~3 e.MultiBracket )~3 s.LnNumBracket (~4 e.Scanned )~4 (~5 e.Tail )~5 t.ErrorList1 t.SymTable1 e.NewName
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumBracket_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_5_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_5_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eNewName_b_1 = bb_0_0;
      RefalRTS.use( ref eNewName_b_1 );
      eNewName_e_1 = be_0_0;
      RefalRTS.use( ref eNewName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eNewName_b_1, ref eNewName_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, global_TkOpenADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, global_TkCloseADT.instance ) )
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
      if( ! RefalRTS.alloc_function( ref n17, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n18 ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n15, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.link_brackets( n16, n18 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_evar( res, eNewName_b_1, eNewName_e_1 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.link_brackets( n6, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n10, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sLnNumBracket_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable1_1 );
      res = RefalRTS.splice_stvar( res, tErrorList1_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_3: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_3() { }
  public override string func_name ()
  {
    return "ParsePattern_3";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_3();

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
      // (~1 & global_TkOpenCall s.Number )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenCall.instance, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, global_TkOpenBracket.instance ) )
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
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & global_TkCloseCall s.Number )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseCall.instance, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, global_TkCloseBracket.instance ) )
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
      UInt64 tOther_1 = UInt64.MaxValue;
      // t.Other
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tOther_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tOther_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_4: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_4() { }
  public override string func_name ()
  {
    return "ParsePattern_4";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_4();

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
      // (~1 & global_TkOpenCall s.Number )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenCall.instance, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, global_TkOpenBracket.instance ) )
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
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 & global_TkCloseCall s.Number )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseCall.instance, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, global_TkCloseBracket.instance ) )
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
      UInt64 tOther_1 = UInt64.MaxValue;
      // t.Other
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tOther_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tOther_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern() { }
  public override string func_name ()
  {
    return "ParsePattern";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_b_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBrackets )~3 (~4 e.Scanned )~4 (~5 & global_TkChar s.LnNum s.Char )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkChar.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBrackets_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBrackets_b_1 );
      eMultiBrackets_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBrackets_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBrackets_b_1, ref eMultiBrackets_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n10, global_TkChar.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n8, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_b_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBrackets )~3 (~4 e.Scanned )~4 (~5 & global_TkNumber s.LnNum s.Number )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkNumber.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBrackets_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBrackets_b_1 );
      eMultiBrackets_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBrackets_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBrackets_b_1, ref eMultiBrackets_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n10, global_TkNumber.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n8, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n9, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_b_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBrackets )~3 (~4 e.Scanned )~4 (~5 & global_TkName s.LnNum e.Name )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBrackets_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBrackets_b_1 );
      eMultiBrackets_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBrackets_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      eName_b_1 = bb_5_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_5_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBrackets_b_1, ref eMultiBrackets_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_ST_CheckDeclared.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_0.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n19 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n16, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_b_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNumName_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sLnNumMarker_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBrackets )~3 (~4 e.Scanned )~4 (~5 & global_TkIdentMarker s.LnNumMarker )~5 (~6 & global_TkName s.LnNumName e.Name )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkIdentMarker.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBrackets_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBrackets_b_1 );
      eMultiBrackets_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBrackets_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumMarker_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNumName_1, ref bb_6_0, ref be_6_0 ) )
        break;
      eName_b_1 = bb_6_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_6_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBrackets_b_1, ref eMultiBrackets_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_ST_CheckIdent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_1.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n19 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n16, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sLnNumName_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_b_1 = UInt64.MaxValue;
      UInt64 eMultiBrackets_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBrackets )~3 (~4 e.Scanned )~4 (~5 & global_TkIdentMarker s.LnNum )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkIdentMarker.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBrackets_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBrackets_b_1 );
      eMultiBrackets_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBrackets_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBrackets_b_1, ref eMultiBrackets_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '#' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n27 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n34 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n32, n33 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.link_brackets( n30, n31 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
      res = RefalRTS.splice_elem( res, n30 );
      RefalRTS.link_brackets( n28, n29 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n27 );
      RefalRTS.push_stack( n4 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNumVar_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sLnNumRedef_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 & global_TkVariable s.LnNumVar s.Mode e.Index )~5 (~6 & global_TkRedefinition s.LnNumRedef )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkRedefinition.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumVar_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_5_0, ref be_5_0 ) )
        break;
      eIndex_b_1 = bb_5_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_5_0;
      RefalRTS.use( ref eIndex_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumRedef_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

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
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, local_68_114_105_118_101_114_46_115_114_101_102_E_CheckAddVariable.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_Cntx_AddNewVariable.instance ) )
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
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
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
      if( ! RefalRTS.alloc_function( ref n14, global_TkVariable.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n12, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n13, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sLnNumVar_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 & global_TkVariable s.LnNum s.Mode e.Index )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_5_0, ref be_5_0 ) )
        break;
      eIndex_b_1 = bb_5_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_5_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

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
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, local_68_114_105_118_101_114_46_115_114_101_102_E_CheckAddVariable.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_Cntx_AddVariable.instance ) )
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
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
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
      if( ! RefalRTS.alloc_function( ref n14, global_TkVariable.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n12, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n13, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 & global_TkRedefinition s.LnNum )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkRedefinition.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n34 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n34 );
      RefalRTS.link_brackets( n32, n33 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.link_brackets( n30, n31 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n29 );
      RefalRTS.push_stack( n4 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 # local_68_114_105_118_101_114_46_115_114_101_102_E_COpen & global_TkOpenBracket s.LnNum )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, global_TkOpenBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, global_TkCloseBracket.instance ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n15, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.link_brackets( n6, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n10, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNumBracket_1 = UInt64.MaxValue;
      UInt64 sLnNumName_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 # local_68_114_105_118_101_114_46_115_114_101_102_E_COpen & global_TkOpenADT s.LnNumBracket )~5 (~6 & global_TkName s.LnNumName e.Name )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumBracket_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNumName_1, ref bb_6_0, ref be_6_0 ) )
        break;
      eName_b_1 = bb_6_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_6_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_ST_CheckDeclared.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_2.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n19 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n16, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sLnNumBracket_1 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sLnNumName_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sLnNum_2 = UInt64.MaxValue;
      UInt64 tSymTable_2 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 # local_68_114_105_118_101_114_46_115_114_101_102_E_COpen & global_TkOpenADT s.LnNum )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sLnNum_2, sLnNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref tSymTable_2, tSymTable_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, '[' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n34, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n37, global_TkOpenADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n38, global_TkCloseADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n40 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n43, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n45, global_ST_GetAnyName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n46 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n47 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n48 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n49 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n49 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n41, n48 );
      res = RefalRTS.splice_elem( res, n48 );
      RefalRTS.link_brackets( n42, n47 );
      res = RefalRTS.splice_elem( res, n47 );
      RefalRTS.push_stack( n46 );
      RefalRTS.push_stack( n44 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_stvar( res, tSymTable_2 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      RefalRTS.link_brackets( n32, n40 );
      res = RefalRTS.splice_elem( res, n40 );
      RefalRTS.link_brackets( n36, n39 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_stvar( res, sLnNum_2 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n35 );
      RefalRTS.push_stack( n33 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.link_brackets( n30, n31 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n29 );
      RefalRTS.push_stack( n4 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sLnNum_2 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 # local_68_114_105_118_101_114_46_115_114_101_102_E_COpen & global_TkOpenCall s.LnNum )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenCall.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sLnNum_2, sLnNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n51 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n52 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n53 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n54 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n55 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n56, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n57 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n58 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n59, global_TkOpenCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n60, global_TkCloseCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n61 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n62 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n63 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n64 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n65 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n65 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n63, n64 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      RefalRTS.link_brackets( n54, n62 );
      res = RefalRTS.splice_elem( res, n62 );
      RefalRTS.link_brackets( n58, n61 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_stvar( res, sLnNum_2 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n58 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n57 );
      RefalRTS.push_stack( n55 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n56 );
      res = RefalRTS.splice_elem( res, n55 );
      res = RefalRTS.splice_elem( res, n54 );
      RefalRTS.link_brackets( n52, n53 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n51 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n51 );
      res = RefalRTS.splice_elem( res, n50 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_b_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sInnerNumber_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sInnerLnNum_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_2 = UInt64.MaxValue;
      UInt64 sClosedLnNum_1 = UInt64.MaxValue;
      UInt64 sInnerNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber e.MultiBracket (~4 s.InnerNumber s.OpenBracket s.InnerLnNum s.CloseBracket e.Scanned )~4 )~3 (~5 e.InnerScanned )~5 (~6 # local_68_114_105_118_101_114_46_115_114_101_102_E_CClose s.CloseBracket s.ClosedLnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(5 0 )(6 0 )(4 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_3_0, ref be_3_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eInnerScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eInnerScanned_b_1 );
      eInnerScanned_e_1 = be_5_0;
      RefalRTS.use( ref eInnerScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sInnerNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOpenBracket_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerLnNum_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCloseBracket_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.repeated_stvar_left( ref sCloseBracket_2, sCloseBracket_1, ref bb_6_0, ref be_6_0 ) )
        break;
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.svar_left( ref sClosedLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eInnerScanned_b_1, ref eInnerScanned_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sInnerNumber_2, sInnerNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n8, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n11, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_2 );
      res = RefalRTS.splice_stvar( res, sCloseBracket_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
      RefalRTS.link_brackets( n9, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_1 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_1 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_b_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sInnerNumber_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_1 = UInt64.MaxValue;
      UInt64 sInnerLnNum_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sOtherCloseBracket_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_2 = UInt64.MaxValue;
      UInt64 sInnerNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber e.MultiBracket (~4 s.InnerNumber s.OpenBracket s.InnerLnNum s.CloseBracket e.Scanned )~4 )~3 (~5 e.InnerScanned )~5 (~6 # local_68_114_105_118_101_114_46_115_114_101_102_E_CClose s.OtherCloseBracket s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(5 0 )(6 0 )(4 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_3_0, ref be_3_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eInnerScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eInnerScanned_b_1 );
      eInnerScanned_e_1 = be_5_0;
      RefalRTS.use( ref eInnerScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sInnerNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOpenBracket_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerLnNum_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCloseBracket_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.svar_left( ref sOtherCloseBracket_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eInnerScanned_b_1, ref eInnerScanned_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sOpenBracket_2, sOpenBracket_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sInnerNumber_2, sInnerNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n27, local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n40 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n42, local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n44 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n41, n43 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, sOtherCloseBracket_1 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      RefalRTS.link_brackets( n35, n40 );
      res = RefalRTS.splice_elem( res, n40 );
      RefalRTS.link_brackets( n38, n39 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_2 );
      res = RefalRTS.splice_stvar( res, sCloseBracket_1 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
      RefalRTS.link_brackets( n36, n37 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_1 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_2 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.link_brackets( n33, n34 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n31, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n30 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n26 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_1 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sInnerLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber )~3 (~4 e.Scanned )~4 (~5 # local_68_114_105_118_101_114_46_115_114_101_102_E_CClose s.CloseBracket s.LnNum )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCloseBracket_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n27, local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n37 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n35, n36 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.link_brackets( n33, n34 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n31, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n30 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n26 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, sCloseBracket_1 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber )~3 (~4 e.Scanned )~4 (~5 & global_TkReplace s.LnNum )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkReplace.instance, ref bb_5_0, ref be_5_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_5_0, be_5_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_3.instance ) )
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
      if( ! RefalRTS.alloc_number( ref n13, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n15, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.link_brackets( n12, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n6, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sInnerNumber_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_1 = UInt64.MaxValue;
      UInt64 sInnerLnNum_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_b_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_e_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_2 = UInt64.MaxValue;
      UInt64 sInnerNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber e.MultiBracket (~4 s.InnerNumber s.OpenBracket s.InnerLnNum s.CloseBracket e.InnerScanned )~4 )~3 (~5 e.Scanned )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(5 0 )(4 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_3_0, ref be_3_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sInnerNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOpenBracket_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerLnNum_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCloseBracket_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eInnerScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eInnerScanned_b_1 );
      eInnerScanned_e_1 = be_4_0;
      RefalRTS.use( ref eInnerScanned_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eInnerScanned_b_1, ref eInnerScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sOpenBracket_2, sOpenBracket_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sInnerNumber_2, sInnerNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n27, local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n40 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n41 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n35, n40 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      RefalRTS.link_brackets( n38, n39 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_2 );
      res = RefalRTS.splice_stvar( res, sCloseBracket_1 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
      RefalRTS.link_brackets( n36, n37 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_1 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_2 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.link_brackets( n33, n34 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n31, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n30 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n26 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_1 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sInnerLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sNextResultTerm_1 = UInt64.MaxValue;
      UInt64 eInfo_b_1 = UInt64.MaxValue;
      UInt64 eInfo_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 s.BracketNumber )~3 (~4 e.Scanned )~4 (~5 s.NextResultTerm s.LnNum e.Info )~5 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNextResultTerm_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      eInfo_b_1 = bb_5_0;
      RefalRTS.use( ref eInfo_b_1 );
      eInfo_e_1 = be_5_0;
      RefalRTS.use( ref eInfo_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n40, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n41, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParsePattern_4.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n45, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n46 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n47 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n48 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n49 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n49 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n47, n48 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      RefalRTS.link_brackets( n44, n46 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_elem( res, n44 );
      RefalRTS.link_brackets( n38, n43 );
      res = RefalRTS.splice_elem( res, n43 );
      RefalRTS.push_stack( n42 );
      RefalRTS.push_stack( n39 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n38 );
      RefalRTS.link_brackets( n36, n37 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n35 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_CoBracket: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_CoBracket() { }
  public override string func_name ()
  {
    return "CoBracket";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_CoBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // & global_TkOpenADT
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TkCloseADT.instance ) )
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
      // & global_TkOpenBracket
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TkCloseBracket.instance ) )
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
      // & global_TkOpenCall
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkOpenCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TkCloseCall.instance ) )
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
      // & global_TkCloseADT
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkCloseADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TkOpenADT.instance ) )
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
      // & global_TkCloseBracket
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkCloseBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TkOpenBracket.instance ) )
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
      // & global_TkCloseCall
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkCloseCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TkOpenCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_CheckAddVariable: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_CheckAddVariable() { }
  public override string func_name ()
  {
    return "CheckAddVariable";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_CheckAddVariable();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sContextModifier_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable t.Context s.ContextModifier s.LnNum s.Mode e.Index
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sContextModifier_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckAddVariable.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, sContextModifier_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

class local_68_114_105_118_101_114_46_115_114_101_102_E_CSuccess {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CSuccess");
}

class local_68_114_105_118_101_114_46_115_114_101_102_E_CInvalidMode {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CInvalidMode");
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckAddVariable: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckAddVariable() { }
  public override string func_name ()
  {
    return "SwCheckAddVariable";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckAddVariable();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.LnNum t.Context # local_68_114_105_118_101_114_46_115_114_101_102_E_CSuccess
      //(0 0 )
      if( ! RefalRTS.ident_right( local_68_114_105_118_101_114_46_115_114_101_102_E_CSuccess.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sOldMode_1 = UInt64.MaxValue;
      UInt64 sNewMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.LnNum t.Context # local_68_114_105_118_101_114_46_115_114_101_102_E_CInvalidMode s.OldMode s.NewMode e.Index
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CInvalidMode.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOldMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNewMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n39 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
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
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_stvar( res, sNewMode_1 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sOldMode_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket() { }
  public override string func_name ()
  {
    return "StrFromBracket";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // & global_TkOpenBracket
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkOpenBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '(' ) )
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
      // & global_TkCloseBracket
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkCloseBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ')' ) )
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
      // & global_TkOpenCall
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkOpenCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '<' ) )
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
      // & global_TkCloseCall
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkCloseCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '>' ) )
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
      // & global_TkOpenADT
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '[' ) )
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
      // & global_TkCloseADT
      //(0 0 )
      if( ! RefalRTS.function_left( global_TkCloseADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ']' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_0: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_0() { }
  public override string func_name ()
  {
    return "ParseResult_0";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_0();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tErrorList1_1 = UInt64.MaxValue;
      UInt64 tSymTable1_1 = UInt64.MaxValue;
      UInt64 eNewName_b_1 = UInt64.MaxValue;
      UInt64 eNewName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 e.Tail )~6 t.ErrorList1 t.SymTable1 e.NewName
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_6_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_6_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eNewName_b_1 = bb_0_0;
      RefalRTS.use( ref eNewName_b_1 );
      eNewName_e_1 = be_0_0;
      RefalRTS.use( ref eNewName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eNewName_b_1, ref eNewName_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n12, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n10, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n11, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eNewName_b_1, eNewName_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable1_1 );
      res = RefalRTS.splice_stvar( res, tErrorList1_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_1: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_1() { }
  public override string func_name ()
  {
    return "ParseResult_1";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_1();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tErrorList1_1 = UInt64.MaxValue;
      UInt64 tSymTable1_1 = UInt64.MaxValue;
      UInt64 eNewName_b_1 = UInt64.MaxValue;
      UInt64 eNewName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 e.Tail )~6 t.ErrorList1 t.SymTable1 e.NewName
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_6_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_6_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eNewName_b_1 = bb_0_0;
      RefalRTS.use( ref eNewName_b_1 );
      eNewName_e_1 = be_0_0;
      RefalRTS.use( ref eNewName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eNewName_b_1, ref eNewName_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n12, global_TkIdentifier.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n10, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n11, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eNewName_b_1, eNewName_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable1_1 );
      res = RefalRTS.splice_stvar( res, tErrorList1_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_2: RefalRTS.Function
{
  private lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_2() { }
  public override string func_name ()
  {
    return "ParseResult_2";
  }

  public static readonly RefalRTS.Function instance = new lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_2();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNumADT_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tErrorList1_1 = UInt64.MaxValue;
      UInt64 tSymTable1_1 = UInt64.MaxValue;
      UInt64 eNewName_b_1 = UInt64.MaxValue;
      UInt64 eNewName_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 s.BracketNumber (~4 e.MultiBracket )~4 s.LnNumADT (~5 e.Scanned )~5 (~6 e.Tail )~6 t.ErrorList1 t.SymTable1 e.NewName
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumADT_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_6_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_6_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable1_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eNewName_b_1 = bb_0_0;
      RefalRTS.use( ref eNewName_b_1 );
      eNewName_e_1 = be_0_0;
      RefalRTS.use( ref eNewName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eNewName_b_1, ref eNewName_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_TkOpenADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_TkCloseADT.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n19, global_TkName.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n17, n21 );
      res = RefalRTS.splice_elem( res, n21 );
      RefalRTS.link_brackets( n18, n20 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_evar( res, eNewName_b_1, eNewName_e_1 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.link_brackets( n8, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n12, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sLnNumADT_1 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable1_1 );
      res = RefalRTS.splice_stvar( res, tErrorList1_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult() { }
  public override string func_name ()
  {
    return "ParseResult";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 & global_TkChar s.LnNum s.Char )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkChar.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n12, global_TkChar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n10, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n11, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 & global_TkNumber s.LnNum s.Number )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkNumber.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_function( ref n12, global_TkNumber.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n10, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n11, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 & global_TkName s.LnNum e.Name )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      eName_b_1 = bb_6_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_6_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_ST_CheckDeclared.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_0.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n21 );
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n18, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n16, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNameLnNum_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sMarkerLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 & global_TkIdentMarker s.MarkerLnNum )~6 (~7 & global_TkName s.NameLnNum e.Name )~7 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )(7 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkIdentMarker.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      UInt64 bb_7_0 = 0;
      UInt64 be_7_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_7_0, ref be_7_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_7_0, ref be_7_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sMarkerLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNameLnNum_1, ref bb_7_0, ref be_7_0 ) )
        break;
      eName_b_1 = bb_7_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_7_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_ST_CheckIdent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_1.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n21 );
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n18, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n16, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sNameLnNum_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 & global_TkIdentMarker s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkIdentMarker.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '#' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n27 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n36 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n34, n35 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n34 );
      RefalRTS.link_brackets( n32, n33 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.link_brackets( n30, n31 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n30 );
      RefalRTS.link_brackets( n28, n29 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n27 );
      RefalRTS.push_stack( n4 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 & global_TkVariable s.LnNum s.Mode e.Index )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkVariable.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_6_0, ref be_6_0 ) )
        break;
      eIndex_b_1 = bb_6_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_6_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

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
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, local_68_114_105_118_101_114_46_115_114_101_102_E_CheckUseVariable.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n15, global_TkVariable.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n13, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.link_brackets( n14, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n11, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n9, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNumADT_1 = UInt64.MaxValue;
      UInt64 sLnNumName_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 # local_68_114_105_118_101_114_46_115_114_101_102_E_COpen & global_TkOpenADT s.LnNumADT )~6 (~7 & global_TkName s.LnNumName e.Name )~7 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )(7 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      UInt64 bb_7_0 = 0;
      UInt64 be_7_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_7_0, ref be_7_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkName.instance, ref bb_7_0, ref be_7_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNumADT_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNumName_1, ref bb_7_0, ref be_7_0 ) )
        break;
      eName_b_1 = bb_7_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_7_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_ST_CheckDeclared.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, lambda_local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_2.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n21 );
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n18, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n16, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_stvar( res, sLnNumADT_1 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sLnNumName_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sLnNum_2 = UInt64.MaxValue;
      UInt64 tSymTable_2 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 # local_68_114_105_118_101_114_46_115_114_101_102_E_COpen & global_TkOpenADT s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenADT.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sLnNum_2, sLnNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref tSymTable_2, tSymTable_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, '[' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n36, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n39, global_TkOpenADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n40, global_TkCloseADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n45, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n46 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n47, global_ST_GetAnyName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n48 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n49 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n50 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n51 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n51 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n51 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n43, n50 );
      res = RefalRTS.splice_elem( res, n50 );
      RefalRTS.link_brackets( n44, n49 );
      res = RefalRTS.splice_elem( res, n49 );
      RefalRTS.push_stack( n48 );
      RefalRTS.push_stack( n46 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_stvar( res, tSymTable_2 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_elem( res, n43 );
      RefalRTS.link_brackets( n34, n42 );
      res = RefalRTS.splice_elem( res, n42 );
      RefalRTS.link_brackets( n38, n41 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_stvar( res, sLnNum_2 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n37 );
      RefalRTS.push_stack( n35 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      RefalRTS.link_brackets( n32, n33 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.link_brackets( n30, n31 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n29 );
      RefalRTS.push_stack( n4 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_2 = UInt64.MaxValue;
      UInt64 sOpenBracket_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 # local_68_114_105_118_101_114_46_115_114_101_102_E_COpen s.OpenBracket s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_COpen.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sOpenBracket_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sBracketNumber_2, sBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sOpenBracket_2, sOpenBracket_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, local_68_114_105_118_101_114_46_115_114_101_102_E_CoBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
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
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n18, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.link_brackets( n8, n17 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.link_brackets( n12, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_2 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n9 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_b_1 = UInt64.MaxValue;
      UInt64 eInnerScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sInnerNumber_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sOpenLnNum_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_2 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sInnerNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber e.MultiBracket (~5 s.InnerNumber s.OpenBracket s.OpenLnNum s.CloseBracket e.Scanned )~5 )~4 (~6 e.InnerScanned )~6 (~7 # local_68_114_105_118_101_114_46_115_114_101_102_E_CClose s.CloseBracket s.LnNum )~7 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(6 0 )(7 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_7_0 = 0;
      UInt64 be_7_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_7_0, ref be_7_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance, ref bb_7_0, ref be_7_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_4_0, ref be_4_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eInnerScanned_b_1 = bb_6_0;
      RefalRTS.use( ref eInnerScanned_b_1 );
      eInnerScanned_e_1 = be_6_0;
      RefalRTS.use( ref eInnerScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sInnerNumber_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOpenBracket_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOpenLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCloseBracket_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.repeated_stvar_left( ref sCloseBracket_2, sCloseBracket_1, ref bb_7_0, ref be_7_0 ) )
        break;
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_7_0, ref be_7_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_7_0, be_7_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eInnerScanned_b_1, ref eInnerScanned_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sInnerNumber_2, sInnerNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n13 ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n10, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.link_brackets( n13, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_2 );
      res = RefalRTS.splice_stvar( res, sCloseBracket_1 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
      RefalRTS.link_brackets( n11, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_1 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 (~6 & global_TkOpenBlock s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkOpenBlock.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseBlock.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n18 );
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n14, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eInnerBracket_b_1 = UInt64.MaxValue;
      UInt64 eInnerBracket_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sInnerNumber_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_1 = UInt64.MaxValue;
      UInt64 sOpenLnNum_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sOpenBracket_2 = UInt64.MaxValue;
      UInt64 sInnerNumber_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber e.MultiBracket (~5 s.InnerNumber s.OpenBracket s.OpenLnNum s.CloseBracket e.Scanned )~5 )~4 (~6 e.InnerBracket )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(6 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_5_0, ref be_5_0, ref bb_4_0, ref be_4_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eInnerBracket_b_1 = bb_6_0;
      RefalRTS.use( ref eInnerBracket_b_1 );
      eInnerBracket_e_1 = be_6_0;
      RefalRTS.use( ref eInnerBracket_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sInnerNumber_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOpenBracket_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOpenLnNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCloseBracket_1, ref bb_5_0, ref be_5_0 ) )
        break;
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eInnerBracket_b_1, ref eInnerBracket_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sOpenBracket_2, sOpenBracket_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sInnerNumber_2, sInnerNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n27, local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n40 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n43 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n37, n42 );
      res = RefalRTS.splice_elem( res, n42 );
      RefalRTS.link_brackets( n40, n41 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_2 );
      res = RefalRTS.splice_stvar( res, sCloseBracket_1 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_evar( res, eInnerBracket_b_1, eInnerBracket_e_1 );
      RefalRTS.link_brackets( n38, n39 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_stvar( res, sInnerNumber_1 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_2 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n37 );
      RefalRTS.link_brackets( n35, n36 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.link_brackets( n33, n34 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n31, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n30 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n26 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, sOpenBracket_1 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sOpenLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sCloseBracket_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber )~4 (~5 e.Scanned )~5 (~6 # local_68_114_105_118_101_114_46_115_114_101_102_E_CClose s.CloseBracket s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CClose.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sCloseBracket_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n27, local_68_114_105_118_101_114_46_115_114_101_102_E_StrFromBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n39 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n37, n38 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n37 );
      RefalRTS.link_brackets( n35, n36 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.link_brackets( n33, n34 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n31, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n30 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n26 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, sCloseBracket_1 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber )~4 (~5 e.Result )~5 (~6 & global_TkSemicolon s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkSemicolon.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eResult_b_1 = bb_5_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_5_0;
      RefalRTS.use( ref eResult_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Cntx_ResetAfterSentence.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n5, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n6, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n9, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sLnNum_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber )~4 (~5 e.Result )~5 (~6 & global_TkCloseBlock s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkCloseBlock.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eResult_b_1 = bb_5_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_5_0;
      RefalRTS.use( ref eResult_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sLnNum_2, sLnNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n22, global_Cntx_ResetAfterSentence.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n25 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n27 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n33, global_TkCloseBlock.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n32, n34 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_stvar( res, sLnNum_2 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.link_brackets( n24, n31 );
      res = RefalRTS.splice_elem( res, n31 );
      RefalRTS.link_brackets( n25, n30 );
      res = RefalRTS.splice_elem( res, n30 );
      RefalRTS.link_brackets( n28, n29 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_elem( res, n28 );
      RefalRTS.link_brackets( n26, n27 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n24 );
      RefalRTS.push_stack( n23 );
      RefalRTS.push_stack( n21 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n2 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eResult_b_1 = UInt64.MaxValue;
      UInt64 eResult_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 sLnNum_2 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber )~4 (~5 e.Result )~5 (~6 & global_TkEOF s.LnNum )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkEOF.instance, ref bb_6_0, ref be_6_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eResult_b_1 = bb_5_0;
      RefalRTS.use( ref eResult_b_1 );
      eResult_e_1 = be_5_0;
      RefalRTS.use( ref eResult_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eResult_b_1, ref eResult_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sLnNum_2, sLnNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n20, global_Cntx_ResetAfterSentence.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n25 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n27 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n31, global_TkCloseBlock.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n30, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_stvar( res, sLnNum_2 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      RefalRTS.link_brackets( n22, n29 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.link_brackets( n23, n28 );
      res = RefalRTS.splice_elem( res, n28 );
      RefalRTS.link_brackets( n26, n27 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_evar( res, eResult_b_1, eResult_e_1 );
      res = RefalRTS.splice_elem( res, n26 );
      RefalRTS.link_brackets( n24, n25 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n22 );
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n19 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n18 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 tUnexpected_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 s.BracketNumber )~4 (~5 e.Scanned )~5 t.Unexpected e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_4_0, ref be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tUnexpected_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_EL_AddUnexpected.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n37 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n35, n36 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.link_brackets( n33, n34 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n31, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n31 );
      RefalRTS.link_brackets( n29, n30 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n4 );
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
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, tUnexpected_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
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

class local_68_114_105_118_101_114_46_115_114_101_102_E_CExistVariable {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CExistVariable");
}

class local_68_114_105_118_101_114_46_115_114_101_102_E_CNotFound {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CNotFound");
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_CheckUseVariable: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_CheckUseVariable() { }
  public override string func_name ()
  {
    return "CheckUseVariable";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_CheckUseVariable();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable t.Context s.LnNum s.Mode e.Index
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckUseVariable.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Cntx_CheckVariable.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckUseVariable: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckUseVariable() { }
  public override string func_name ()
  {
    return "SwCheckUseVariable";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_SwCheckUseVariable();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.LnNum t.Context # local_68_114_105_118_101_114_46_115_114_101_102_E_CExistVariable s.Mode e.Index
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CExistVariable.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sOldMode_1 = UInt64.MaxValue;
      UInt64 sNewMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.LnNum t.Context # local_68_114_105_118_101_114_46_115_114_101_102_E_CInvalidMode s.OldMode s.NewMode e.Index
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CInvalidMode.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sOldMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNewMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n39 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
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
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_stvar( res, sNewMode_1 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sOldMode_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 sLnNum_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // t.ErrorList t.SymTable s.LnNum t.Context # local_68_114_105_118_101_114_46_115_114_101_102_E_CNotFound s.Mode e.Index
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLnNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.ident_left( local_68_114_105_118_101_114_46_115_114_101_102_E_CNotFound.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      RefalRTS.push_stack( n22 );
      RefalRTS.push_stack( n0 );
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
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sLnNum_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block() { }
  public override string func_name ()
  {
    return "ParseResult_Block";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sNextNum_1 = UInt64.MaxValue;
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 sNextNum_2 = UInt64.MaxValue;
      // (~1 e.Sentences )~1 (~2 e.Pattern )~2 (~3 s.BracketNumber e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 s.NextNum e.Functions )~5 t.ErrorList t.SymTable (~6 t.Context )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_1_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_1_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_2_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_2_0;
      RefalRTS.use( ref ePattern_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sNextNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      eFunctions_b_1 = bb_5_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_5_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_6_0, ref be_6_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_6_0, be_6_0 ) )
        break;
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sNextNum_2, sNextNum_1 ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n10, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n11, local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_Dec.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n8, n16 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n9, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sNextNum_2 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_stvar( res, sNextNum_1 );
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
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sBracketNumber_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 sNextNum_1 = UInt64.MaxValue;
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eFreeContext_b_1 = UInt64.MaxValue;
      UInt64 eFreeContext_e_1 = UInt64.MaxValue;
      UInt64 sNextNum_2 = UInt64.MaxValue;
      // (~1 e.Sentences )~1 (~2 e.Pattern )~2 (~3 s.BracketNumber e.MultiBracket )~3 (~4 e.Scanned )~4 (~5 s.NextNum e.Functions )~5 t.ErrorList t.SymTable (~6 t.Context e.FreeContext )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_1_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_1_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_2_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_2_0;
      RefalRTS.use( ref ePattern_e_1 );
      eScanned_b_1 = bb_4_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_4_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNumber_1, ref bb_3_0, ref be_3_0 ) )
        break;
      eMultiBracket_b_1 = bb_3_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_3_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      if( ! RefalRTS.svar_left( ref sNextNum_1, ref bb_5_0, ref be_5_0 ) )
        break;
      eFunctions_b_1 = bb_5_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_5_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_6_0, ref be_6_0 ) )
        break;
      eFreeContext_b_1 = bb_6_0;
      RefalRTS.use( ref eFreeContext_b_1 );
      eFreeContext_e_1 = be_6_0;
      RefalRTS.use( ref eFreeContext_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eFreeContext_b_1, ref eFreeContext_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sNextNum_2, sNextNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block_Aux.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n17, global_MapReduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n18, local_68_114_105_118_101_114_46_115_114_101_102_E_CreateContext.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n15, n20 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.push_stack( n19 );
      RefalRTS.push_stack( n16 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_evar( res, eFreeContext_b_1, eFreeContext_e_1 );
      res = RefalRTS.splice_stvar( res, sBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sNextNum_2 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n10, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_stvar( res, sNextNum_1 );
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

class local_68_114_105_118_101_114_46_115_114_101_102_E_CCreateClosure {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CCreateClosure");
}

public class local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block_Aux: RefalRTS.Function
{
  private local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block_Aux() { }
  public override string func_name ()
  {
    return "ParseResult_Block_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_68_114_105_118_101_114_46_115_114_101_102_E_ParseResult_Block_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFunctions_b_1 = UInt64.MaxValue;
      UInt64 eFunctions_e_1 = UInt64.MaxValue;
      UInt64 tErrorList_1 = UInt64.MaxValue;
      UInt64 tSymTable_1 = UInt64.MaxValue;
      UInt64 tContext_1 = UInt64.MaxValue;
      UInt64 eSentences_b_1 = UInt64.MaxValue;
      UInt64 eSentences_e_1 = UInt64.MaxValue;
      UInt64 ePattern_b_1 = UInt64.MaxValue;
      UInt64 ePattern_e_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_b_1 = UInt64.MaxValue;
      UInt64 eMultiBracket_e_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 sFunctionNumber_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sNextBracketNumber_1 = UInt64.MaxValue;
      UInt64 eRealContext_b_1 = UInt64.MaxValue;
      UInt64 eRealContext_e_1 = UInt64.MaxValue;
      UInt64 sNextBracketNumber_2 = UInt64.MaxValue;
      UInt64 sNextBracketNumber_3 = UInt64.MaxValue;
      // (~1 e.Functions )~1 t.ErrorList t.SymTable t.Context (~2 e.Sentences )~2 (~3 e.Pattern )~3 (~4 e.MultiBracket )~4 (~5 e.Scanned )~5 s.FunctionNumber (~6 s.NextBracketNumber e.RealContext )~6 e.Tail
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )(5 0 )(6 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunctions_b_1 = bb_1_0;
      RefalRTS.use( ref eFunctions_b_1 );
      eFunctions_e_1 = be_1_0;
      RefalRTS.use( ref eFunctions_e_1 );
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tSymTable_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tContext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 bb_5_0 = 0;
      UInt64 be_5_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_5_0, ref be_5_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eSentences_b_1 = bb_2_0;
      RefalRTS.use( ref eSentences_b_1 );
      eSentences_e_1 = be_2_0;
      RefalRTS.use( ref eSentences_e_1 );
      ePattern_b_1 = bb_3_0;
      RefalRTS.use( ref ePattern_b_1 );
      ePattern_e_1 = be_3_0;
      RefalRTS.use( ref ePattern_e_1 );
      eMultiBracket_b_1 = bb_4_0;
      RefalRTS.use( ref eMultiBracket_b_1 );
      eMultiBracket_e_1 = be_4_0;
      RefalRTS.use( ref eMultiBracket_e_1 );
      eScanned_b_1 = bb_5_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_5_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.svar_left( ref sFunctionNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_6_0 = 0;
      UInt64 be_6_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_6_0, ref be_6_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      if( ! RefalRTS.svar_left( ref sNextBracketNumber_1, ref bb_6_0, ref be_6_0 ) )
        break;
      eRealContext_b_1 = bb_6_0;
      RefalRTS.use( ref eRealContext_b_1 );
      eRealContext_e_1 = be_6_0;
      RefalRTS.use( ref eRealContext_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eRealContext_b_1, ref eRealContext_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );
      RefalRTS.check_evar( ref eMultiBracket_b_1, ref eMultiBracket_e_1 );
      RefalRTS.check_evar( ref ePattern_b_1, ref ePattern_e_1 );
      RefalRTS.check_evar( ref eSentences_b_1, ref eSentences_e_1 );
      RefalRTS.check_evar( ref eFunctions_b_1, ref eFunctions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sNextBracketNumber_2, sNextBracketNumber_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNextBracketNumber_3, sNextBracketNumber_2 ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_Inc.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_TkOpenCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n16, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n17, local_68_114_105_118_101_114_46_115_114_101_102_E_CCreateClosure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n20, global_TkName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_ident( ref n21, local_68_114_105_118_101_114_46_115_114_101_102_E_CLambdaName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n24, global_TkCloseCall.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n25 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n11, n26 );
      res = RefalRTS.splice_elem( res, n26 );
      RefalRTS.link_brackets( n23, n25 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_stvar( res, sNextBracketNumber_3 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_evar( res, eRealContext_b_1, eRealContext_e_1 );
      RefalRTS.link_brackets( n19, n22 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_stvar( res, sFunctionNumber_1 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.link_brackets( n15, n18 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.link_brackets( n12, n14 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sNextBracketNumber_2 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n6, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_stvar( res, sNextBracketNumber_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, ePattern_b_1, ePattern_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eSentences_b_1, eSentences_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tContext_1 );
      res = RefalRTS.splice_stvar( res, tSymTable_1 );
      res = RefalRTS.splice_stvar( res, tErrorList_1 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFunctions_b_1, eFunctions_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}


//End of file
