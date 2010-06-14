// Automatically generated file. Don't edit!
using System;


public class local_69_114_114_111_114_46_115_114_101_102_E_ErrorList: RefalRTS.Function
{
  private local_69_114_114_111_114_46_115_114_101_102_E_ErrorList() { }
  public override string func_name ()
  {
    return "ErrorList";
  }

  public static readonly RefalRTS.Function instance = new local_69_114_114_111_114_46_115_114_101_102_E_ErrorList();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_EL_Create: RefalRTS.Function
{
  private global_EL_Create() { }
  public override string func_name ()
  {
    return "global_EL_Create";
  }

  public static readonly RefalRTS.Function instance = new global_EL_Create();

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
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
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

public class global_EL_AddError: RefalRTS.Function
{
  private global_EL_AddError() { }
  public override string func_name ()
  {
    return "global_EL_AddError";
  }

  public static readonly RefalRTS.Function instance = new global_EL_AddError();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eErrors_b_1 = UInt64.MaxValue;
      UInt64 eErrors_e_1 = UInt64.MaxValue;
      UInt64 eMessage_b_1 = UInt64.MaxValue;
      UInt64 eMessage_e_1 = UInt64.MaxValue;
      // (~1 & local_69_114_114_111_114_46_115_114_101_102_E_ErrorList e.Errors )~1 e.Message
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eErrors_b_1 = bb_1_0;
      RefalRTS.use( ref eErrors_b_1 );
      eErrors_e_1 = be_1_0;
      RefalRTS.use( ref eErrors_e_1 );
      eMessage_b_1 = bb_0_0;
      RefalRTS.use( ref eMessage_b_1 );
      eMessage_e_1 = be_0_0;
      RefalRTS.use( ref eMessage_e_1 );
      RefalRTS.check_evar( ref eMessage_b_1, ref eMessage_e_1 );
      RefalRTS.check_evar( ref eErrors_b_1, ref eErrors_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, ':' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n2, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eMessage_b_1, eMessage_e_1 );
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
      res = RefalRTS.splice_evar( res, eErrors_b_1, eErrors_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_EL_AddErrorAt: RefalRTS.Function
{
  private global_EL_AddErrorAt() { }
  public override string func_name ()
  {
    return "global_EL_AddErrorAt";
  }

  public static readonly RefalRTS.Function instance = new global_EL_AddErrorAt();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eErrors_b_1 = UInt64.MaxValue;
      UInt64 eErrors_e_1 = UInt64.MaxValue;
      UInt64 sLineNumber_1 = UInt64.MaxValue;
      UInt64 eMessage_b_1 = UInt64.MaxValue;
      UInt64 eMessage_e_1 = UInt64.MaxValue;
      // (~1 & local_69_114_114_111_114_46_115_114_101_102_E_ErrorList e.Errors )~1 s.LineNumber e.Message
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eErrors_b_1 = bb_1_0;
      RefalRTS.use( ref eErrors_b_1 );
      eErrors_e_1 = be_1_0;
      RefalRTS.use( ref eErrors_e_1 );
      if( ! RefalRTS.svar_left( ref sLineNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eMessage_b_1 = bb_0_0;
      RefalRTS.use( ref eMessage_b_1 );
      eMessage_e_1 = be_0_0;
      RefalRTS.use( ref eMessage_e_1 );
      RefalRTS.check_evar( ref eMessage_b_1, ref eMessage_e_1 );
      RefalRTS.check_evar( ref eErrors_b_1, ref eErrors_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'O' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n15, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ':' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n20 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n2, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_evar( res, eMessage_b_1, eMessage_e_1 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n14 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_stvar( res, sLineNumber_1 );
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
      res = RefalRTS.splice_evar( res, eErrors_b_1, eErrors_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_EL_AddUnexpected: RefalRTS.Function
{
  private global_EL_AddUnexpected() { }
  public override string func_name ()
  {
    return "global_EL_AddUnexpected";
  }

  public static readonly RefalRTS.Function instance = new global_EL_AddUnexpected();

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
      UInt64 sLineNumber_1 = UInt64.MaxValue;
      UInt64 eMessage_b_1 = UInt64.MaxValue;
      UInt64 eMessage_e_1 = UInt64.MaxValue;
      UInt64 eExpected_b_1 = UInt64.MaxValue;
      UInt64 eExpected_e_1 = UInt64.MaxValue;
      // t.ErrorList (~1 & global_TkError s.LineNumber e.Message )~1 e.Expected
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkError.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eExpected_b_1 = bb_0_0;
      RefalRTS.use( ref eExpected_b_1 );
      eExpected_e_1 = be_0_0;
      RefalRTS.use( ref eExpected_e_1 );
      if( ! RefalRTS.svar_left( ref sLineNumber_1, ref bb_1_0, ref be_1_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eMessage_b_1, eMessage_e_1 );
      res = RefalRTS.splice_stvar( res, sLineNumber_1 );
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
      UInt64 sLineNumber_1 = UInt64.MaxValue;
      UInt64 eUnexpected_b_1 = UInt64.MaxValue;
      UInt64 eUnexpected_e_1 = UInt64.MaxValue;
      UInt64 eExpected_b_1 = UInt64.MaxValue;
      UInt64 eExpected_e_1 = UInt64.MaxValue;
      // t.ErrorList (~1 & global_TkUnexpected s.LineNumber e.Unexpected )~1 e.Expected
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_TkUnexpected.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      eExpected_b_1 = bb_0_0;
      RefalRTS.use( ref eExpected_b_1 );
      eExpected_e_1 = be_0_0;
      RefalRTS.use( ref eExpected_e_1 );
      if( ! RefalRTS.svar_left( ref sLineNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eUnexpected_b_1 = bb_1_0;
      RefalRTS.use( ref eUnexpected_b_1 );
      eUnexpected_e_1 = be_1_0;
      RefalRTS.use( ref eUnexpected_e_1 );
      RefalRTS.check_evar( ref eUnexpected_b_1, ref eUnexpected_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'w' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
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
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n23 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_evar( res, eUnexpected_b_1, eUnexpected_e_1 );
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
      res = RefalRTS.splice_stvar( res, sLineNumber_1 );
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
      UInt64 eExpected_b_1 = UInt64.MaxValue;
      UInt64 eExpected_e_1 = UInt64.MaxValue;
      UInt64 sUnexpected_1 = UInt64.MaxValue;
      UInt64 sLineNumber_1 = UInt64.MaxValue;
      UInt64 eInfo_b_1 = UInt64.MaxValue;
      UInt64 eInfo_e_1 = UInt64.MaxValue;
      // t.ErrorList (~1 s.Unexpected s.LineNumber e.Info )~1 e.Expected
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eExpected_b_1 = bb_0_0;
      RefalRTS.use( ref eExpected_b_1 );
      eExpected_e_1 = be_0_0;
      RefalRTS.use( ref eExpected_e_1 );
      if( ! RefalRTS.svar_left( ref sUnexpected_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sLineNumber_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eInfo_b_1 = bb_1_0;
      RefalRTS.use( ref eInfo_b_1 );
      eInfo_e_1 = be_1_0;
      RefalRTS.use( ref eInfo_e_1 );
      RefalRTS.check_evar( ref eExpected_b_1, ref eExpected_e_1 );
      RefalRTS.check_evar( ref eInfo_b_1, ref eInfo_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_EL_AddErrorAt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'p' ) )
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
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, global_StrFromToken.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n27 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n27 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_evar( res, eExpected_b_1, eExpected_e_1 );
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
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_evar( res, eInfo_b_1, eInfo_e_1 );
      res = RefalRTS.splice_stvar( res, sUnexpected_1 );
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
      res = RefalRTS.splice_stvar( res, sLineNumber_1 );
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

public class local_69_114_114_111_114_46_115_114_101_102_E_PrintError: RefalRTS.Function
{
  private local_69_114_114_111_114_46_115_114_101_102_E_PrintError() { }
  public override string func_name ()
  {
    return "PrintError";
  }

  public static readonly RefalRTS.Function instance = new local_69_114_114_111_114_46_115_114_101_102_E_PrintError();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // (~1 e.Line )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eLine_b_1 = bb_1_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_1_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eLine_b_1, eLine_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_EL_Print: RefalRTS.Function
{
  private global_EL_Print() { }
  public override string func_name ()
  {
    return "global_EL_Print";
  }

  public static readonly RefalRTS.Function instance = new global_EL_Print();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eErrors_b_1 = UInt64.MaxValue;
      UInt64 eErrors_e_1 = UInt64.MaxValue;
      UInt64 eErrors_b_2 = UInt64.MaxValue;
      UInt64 eErrors_e_2 = UInt64.MaxValue;
      // (~1 & local_69_114_114_111_114_46_115_114_101_102_E_ErrorList e.Errors )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eErrors_b_1 = bb_1_0;
      RefalRTS.use( ref eErrors_b_1 );
      eErrors_e_1 = be_1_0;
      RefalRTS.use( ref eErrors_e_1 );
      RefalRTS.check_evar( ref eErrors_b_2, ref eErrors_e_2 );
      RefalRTS.check_evar( ref eErrors_b_1, ref eErrors_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eErrors_b_2, ref eErrors_e_2, eErrors_b_1, eErrors_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, local_69_114_114_111_114_46_115_114_101_102_E_PrintError.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n4, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eErrors_b_2, eErrors_e_2 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eErrors_b_1, eErrors_e_1 );
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

public class global_EL_NoErrors: RefalRTS.Function
{
  private global_EL_NoErrors() { }
  public override string func_name ()
  {
    return "global_EL_NoErrors";
  }

  public static readonly RefalRTS.Function instance = new global_EL_NoErrors();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_EL_HasErrors: RefalRTS.Function
{
  private global_EL_HasErrors() { }
  public override string func_name ()
  {
    return "global_EL_HasErrors";
  }

  public static readonly RefalRTS.Function instance = new global_EL_HasErrors();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_EL_IsEmpty: RefalRTS.Function
{
  private global_EL_IsEmpty() { }
  public override string func_name ()
  {
    return "global_EL_IsEmpty";
  }

  public static readonly RefalRTS.Function instance = new global_EL_IsEmpty();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // (~1 & local_69_114_114_111_114_46_115_114_101_102_E_ErrorList )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( local_69_114_114_111_114_46_115_114_101_102_E_ErrorList.instance, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_EL_NoErrors.instance ) )
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
      UInt64 tErrorList_1 = UInt64.MaxValue;
      // t.ErrorList
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tErrorList_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_EL_HasErrors.instance ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}


//End of file
