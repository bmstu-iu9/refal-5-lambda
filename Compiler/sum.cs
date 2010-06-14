// Automatically generated file. Don't edit!
using System;


public class lambda_global_Go_0: RefalRTS.Function
{
	private lambda_global_Go_0() { }
	public override string func_name ()
	{
		return "lambda_global_Go_0";
	}

	public static readonly RefalRTS.Function instance = new lambda_global_Go_0();

	public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
	{
		for( ; ; ) {
			UInt64 bb_0_0 = arg_begin;
			UInt64 be_0_0 = arg_end;
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
			UInt64 sFirstNum_1 = UInt64.MaxValue;
			UInt64 sLastNum_1 = UInt64.MaxValue;
			// (~1 & global_Success s.FirstNum )~1 (~2 & global_Success s.LastNum )~2
			//(0 0 )(1 0 )(2 0 )
			UInt64 bb_1_0 = 0;
			UInt64 be_1_0 = 0;
			if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) ) 
				break;
			if( ! RefalRTS.function_left( global_Success.instance, ref bb_1_0, ref be_1_0 ) ) 
				break;
			UInt64 bb_2_0 = 0;
			UInt64 be_2_0 = 0;
			if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) ) 
				break;
			if( ! RefalRTS.function_left( global_Success.instance, ref bb_2_0, ref be_2_0 ) ) 
				break;
			if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
			  break;
			if( ! RefalRTS.svar_left( ref sFirstNum_1, ref bb_1_0, ref be_1_0 ) ) 
				break;
			if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
			  break;
			if( ! RefalRTS.svar_left( ref sLastNum_1, ref bb_2_0, ref be_2_0 ) ) 
				break;
			if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
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
			if( ! RefalRTS.alloc_char( ref n2, 'S' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n3 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n3, 'u' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n4 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n4, 'm' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n5 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n5, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n6 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n7 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n7, 'f' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n8 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n9 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n9, 't' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n10 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n10, 'h' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n11 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n11, 'i' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n12 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n12, 's' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n13 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n14 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n14, 'n' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n15 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n15, 'u' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n16 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n16, 'm' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n17 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n17, 'b' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n18 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n18, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n19 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n19, 'r' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n20 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n20, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n21 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n21, 'i' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n22 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n22, 's' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n23 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n24 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n24 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n25 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n25, global_StrFromInt.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n26 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n26 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n27 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n27, global_Add.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n28 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_close_call( ref n28 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n29 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_close_call( ref n29 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n30 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_close_call( ref n30 ) )
				return RefalRTS.FnResult.NoMemory;
			RefalRTS.push_stack( n30 );
			RefalRTS.push_stack( n0 );
			res = RefalRTS.splice_elem( res, n30 );
			RefalRTS.push_stack( n29 );
			RefalRTS.push_stack( n24 );
			res = RefalRTS.splice_elem( res, n29 );
			RefalRTS.push_stack( n28 );
			RefalRTS.push_stack( n26 );
			res = RefalRTS.splice_elem( res, n28 );
			res = RefalRTS.splice_stvar( res, sLastNum_1 );
			res = RefalRTS.splice_stvar( res, sFirstNum_1 );
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
			UInt64 eOther_b_1 = UInt64.MaxValue;
			UInt64 eOther_e_1 = UInt64.MaxValue;
			// e.Other
			//(0 0 )
			eOther_b_1 = bb_0_0;
			RefalRTS.use( ref eOther_b_1 );
			eOther_e_1 = be_0_0;
			RefalRTS.use( ref eOther_e_1 );

			RefalRTS.reset_allocator();
			UInt64 res = arg_begin;
			UInt64 n0 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n0 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n1 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n2 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n2, 'E' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n3 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n3, 'n' ) )
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
			if( ! RefalRTS.alloc_char( ref n7, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n8 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n8, 'd' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n9 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n10 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n10, 'n' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n11 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n11, 'o' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n12 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n12, 't' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n13 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n14 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n14, 'a' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n15 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n16 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n16, 'n' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n17 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n17, 'u' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n18 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n18, 'm' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n19 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n19, 'b' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n20 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n21 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n21, 'r' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n22 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n22, 's' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n23 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_close_call( ref n23 ) )
				return RefalRTS.FnResult.NoMemory;
			RefalRTS.push_stack( n23 );
			RefalRTS.push_stack( n0 );
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

		//return RefalRTS.FnResult.RecognitionImpossible;
	}
}

