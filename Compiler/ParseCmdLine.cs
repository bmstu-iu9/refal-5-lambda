// Automatically generated file. Don't edit!
using System;


public class global_ParseCommandLine: RefalRTS.Function
{
  private global_ParseCommandLine() { }
  public override string func_name ()
  {
    return "global_ParseCommandLine";
  }

  public static readonly RefalRTS.Function instance = new global_ParseCommandLine();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eArguments_b_1 = UInt64.MaxValue;
      UInt64 eArguments_e_1 = UInt64.MaxValue;
      // e.Arguments
      //(0 0 )
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
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseCommandLine.instance ) )
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
      res = RefalRTS.splice_evar( res, eArguments_b_1, eArguments_e_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
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

public class global_NoCompile: RefalRTS.Function
{
  private global_NoCompile() { }
  public override string func_name ()
  {
    return "global_NoCompile";
  }

  public static readonly RefalRTS.Function instance = new global_NoCompile();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CompileCommand: RefalRTS.Function
{
  private global_CompileCommand() { }
  public override string func_name ()
  {
    return "global_CompileCommand";
  }

  public static readonly RefalRTS.Function instance = new global_CompileCommand();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_CmdLineError: RefalRTS.Function
{
  private global_CmdLineError() { }
  public override string func_name ()
  {
    return "global_CmdLineError";
  }

  public static readonly RefalRTS.Function instance = new global_CmdLineError();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseCommandLine: RefalRTS.Function
{
  private local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseCommandLine() { }
  public override string func_name ()
  {
    return "DoParseCommandLine";
  }

  public static readonly RefalRTS.Function instance = new local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseCommandLine();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eCompileCommand_b_1 = UInt64.MaxValue;
      UInt64 eCompileCommand_e_1 = UInt64.MaxValue;
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3 (~4 e.CompileCommand )~4 e.Files
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'c', ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eCompileCommand_b_1 = bb_4_0;
      RefalRTS.use( ref eCompileCommand_b_1 );
      eCompileCommand_e_1 = be_4_0;
      RefalRTS.use( ref eCompileCommand_e_1 );
      eFiles_b_1 = bb_0_0;
      RefalRTS.use( ref eFiles_b_1 );
      eFiles_e_1 = be_0_0;
      RefalRTS.use( ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFiles_b_1, ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );
      RefalRTS.check_evar( ref eCompileCommand_b_1, ref eCompileCommand_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNames.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_CompileCommand.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
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
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFiles_b_1, eFiles_e_1 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n2, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eCompileCommand_b_1, eCompileCommand_e_1 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3
      //(0 0 )(1 0 )(2 0 )(3 0 )
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'c', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdLineError.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '-' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, '+' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, '+' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n54 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n54 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eDirectory_b_1 = UInt64.MaxValue;
      UInt64 eDirectory_e_1 = UInt64.MaxValue;
      UInt64 eOptions_b_1 = UInt64.MaxValue;
      UInt64 eOptions_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3 (~4 e.Directory )~4 e.Options
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'd', ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eDirectory_b_1 = bb_4_0;
      RefalRTS.use( ref eDirectory_b_1 );
      eDirectory_e_1 = be_4_0;
      RefalRTS.use( ref eDirectory_e_1 );
      eOptions_b_1 = bb_0_0;
      RefalRTS.use( ref eOptions_b_1 );
      eOptions_e_1 = be_0_0;
      RefalRTS.use( ref eOptions_e_1 );
      RefalRTS.check_evar( ref eOptions_b_1, ref eOptions_e_1 );
      RefalRTS.check_evar( ref eDirectory_b_1, ref eDirectory_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseCommandLine.instance ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eOptions_b_1, eOptions_e_1 );
      RefalRTS.link_brackets( n4, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eDirectory_b_1, eDirectory_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3
      //(0 0 )(1 0 )(2 0 )(3 0 )
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'd', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdLineError.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '-' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'd' ) )
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
      if( ! RefalRTS.alloc_char( ref n31, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n43 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eOptions_b_1 = UInt64.MaxValue;
      UInt64 eOptions_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-- )~3 e.Options
      //(0 0 )(1 0 )(2 0 )(3 0 )
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eOptions_b_1 = bb_0_0;
      RefalRTS.use( ref eOptions_b_1 );
      eOptions_e_1 = be_0_0;
      RefalRTS.use( ref eOptions_e_1 );
      RefalRTS.check_evar( ref eOptions_b_1, ref eOptions_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNamesOnly.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_NoCompile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
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
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eOptions_b_1, eOptions_e_1 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eNextFileName_b_1 = UInt64.MaxValue;
      UInt64 eNextFileName_e_1 = UInt64.MaxValue;
      UInt64 eOptions_b_1 = UInt64.MaxValue;
      UInt64 eOptions_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
      //(0 0 )(1 0 )(2 0 )(3 0 )
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
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eNextFileName_b_1 = bb_3_0;
      RefalRTS.use( ref eNextFileName_b_1 );
      eNextFileName_e_1 = be_3_0;
      RefalRTS.use( ref eNextFileName_e_1 );
      eOptions_b_1 = bb_0_0;
      RefalRTS.use( ref eOptions_b_1 );
      eOptions_e_1 = be_0_0;
      RefalRTS.use( ref eOptions_e_1 );
      RefalRTS.check_evar( ref eOptions_b_1, ref eOptions_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eNextFileName_b_1, ref eNextFileName_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseCommandLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
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
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eOptions_b_1, eOptions_e_1 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n2, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_NoCompile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
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

public class local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNames: RefalRTS.Function
{
  private local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNames() { }
  public override string func_name ()
  {
    return "DoParseFileNames";
  }

  public static readonly RefalRTS.Function instance = new local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNames();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eCompileCommand_b_1 = UInt64.MaxValue;
      UInt64 eCompileCommand_e_1 = UInt64.MaxValue;
      UInt64 eOptions_b_1 = UInt64.MaxValue;
      UInt64 eOptions_e_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3 (~4 e.CompileCommand )~4 e.Options
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'c', ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eCompileCommand_b_1 = bb_4_0;
      RefalRTS.use( ref eCompileCommand_b_1 );
      eCompileCommand_e_1 = be_4_0;
      RefalRTS.use( ref eCompileCommand_e_1 );
      eOptions_b_1 = bb_0_0;
      RefalRTS.use( ref eOptions_b_1 );
      eOptions_e_1 = be_0_0;
      RefalRTS.use( ref eOptions_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdLineError.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'p' ) )
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
      if( ! RefalRTS.alloc_char( ref n11, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, '+' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, '+' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n51 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n51 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 tCompiler_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3
      //(0 0 )(3 0 )(2 0 )(1 0 )
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'c', ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdLineError.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '-' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'C' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, '+' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, '+' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n54 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n54 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eDirectory_b_1 = UInt64.MaxValue;
      UInt64 eDirectory_e_1 = UInt64.MaxValue;
      UInt64 eOptions_b_1 = UInt64.MaxValue;
      UInt64 eOptions_e_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3 (~4 e.Directory )~4 e.Options
      //(0 0 )(1 0 )(2 0 )(3 0 )(4 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'd', ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eDirectory_b_1 = bb_4_0;
      RefalRTS.use( ref eDirectory_b_1 );
      eDirectory_e_1 = be_4_0;
      RefalRTS.use( ref eDirectory_e_1 );
      eOptions_b_1 = bb_0_0;
      RefalRTS.use( ref eOptions_b_1 );
      eOptions_e_1 = be_0_0;
      RefalRTS.use( ref eOptions_e_1 );
      RefalRTS.check_evar( ref eOptions_b_1, ref eOptions_e_1 );
      RefalRTS.check_evar( ref eDirectory_b_1, ref eDirectory_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNames.instance ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eOptions_b_1, eOptions_e_1 );
      RefalRTS.link_brackets( n4, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eDirectory_b_1, eDirectory_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 tCompiler_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3
      //(0 0 )(3 0 )(2 0 )(1 0 )
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( 'd', ref bb_3_0, ref be_3_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_CmdLineError.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '-' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'd' ) )
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
      if( ! RefalRTS.alloc_char( ref n31, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n43 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-- )~3 e.Files
      //(0 0 )(1 0 )(2 0 )(3 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
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
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.char_left( '-', ref bb_3_0, ref be_3_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_3_0, be_3_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eFiles_b_1 = bb_0_0;
      RefalRTS.use( ref eFiles_b_1 );
      eFiles_e_1 = be_0_0;
      RefalRTS.use( ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFiles_b_1, ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNamesOnly.instance ) )
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
      res = RefalRTS.splice_evar( res, eFiles_b_1, eFiles_e_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
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
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eNextFileName_b_1 = UInt64.MaxValue;
      UInt64 eNextFileName_e_1 = UInt64.MaxValue;
      UInt64 eOptions_b_1 = UInt64.MaxValue;
      UInt64 eOptions_e_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
      //(0 0 )(1 0 )(2 0 )(3 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
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
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eNextFileName_b_1 = bb_3_0;
      RefalRTS.use( ref eNextFileName_b_1 );
      eNextFileName_e_1 = be_3_0;
      RefalRTS.use( ref eNextFileName_e_1 );
      eOptions_b_1 = bb_0_0;
      RefalRTS.use( ref eOptions_b_1 );
      eOptions_e_1 = be_0_0;
      RefalRTS.use( ref eOptions_e_1 );
      RefalRTS.check_evar( ref eOptions_b_1, ref eOptions_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eNextFileName_b_1, ref eNextFileName_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNames.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
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
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eOptions_b_1, eOptions_e_1 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n2, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 tCompiler_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
      //(0 0 )(2 0 )(1 0 )
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNamesOnly: RefalRTS.Function
{
  private local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNamesOnly() { }
  public override string func_name ()
  {
    return "DoParseFileNamesOnly";
  }

  public static readonly RefalRTS.Function instance = new local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNamesOnly();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tCompiler_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eNextFileName_b_1 = UInt64.MaxValue;
      UInt64 eNextFileName_e_1 = UInt64.MaxValue;
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Files
      //(0 0 )(1 0 )(2 0 )(3 0 )
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
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
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      eNextFileName_b_1 = bb_3_0;
      RefalRTS.use( ref eNextFileName_b_1 );
      eNextFileName_e_1 = be_3_0;
      RefalRTS.use( ref eNextFileName_e_1 );
      eFiles_b_1 = bb_0_0;
      RefalRTS.use( ref eFiles_b_1 );
      eFiles_e_1 = be_0_0;
      RefalRTS.use( ref eFiles_e_1 );
      RefalRTS.check_evar( ref eFiles_b_1, ref eFiles_e_1 );
      RefalRTS.check_evar( ref eNextFileName_b_1, ref eNextFileName_e_1 );
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_80_97_114_115_101_67_109_100_76_105_110_101_46_115_114_101_102_E_DoParseFileNamesOnly.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
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
      res = RefalRTS.splice_evar( res, eFiles_b_1, eFiles_e_1 );
      RefalRTS.link_brackets( n2, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
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
      UInt64 eScannedFiles_b_1 = UInt64.MaxValue;
      UInt64 eScannedFiles_e_1 = UInt64.MaxValue;
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 tCompiler_1 = UInt64.MaxValue;
      // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
      //(0 0 )(2 0 )(1 0 )
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScannedFiles_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedFiles_b_1 );
      eScannedFiles_e_1 = be_1_0;
      RefalRTS.use( ref eScannedFiles_e_1 );
      eFolders_b_1 = bb_2_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_2_0;
      RefalRTS.use( ref eFolders_e_1 );
      if( ! RefalRTS.tvar_left( ref tCompiler_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eScannedFiles_b_1, ref eScannedFiles_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_stvar( res, tCompiler_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}


//End of file
