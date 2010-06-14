// Automatically generated file. Don't edit!
using System;


public class global_SymbCompare: RefalRTS.Function
{
	private global_SymbCompare() { }
	public override string func_name ()
	{
		return "global_SymbCompare";
	}

	public static readonly RefalRTS.Function instance = new global_SymbCompare();

	public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
	{
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
			if( ! RefalRTS.alloc_char( ref n0, '=' ) )
				return RefalRTS.FnResult.NoMemory;
			res = RefalRTS.splice_elem( res, n0 );
			RefalRTS.use( ref res );
			RefalRTS.garbage( arg_begin, arg_end );
			return RefalRTS.FnResult.Success;
		}

		return RefalRTS.FnResult.RecognitionImpossible;
	}
}

public class global_SymbType: RefalRTS.Function
{
	private global_SymbType() { }
	public override string func_name ()
	{
		return "global_SymbType";
	}

	public static readonly RefalRTS.Function instance = new global_SymbType();

	public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
	{
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
			if( ! RefalRTS.alloc_number( ref n0, 0UL ) )
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
