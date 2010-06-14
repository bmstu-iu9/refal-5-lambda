// Automatically generated file. Don't edit!
using System;


public class global_Go: RefalRTS.Function
{
  private global_Go() { }
  public override string func_name ()
  {
    return "global_Go";
  }

  public static readonly RefalRTS.Function instance = new global_Go();

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
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_Main.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_ArgList.instance ) )
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

public class local_83_114_101_102_99_46_115_114_101_102_E_Main: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_Main() { }
  public override string func_name ()
  {
    return "Main";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_Main();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eProgName_b_1 = UInt64.MaxValue;
      UInt64 eProgName_e_1 = UInt64.MaxValue;
      UInt64 eConfig_b_1 = UInt64.MaxValue;
      UInt64 eConfig_e_1 = UInt64.MaxValue;
      // (~1 e.ProgName )~1 (~2 '@ e.Config )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( '@', ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eProgName_b_1 = bb_1_0;
      RefalRTS.use( ref eProgName_b_1 );
      eProgName_e_1 = be_1_0;
      RefalRTS.use( ref eProgName_e_1 );
      eConfig_b_1 = bb_2_0;
      RefalRTS.use( ref eConfig_b_1 );
      eConfig_e_1 = be_2_0;
      RefalRTS.use( ref eConfig_e_1 );
      RefalRTS.check_evar( ref eConfig_b_1, ref eConfig_e_1 );
      RefalRTS.check_evar( ref eProgName_b_1, ref eProgName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_Main.instance ) )
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
      if( ! RefalRTS.alloc_function( ref n5, global_LoadFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eConfig_b_1, eConfig_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eProgName_b_1, eProgName_e_1 );
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
      UInt64 eArguments_b_1 = UInt64.MaxValue;
      UInt64 eArguments_e_1 = UInt64.MaxValue;
      UInt64 eProgName_b_1 = UInt64.MaxValue;
      UInt64 eProgName_e_1 = UInt64.MaxValue;
      // (~1 e.ProgName )~1 e.Arguments
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eProgName_b_1 = bb_1_0;
      RefalRTS.use( ref eProgName_b_1 );
      eProgName_e_1 = be_1_0;
      RefalRTS.use( ref eProgName_e_1 );
      eArguments_b_1 = bb_0_0;
      RefalRTS.use( ref eArguments_b_1 );
      eArguments_e_1 = be_0_0;
      RefalRTS.use( ref eArguments_e_1 );
      RefalRTS.check_evar( ref eArguments_b_1, ref eArguments_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_Compile_And_Link.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_83_114_101_102_99_46_115_114_101_102_E_FindFiles_Compilers.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_ParseCommandLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
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
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eArguments_b_1, eArguments_e_1 );
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

public class local_83_114_101_102_99_46_115_114_101_102_E_FindFiles_Compilers: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_FindFiles_Compilers() { }
  public override string func_name ()
  {
    return "FindFiles_Compilers";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_FindFiles_Compilers();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tCompilers_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      // t.Compilers (~1 e.Folders )~1 e.Files
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tCompilers_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFolders_b_1 = bb_1_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_1_0;
      RefalRTS.use( ref eFolders_e_1 );
      eFiles_b_1 = bb_0_0;
      RefalRTS.use( ref eFiles_b_1 );
      eFiles_e_1 = be_0_0;
      RefalRTS.use( ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFiles_b_1, ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_FindFiles.instance ) )
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
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eFiles_b_1, eFiles_e_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_stvar( res, tCompilers_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_Compile_And_Link: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_Compile_And_Link() { }
  public override string func_name ()
  {
    return "Compile_And_Link";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_Compile_And_Link();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eMessage_b_1 = UInt64.MaxValue;
      UInt64 eMessage_e_1 = UInt64.MaxValue;
      // (~1 & global_CmdLineError e.Message )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdLineError.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eMessage_b_1 = bb_1_0;
      RefalRTS.use( ref eMessage_b_1 );
      eMessage_e_1 = be_1_0;
      RefalRTS.use( ref eMessage_e_1 );
      RefalRTS.check_evar( ref eMessage_b_1, ref eMessage_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'D' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'L' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, ':' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n22 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_evar( res, eMessage_b_1, eMessage_e_1 );
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
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eFiles_E_b_1 = UInt64.MaxValue;
      UInt64 eFiles_E_e_1 = UInt64.MaxValue;
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eFiles_B_b_1 = UInt64.MaxValue;
      UInt64 eFiles_B_e_1 = UInt64.MaxValue;
      // t.Compiler e.Files_B (~1 & global_NotFound e.FileName )~1 e.Files_E
      //(0 1 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eFiles_B_b_1 = bb_0_0;
        eFiles_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eFiles_B_b_1, ref eFiles_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.function_left( global_NotFound.instance, ref bb_1_0, ref be_1_0 ) )
          continue;
        eFileName_b_1 = bb_1_0;
        RefalRTS.use( ref eFileName_b_1 );
        eFileName_e_1 = be_1_0;
        RefalRTS.use( ref eFileName_e_1 );
        eFiles_E_b_1 = bb_0_1;
        RefalRTS.use( ref eFiles_E_b_1 );
        eFiles_E_e_1 = be_0_1;
        RefalRTS.use( ref eFiles_E_e_1 );
        RefalRTS.check_evar( ref eFiles_E_b_1, ref eFiles_E_e_1 );
        RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_call( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n1, global_Map.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n2, local_83_114_101_102_99_46_115_114_101_102_E_PrintNotFound.instance ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_function( ref n4, global_NotFound.instance ) )
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
        res = RefalRTS.splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        RefalRTS.link_brackets( n3, n5 );
        res = RefalRTS.splice_elem( res, n5 );
        res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      // t.Compiler e.Files
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eFiles_b_1 = bb_0_0;
      RefalRTS.use( ref eFiles_b_1 );
      eFiles_e_1 = be_0_0;
      RefalRTS.use( ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFiles_b_1, ref eFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_ScanCollisions.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_83_114_101_102_99_46_115_114_101_102_E_GetFileName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eFiles_b_1, eFiles_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_PrintNotFound: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_PrintNotFound() { }
  public override string func_name ()
  {
    return "PrintNotFound";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_PrintNotFound();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // (~1 & global_NotFound e.FileName )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_NotFound.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'D' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'L' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, ':' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n37 );
      RefalRTS.push_stack( n0 );
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
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // (~1 & global_Output e.FileName )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Output.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );

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
      UInt64 eSource_b_1 = UInt64.MaxValue;
      UInt64 eSource_e_1 = UInt64.MaxValue;
      UInt64 eOutput_b_1 = UInt64.MaxValue;
      UInt64 eOutput_e_1 = UInt64.MaxValue;
      // (~1 & global_Source (~2 e.Source )~2 e.Output )~1
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Source.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eSource_b_1 = bb_2_0;
      RefalRTS.use( ref eSource_b_1 );
      eSource_e_1 = be_2_0;
      RefalRTS.use( ref eSource_e_1 );
      eOutput_b_1 = bb_1_0;
      RefalRTS.use( ref eOutput_b_1 );
      eOutput_e_1 = be_1_0;
      RefalRTS.use( ref eOutput_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_GetFileName: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_GetFileName() { }
  public override string func_name ()
  {
    return "GetFileName";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_GetFileName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      // (~1 & global_Output e.FileName )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Output.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFileName_b_2, ref eFileName_e_2 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, local_83_114_101_102_99_46_115_114_101_102_E_GetFileName_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n4, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_Output.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n5, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eFileName_b_2, eFileName_e_2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
      UInt64 eSource_b_1 = UInt64.MaxValue;
      UInt64 eSource_e_1 = UInt64.MaxValue;
      UInt64 eOutput_b_1 = UInt64.MaxValue;
      UInt64 eOutput_e_1 = UInt64.MaxValue;
      UInt64 eOutput_b_2 = UInt64.MaxValue;
      UInt64 eOutput_e_2 = UInt64.MaxValue;
      // (~1 & global_Source (~2 e.Source )~2 e.Output )~1
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Source.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eSource_b_1 = bb_2_0;
      RefalRTS.use( ref eSource_b_1 );
      eSource_e_1 = be_2_0;
      RefalRTS.use( ref eSource_e_1 );
      eOutput_b_1 = bb_1_0;
      RefalRTS.use( ref eOutput_b_1 );
      eOutput_e_1 = be_1_0;
      RefalRTS.use( ref eOutput_e_1 );
      RefalRTS.check_evar( ref eOutput_b_2, ref eOutput_e_2 );
      RefalRTS.check_evar( ref eSource_b_1, ref eSource_e_1 );
      RefalRTS.check_evar( ref eOutput_b_1, ref eOutput_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eOutput_b_2, ref eOutput_e_2, eOutput_b_1, eOutput_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, local_83_114_101_102_99_46_115_114_101_102_E_GetFileName_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n4, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_Source.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n5, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eOutput_b_2, eOutput_e_2 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eSource_b_1, eSource_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eOutput_b_1, eOutput_e_1 );
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

public class local_83_114_101_102_99_46_115_114_101_102_E_GetFileName_Aux: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_GetFileName_Aux() { }
  public override string func_name ()
  {
    return "GetFileName_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_GetFileName_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // e.FileName '.cs'
      //(0 0 )
      if( ! RefalRTS.char_right( 's', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'c', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( '.', ref bb_0_0, ref be_0_0 ) )
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_DoGetFileName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_DoGetFileName: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_DoGetFileName() { }
  public override string func_name ()
  {
    return "DoGetFileName";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_DoGetFileName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // e.FileName '/'
      //(0 0 )
      if( ! RefalRTS.char_right( '/', ref bb_0_0, ref be_0_0 ) )
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );

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
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // e.FileName '\\'
      //(0 0 )
      if( ! RefalRTS.char_right( '\\', ref bb_0_0, ref be_0_0 ) )
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );

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
      UInt64 sLast_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // e.FileName s.Last
      //(0 0 )
      if( ! RefalRTS.svar_right( ref sLast_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_DoGetFileName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_83_114_101_102_99_46_115_114_101_102_E_Lower.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sLast_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

public class local_83_114_101_102_99_46_115_114_101_102_E_Lower: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_Lower() { }
  public override string func_name ()
  {
    return "Lower";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_Lower();

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
      // s.Char
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_DoLower.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'B' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'D' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'G' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'H' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'J' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'j' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'K' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'L' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'P' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'Q' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'q' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 'W' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'w' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'X' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'Y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, 'Z' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'z' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n54 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n54 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_elem( res, n52 );
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
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_DoLower: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_DoLower() { }
  public override string func_name ()
  {
    return "DoLower";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_DoLower();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sLower_1 = UInt64.MaxValue;
      UInt64 sUpper_1 = UInt64.MaxValue;
      UInt64 sUpper_2 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // s.Upper s.Upper s.Lower e.Tail
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sUpper_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.repeated_stvar_left( ref sUpper_2, sUpper_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLower_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sLower_1 );
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
      UInt64 sChar_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sUpper_1 = UInt64.MaxValue;
      UInt64 sLower_1 = UInt64.MaxValue;
      // s.Char s.Upper s.Lower e.Tail
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUpper_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLower_1, ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_DoLower.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
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
      UInt64 sChar_1 = UInt64.MaxValue;
      // s.Char
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sChar_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_ScanCollisions: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_ScanCollisions() { }
  public override string func_name ()
  {
    return "ScanCollisions";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_ScanCollisions();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eOutput1_b_1 = UInt64.MaxValue;
      UInt64 eOutput1_e_1 = UInt64.MaxValue;
      UInt64 eOutput2_b_1 = UInt64.MaxValue;
      UInt64 eOutput2_e_1 = UInt64.MaxValue;
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eFiles_B_b_1 = UInt64.MaxValue;
      UInt64 eFiles_B_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      UInt64 eFiles_M_b_1 = UInt64.MaxValue;
      UInt64 eFiles_M_e_1 = UInt64.MaxValue;
      UInt64 eFiles_E_b_1 = UInt64.MaxValue;
      UInt64 eFiles_E_e_1 = UInt64.MaxValue;
      // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & global_Output e.Output1 )~2 )~1 e.Files_M (~3 e.FileName 0 (~4 & global_Output e.Output2 )~4 )~3 e.Files_E
      //(0 2 )(1 0 )(2 0 )(3 0 )(4 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eFiles_B_b_1 = bb_0_0;
        eFiles_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eFiles_B_b_1, ref eFiles_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.function_left( global_Output.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.number_right( 0UL, ref bb_1_0, ref be_1_0 ) )
          continue;
        eFileName_b_1 = bb_1_0;
        RefalRTS.use( ref eFileName_b_1 );
        eFileName_e_1 = be_1_0;
        RefalRTS.use( ref eFileName_e_1 );
        eOutput1_b_1 = bb_2_0;
        RefalRTS.use( ref eOutput1_b_1 );
        eOutput1_e_1 = be_2_0;
        RefalRTS.use( ref eOutput1_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          eFiles_M_b_1 = bb_0_1;
          eFiles_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref eFiles_M_b_1, ref eFiles_M_e_1 );
          UInt64 bb_3_0 = 0;
          UInt64 be_3_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          UInt64 bb_4_0 = 0;
          UInt64 be_4_0 = 0;
          if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.function_left( global_Output.instance, ref bb_4_0, ref be_4_0 ) )
            continue;
          if( ! RefalRTS.number_right( 0UL, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.repeated_evar_left( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
            continue;
          eOutput2_b_1 = bb_4_0;
          RefalRTS.use( ref eOutput2_b_1 );
          eOutput2_e_1 = be_4_0;
          RefalRTS.use( ref eOutput2_e_1 );
          eFiles_E_b_1 = bb_0_2;
          RefalRTS.use( ref eFiles_E_b_1 );
          eFiles_E_e_1 = be_0_2;
          RefalRTS.use( ref eFiles_E_e_1 );
          RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );
          RefalRTS.check_evar( ref eOutput2_b_1, ref eOutput2_e_1 );
          RefalRTS.check_evar( ref eOutput1_b_1, ref eOutput1_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n2, 'C' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n3, 'O' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n4, 'M' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n5, 'M' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n6, 'A' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n7, 'N' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n8, 'D' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n10, 'L' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n11, 'I' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n12, 'N' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n13, 'E' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n15, 'E' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n16, 'R' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n17, 'R' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n18, 'O' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n19, 'R' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n20 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n20, ':' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n21 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n22 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n22, 'o' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n23 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n23, 'u' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n24 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n24, 't' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n25 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n25, 'p' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n26 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n26, 'u' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n27 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n27, 't' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n28 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n29 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n29, 'f' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n30 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n30, 'i' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n31 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n31, 'l' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n32 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n32, 'e' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n33 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n33, 's' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n34 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n34, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n35 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n35, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n36 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n36, 'a' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n37 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n37, 'n' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n38 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n38, 'd' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n39 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n39, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n40 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n41 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n41, 'h' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n42 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n42, 'a' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n43 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n43, 's' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n44 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n44, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n45 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n45, 's' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n46 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n46, 'o' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n47 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n47, 'm' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n48 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n48, 'e' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n49 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n49, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n50 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n50, 'f' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n51 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n51, 'i' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n52 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n52, 'l' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n53 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n53, 'e' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n54 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n54, 'n' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n55 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n55, 'a' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n56 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n56, 'm' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n57 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n57, 'e' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n58 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_char( ref n58, ' ' ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n59 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n59 ) )
            return RefalRTS.FnResult.NoMemory;
          RefalRTS.push_stack( n59 );
          RefalRTS.push_stack( n0 );
          res = RefalRTS.splice_elem( res, n59 );
          res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
          res = RefalRTS.splice_elem( res, n58 );
          res = RefalRTS.splice_elem( res, n57 );
          res = RefalRTS.splice_elem( res, n56 );
          res = RefalRTS.splice_elem( res, n55 );
          res = RefalRTS.splice_elem( res, n54 );
          res = RefalRTS.splice_elem( res, n53 );
          res = RefalRTS.splice_elem( res, n52 );
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
          res = RefalRTS.splice_evar( res, eOutput2_b_1, eOutput2_e_1 );
          res = RefalRTS.splice_elem( res, n39 );
          res = RefalRTS.splice_elem( res, n38 );
          res = RefalRTS.splice_elem( res, n37 );
          res = RefalRTS.splice_elem( res, n36 );
          res = RefalRTS.splice_elem( res, n35 );
          res = RefalRTS.splice_evar( res, eOutput1_b_1, eOutput1_e_1 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eFiles_B_b_1 = UInt64.MaxValue;
      UInt64 eFiles_B_e_1 = UInt64.MaxValue;
      UInt64 tLocation_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      UInt64 eFiles_M_b_1 = UInt64.MaxValue;
      UInt64 eFiles_M_e_1 = UInt64.MaxValue;
      UInt64 eOutput_b_1 = UInt64.MaxValue;
      UInt64 eOutput_e_1 = UInt64.MaxValue;
      UInt64 eFiles_E_b_1 = UInt64.MaxValue;
      UInt64 eFiles_E_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_3 = UInt64.MaxValue;
      UInt64 eFileName_e_3 = UInt64.MaxValue;
      // t.Compiler e.Files_B (~1 e.FileName 0 t.Location )~1 e.Files_M (~2 e.FileName 0 (~3 & global_Output e.Output )~3 )~2 e.Files_E
      //(0 2 )(1 0 )(2 0 )(3 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eFiles_B_b_1 = bb_0_0;
        eFiles_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eFiles_B_b_1, ref eFiles_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.tvar_right( ref tLocation_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.number_right( 0UL, ref bb_1_0, ref be_1_0 ) )
          continue;
        eFileName_b_1 = bb_1_0;
        RefalRTS.use( ref eFileName_b_1 );
        eFileName_e_1 = be_1_0;
        RefalRTS.use( ref eFileName_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          eFiles_M_b_1 = bb_0_1;
          eFiles_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref eFiles_M_b_1, ref eFiles_M_e_1 );
          UInt64 bb_2_0 = 0;
          UInt64 be_2_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          UInt64 bb_3_0 = 0;
          UInt64 be_3_0 = 0;
          if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_2_0, ref be_2_0 ) )
            continue;
          if( ! RefalRTS.function_left( global_Output.instance, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.number_right( 0UL, ref bb_2_0, ref be_2_0 ) )
            continue;
          if( ! RefalRTS.repeated_evar_left( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1, ref bb_2_0, ref be_2_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
            continue;
          eOutput_b_1 = bb_3_0;
          RefalRTS.use( ref eOutput_b_1 );
          eOutput_e_1 = be_3_0;
          RefalRTS.use( ref eOutput_e_1 );
          eFiles_E_b_1 = bb_0_2;
          RefalRTS.use( ref eFiles_E_b_1 );
          eFiles_E_e_1 = be_0_2;
          RefalRTS.use( ref eFiles_E_e_1 );
          RefalRTS.check_evar( ref eFiles_E_b_1, ref eFiles_E_e_1 );
          RefalRTS.check_evar( ref eFileName_b_3, ref eFileName_e_3 );
          RefalRTS.check_evar( ref eOutput_b_1, ref eOutput_e_1 );
          RefalRTS.check_evar( ref eFileName_b_2, ref eFileName_e_2 );
          RefalRTS.check_evar( ref eFiles_M_b_1, ref eFiles_M_e_1 );
          RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );
          RefalRTS.check_evar( ref eFiles_B_b_1, ref eFiles_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_evar( ref eFileName_b_3, ref eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_ScanCollisions.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n3, 1UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n6, 0UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n8, global_Output.instance ) )
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
          if( ! RefalRTS.alloc_function( ref n12, global_DelAccummulator.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n14, global_MapReduce.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n16, local_83_114_101_102_99_46_115_114_101_102_E_Renumerate.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n18, 2UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n19 ) )
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
          RefalRTS.push_stack( n11 );
          res = RefalRTS.splice_elem( res, n20 );
          RefalRTS.push_stack( n19 );
          RefalRTS.push_stack( n13 );
          res = RefalRTS.splice_elem( res, n19 );
          res = RefalRTS.splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
          res = RefalRTS.splice_elem( res, n18 );
          RefalRTS.link_brackets( n15, n17 );
          res = RefalRTS.splice_elem( res, n17 );
          res = RefalRTS.splice_evar( res, eFileName_b_3, eFileName_e_3 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_elem( res, n15 );
          res = RefalRTS.splice_elem( res, n14 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_elem( res, n11 );
          RefalRTS.link_brackets( n5, n10 );
          res = RefalRTS.splice_elem( res, n10 );
          RefalRTS.link_brackets( n7, n9 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_evar( res, eOutput_b_1, eOutput_e_1 );
          res = RefalRTS.splice_elem( res, n8 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_evar( res, eFileName_b_2, eFileName_e_2 );
          res = RefalRTS.splice_elem( res, n5 );
          res = RefalRTS.splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_stvar( res, tLocation_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
          res = RefalRTS.splice_stvar( res, tCompiler_1 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eFiles_B_b_1 = UInt64.MaxValue;
      UInt64 eFiles_B_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      UInt64 eOutput_b_1 = UInt64.MaxValue;
      UInt64 eOutput_e_1 = UInt64.MaxValue;
      UInt64 eFiles_M_b_1 = UInt64.MaxValue;
      UInt64 eFiles_M_e_1 = UInt64.MaxValue;
      UInt64 eFiles_E_b_1 = UInt64.MaxValue;
      UInt64 eFiles_E_e_1 = UInt64.MaxValue;
      UInt64 tLocation_1 = UInt64.MaxValue;
      UInt64 eFileName_b_3 = UInt64.MaxValue;
      UInt64 eFileName_e_3 = UInt64.MaxValue;
      // t.Compiler e.Files_B (~1 e.FileName 0 (~2 & global_Output e.Output )~2 )~1 e.Files_M (~3 e.FileName 0 t.Location )~3 e.Files_E
      //(0 2 )(1 0 )(2 0 )(3 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eFiles_B_b_1 = bb_0_0;
        eFiles_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eFiles_B_b_1, ref eFiles_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        UInt64 bb_2_0 = 0;
        UInt64 be_2_0 = 0;
        if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.function_left( global_Output.instance, ref bb_2_0, ref be_2_0 ) )
          continue;
        if( ! RefalRTS.number_right( 0UL, ref bb_1_0, ref be_1_0 ) )
          continue;
        eFileName_b_1 = bb_1_0;
        RefalRTS.use( ref eFileName_b_1 );
        eFileName_e_1 = be_1_0;
        RefalRTS.use( ref eFileName_e_1 );
        eOutput_b_1 = bb_2_0;
        RefalRTS.use( ref eOutput_b_1 );
        eOutput_e_1 = be_2_0;
        RefalRTS.use( ref eOutput_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          eFiles_M_b_1 = bb_0_1;
          eFiles_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref eFiles_M_b_1, ref eFiles_M_e_1 );
          UInt64 bb_3_0 = 0;
          UInt64 be_3_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.repeated_evar_left( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.number_left( 0UL, ref bb_3_0, ref be_3_0 ) )
            continue;
          eFiles_E_b_1 = bb_0_2;
          RefalRTS.use( ref eFiles_E_b_1 );
          eFiles_E_e_1 = be_0_2;
          RefalRTS.use( ref eFiles_E_e_1 );
          if( ! RefalRTS.tvar_left( ref tLocation_1, ref bb_3_0, ref be_3_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
            continue;
          RefalRTS.check_evar( ref eFiles_E_b_1, ref eFiles_E_e_1 );
          RefalRTS.check_evar( ref eFileName_b_3, ref eFileName_e_3 );
          RefalRTS.check_evar( ref eFileName_b_2, ref eFileName_e_2 );
          RefalRTS.check_evar( ref eFiles_M_b_1, ref eFiles_M_e_1 );
          RefalRTS.check_evar( ref eOutput_b_1, ref eOutput_e_1 );
          RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );
          RefalRTS.check_evar( ref eFiles_B_b_1, ref eFiles_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_evar( ref eFileName_b_3, ref eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_ScanCollisions.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n3, 0UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n5, global_Output.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n9, 1UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n11 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n12, global_DelAccummulator.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n13 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n14, global_MapReduce.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n16 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n16, local_83_114_101_102_99_46_115_114_101_102_E_Renumerate.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n17 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n18 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n18, 2UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n19 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_call( ref n19 ) )
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
          RefalRTS.push_stack( n11 );
          res = RefalRTS.splice_elem( res, n20 );
          RefalRTS.push_stack( n19 );
          RefalRTS.push_stack( n13 );
          res = RefalRTS.splice_elem( res, n19 );
          res = RefalRTS.splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
          res = RefalRTS.splice_elem( res, n18 );
          RefalRTS.link_brackets( n15, n17 );
          res = RefalRTS.splice_elem( res, n17 );
          res = RefalRTS.splice_evar( res, eFileName_b_3, eFileName_e_3 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_elem( res, n15 );
          res = RefalRTS.splice_elem( res, n14 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_elem( res, n11 );
          RefalRTS.link_brackets( n8, n10 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_stvar( res, tLocation_1 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_evar( res, eFileName_b_2, eFileName_e_2 );
          res = RefalRTS.splice_elem( res, n8 );
          res = RefalRTS.splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
          RefalRTS.link_brackets( n2, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          RefalRTS.link_brackets( n4, n6 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_evar( res, eOutput_b_1, eOutput_e_1 );
          res = RefalRTS.splice_elem( res, n5 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
          res = RefalRTS.splice_stvar( res, tCompiler_1 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eFiles_B_b_1 = UInt64.MaxValue;
      UInt64 eFiles_B_e_1 = UInt64.MaxValue;
      UInt64 tLocation1_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      UInt64 eFiles_M_b_1 = UInt64.MaxValue;
      UInt64 eFiles_M_e_1 = UInt64.MaxValue;
      UInt64 eFiles_E_b_1 = UInt64.MaxValue;
      UInt64 eFiles_E_e_1 = UInt64.MaxValue;
      UInt64 tLocation2_1 = UInt64.MaxValue;
      UInt64 eFileName_b_3 = UInt64.MaxValue;
      UInt64 eFileName_e_3 = UInt64.MaxValue;
      // t.Compiler e.Files_B (~1 e.FileName 0 t.Location1 )~1 e.Files_M (~2 e.FileName 0 t.Location2 )~2 e.Files_E
      //(0 2 )(1 0 )(2 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eFiles_B_b_1 = bb_0_0;
        eFiles_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eFiles_B_b_1, ref eFiles_B_e_1 );
        UInt64 bb_1_0 = 0;
        UInt64 be_1_0 = 0;
        if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.tvar_right( ref tLocation1_1, ref bb_1_0, ref be_1_0 ) )
          continue;
        if( ! RefalRTS.number_right( 0UL, ref bb_1_0, ref be_1_0 ) )
          continue;
        eFileName_b_1 = bb_1_0;
        RefalRTS.use( ref eFileName_b_1 );
        eFileName_e_1 = be_1_0;
        RefalRTS.use( ref eFileName_e_1 );
        //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Files_M
        for(
          UInt64 boe_0_1 = bb_0_1;
          ! RefalRTS.is_empty( boe_0_1, be_0_1 );
          RefalRTS.next_term( ref boe_0_1, ref be_0_1 )
        ) {
          UInt64 bb_0_2 = bb_0_1;
          UInt64 be_0_2 = be_0_1;
          bb_0_2 = boe_0_1;
          eFiles_M_b_1 = bb_0_1;
          eFiles_M_e_1 = boe_0_1;
          RefalRTS.move_right( ref eFiles_M_b_1, ref eFiles_M_e_1 );
          UInt64 bb_2_0 = 0;
          UInt64 be_2_0 = 0;
          if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_2, ref be_0_2 ) )
            continue;
          if( ! RefalRTS.repeated_evar_left( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1, ref bb_2_0, ref be_2_0 ) )
            continue;
          if( ! RefalRTS.number_left( 0UL, ref bb_2_0, ref be_2_0 ) )
            continue;
          eFiles_E_b_1 = bb_0_2;
          RefalRTS.use( ref eFiles_E_b_1 );
          eFiles_E_e_1 = be_0_2;
          RefalRTS.use( ref eFiles_E_e_1 );
          if( ! RefalRTS.tvar_left( ref tLocation2_1, ref bb_2_0, ref be_2_0 ) )
            continue;
          if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
            continue;
          RefalRTS.check_evar( ref eFiles_E_b_1, ref eFiles_E_e_1 );
          RefalRTS.check_evar( ref eFileName_b_3, ref eFileName_e_3 );
          RefalRTS.check_evar( ref eFileName_b_2, ref eFileName_e_2 );
          RefalRTS.check_evar( ref eFiles_M_b_1, ref eFiles_M_e_1 );
          RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );
          RefalRTS.check_evar( ref eFiles_B_b_1, ref eFiles_B_e_1 );

          RefalRTS.reset_allocator();
          UInt64 res = arg_begin;
          if( ! RefalRTS.copy_evar( ref eFileName_b_3, ref eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n0 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n0 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n1 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_ScanCollisions.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n2 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n3 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n3, 0UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n4 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n5 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n5 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n6 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n6, 1UL ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n7 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n8 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n8 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n9 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n9, global_DelAccummulator.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n10 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_call( ref n10 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n11 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n11, global_MapReduce.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n12 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n13 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_function( ref n13, local_83_114_101_102_99_46_115_114_101_102_E_Renumerate.instance ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n14 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_close_bracket( ref n14 ) )
            return RefalRTS.FnResult.NoMemory;
          UInt64 n15 = UInt64.MaxValue;
          if( ! RefalRTS.alloc_number( ref n15, 2UL ) )
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
          RefalRTS.push_stack( n8 );
          res = RefalRTS.splice_elem( res, n17 );
          RefalRTS.push_stack( n16 );
          RefalRTS.push_stack( n10 );
          res = RefalRTS.splice_elem( res, n16 );
          res = RefalRTS.splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
          res = RefalRTS.splice_elem( res, n15 );
          RefalRTS.link_brackets( n12, n14 );
          res = RefalRTS.splice_elem( res, n14 );
          res = RefalRTS.splice_evar( res, eFileName_b_3, eFileName_e_3 );
          res = RefalRTS.splice_elem( res, n13 );
          res = RefalRTS.splice_elem( res, n12 );
          res = RefalRTS.splice_elem( res, n11 );
          res = RefalRTS.splice_elem( res, n10 );
          res = RefalRTS.splice_elem( res, n9 );
          res = RefalRTS.splice_elem( res, n8 );
          RefalRTS.link_brackets( n5, n7 );
          res = RefalRTS.splice_elem( res, n7 );
          res = RefalRTS.splice_stvar( res, tLocation2_1 );
          res = RefalRTS.splice_elem( res, n6 );
          res = RefalRTS.splice_evar( res, eFileName_b_2, eFileName_e_2 );
          res = RefalRTS.splice_elem( res, n5 );
          res = RefalRTS.splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
          RefalRTS.link_brackets( n2, n4 );
          res = RefalRTS.splice_elem( res, n4 );
          res = RefalRTS.splice_stvar( res, tLocation1_1 );
          res = RefalRTS.splice_elem( res, n3 );
          res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
          res = RefalRTS.splice_elem( res, n2 );
          res = RefalRTS.splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
          res = RefalRTS.splice_stvar( res, tCompiler_1 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      // t.Compiler e.Files
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eFiles_b_1 = bb_0_0;
      RefalRTS.use( ref eFiles_b_1 );
      eFiles_e_1 = be_0_0;
      RefalRTS.use( ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFiles_b_1, ref eFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_Link.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_83_114_101_102_99_46_115_114_101_102_E_CompileEachFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eFiles_b_1, eFiles_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_Renumerate: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_Renumerate() { }
  public override string func_name ()
  {
    return "Renumerate";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_Renumerate();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eSource_b_1 = UInt64.MaxValue;
      UInt64 eSource_e_1 = UInt64.MaxValue;
      UInt64 eOutput_b_1 = UInt64.MaxValue;
      UInt64 eOutput_e_1 = UInt64.MaxValue;
      UInt64 sNextNumber_1 = UInt64.MaxValue;
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      UInt64 sNextNumber_2 = UInt64.MaxValue;
      // e.FileName s.NextNumber (~1 e.FileName 0 (~2 & global_Source (~3 e.Source )~3 e.Output )~2 )~1
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Source.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.number_right( 0UL, ref bb_1_0, ref be_1_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_2_0, ref be_2_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      if( ! RefalRTS.repeated_evar_left( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eSource_b_1 = bb_3_0;
      RefalRTS.use( ref eSource_b_1 );
      eSource_e_1 = be_3_0;
      RefalRTS.use( ref eSource_e_1 );
      eOutput_b_1 = bb_2_0;
      RefalRTS.use( ref eOutput_b_1 );
      eOutput_e_1 = be_2_0;
      RefalRTS.use( ref eOutput_e_1 );
      if( ! RefalRTS.svar_left( ref sNextNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eOutput_b_1, ref eOutput_e_1 );
      RefalRTS.check_evar( ref eSource_b_1, ref eSource_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sNextNumber_2, sNextNumber_1 ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_Source.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n3, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n4, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eOutput_b_1, eOutput_e_1 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eSource_b_1, eSource_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNextNumber_2 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sNextNumber_1 );
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
      UInt64 tNextFile_1 = UInt64.MaxValue;
      UInt64 sNextNumber_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // e.FileName s.NextNumber t.NextFile
      //(0 0 )
      if( ! RefalRTS.tvar_right( ref tNextFile_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_right( ref sNextNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tNextFile_1 );
      res = RefalRTS.splice_stvar( res, sNextNumber_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_CompileEachFile: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_CompileEachFile() { }
  public override string func_name ()
  {
    return "CompileEachFile";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_CompileEachFile();

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
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eOutputName_b_2 = UInt64.MaxValue;
      UInt64 eOutputName_e_2 = UInt64.MaxValue;
      // (~1 e.FileName s.Num (~2 & global_Output e.OutputName )~2 )~1
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Output.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eOutputName_b_1 = bb_2_0;
      RefalRTS.use( ref eOutputName_b_1 );
      eOutputName_e_1 = be_2_0;
      RefalRTS.use( ref eOutputName_e_1 );
      if( ! RefalRTS.svar_right( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eOutputName_b_2, ref eOutputName_e_2 );
      RefalRTS.check_evar( ref eOutputName_b_1, ref eOutputName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eOutputName_b_2, ref eOutputName_e_2, eOutputName_b_1, eOutputName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '+' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'L' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n12, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eOutputName_b_2, eOutputName_e_2 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.push_stack( n11 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
      res = RefalRTS.splice_elem( res, n10 );
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSource_b_1 = UInt64.MaxValue;
      UInt64 eSource_e_1 = UInt64.MaxValue;
      UInt64 eOutput_b_1 = UInt64.MaxValue;
      UInt64 eOutput_e_1 = UInt64.MaxValue;
      UInt64 sNum_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eSource_b_2 = UInt64.MaxValue;
      UInt64 eSource_e_2 = UInt64.MaxValue;
      // (~1 e.FileName s.Num (~2 & global_Source (~3 e.Source )~3 e.Output )~2 )~1
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Source.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eSource_b_1 = bb_3_0;
      RefalRTS.use( ref eSource_b_1 );
      eSource_e_1 = be_3_0;
      RefalRTS.use( ref eSource_e_1 );
      eOutput_b_1 = bb_2_0;
      RefalRTS.use( ref eOutput_b_1 );
      eOutput_e_1 = be_2_0;
      RefalRTS.use( ref eOutput_e_1 );
      if( ! RefalRTS.svar_right( ref sNum_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eOutput_b_1, ref eOutput_e_1 );
      RefalRTS.check_evar( ref eSource_b_2, ref eSource_e_2 );
      RefalRTS.check_evar( ref eSource_b_1, ref eSource_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eSource_b_2, ref eSource_e_2, eSource_b_1, eSource_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_83_114_101_102_99_46_115_114_101_102_E_SwCompiled.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_WriteLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, '*' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ':' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n18, global_CompileFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n22, local_83_114_101_102_99_46_115_114_101_102_E_FileNum.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n23 ) )
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
      RefalRTS.push_stack( n23 );
      RefalRTS.push_stack( n21 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_evar( res, eOutput_b_1, eOutput_e_1 );
      res = RefalRTS.splice_stvar( res, sNum_1 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      RefalRTS.link_brackets( n19, n20 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_evar( res, eSource_b_2, eSource_e_2 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eSource_b_1, eSource_e_1 );
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

public class local_83_114_101_102_99_46_115_114_101_102_E_FileNum: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_FileNum() { }
  public override string func_name ()
  {
    return "FileNum";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_FileNum();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFile_b_1 = UInt64.MaxValue;
      UInt64 eFile_e_1 = UInt64.MaxValue;
      // 0 e.File
      //(0 0 )
      if( ! RefalRTS.number_left( 0UL, ref bb_0_0, ref be_0_0 ) )
        break;
      eFile_b_1 = bb_0_0;
      RefalRTS.use( ref eFile_b_1 );
      eFile_e_1 = be_0_0;
      RefalRTS.use( ref eFile_e_1 );
      RefalRTS.check_evar( ref eFile_b_1, ref eFile_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eFile_b_1, eFile_e_1 );
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
      UInt64 eFile_b_1 = UInt64.MaxValue;
      UInt64 eFile_e_1 = UInt64.MaxValue;
      // s.Number e.File '.cs'
      //(0 0 )
      if( ! RefalRTS.char_right( 's', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'c', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( '.', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eFile_b_1 = bb_0_0;
      RefalRTS.use( ref eFile_b_1 );
      eFile_e_1 = be_0_0;
      RefalRTS.use( ref eFile_e_1 );
      RefalRTS.check_evar( ref eFile_b_1, ref eFile_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '@' ) )
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
      if( ! RefalRTS.alloc_char( ref n4, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_evar( res, eFile_b_1, eFile_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_SwCompiled: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_SwCompiled() { }
  public override string func_name ()
  {
    return "SwCompiled";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_SwCompiled();

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
      // & global_Success e.OutputName
      //(0 0 )
      if( ! RefalRTS.function_left( global_Success.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eOutputName_b_1 = bb_0_0;
      RefalRTS.use( ref eOutputName_b_1 );
      eOutputName_e_1 = be_0_0;
      RefalRTS.use( ref eOutputName_e_1 );
      RefalRTS.check_evar( ref eOutputName_b_1, ref eOutputName_e_1 );

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
      res = RefalRTS.splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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
      // & global_Fails
      //(0 0 )
      if( ! RefalRTS.function_left( global_Fails.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

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

public class local_83_114_101_102_99_46_115_114_101_102_E_UnBracketSpace: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_UnBracketSpace() { }
  public override string func_name ()
  {
    return "UnBracketSpace";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_UnBracketSpace();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      // (~1 e.FileName )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_83_114_101_102_99_46_115_114_101_102_E_Link: RefalRTS.Function
{
  private local_83_114_101_102_99_46_115_114_101_102_E_Link() { }
  public override string func_name ()
  {
    return "Link";
  }

  public static readonly RefalRTS.Function instance = new local_83_114_101_102_99_46_115_114_101_102_E_Link();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      // (~1 & global_NoCompile )~1 e.Files
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_NoCompile.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      eFiles_b_1 = bb_0_0;
      RefalRTS.use( ref eFiles_b_1 );
      eFiles_e_1 = be_0_0;
      RefalRTS.use( ref eFiles_e_1 );

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
      UInt64 eCommand_b_1 = UInt64.MaxValue;
      UInt64 eCommand_e_1 = UInt64.MaxValue;
      UInt64 eOutputs_B_b_1 = UInt64.MaxValue;
      UInt64 eOutputs_B_e_1 = UInt64.MaxValue;
      UInt64 eOutputs_E_b_1 = UInt64.MaxValue;
      UInt64 eOutputs_E_e_1 = UInt64.MaxValue;
      // (~1 & global_CompileCommand e.Command )~1 e.Outputs_B & global_Fails e.Outputs_E
      //(0 1 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CompileCommand.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eCommand_b_1 = bb_1_0;
      RefalRTS.use( ref eCommand_b_1 );
      eCommand_e_1 = be_1_0;
      RefalRTS.use( ref eCommand_e_1 );
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Outputs_B
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        eOutputs_B_b_1 = bb_0_0;
        eOutputs_B_e_1 = boe_0_0;
        RefalRTS.move_right( ref eOutputs_B_b_1, ref eOutputs_B_e_1 );
        if( ! RefalRTS.function_left( global_Fails.instance, ref bb_0_1, ref be_0_1 ) )
          continue;
        eOutputs_E_b_1 = bb_0_1;
        RefalRTS.use( ref eOutputs_E_b_1 );
        eOutputs_E_e_1 = be_0_1;
        RefalRTS.use( ref eOutputs_E_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
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
      UInt64 eCommand_b_1 = UInt64.MaxValue;
      UInt64 eCommand_e_1 = UInt64.MaxValue;
      UInt64 eOutputs_b_1 = UInt64.MaxValue;
      UInt64 eOutputs_e_1 = UInt64.MaxValue;
      // (~1 & global_CompileCommand e.Command )~1 e.Outputs
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CompileCommand.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eCommand_b_1 = bb_1_0;
      RefalRTS.use( ref eCommand_b_1 );
      eCommand_e_1 = be_1_0;
      RefalRTS.use( ref eCommand_e_1 );
      eOutputs_b_1 = bb_0_0;
      RefalRTS.use( ref eOutputs_b_1 );
      eOutputs_e_1 = be_0_0;
      RefalRTS.use( ref eOutputs_e_1 );
      RefalRTS.check_evar( ref eOutputs_b_1, ref eOutputs_e_1 );
      RefalRTS.check_evar( ref eCommand_b_1, ref eCommand_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_System.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_83_114_101_102_99_46_115_114_101_102_E_UnBracketSpace.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_WriteLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, '*' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, '*' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 's' ) )
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
      if( ! RefalRTS.alloc_char( ref n34, '*' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, '*' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n36 );
      RefalRTS.push_stack( n7 );
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
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eOutputs_b_1, eOutputs_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eCommand_b_1, eCommand_e_1 );
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