public class lambda_global_Go_1: RefalRTS.Function
{
	private lambda_global_Go_1() { }
	public override string func_name ()
	{
		return "lambda_global_Go_1";
	}

	public static readonly RefalRTS.Function instance = new lambda_global_Go_1();

	public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
	{
		for( ; ; ) {
			UInt64 bb_0_0 = arg_begin;
			UInt64 be_0_0 = arg_end;
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
			UInt64 eFirst_b_1 = UInt64.MaxValue;
			UInt64 eFirst_e_1 = UInt64.MaxValue;
			UInt64 eSecond_b_1 = UInt64.MaxValue;
			UInt64 eSecond_e_1 = UInt64.MaxValue;
			// e.First '  e.Second
			//(0 1 )
			//Открытая e-переменная e.First
			for( 
			  UInt64 boe_0_0 = bb_0_0;
			  ! RefalRTS.is_empty( boe_0_0, be_0_0 );
			  RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
			) {
			  UInt64 bb_0_1 = bb_0_0;
			  UInt64 be_0_1 = be_0_0;
				bb_0_1 = boe_0_0;
				eFirst_b_1 = bb_0_0;
				eFirst_e_1 = boe_0_0;
				RefalRTS.move_right( ref eFirst_b_1, ref eFirst_e_1 );
				if( ! RefalRTS.char_left( ' ', ref bb_0_1, ref be_0_1 ) ) 
					continue;
				eSecond_b_1 = bb_0_1;
				RefalRTS.use( ref eSecond_b_1 );
				eSecond_e_1 = be_0_1;
				RefalRTS.use( ref eSecond_e_1 );
				RefalRTS.check_evar( ref eSecond_b_1, ref eSecond_e_1 );
				RefalRTS.check_evar( ref eFirst_b_1, ref eFirst_e_1 );

				RefalRTS.reset_allocator();
				UInt64 res = arg_begin;
				UInt64 n0 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_open_call( ref n0 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n1 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n2 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n3 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_open_call( ref n3 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n4 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_function( ref n4, local_115_117_109_46_115_114_101_102_E_AsNumber.instance ) )
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
				if( ! RefalRTS.alloc_function( ref n9, local_115_117_109_46_115_114_101_102_E_AsNumber.instance ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n10 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_close_call( ref n10 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n11 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n12 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_function( ref n12, lambda_global_Go_0.instance ) )
					return RefalRTS.FnResult.NoMemory;
				UInt64 n13 = UInt64.MaxValue;
				if( ! RefalRTS.alloc_close_call( ref n13 ) )
					return RefalRTS.FnResult.NoMemory;
				RefalRTS.push_stack( n13 );
				RefalRTS.push_stack( n0 );
				res = RefalRTS.splice_elem( res, n13 );
				res = RefalRTS.splice_elem( res, n12 );
				RefalRTS.link_brackets( n7, n11 );
				res = RefalRTS.splice_elem( res, n11 );
				RefalRTS.push_stack( n10 );
				RefalRTS.push_stack( n8 );
				res = RefalRTS.splice_elem( res, n10 );
				res = RefalRTS.splice_evar( res, eSecond_b_1, eSecond_e_1 );
				res = RefalRTS.splice_elem( res, n9 );
				res = RefalRTS.splice_elem( res, n8 );
				res = RefalRTS.splice_elem( res, n7 );
				RefalRTS.link_brackets( n2, n6 );
				res = RefalRTS.splice_elem( res, n6 );
				RefalRTS.push_stack( n5 );
				RefalRTS.push_stack( n3 );
				res = RefalRTS.splice_elem( res, n5 );
				res = RefalRTS.splice_evar( res, eFirst_b_1, eFirst_e_1 );
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
			UInt64 eOther_b_1 = UInt64.MaxValue;
			UInt64 eOther_e_1 = UInt64.MaxValue;
			// e.Other
			//(0 0 )
			eOther_b_1 = bb_0_0;
			RefalRTS.use( ref eOther_b_1 );
			eOther_e_1 = be_0_0;
			RefalRTS.use( ref eOther_e_1 );

			RefalRTS.reset_allocator();
			UInt64 res = arg_begin;
			UInt64 n0 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n0 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n1 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n1, global_WriteLine.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n2 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n2, 'Y' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n3 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n4 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n4, 'u' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n5 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n5, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n6 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n6, 'm' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n7 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n7, 'u' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n8 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n8, 's' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n9 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n9, 't' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n10 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n10, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n11 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n11, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n12 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n13 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n13, 't' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n14 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n15 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n15, 'r' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n16 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n17 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n17, 't' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n18 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n18, 'w' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n19 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n19, 'o' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n20 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n20, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n21 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n21, 'n' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n22 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n22, 'u' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n23 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n23, 'm' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n24 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n24, 'b' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n25 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n26 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n26, 'r' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n27 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n27, 's' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n28 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n29 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n29, 'd' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n30 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n30, 'i' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n31 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n31, 'v' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n32 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n32, 'i' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n33 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n33, 'd' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n34 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n34, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n35 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n35, 'd' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n36 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n36, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n37 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n37, 'b' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n38 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n38, 'y' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n39 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n39, ' ' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n40 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n40, 's' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n41 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n41, 'p' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n42 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n42, 'a' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n43 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n43, 'c' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n44 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n44, 'e' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n45 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_char( ref n45, '!' ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n46 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_close_call( ref n46 ) )
				return RefalRTS.FnResult.NoMemory;
			RefalRTS.push_stack( n46 );
			RefalRTS.push_stack( n0 );
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
			if( ! RefalRTS.alloc_function( ref n1, global_Fetch.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n2 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n2 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n3 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n3, global_Trim.instance ) )
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
			if( ! RefalRTS.alloc_function( ref n8, lambda_global_Go_1.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n9 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_close_call( ref n9 ) )
				return RefalRTS.FnResult.NoMemory;
			RefalRTS.push_stack( n9 );
			RefalRTS.push_stack( n0 );
			res = RefalRTS.splice_elem( res, n9 );
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

public class local_115_117_109_46_115_114_101_102_E_AsNumber: RefalRTS.Function
{
	private local_115_117_109_46_115_114_101_102_E_AsNumber() { }
	public override string func_name ()
	{
		return "AsNumber";
	}

	public static readonly RefalRTS.Function instance = new local_115_117_109_46_115_114_101_102_E_AsNumber();

	public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
	{
		for( ; ; ) {
			UInt64 bb_0_0 = arg_begin;
			UInt64 be_0_0 = arg_end;
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
			RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
			UInt64 eText_b_1 = UInt64.MaxValue;
			UInt64 eText_e_1 = UInt64.MaxValue;
			// e.Text
			//(0 0 )
			eText_b_1 = bb_0_0;
			RefalRTS.use( ref eText_b_1 );
			eText_e_1 = be_0_0;
			RefalRTS.use( ref eText_e_1 );
			RefalRTS.check_evar( ref eText_b_1, ref eText_e_1 );

			RefalRTS.reset_allocator();
			UInt64 res = arg_begin;
			UInt64 n0 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n0 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n1 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n1, global_IntFromStr.instance ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n2 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_open_call( ref n2 ) )
				return RefalRTS.FnResult.NoMemory;
			UInt64 n3 = UInt64.MaxValue;
			if( ! RefalRTS.alloc_function( ref n3, global_Trim.instance ) )
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
			res = RefalRTS.splice_evar( res, eText_b_1, eText_e_1 );
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


//End of file
