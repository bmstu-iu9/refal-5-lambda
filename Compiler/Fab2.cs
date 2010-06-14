// Automatically generated file. Don't edit!
using System;


public class global_Fab: RefalRTS.Function
{
	private global_Fab() { }
	public override string func_name ()
	{
		return "global_Fab";
	}

	public static readonly RefalRTS.Function instance = new global_Fab();

	public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
	{
		for( ; ; ) {
			UInt64 bb_0_0 = arg_begin;
			UInt64 be_0_0 = arg_end;
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
			UInt64 eX_b_1 = UInt64.MaxValue;
			UInt64 eX_e_1 = UInt64.MaxValue;
			UInt64 eY_b_1 = UInt64.MaxValue;
			UInt64 eY_e_1 = UInt64.MaxValue;
			// e.X 'A e.Y
			//(0 1 )
			//Открытая e-переменная e.X
			for( 
			  UInt64 boe_0_0 = bb_0_0;
			  ! RefalRTS.is_empty( boe_0_0, be_0_0 );
			  RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
			) {
			  UInt64 bb_0_1 = bb_0_0;
			  UInt64 be_0_1 = be_0_0;
				bb_0_1 = boe_0_0;
				eX_b_1 = bb_0_0;
				eX_e_1 = boe_0_0;
				RefalRTS.move_right( ref eX_b_1, ref eX_e_1 );
				if( ! RefalRTS.char_left( 'A', ref bb_0_1, ref be_0_1 ) ) 
					continue;
				eY_b_1 = bb_0_1;
				RefalRTS.use( ref eY_b_1 );
				eY_e_1 = be_0_1;
				RefalRTS.use( ref eY_e_1 );
				RefalRTS.check_evar( ref eY_b_1, ref eY_e_1 );
				RefalRTS.check_evar( ref eX_b_1, ref eX_e_1 );

				RefalRTS.reset_allocator();
				UInt64 res = arg_begin;
				UInt64 n0 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_open_call( ref n0 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n1 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_function( ref n1, global_Fab.instance ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n2 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_close_call( ref n2 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n3 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_char( ref n3, 'B' ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n4 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_open_call( ref n4 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n5 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_function( ref n5, global_Fab.instance ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n6 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_close_call( ref n6 ) )
					return RefalRTS.FnResult.NoMemory;
				RefalRTS.push_stack( n6 );
				RefalRTS.push_stack( n4 );
				res = RefalRTS.splice_elem( res, n6 );
				res = RefalRTS.splice_evar( res, eY_b_1, eY_e_1 );
				res = RefalRTS.splice_elem( res, n5 );
				res = RefalRTS.splice_elem( res, n4 );
				res = RefalRTS.splice_elem( res, n3 );
				RefalRTS.push_stack( n2 );
				RefalRTS.push_stack( n0 );
				res = RefalRTS.splice_elem( res, n2 );
				res = RefalRTS.splice_evar( res, eX_b_1, eX_e_1 );
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
			UInt64 eX_b_1 = UInt64.MaxValue;
			UInt64 eX_e_1 = UInt64.MaxValue;
			UInt64 eY_b_1 = UInt64.MaxValue;
			UInt64 eY_e_1 = UInt64.MaxValue;
			// e.X 'a e.Y
			//(0 1 )
			//Открытая e-переменная e.X
			for( 
			  UInt64 boe_0_0 = bb_0_0;
			  ! RefalRTS.is_empty( boe_0_0, be_0_0 );
			  RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
			) {
			  UInt64 bb_0_1 = bb_0_0;
			  UInt64 be_0_1 = be_0_0;
				bb_0_1 = boe_0_0;
				eX_b_1 = bb_0_0;
				eX_e_1 = boe_0_0;
				RefalRTS.move_right( ref eX_b_1, ref eX_e_1 );
				if( ! RefalRTS.char_left( 'a', ref bb_0_1, ref be_0_1 ) ) 
					continue;
				eY_b_1 = bb_0_1;
				RefalRTS.use( ref eY_b_1 );
				eY_e_1 = be_0_1;
				RefalRTS.use( ref eY_e_1 );
				RefalRTS.check_evar( ref eY_b_1, ref eY_e_1 );
				RefalRTS.check_evar( ref eX_b_1, ref eX_e_1 );

				RefalRTS.reset_allocator();
				UInt64 res = arg_begin;
				UInt64 n0 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_char( ref n0, 'b' ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n1 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_open_call( ref n1 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n2 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_function( ref n2, global_Fab.instance ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n3 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_close_call( ref n3 ) )
					return RefalRTS.FnResult.NoMemory;
				RefalRTS.push_stack( n3 );
				RefalRTS.push_stack( n1 );
				res = RefalRTS.splice_elem( res, n3 );
				res = RefalRTS.splice_evar( res, eY_b_1, eY_e_1 );
				res = RefalRTS.splice_elem( res, n2 );
				res = RefalRTS.splice_elem( res, n1 );
				res = RefalRTS.splice_elem( res, n0 );
				res = RefalRTS.splice_evar( res, eX_b_1, eX_e_1 );
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
			UInt64 eX_b_1 = UInt64.MaxValue;
			UInt64 eX_e_1 = UInt64.MaxValue;
			// e.X
			//(0 0 )
			eX_b_1 = bb_0_0;
			RefalRTS.use( ref eX_b_1 );
			eX_e_1 = be_0_0;
			RefalRTS.use( ref eX_e_1 );
			RefalRTS.check_evar( ref eX_b_1, ref eX_e_1 );

			RefalRTS.reset_allocator();
			UInt64 res = arg_begin;
			res = RefalRTS.splice_evar( res, eX_b_1, eX_e_1 );
			RefalRTS.use( ref res );
			RefalRTS.garbage( arg_begin, arg_end );
			return RefalRTS.FnResult.Success;
		}

		//return RefalRTS.FnResult.RecognitionImpossible;
	}
}

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
			if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n2 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n2 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n3 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n3, global_Fab.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n4 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n4 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n5 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n5, global_ReadLine.instance ) )
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


//End of file
