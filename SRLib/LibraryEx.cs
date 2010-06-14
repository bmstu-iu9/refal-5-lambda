// Automatically generated file. Don't edit!
using System;


public class global_Apply: RefalRTS.Function
{
  private global_Apply() { }
  public override string func_name ()
  {
    return "global_Apply";
  }

  public static readonly RefalRTS.Function instance = new global_Apply();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sFn_1 = UInt64.MaxValue;
      UInt64 eArgument_b_1 = UInt64.MaxValue;
      UInt64 eArgument_e_1 = UInt64.MaxValue;
      // s.Fn e.Argument
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sFn_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eArgument_b_1 = bb_0_0;
      RefalRTS.use( ref eArgument_b_1 );
      eArgument_e_1 = be_0_0;
      RefalRTS.use( ref eArgument_e_1 );
      RefalRTS.check_evar( ref eArgument_b_1, ref eArgument_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n1 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eArgument_b_1, eArgument_e_1 );
      res = RefalRTS.splice_stvar( res, sFn_1 );
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
      UInt64 eArgument_b_1 = UInt64.MaxValue;
      UInt64 eArgument_e_1 = UInt64.MaxValue;
      UInt64 tClosure_1 = UInt64.MaxValue;
      UInt64 eBounded_b_1 = UInt64.MaxValue;
      UInt64 eBounded_e_1 = UInt64.MaxValue;
      // (~1 t.Closure e.Bounded )~1 e.Argument
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eArgument_b_1 = bb_0_0;
      RefalRTS.use( ref eArgument_b_1 );
      eArgument_e_1 = be_0_0;
      RefalRTS.use( ref eArgument_e_1 );
      if( ! RefalRTS.tvar_left( ref tClosure_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eBounded_b_1 = bb_1_0;
      RefalRTS.use( ref eBounded_b_1 );
      eBounded_e_1 = be_1_0;
      RefalRTS.use( ref eBounded_e_1 );
      RefalRTS.check_evar( ref eArgument_b_1, ref eArgument_e_1 );
      RefalRTS.check_evar( ref eBounded_b_1, ref eBounded_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Apply.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eArgument_b_1, eArgument_e_1 );
      res = RefalRTS.splice_evar( res, eBounded_b_1, eBounded_e_1 );
      res = RefalRTS.splice_stvar( res, tClosure_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Map: RefalRTS.Function
{
  private global_Map() { }
  public override string func_name ()
  {
    return "global_Map";
  }

  public static readonly RefalRTS.Function instance = new global_Map();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFn_1 = UInt64.MaxValue;
      UInt64 tNext_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tFn_2 = UInt64.MaxValue;
      // t.Fn t.Next e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tFn_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tNext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref tFn_2, tFn_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Apply.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, tFn_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tNext_1 );
      res = RefalRTS.splice_stvar( res, tFn_1 );
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
      UInt64 tFn_1 = UInt64.MaxValue;
      // t.Fn
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tFn_1, ref bb_0_0, ref be_0_0 ) )
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

public class global_Reduce: RefalRTS.Function
{
  private global_Reduce() { }
  public override string func_name ()
  {
    return "global_Reduce";
  }

  public static readonly RefalRTS.Function instance = new global_Reduce();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFn_1 = UInt64.MaxValue;
      UInt64 tAcc_1 = UInt64.MaxValue;
      UInt64 tNext_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tFn_2 = UInt64.MaxValue;
      // t.Fn t.Acc t.Next e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tFn_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tAcc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tNext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref tFn_2, tFn_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Reduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Apply.instance ) )
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
      res = RefalRTS.splice_stvar( res, tNext_1 );
      res = RefalRTS.splice_stvar( res, tAcc_1 );
      res = RefalRTS.splice_stvar( res, tFn_2 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tFn_1 );
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
      UInt64 tAcc_1 = UInt64.MaxValue;
      UInt64 tFn_1 = UInt64.MaxValue;
      // t.Fn t.Acc
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tFn_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tAcc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, tAcc_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Fetch: RefalRTS.Function
{
  private global_Fetch() { }
  public override string func_name ()
  {
    return "global_Fetch";
  }

  public static readonly RefalRTS.Function instance = new global_Fetch();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFunction_1 = UInt64.MaxValue;
      UInt64 eArgument_b_1 = UInt64.MaxValue;
      UInt64 eArgument_e_1 = UInt64.MaxValue;
      // e.Argument t.Function
      //(0 0 )
      if( ! RefalRTS.tvar_right( ref tFunction_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eArgument_b_1 = bb_0_0;
      RefalRTS.use( ref eArgument_b_1 );
      eArgument_e_1 = be_0_0;
      RefalRTS.use( ref eArgument_e_1 );
      RefalRTS.check_evar( ref eArgument_b_1, ref eArgument_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Apply.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eArgument_b_1, eArgument_e_1 );
      res = RefalRTS.splice_stvar( res, tFunction_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class lambda_global_Y_0: RefalRTS.Function
{
  private lambda_global_Y_0() { }
  public override string func_name ()
  {
    return "lambda_global_Y_0";
  }

  public static readonly RefalRTS.Function instance = new lambda_global_Y_0();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sY_Func_1 = UInt64.MaxValue;
      UInt64 eArg_b_1 = UInt64.MaxValue;
      UInt64 eArg_e_1 = UInt64.MaxValue;
      UInt64 sY_Func_2 = UInt64.MaxValue;
      // s.Y_Func e.Arg
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sY_Func_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eArg_b_1 = bb_0_0;
      RefalRTS.use( ref eArg_b_1 );
      eArg_e_1 = be_0_0;
      RefalRTS.use( ref eArg_e_1 );
      RefalRTS.check_evar( ref eArg_b_1, ref eArg_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sY_Func_2, sY_Func_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Y.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
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
      res = RefalRTS.splice_evar( res, eArg_b_1, eArg_e_1 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n1 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sY_Func_2 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sY_Func_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Y: RefalRTS.Function
{
  private global_Y() { }
  public override string func_name ()
  {
    return "global_Y";
  }

  public static readonly RefalRTS.Function instance = new global_Y();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sY_Func_1 = UInt64.MaxValue;
      // s.Y_Func
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sY_Func_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, RefalRTS.create_closure.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, lambda_global_Y_0.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sY_Func_1 );
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

public class global_Trim: RefalRTS.Function
{
  private global_Trim() { }
  public override string func_name ()
  {
    return "global_Trim";
  }

  public static readonly RefalRTS.Function instance = new global_Trim();

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
      // '  e.Line
      //(0 0 )
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Trim.instance ) )
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // '\t e.Line
      //(0 0 )
      if( ! RefalRTS.char_left( '\t', ref bb_0_0, ref be_0_0 ) )
        break;
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Trim.instance ) )
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // e.Line
      //(0 0 )
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Trim_R.instance ) )
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

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Trim_R: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Trim_R() { }
  public override string func_name ()
  {
    return "Trim_R";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Trim_R();

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
      // e.Line ' '
      //(0 0 )
      if( ! RefalRTS.char_right( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Trim_R.instance ) )
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // e.Line '\t'
      //(0 0 )
      if( ! RefalRTS.char_right( '\t', ref bb_0_0, ref be_0_0 ) )
        break;
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Trim_R.instance ) )
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // e.Line
      //(0 0 )
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eLine_b_1, eLine_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_MapReduce: RefalRTS.Function
{
  private global_MapReduce() { }
  public override string func_name ()
  {
    return "global_MapReduce";
  }

  public static readonly RefalRTS.Function instance = new global_MapReduce();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFn_1 = UInt64.MaxValue;
      UInt64 tAcc_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // t.Fn t.Acc e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tFn_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tAcc_1, ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoMapReduce.instance ) )
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
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tAcc_1 );
      res = RefalRTS.splice_stvar( res, tFn_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoMapReduce: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoMapReduce() { }
  public override string func_name ()
  {
    return "DoMapReduce";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoMapReduce();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFn_1 = UInt64.MaxValue;
      UInt64 tAcc_1 = UInt64.MaxValue;
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 tNext_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 tFn_2 = UInt64.MaxValue;
      // t.Fn t.Acc (~1 e.Scanned )~1 t.Next e.Tail
      //(0 0 )(1 0 )
      if( ! RefalRTS.tvar_left( ref tFn_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tAcc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_1_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_1_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.tvar_left( ref tNext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref tFn_2, tFn_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoMapReduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_MapReduce__AddScanned.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_Apply.instance ) )
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
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, tNext_1 );
      res = RefalRTS.splice_stvar( res, tAcc_1 );
      res = RefalRTS.splice_stvar( res, tFn_2 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tFn_1 );
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
      UInt64 eScanned_b_1 = UInt64.MaxValue;
      UInt64 eScanned_e_1 = UInt64.MaxValue;
      UInt64 tAcc_1 = UInt64.MaxValue;
      UInt64 tFn_1 = UInt64.MaxValue;
      // t.Fn t.Acc (~1 e.Scanned )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_1_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_1_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.tvar_left( ref tFn_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tAcc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_stvar( res, tAcc_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_MapReduce__AddScanned: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_MapReduce__AddScanned() { }
  public override string func_name ()
  {
    return "MapReduce__AddScanned";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_MapReduce__AddScanned();

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
      UInt64 tAcc_1 = UInt64.MaxValue;
      UInt64 eStepScanned_b_1 = UInt64.MaxValue;
      UInt64 eStepScanned_e_1 = UInt64.MaxValue;
      // t.Acc e.StepScanned (~1 e.Scanned )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScanned_b_1 = bb_1_0;
      RefalRTS.use( ref eScanned_b_1 );
      eScanned_e_1 = be_1_0;
      RefalRTS.use( ref eScanned_e_1 );
      if( ! RefalRTS.tvar_left( ref tAcc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eStepScanned_b_1 = bb_0_0;
      RefalRTS.use( ref eStepScanned_b_1 );
      eStepScanned_e_1 = be_0_0;
      RefalRTS.use( ref eStepScanned_e_1 );
      RefalRTS.check_evar( ref eStepScanned_b_1, ref eStepScanned_e_1 );
      RefalRTS.check_evar( ref eScanned_b_1, ref eScanned_e_1 );

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
      res = RefalRTS.splice_evar( res, eStepScanned_b_1, eStepScanned_e_1 );
      res = RefalRTS.splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_stvar( res, tAcc_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_UnBracket: RefalRTS.Function
{
  private global_UnBracket() { }
  public override string func_name ()
  {
    return "global_UnBracket";
  }

  public static readonly RefalRTS.Function instance = new global_UnBracket();

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
      // (~1 e.Expr )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eExpr_b_1 = bb_1_0;
      RefalRTS.use( ref eExpr_b_1 );
      eExpr_e_1 = be_1_0;
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

public class global_DelAccummulator: RefalRTS.Function
{
  private global_DelAccummulator() { }
  public override string func_name ()
  {
    return "global_DelAccummulator";
  }

  public static readonly RefalRTS.Function instance = new global_DelAccummulator();

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
      UInt64 tAcc_1 = UInt64.MaxValue;
      // t.Acc e.Tail
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tAcc_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_LoadFile: RefalRTS.Function
{
  private global_LoadFile() { }
  public override string func_name ()
  {
    return "global_LoadFile";
  }

  public static readonly RefalRTS.Function instance = new global_LoadFile();

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
      // e.FileName
      //(0 0 )
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
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoLoadFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_FReadLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_FOpen.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
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
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoLoadFile: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoLoadFile() { }
  public override string func_name ()
  {
    return "DoLoadFile";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoLoadFile();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFile_1 = UInt64.MaxValue;
      // t.File 0
      //(0 0 )
      if( ! RefalRTS.number_right( 0UL, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tFile_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_FClose.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, tFile_1 );
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
      UInt64 tFile_1 = UInt64.MaxValue;
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // t.File e.Line 0
      //(0 0 )
      if( ! RefalRTS.number_right( 0UL, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tFile_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

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
      if( ! RefalRTS.alloc_function( ref n3, global_FClose.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tFile_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eLine_b_1, eLine_e_1 );
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
      UInt64 tFile_1 = UInt64.MaxValue;
      UInt64 eLine_b_1 = UInt64.MaxValue;
      UInt64 eLine_e_1 = UInt64.MaxValue;
      // t.File e.Line
      //(0 0 )
      if( ! RefalRTS.tvar_left( ref tFile_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eLine_b_1 = bb_0_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_0_0;
      RefalRTS.use( ref eLine_e_1 );
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

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
      if( ! RefalRTS.alloc_function( ref n3, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoLoadFile.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_FReadLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, tFile_1 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eLine_b_1, eLine_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_SaveFile: RefalRTS.Function
{
  private global_SaveFile() { }
  public override string func_name ()
  {
    return "global_SaveFile";
  }

  public static readonly RefalRTS.Function instance = new global_SaveFile();

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
      UInt64 eLines_b_1 = UInt64.MaxValue;
      UInt64 eLines_e_1 = UInt64.MaxValue;
      // (~1 e.FileName )~1 e.Lines
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFileName_b_1 = bb_1_0;
      RefalRTS.use( ref eFileName_b_1 );
      eFileName_e_1 = be_1_0;
      RefalRTS.use( ref eFileName_e_1 );
      eLines_b_1 = bb_0_0;
      RefalRTS.use( ref eLines_b_1 );
      eLines_e_1 = be_0_0;
      RefalRTS.use( ref eLines_e_1 );
      RefalRTS.check_evar( ref eLines_b_1, ref eLines_e_1 );
      RefalRTS.check_evar( ref eFileName_b_1, ref eFileName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_FClose.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Reduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_WriteBracketLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_FOpen.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'w' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
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
      res = RefalRTS.splice_evar( res, eLines_b_1, eLines_e_1 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_WriteBracketLine: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_WriteBracketLine() { }
  public override string func_name ()
  {
    return "WriteBracketLine";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_WriteBracketLine();

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
      UInt64 tFile_1 = UInt64.MaxValue;
      // t.File (~1 e.Line )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eLine_b_1 = bb_1_0;
      RefalRTS.use( ref eLine_b_1 );
      eLine_e_1 = be_1_0;
      RefalRTS.use( ref eLine_e_1 );
      if( ! RefalRTS.tvar_left( ref tFile_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eLine_b_1, ref eLine_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_FWriteLine.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eLine_b_1, eLine_e_1 );
      res = RefalRTS.splice_stvar( res, tFile_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Inc: RefalRTS.Function
{
  private global_Inc() { }
  public override string func_name ()
  {
    return "global_Inc";
  }

  public static readonly RefalRTS.Function instance = new global_Inc();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // s.Num
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Add.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n2, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sNum_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Dec: RefalRTS.Function
{
  private global_Dec() { }
  public override string func_name ()
  {
    return "global_Dec";
  }

  public static readonly RefalRTS.Function instance = new global_Dec();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNum_1 = UInt64.MaxValue;
      // s.Num
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_Sub.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n2, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sNum_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_FastIntFromStr_Guard: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_FastIntFromStr_Guard() { }
  public override string func_name ()
  {
    return "FastIntFromStr_Guard";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_FastIntFromStr_Guard();

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
      // & global_Success s.Number
      //(0 0 )
      if( ! RefalRTS.function_left( global_Success.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_FastIntFromStr: RefalRTS.Function
{
  private global_FastIntFromStr() { }
  public override string func_name ()
  {
    return "global_FastIntFromStr";
  }

  public static readonly RefalRTS.Function instance = new global_FastIntFromStr();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eDigits_b_1 = UInt64.MaxValue;
      UInt64 eDigits_e_1 = UInt64.MaxValue;
      // e.Digits
      //(0 0 )
      eDigits_b_1 = bb_0_0;
      RefalRTS.use( ref eDigits_b_1 );
      eDigits_e_1 = be_0_0;
      RefalRTS.use( ref eDigits_e_1 );
      RefalRTS.check_evar( ref eDigits_b_1, ref eDigits_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_FastIntFromStr_Guard.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_IntFromStr.instance ) )
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
      res = RefalRTS.splice_evar( res, eDigits_b_1, eDigits_e_1 );
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

public class global_ArgList: RefalRTS.Function
{
  private global_ArgList() { }
  public override string func_name ()
  {
    return "global_ArgList";
  }

  public static readonly RefalRTS.Function instance = new global_ArgList();

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
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoArgList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n2, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
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

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoArgList: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoArgList() { }
  public override string func_name ()
  {
    return "DoArgList";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoArgList();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNext_1 = UInt64.MaxValue;
      UInt64 sNext_2 = UInt64.MaxValue;
      // s.Next
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sNext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sNext_2, sNext_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_SwDoArgList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, global_Arg.instance ) )
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
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, sNext_2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNext_1 );
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

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_SwDoArgList: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_SwDoArgList() { }
  public override string func_name ()
  {
    return "SwDoArgList";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_SwDoArgList();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sNext_1 = UInt64.MaxValue;
      // s.Next
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sNext_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 sNext_1 = UInt64.MaxValue;
      UInt64 eArg_b_1 = UInt64.MaxValue;
      UInt64 eArg_e_1 = UInt64.MaxValue;
      // s.Next e.Arg
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sNext_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eArg_b_1 = bb_0_0;
      RefalRTS.use( ref eArg_b_1 );
      eArg_e_1 = be_0_0;
      RefalRTS.use( ref eArg_e_1 );
      RefalRTS.check_evar( ref eArg_b_1, ref eArg_e_1 );

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
      if( ! RefalRTS.alloc_function( ref n3, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_DoArgList.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNext_1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eArg_b_1, eArg_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Compare: RefalRTS.Function
{
  private global_Compare() { }
  public override string func_name ()
  {
    return "global_Compare";
  }

  public static readonly RefalRTS.Function instance = new global_Compare();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // (~1 e.Left )~1 (~2 e.Right )~2
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
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_2_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_2_0;
      RefalRTS.use( ref eRight_e_1 );
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon.instance ) )
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
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
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
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 sRight_1 = UInt64.MaxValue;
      // (~1 e.Left )~1 s.Right
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      if( ! RefalRTS.svar_left( ref sRight_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      UInt64 sLeft_1 = UInt64.MaxValue;
      // s.Left (~1 e.Right )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eRight_b_1 = bb_1_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_1_0;
      RefalRTS.use( ref eRight_e_1 );
      if( ! RefalRTS.svar_left( ref sLeft_1, ref bb_0_0, ref be_0_0 ) )
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
      UInt64 sLeft_1 = UInt64.MaxValue;
      UInt64 sRight_1 = UInt64.MaxValue;
      // s.Left s.Right
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sLeft_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sRight_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_SymbCompare.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sRight_1 );
      res = RefalRTS.splice_stvar( res, sLeft_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon() { }
  public override string func_name ()
  {
    return "Lexicon";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 tFirstLeft_1 = UInt64.MaxValue;
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 tFirstRight_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // (~1 t.FirstLeft e.Left )~1 (~2 t.FirstRight e.Right )~2
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
      if( ! RefalRTS.tvar_left( ref tFirstLeft_1, ref bb_1_0, ref be_1_0 ) )
        break;
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      if( ! RefalRTS.tvar_left( ref tFirstRight_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eRight_b_1 = bb_2_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_2_0;
      RefalRTS.use( ref eRight_e_1 );
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_Compare.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
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
      RefalRTS.link_brackets( n7, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.link_brackets( n5, n6 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, tFirstRight_1 );
      res = RefalRTS.splice_stvar( res, tFirstLeft_1 );
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
      // (~1 )~1 (~2 )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '=' ) )
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
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // (~1 )~1 (~2 e.Right )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eRight_b_1 = bb_2_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_2_0;
      RefalRTS.use( ref eRight_e_1 );

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
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      // (~1 e.Left )~1 (~2 )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );

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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_Aux: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_Aux() { }
  public override string func_name ()
  {
    return "Lexicon_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // '< (~1 e.Left )~1 (~2 e.Right )~2
      //(0 0 )(1 0 )(2 0 )
      if( ! RefalRTS.char_left( '<', ref bb_0_0, ref be_0_0 ) )
        break;
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
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_2_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_2_0;
      RefalRTS.use( ref eRight_e_1 );

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
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // '= (~1 e.Left )~1 (~2 e.Right )~2
      //(0 0 )(1 0 )(2 0 )
      if( ! RefalRTS.char_left( '=', ref bb_0_0, ref be_0_0 ) )
        break;
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
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_2_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_2_0;
      RefalRTS.use( ref eRight_e_1 );
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon.instance ) )
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
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
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
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // '> (~1 e.Left )~1 (~2 e.Right )~2
      //(0 0 )(1 0 )(2 0 )
      if( ! RefalRTS.char_left( '>', ref bb_0_0, ref be_0_0 ) )
        break;
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
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_2_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_2_0;
      RefalRTS.use( ref eRight_e_1 );

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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Compare_T: RefalRTS.Function
{
  private global_Compare_T() { }
  public override string func_name ()
  {
    return "global_Compare_T";
  }

  public static readonly RefalRTS.Function instance = new global_Compare_T();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // (~1 e.Left )~1 (~2 e.Right )~2
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
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_2_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_2_0;
      RefalRTS.use( ref eRight_e_1 );
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
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

    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 sRight_1 = UInt64.MaxValue;
      // (~1 e.Left )~1 s.Right
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_1_0;
      RefalRTS.use( ref eLeft_e_1 );
      if( ! RefalRTS.svar_left( ref sRight_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '>' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, sRight_1 );
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
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
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      UInt64 sLeft_1 = UInt64.MaxValue;
      // s.Left (~1 e.Right )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eRight_b_1 = bb_1_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_1_0;
      RefalRTS.use( ref eRight_e_1 );
      if( ! RefalRTS.svar_left( ref sLeft_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '<' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_stvar( res, sLeft_1 );
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
      UInt64 sLeft_1 = UInt64.MaxValue;
      UInt64 sRight_1 = UInt64.MaxValue;
      UInt64 sLeft_2 = UInt64.MaxValue;
      UInt64 sRight_2 = UInt64.MaxValue;
      // s.Left s.Right
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sLeft_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sRight_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sLeft_2, sLeft_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sRight_2, sRight_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_SymbCompare.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_stvar( res, sRight_2 );
      res = RefalRTS.splice_stvar( res, sLeft_2 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sRight_1 );
      res = RefalRTS.splice_stvar( res, sLeft_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T() { }
  public override string func_name ()
  {
    return "Lexicon_T";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScannedLeft_b_1 = UInt64.MaxValue;
      UInt64 eScannedLeft_e_1 = UInt64.MaxValue;
      UInt64 eScannedRight_b_1 = UInt64.MaxValue;
      UInt64 eScannedRight_e_1 = UInt64.MaxValue;
      UInt64 tFirstLeft_1 = UInt64.MaxValue;
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 tFirstRight_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedLeft )~1 (~2 t.FirstLeft e.Left )~2 (~3 e.ScannedRight )~3 (~4 t.FirstRight e.Right )~4
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
      eScannedLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedLeft_b_1 );
      eScannedLeft_e_1 = be_1_0;
      RefalRTS.use( ref eScannedLeft_e_1 );
      eScannedRight_b_1 = bb_3_0;
      RefalRTS.use( ref eScannedRight_b_1 );
      eScannedRight_e_1 = be_3_0;
      RefalRTS.use( ref eScannedRight_e_1 );
      if( ! RefalRTS.tvar_left( ref tFirstLeft_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eLeft_b_1 = bb_2_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_2_0;
      RefalRTS.use( ref eLeft_e_1 );
      if( ! RefalRTS.tvar_left( ref tFirstRight_1, ref bb_4_0, ref be_4_0 ) )
        break;
      eRight_b_1 = bb_4_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_4_0;
      RefalRTS.use( ref eRight_e_1 );
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );
      RefalRTS.check_evar( ref eScannedRight_b_1, ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eScannedLeft_b_1, ref eScannedLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T_Aux.instance ) )
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
      if( ! RefalRTS.alloc_function( ref n7, global_Compare_T.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n8 ) )
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
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.link_brackets( n11, n12 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n9, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.push_stack( n8 );
      RefalRTS.push_stack( n6 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_stvar( res, tFirstRight_1 );
      res = RefalRTS.splice_stvar( res, tFirstLeft_1 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
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
      UInt64 eScannedLeft_b_1 = UInt64.MaxValue;
      UInt64 eScannedLeft_e_1 = UInt64.MaxValue;
      UInt64 eScannedRight_b_1 = UInt64.MaxValue;
      UInt64 eScannedRight_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 )~4
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
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eScannedLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedLeft_b_1 );
      eScannedLeft_e_1 = be_1_0;
      RefalRTS.use( ref eScannedLeft_e_1 );
      eScannedRight_b_1 = bb_3_0;
      RefalRTS.use( ref eScannedRight_b_1 );
      eScannedRight_e_1 = be_3_0;
      RefalRTS.use( ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eScannedRight_b_1, ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eScannedLeft_b_1, ref eScannedLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '=' ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
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
      UInt64 eScannedLeft_b_1 = UInt64.MaxValue;
      UInt64 eScannedLeft_e_1 = UInt64.MaxValue;
      UInt64 eScannedRight_b_1 = UInt64.MaxValue;
      UInt64 eScannedRight_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 e.Right )~4
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
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eScannedLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedLeft_b_1 );
      eScannedLeft_e_1 = be_1_0;
      RefalRTS.use( ref eScannedLeft_e_1 );
      eScannedRight_b_1 = bb_3_0;
      RefalRTS.use( ref eScannedRight_b_1 );
      eScannedRight_e_1 = be_3_0;
      RefalRTS.use( ref eScannedRight_e_1 );
      eRight_b_1 = bb_4_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_4_0;
      RefalRTS.use( ref eRight_e_1 );
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eScannedRight_b_1, ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eScannedLeft_b_1, ref eScannedLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '<' ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
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
      UInt64 eScannedLeft_b_1 = UInt64.MaxValue;
      UInt64 eScannedLeft_e_1 = UInt64.MaxValue;
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eScannedRight_b_1 = UInt64.MaxValue;
      UInt64 eScannedRight_e_1 = UInt64.MaxValue;
      // (~1 e.ScannedLeft )~1 (~2 e.Left )~2 (~3 e.ScannedRight )~3 (~4 )~4
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
      if( ! RefalRTS.is_empty( bb_4_0, be_4_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eScannedLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedLeft_b_1 );
      eScannedLeft_e_1 = be_1_0;
      RefalRTS.use( ref eScannedLeft_e_1 );
      eLeft_b_1 = bb_2_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_2_0;
      RefalRTS.use( ref eLeft_e_1 );
      eScannedRight_b_1 = bb_3_0;
      RefalRTS.use( ref eScannedRight_b_1 );
      eScannedRight_e_1 = be_3_0;
      RefalRTS.use( ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eScannedRight_b_1, ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );
      RefalRTS.check_evar( ref eScannedLeft_b_1, ref eScannedLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '>' ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
      res = RefalRTS.splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T_Aux: RefalRTS.Function
{
  private local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T_Aux() { }
  public override string func_name ()
  {
    return "Lexicon_T_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eScannedLeft_b_1 = UInt64.MaxValue;
      UInt64 eScannedLeft_e_1 = UInt64.MaxValue;
      UInt64 eScannedRight_b_1 = UInt64.MaxValue;
      UInt64 eScannedRight_e_1 = UInt64.MaxValue;
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      UInt64 tNextLeft_1 = UInt64.MaxValue;
      UInt64 tNextRight_1 = UInt64.MaxValue;
      // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '< t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
      //(0 0 )(1 0 )(2 0 )(4 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( '<', ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScannedLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedLeft_b_1 );
      eScannedLeft_e_1 = be_1_0;
      RefalRTS.use( ref eScannedLeft_e_1 );
      eScannedRight_b_1 = bb_2_0;
      RefalRTS.use( ref eScannedRight_b_1 );
      eScannedRight_e_1 = be_2_0;
      RefalRTS.use( ref eScannedRight_e_1 );
      eLeft_b_1 = bb_3_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_3_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_4_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_4_0;
      RefalRTS.use( ref eRight_e_1 );
      if( ! RefalRTS.tvar_left( ref tNextLeft_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tNextRight_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eScannedRight_b_1, ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );
      RefalRTS.check_evar( ref eScannedLeft_b_1, ref eScannedLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '<' ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_stvar( res, tNextRight_1 );
      res = RefalRTS.splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
      res = RefalRTS.splice_stvar( res, tNextLeft_1 );
      res = RefalRTS.splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
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
      UInt64 eScannedLeft_b_1 = UInt64.MaxValue;
      UInt64 eScannedLeft_e_1 = UInt64.MaxValue;
      UInt64 eScannedRight_b_1 = UInt64.MaxValue;
      UInt64 eScannedRight_e_1 = UInt64.MaxValue;
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      UInt64 tNextLeft_1 = UInt64.MaxValue;
      UInt64 tNextRight_1 = UInt64.MaxValue;
      // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '= t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
      //(0 0 )(1 0 )(2 0 )(4 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( '=', ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScannedLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedLeft_b_1 );
      eScannedLeft_e_1 = be_1_0;
      RefalRTS.use( ref eScannedLeft_e_1 );
      eScannedRight_b_1 = bb_2_0;
      RefalRTS.use( ref eScannedRight_b_1 );
      eScannedRight_e_1 = be_2_0;
      RefalRTS.use( ref eScannedRight_e_1 );
      eLeft_b_1 = bb_3_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_3_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_4_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_4_0;
      RefalRTS.use( ref eRight_e_1 );
      if( ! RefalRTS.tvar_left( ref tNextLeft_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tNextRight_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eScannedRight_b_1, ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );
      RefalRTS.check_evar( ref eScannedLeft_b_1, ref eScannedLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_46_46_92_83_82_76_105_98_92_76_105_98_114_97_114_121_69_120_46_115_114_101_102_E_Lexicon_T.instance ) )
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
      if( ! RefalRTS.alloc_close_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n10 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n8, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.link_brackets( n6, n7 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, tNextRight_1 );
      res = RefalRTS.splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, tNextLeft_1 );
      res = RefalRTS.splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
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
      UInt64 eScannedLeft_b_1 = UInt64.MaxValue;
      UInt64 eScannedLeft_e_1 = UInt64.MaxValue;
      UInt64 eScannedRight_b_1 = UInt64.MaxValue;
      UInt64 eScannedRight_e_1 = UInt64.MaxValue;
      UInt64 eLeft_b_1 = UInt64.MaxValue;
      UInt64 eLeft_e_1 = UInt64.MaxValue;
      UInt64 eRight_b_1 = UInt64.MaxValue;
      UInt64 eRight_e_1 = UInt64.MaxValue;
      UInt64 tNextLeft_1 = UInt64.MaxValue;
      UInt64 tNextRight_1 = UInt64.MaxValue;
      // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '> t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
      //(0 0 )(1 0 )(2 0 )(4 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( '>', ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_4_0 = 0;
      UInt64 be_4_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_4_0, ref be_4_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eScannedLeft_b_1 = bb_1_0;
      RefalRTS.use( ref eScannedLeft_b_1 );
      eScannedLeft_e_1 = be_1_0;
      RefalRTS.use( ref eScannedLeft_e_1 );
      eScannedRight_b_1 = bb_2_0;
      RefalRTS.use( ref eScannedRight_b_1 );
      eScannedRight_e_1 = be_2_0;
      RefalRTS.use( ref eScannedRight_e_1 );
      eLeft_b_1 = bb_3_0;
      RefalRTS.use( ref eLeft_b_1 );
      eLeft_e_1 = be_3_0;
      RefalRTS.use( ref eLeft_e_1 );
      eRight_b_1 = bb_4_0;
      RefalRTS.use( ref eRight_b_1 );
      eRight_e_1 = be_4_0;
      RefalRTS.use( ref eRight_e_1 );
      if( ! RefalRTS.tvar_left( ref tNextLeft_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.tvar_left( ref tNextRight_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eRight_b_1, ref eRight_e_1 );
      RefalRTS.check_evar( ref eScannedRight_b_1, ref eScannedRight_e_1 );
      RefalRTS.check_evar( ref eLeft_b_1, ref eLeft_e_1 );
      RefalRTS.check_evar( ref eScannedLeft_b_1, ref eScannedLeft_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '>' ) )
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
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eRight_b_1, eRight_e_1 );
      res = RefalRTS.splice_stvar( res, tNextRight_1 );
      res = RefalRTS.splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eLeft_b_1, eLeft_e_1 );
      res = RefalRTS.splice_stvar( res, tNextLeft_1 );
      res = RefalRTS.splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_TypeBracket: RefalRTS.Function
{
  private global_TypeBracket() { }
  public override string func_name ()
  {
    return "global_TypeBracket";
  }

  public static readonly RefalRTS.Function instance = new global_TypeBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Type: RefalRTS.Function
{
  private global_Type() { }
  public override string func_name ()
  {
    return "global_Type";
  }

  public static readonly RefalRTS.Function instance = new global_Type();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eInBracket_b_1 = UInt64.MaxValue;
      UInt64 eInBracket_e_1 = UInt64.MaxValue;
      // (~1 e.InBracket )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eInBracket_b_1 = bb_1_0;
      RefalRTS.use( ref eInBracket_b_1 );
      eInBracket_e_1 = be_1_0;
      RefalRTS.use( ref eInBracket_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TypeBracket.instance ) )
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
      UInt64 sSymbol_1 = UInt64.MaxValue;
      // s.Symbol
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sSymbol_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_SymbType.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sSymbol_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_Type_T: RefalRTS.Function
{
  private global_Type_T() { }
  public override string func_name ()
  {
    return "global_Type_T";
  }

  public static readonly RefalRTS.Function instance = new global_Type_T();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eInBrackets_b_1 = UInt64.MaxValue;
      UInt64 eInBrackets_e_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      // (~1 e.InBrackets )~1 e.Tail
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eInBrackets_b_1 = bb_1_0;
      RefalRTS.use( ref eInBrackets_b_1 );
      eInBrackets_e_1 = be_1_0;
      RefalRTS.use( ref eInBrackets_e_1 );
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );
      RefalRTS.check_evar( ref eInBrackets_b_1, ref eInBrackets_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n0, global_TypeBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      RefalRTS.link_brackets( n1, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eInBrackets_b_1, eInBrackets_e_1 );
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
      UInt64 sSymbol_1 = UInt64.MaxValue;
      UInt64 eTail_b_1 = UInt64.MaxValue;
      UInt64 eTail_e_1 = UInt64.MaxValue;
      UInt64 sSymbol_2 = UInt64.MaxValue;
      // s.Symbol e.Tail
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sSymbol_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eTail_b_1 = bb_0_0;
      RefalRTS.use( ref eTail_b_1 );
      eTail_e_1 = be_0_0;
      RefalRTS.use( ref eTail_e_1 );
      RefalRTS.check_evar( ref eTail_b_1, ref eTail_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sSymbol_2, sSymbol_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, global_SymbType.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_evar( res, eTail_b_1, eTail_e_1 );
      res = RefalRTS.splice_stvar( res, sSymbol_2 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_stvar( res, sSymbol_1 );
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
      if( ! RefalRTS.alloc_char( ref n0, '*' ) )
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
