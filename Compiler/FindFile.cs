// Automatically generated file. Don't edit!
using System;


public class global_Source: RefalRTS.Function
{
  private global_Source() { }
  public override string func_name ()
  {
    return "global_Source";
  }

  public static readonly RefalRTS.Function instance = new global_Source();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Output: RefalRTS.Function
{
  private global_Output() { }
  public override string func_name ()
  {
    return "global_Output";
  }

  public static readonly RefalRTS.Function instance = new global_Output();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_NotFound: RefalRTS.Function
{
  private global_NotFound() { }
  public override string func_name ()
  {
    return "global_NotFound";
  }

  public static readonly RefalRTS.Function instance = new global_NotFound();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_Current: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_Current() { }
  public override string func_name ()
  {
    return "Current";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_Current();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_FindFiles: RefalRTS.Function
{
  private global_FindFiles() { }
  public override string func_name ()
  {
    return "global_FindFiles";
  }

  public static readonly RefalRTS.Function instance = new global_FindFiles();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eFiles_b_1 = UInt64.MaxValue;
      UInt64 eFiles_e_1 = UInt64.MaxValue;
      // (~1 e.Folders )~1 e.Files
      //(0 0 )(1 0 )
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
      if( ! RefalRTS.alloc_function( ref n1, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_ByFolders.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_Current.instance ) )
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
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
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

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_ByFolders: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_ByFolders() { }
  public override string func_name ()
  {
    return "AnalyzeFile_ByFolders";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_ByFolders();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFolders_b_1 = UInt64.MaxValue;
      UInt64 eFolders_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      // e.Folders (~1 e.FileName )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFolders_b_1 = bb_0_0;
      RefalRTS.use( ref eFolders_b_1 );
      eFolders_e_1 = be_0_0;
      RefalRTS.use( ref eFolders_e_1 );
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFolders_b_1, ref eFolders_e_1 );
      RefalRTS.check_evar( ref eFileName_b_2, ref eFileName_e_2 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_CheckNotFound.instance ) )
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
      if( ! RefalRTS.alloc_function( ref n5, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n7, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeInFolder.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eFolders_b_1, eFolders_e_1 );
      RefalRTS.link_brackets( n6, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eFileName_b_2, eFileName_e_2 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeInFolder: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeInFolder() { }
  public override string func_name ()
  {
    return "AnalyzeInFolder";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeInFolder();

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
      // e.FileName & local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_Current
      //(0 0 )
      if( ! RefalRTS.function_right( local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_Current.instance, ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile.instance ) )
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eFolder_b_1 = UInt64.MaxValue;
      UInt64 eFolder_e_1 = UInt64.MaxValue;
      // e.FileName (~1 e.Folder )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );
      eFolder_b_1 = bb_1_0;
      RefalRTS.use( ref eFolder_b_1 );
      eFolder_e_1 = be_1_0;
      RefalRTS.use( ref eFolder_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFolder_b_1, ref eFolder_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eFolder_b_1, eFolder_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_CheckNotFound: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_CheckNotFound() { }
  public override string func_name ()
  {
    return "AnalyzeFile_CheckNotFound";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_CheckNotFound();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
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
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eVariants_b_1 = UInt64.MaxValue;
      UInt64 eVariants_e_1 = UInt64.MaxValue;
      // (~1 e.FileName )~1 (~2 & global_Source (~3 e.Source )~3 e.Output )~2 e.Variants
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Source.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_3_0, ref be_3_0, ref bb_2_0, ref be_2_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      eSource_b_1 = bb_3_0;
      RefalRTS.use( ref eSource_b_1 );
      eSource_e_1 = be_3_0;
      RefalRTS.use( ref eSource_e_1 );
      eOutput_b_1 = bb_2_0;
      RefalRTS.use( ref eOutput_b_1 );
      eOutput_e_1 = be_2_0;
      RefalRTS.use( ref eOutput_e_1 );
      eVariants_b_1 = bb_0_0;
      RefalRTS.use( ref eVariants_b_1 );
      eVariants_e_1 = be_0_0;
      RefalRTS.use( ref eVariants_e_1 );
      RefalRTS.check_evar( ref eOutput_b_1, ref eOutput_e_1 );
      RefalRTS.check_evar( ref eSource_b_1, ref eSource_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Source.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eOutput_b_1, eOutput_e_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eSource_b_1, eSource_e_1 );
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
      UInt64 eOutput_b_1 = UInt64.MaxValue;
      UInt64 eOutput_e_1 = UInt64.MaxValue;
      UInt64 eFileName_b_1 = UInt64.MaxValue;
      UInt64 eFileName_e_1 = UInt64.MaxValue;
      UInt64 eVariants_b_1 = UInt64.MaxValue;
      UInt64 eVariants_e_1 = UInt64.MaxValue;
      // (~1 e.FileName )~1 (~2 & global_Output e.Output )~2 e.Variants
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_Output.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      eOutput_b_1 = bb_2_0;
      RefalRTS.use( ref eOutput_b_1 );
      eOutput_e_1 = be_2_0;
      RefalRTS.use( ref eOutput_e_1 );
      eVariants_b_1 = bb_0_0;
      RefalRTS.use( ref eVariants_b_1 );
      eVariants_e_1 = be_0_0;
      RefalRTS.use( ref eVariants_e_1 );
      RefalRTS.check_evar( ref eOutput_b_1, ref eOutput_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Output.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eOutput_b_1, eOutput_e_1 );
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
      UInt64 eVariants_b_1 = UInt64.MaxValue;
      UInt64 eVariants_e_1 = UInt64.MaxValue;
      UInt64 eNotFoundPath_b_1 = UInt64.MaxValue;
      UInt64 eNotFoundPath_e_1 = UInt64.MaxValue;
      // (~1 e.FileName )~1 (~2 & global_NotFound e.NotFoundPath )~2 e.Variants
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_NotFound.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      eNotFoundPath_b_1 = bb_2_0;
      RefalRTS.use( ref eNotFoundPath_b_1 );
      eNotFoundPath_e_1 = be_2_0;
      RefalRTS.use( ref eNotFoundPath_e_1 );
      eVariants_b_1 = bb_0_0;
      RefalRTS.use( ref eVariants_b_1 );
      eVariants_e_1 = be_0_0;
      RefalRTS.use( ref eVariants_e_1 );
      RefalRTS.check_evar( ref eVariants_b_1, ref eVariants_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile_CheckNotFound.instance ) )
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
      res = RefalRTS.splice_evar( res, eVariants_b_1, eVariants_e_1 );
      RefalRTS.link_brackets( n2, n3 );
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
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_NotFound.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
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

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_ExistFile_T: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_ExistFile_T() { }
  public override string func_name ()
  {
    return "ExistFile_T";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_ExistFile_T();

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
      // e.FileName
      //(0 0 )
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFileName_b_2, ref eFileName_e_2 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_ExistFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eFileName_b_2, eFileName_e_2 );
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

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile() { }
  public override string func_name ()
  {
    return "AnalyzeFile";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeFile();

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
      // e.FileName '.sref'
      //(0 0 )
      if( ! RefalRTS.char_right( 'f', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'e', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'r', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 's', ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeSource_CheckExist.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_ExistFile_T.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
      if( ! RefalRTS.alloc_function( ref n1, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeOutput_CheckExist.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_ExistFile_T.instance ) )
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
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
      UInt64 eFileName_b_2 = UInt64.MaxValue;
      UInt64 eFileName_e_2 = UInt64.MaxValue;
      // e.FileName
      //(0 0 )
      eFileName_b_1 = bb_0_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_0_0;
      RefalRTS.use( ref eFileName_e_1 );
      RefalRTS.check_evar( ref eFileName_b_2, ref eFileName_e_2 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eFileName_b_2, ref eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeBoth_CheckExist.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_ExistFile_T.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_ExistFile_T.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 's' ) )
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
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_evar( res, eFileName_b_2, eFileName_e_2 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n2, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
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

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeSource_CheckExist: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeSource_CheckExist() { }
  public override string func_name ()
  {
    return "AnalyzeSource_CheckExist";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeSource_CheckExist();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eUnitName_b_1 = UInt64.MaxValue;
      UInt64 eUnitName_e_1 = UInt64.MaxValue;
      UInt64 eUnitName_b_2 = UInt64.MaxValue;
      UInt64 eUnitName_e_2 = UInt64.MaxValue;
      // & global_True e.UnitName '.sref'
      //(0 0 )
      if( ! RefalRTS.function_left( global_True.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'f', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'e', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'r', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 's', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( '.', ref bb_0_0, ref be_0_0 ) )
        break;
      eUnitName_b_1 = bb_0_0;
      RefalRTS.use( ref eUnitName_b_1 );
      eUnitName_e_1 = be_0_0;
      RefalRTS.use( ref eUnitName_e_1 );
      RefalRTS.check_evar( ref eUnitName_b_2, ref eUnitName_e_2 );
      RefalRTS.check_evar( ref eUnitName_b_1, ref eUnitName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eUnitName_b_2, ref eUnitName_e_2, eUnitName_b_1, eUnitName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Source.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eUnitName_b_2, eUnitName_e_2 );
      RefalRTS.link_brackets( n2, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eUnitName_b_1, eUnitName_e_1 );
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
      UInt64 eSourceName_b_1 = UInt64.MaxValue;
      UInt64 eSourceName_e_1 = UInt64.MaxValue;
      // & global_False e.SourceName
      //(0 0 )
      if( ! RefalRTS.function_left( global_False.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eSourceName_b_1 = bb_0_0;
      RefalRTS.use( ref eSourceName_b_1 );
      eSourceName_e_1 = be_0_0;
      RefalRTS.use( ref eSourceName_e_1 );
      RefalRTS.check_evar( ref eSourceName_b_1, ref eSourceName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_NotFound.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eSourceName_b_1, eSourceName_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeOutput_CheckExist: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeOutput_CheckExist() { }
  public override string func_name ()
  {
    return "AnalyzeOutput_CheckExist";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeOutput_CheckExist();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eOutName_b_1 = UInt64.MaxValue;
      UInt64 eOutName_e_1 = UInt64.MaxValue;
      // & global_True e.OutName
      //(0 0 )
      if( ! RefalRTS.function_left( global_True.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eOutName_b_1 = bb_0_0;
      RefalRTS.use( ref eOutName_b_1 );
      eOutName_e_1 = be_0_0;
      RefalRTS.use( ref eOutName_e_1 );
      RefalRTS.check_evar( ref eOutName_b_1, ref eOutName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Output.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eOutName_b_1, eOutName_e_1 );
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
      UInt64 eOutName_b_1 = UInt64.MaxValue;
      UInt64 eOutName_e_1 = UInt64.MaxValue;
      // & global_False e.OutName
      //(0 0 )
      if( ! RefalRTS.function_left( global_False.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eOutName_b_1 = bb_0_0;
      RefalRTS.use( ref eOutName_b_1 );
      eOutName_e_1 = be_0_0;
      RefalRTS.use( ref eOutName_e_1 );
      RefalRTS.check_evar( ref eOutName_b_1, ref eOutName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_NotFound.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eOutName_b_1, eOutName_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeBoth_CheckExist: RefalRTS.Function
{
  private local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeBoth_CheckExist() { }
  public override string func_name ()
  {
    return "AnalyzeBoth_CheckExist";
  }

  public static readonly RefalRTS.Function instance = new local_70_105_110_100_70_105_108_101_46_115_114_101_102_E_AnalyzeBoth_CheckExist();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eSourceName_b_1 = UInt64.MaxValue;
      UInt64 eSourceName_e_1 = UInt64.MaxValue;
      UInt64 eOutName_b_1 = UInt64.MaxValue;
      UInt64 eOutName_e_1 = UInt64.MaxValue;
      UInt64 sRes_1 = UInt64.MaxValue;
      // (~1 & global_True e.SourceName )~1 s.Res e.OutName
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_True.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eSourceName_b_1 = bb_1_0;
      RefalRTS.use( ref eSourceName_b_1 );
      eSourceName_e_1 = be_1_0;
      RefalRTS.use( ref eSourceName_e_1 );
      if( ! RefalRTS.svar_left( ref sRes_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eOutName_b_1 = bb_0_0;
      RefalRTS.use( ref eOutName_b_1 );
      eOutName_e_1 = be_0_0;
      RefalRTS.use( ref eOutName_e_1 );
      RefalRTS.check_evar( ref eOutName_b_1, ref eOutName_e_1 );
      RefalRTS.check_evar( ref eSourceName_b_1, ref eSourceName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Source.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eOutName_b_1, eOutName_e_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eSourceName_b_1, eSourceName_e_1 );
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
      UInt64 eOutName_b_1 = UInt64.MaxValue;
      UInt64 eOutName_e_1 = UInt64.MaxValue;
      UInt64 eSourceName_b_1 = UInt64.MaxValue;
      UInt64 eSourceName_e_1 = UInt64.MaxValue;
      // (~1 & global_False e.SourceName )~1 & global_True e.OutName
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_False.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( global_True.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eSourceName_b_1 = bb_1_0;
      RefalRTS.use( ref eSourceName_b_1 );
      eSourceName_e_1 = be_1_0;
      RefalRTS.use( ref eSourceName_e_1 );
      eOutName_b_1 = bb_0_0;
      RefalRTS.use( ref eOutName_b_1 );
      eOutName_e_1 = be_0_0;
      RefalRTS.use( ref eOutName_e_1 );
      RefalRTS.check_evar( ref eOutName_b_1, ref eOutName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Output.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eOutName_b_1, eOutName_e_1 );
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
      UInt64 eUnitName_b_1 = UInt64.MaxValue;
      UInt64 eUnitName_e_1 = UInt64.MaxValue;
      UInt64 eUnitName_b_2 = UInt64.MaxValue;
      UInt64 eUnitName_e_2 = UInt64.MaxValue;
      // (~1 & global_False e.UnitName '.sref )~1 & global_False e.UnitName '.cs'
      //(0 0 )(1 0 )
      if( ! RefalRTS.char_right( 's', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'c', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( '.', ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_False.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.function_left( global_False.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_right( 'f', ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_right( 'e', ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_right( 'r', ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_right( 's', ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.char_right( '.', ref bb_1_0, ref be_1_0 ) )
        break;
      eUnitName_b_1 = bb_1_0;
      RefalRTS.use( ref eUnitName_b_1 );
      eUnitName_e_1 = be_1_0;
      RefalRTS.use( ref eUnitName_e_1 );
      if( ! RefalRTS.repeated_evar_left( ref eUnitName_b_2, ref eUnitName_e_2, eUnitName_b_1, eUnitName_e_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eUnitName_b_1, ref eUnitName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_NotFound.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eUnitName_b_1, eUnitName_e_1 );
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
