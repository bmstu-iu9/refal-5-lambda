// Automatically generated file. Don't edit!
using System;


public class global_GN_Local: RefalRTS.Function
{
  private global_GN_Local() { }
  public override string func_name ()
  {
    return "global_GN_Local";
  }

  public static readonly RefalRTS.Function instance = new global_GN_Local();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GN_Entry: RefalRTS.Function
{
  private global_GN_Entry() { }
  public override string func_name ()
  {
    return "global_GN_Entry";
  }

  public static readonly RefalRTS.Function instance = new global_GN_Entry();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_CutName: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_CutName() { }
  public override string func_name ()
  {
    return "CutName";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_CutName();

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
      UInt64 ePrefix_b_1 = UInt64.MaxValue;
      UInt64 ePrefix_e_1 = UInt64.MaxValue;
      // e.Prefix 'E_ e.Name
      //(0 1 )
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Prefix
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePrefix_b_1 = bb_0_0;
        ePrefix_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePrefix_b_1, ref ePrefix_e_1 );
        if( ! RefalRTS.char_left( 'E', ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.char_left( '_', ref bb_0_1, ref be_0_1 ) )
          continue;
        eName_b_1 = bb_0_1;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_0_1;
        RefalRTS.use( ref eName_e_1 );
        RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwGenFnStart: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwGenFnStart() { }
  public override string func_name ()
  {
    return "SwGenFnStart";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwGenFnStart();

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
      UInt64 sMemoryClass_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      UInt64 eName_b_3 = UInt64.MaxValue;
      UInt64 eName_e_3 = UInt64.MaxValue;
      UInt64 eName_b_4 = UInt64.MaxValue;
      UInt64 eName_e_4 = UInt64.MaxValue;
      // s.MemoryClass e.Name
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sMemoryClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_4, ref eName_e_4 );
      RefalRTS.check_evar( ref eName_b_3, ref eName_e_3 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eName_b_3, ref eName_e_3, eName_b_2, eName_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eName_b_4, ref eName_e_4, eName_b_3, eName_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ':' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n54 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n55 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n60, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n62, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n64, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n65, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n66, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n67, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n68, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n69, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n70, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n77, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n78, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n79, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n81, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n82, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n85, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n86 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n86, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n87 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n87, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n88 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n88, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n89 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n89, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n90 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n90, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n91 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n91, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n92 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n92, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n93 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n93 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n94 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n94 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n95 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n95, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n96 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n96, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n97 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n97, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n98 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n98 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n99 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n99 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n100 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n100, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n101 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n101, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n102 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n102, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n103 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n103, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n104 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n104, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n105 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n105, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n106 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n106, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n107 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n107, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n108 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n108, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n109 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n109, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n110 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n110, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n111 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n111, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n112 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n112 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n113 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n113, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_CutName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n114 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n114 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n115 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n115, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n116 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n116, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n117 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n117 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n118 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n118 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n119 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n119, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n120 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n120, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n121 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n121, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n122 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n122 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n123 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n123 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n124 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n124 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n125 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n125 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n126 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n126, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n127 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n127, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n128 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n128, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n129 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n129, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n130 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n130, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n131 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n131, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n132 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n132, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n133 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n133, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n134 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n134, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n135 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n135, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n136 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n136, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n137 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n137, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n138 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n138, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n139 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n139, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n140 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n140, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n141 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n141, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n142 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n142, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n143 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n143, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n144 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n144, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n145 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n145, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n146 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n146, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n147 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n147, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n148 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n148, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n149 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n149, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n150 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n150, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n151 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n151, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n152 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n152, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n153 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n153, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n154 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n154, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n155 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n155, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n156 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n156, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n157 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n157, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n158 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n158, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n159 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n159, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n160 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n160, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n161 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n161, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n162 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n162, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n163 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n163, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n164 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n164, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n165 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n165, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n166 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n166, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n167 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n167, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n168 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n168, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n169 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n169, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n170 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n170, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n171 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n171, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n172 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n172, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n173 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n173, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n174 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n174, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n175 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n175, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n176 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n176, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n177 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n177, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n178 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n178, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n179 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n179, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n180 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n180, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n181 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n181, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n182 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n182, 'w' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n183 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n183, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n184 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n184, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n185 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n185, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n186 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n186, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n187 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n187 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n188 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n188 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n189 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n189 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n190 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n190 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n191 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n191, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n192 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n192, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n193 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n193, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n194 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n194, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n195 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n195, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n196 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n196, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n197 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n197, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n198 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n198, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n199 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n199, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n200 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n200, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n201 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n201, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n202 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n202, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n203 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n203, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n204 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n204, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n205 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n205, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n206 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n206, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n207 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n207, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n208 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n208, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n209 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n209, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n210 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n210, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n211 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n211, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n212 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n212, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n213 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n213, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n214 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n214, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n215 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n215, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n216 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n216, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n217 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n217, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n218 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n218, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n219 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n219, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n220 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n220, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n221 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n221, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n222 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n222, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n223 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n223, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n224 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n224, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n225 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n225, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n226 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n226, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n227 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n227, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n228 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n228, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n229 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n229, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n230 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n230, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n231 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n231, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n232 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n232, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n233 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n233, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n234 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n234, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n235 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n235, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n236 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n236, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n237 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n237, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n238 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n238, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n239 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n239, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n240 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n240, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n241 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n241, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n242 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n242, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n243 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n243, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n244 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n244, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n245 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n245, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n246 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n246, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n247 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n247, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n248 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n248, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n249 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n249, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n250 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n250, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n251 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n251, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n252 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n252, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n253 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n253, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n254 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n254, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n255 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n255, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n256 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n256, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n257 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n257, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n258 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n258, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n259 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n259, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n260 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n260, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n261 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n261, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n262 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n262, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n263 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n263, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n264 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n264, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n265 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n265, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n266 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n266, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n267 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n267, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n268 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n268 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n269 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n269 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n270 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n270, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n271 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n271, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n272 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n272, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n273 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n273 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n274 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n274 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n275 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n275, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n276 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n276, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n277 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n277, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n278 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n278, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n279 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n279, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n280 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n280, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n281 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n281, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n282 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n282, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n283 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n283, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n284 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n284, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n285 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n285, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n286 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n286, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n287 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n287, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n288 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n288, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n289 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n289, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n290 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n290, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n291 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n291, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n292 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n292, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n293 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n293, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n294 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n294, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n295 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n295, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n296 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n296, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n297 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n297, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n298 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n298, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n299 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n299, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n300 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n300, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n301 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n301, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n302 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n302, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n303 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n303, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n304 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n304, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n305 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n305, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n306 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n306, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n307 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n307, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n308 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n308, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n309 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n309, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n310 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n310, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n311 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n311, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n312 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n312, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n313 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n313, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n314 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n314, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n315 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n315, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n316 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n316, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n317 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n317, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n318 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n318, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n319 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n319 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n274, n319 );
      res = RefalRTS.splice_elem( res, n319 );
      res = RefalRTS.splice_elem( res, n318 );
      res = RefalRTS.splice_elem( res, n317 );
      res = RefalRTS.splice_elem( res, n316 );
      res = RefalRTS.splice_elem( res, n315 );
      res = RefalRTS.splice_elem( res, n314 );
      res = RefalRTS.splice_elem( res, n313 );
      res = RefalRTS.splice_elem( res, n312 );
      res = RefalRTS.splice_elem( res, n311 );
      res = RefalRTS.splice_elem( res, n310 );
      res = RefalRTS.splice_elem( res, n309 );
      res = RefalRTS.splice_elem( res, n308 );
      res = RefalRTS.splice_elem( res, n307 );
      res = RefalRTS.splice_elem( res, n306 );
      res = RefalRTS.splice_elem( res, n305 );
      res = RefalRTS.splice_elem( res, n304 );
      res = RefalRTS.splice_elem( res, n303 );
      res = RefalRTS.splice_elem( res, n302 );
      res = RefalRTS.splice_elem( res, n301 );
      res = RefalRTS.splice_elem( res, n300 );
      res = RefalRTS.splice_elem( res, n299 );
      res = RefalRTS.splice_elem( res, n298 );
      res = RefalRTS.splice_elem( res, n297 );
      res = RefalRTS.splice_elem( res, n296 );
      res = RefalRTS.splice_elem( res, n295 );
      res = RefalRTS.splice_elem( res, n294 );
      res = RefalRTS.splice_elem( res, n293 );
      res = RefalRTS.splice_elem( res, n292 );
      res = RefalRTS.splice_elem( res, n291 );
      res = RefalRTS.splice_elem( res, n290 );
      res = RefalRTS.splice_elem( res, n289 );
      res = RefalRTS.splice_elem( res, n288 );
      res = RefalRTS.splice_elem( res, n287 );
      res = RefalRTS.splice_elem( res, n286 );
      res = RefalRTS.splice_elem( res, n285 );
      res = RefalRTS.splice_elem( res, n284 );
      res = RefalRTS.splice_elem( res, n283 );
      res = RefalRTS.splice_elem( res, n282 );
      res = RefalRTS.splice_elem( res, n281 );
      res = RefalRTS.splice_elem( res, n280 );
      res = RefalRTS.splice_elem( res, n279 );
      res = RefalRTS.splice_elem( res, n278 );
      res = RefalRTS.splice_elem( res, n277 );
      res = RefalRTS.splice_elem( res, n276 );
      res = RefalRTS.splice_elem( res, n275 );
      res = RefalRTS.splice_elem( res, n274 );
      RefalRTS.link_brackets( n269, n273 );
      res = RefalRTS.splice_elem( res, n273 );
      res = RefalRTS.splice_elem( res, n272 );
      res = RefalRTS.splice_elem( res, n271 );
      res = RefalRTS.splice_elem( res, n270 );
      res = RefalRTS.splice_elem( res, n269 );
      RefalRTS.link_brackets( n190, n268 );
      res = RefalRTS.splice_elem( res, n268 );
      res = RefalRTS.splice_elem( res, n267 );
      res = RefalRTS.splice_elem( res, n266 );
      res = RefalRTS.splice_elem( res, n265 );
      res = RefalRTS.splice_elem( res, n264 );
      res = RefalRTS.splice_elem( res, n263 );
      res = RefalRTS.splice_elem( res, n262 );
      res = RefalRTS.splice_elem( res, n261 );
      res = RefalRTS.splice_elem( res, n260 );
      res = RefalRTS.splice_elem( res, n259 );
      res = RefalRTS.splice_elem( res, n258 );
      res = RefalRTS.splice_elem( res, n257 );
      res = RefalRTS.splice_elem( res, n256 );
      res = RefalRTS.splice_elem( res, n255 );
      res = RefalRTS.splice_elem( res, n254 );
      res = RefalRTS.splice_elem( res, n253 );
      res = RefalRTS.splice_elem( res, n252 );
      res = RefalRTS.splice_elem( res, n251 );
      res = RefalRTS.splice_elem( res, n250 );
      res = RefalRTS.splice_elem( res, n249 );
      res = RefalRTS.splice_elem( res, n248 );
      res = RefalRTS.splice_elem( res, n247 );
      res = RefalRTS.splice_elem( res, n246 );
      res = RefalRTS.splice_elem( res, n245 );
      res = RefalRTS.splice_elem( res, n244 );
      res = RefalRTS.splice_elem( res, n243 );
      res = RefalRTS.splice_elem( res, n242 );
      res = RefalRTS.splice_elem( res, n241 );
      res = RefalRTS.splice_elem( res, n240 );
      res = RefalRTS.splice_elem( res, n239 );
      res = RefalRTS.splice_elem( res, n238 );
      res = RefalRTS.splice_elem( res, n237 );
      res = RefalRTS.splice_elem( res, n236 );
      res = RefalRTS.splice_elem( res, n235 );
      res = RefalRTS.splice_elem( res, n234 );
      res = RefalRTS.splice_elem( res, n233 );
      res = RefalRTS.splice_elem( res, n232 );
      res = RefalRTS.splice_elem( res, n231 );
      res = RefalRTS.splice_elem( res, n230 );
      res = RefalRTS.splice_elem( res, n229 );
      res = RefalRTS.splice_elem( res, n228 );
      res = RefalRTS.splice_elem( res, n227 );
      res = RefalRTS.splice_elem( res, n226 );
      res = RefalRTS.splice_elem( res, n225 );
      res = RefalRTS.splice_elem( res, n224 );
      res = RefalRTS.splice_elem( res, n223 );
      res = RefalRTS.splice_elem( res, n222 );
      res = RefalRTS.splice_elem( res, n221 );
      res = RefalRTS.splice_elem( res, n220 );
      res = RefalRTS.splice_elem( res, n219 );
      res = RefalRTS.splice_elem( res, n218 );
      res = RefalRTS.splice_elem( res, n217 );
      res = RefalRTS.splice_elem( res, n216 );
      res = RefalRTS.splice_elem( res, n215 );
      res = RefalRTS.splice_elem( res, n214 );
      res = RefalRTS.splice_elem( res, n213 );
      res = RefalRTS.splice_elem( res, n212 );
      res = RefalRTS.splice_elem( res, n211 );
      res = RefalRTS.splice_elem( res, n210 );
      res = RefalRTS.splice_elem( res, n209 );
      res = RefalRTS.splice_elem( res, n208 );
      res = RefalRTS.splice_elem( res, n207 );
      res = RefalRTS.splice_elem( res, n206 );
      res = RefalRTS.splice_elem( res, n205 );
      res = RefalRTS.splice_elem( res, n204 );
      res = RefalRTS.splice_elem( res, n203 );
      res = RefalRTS.splice_elem( res, n202 );
      res = RefalRTS.splice_elem( res, n201 );
      res = RefalRTS.splice_elem( res, n200 );
      res = RefalRTS.splice_elem( res, n199 );
      res = RefalRTS.splice_elem( res, n198 );
      res = RefalRTS.splice_elem( res, n197 );
      res = RefalRTS.splice_elem( res, n196 );
      res = RefalRTS.splice_elem( res, n195 );
      res = RefalRTS.splice_elem( res, n194 );
      res = RefalRTS.splice_elem( res, n193 );
      res = RefalRTS.splice_elem( res, n192 );
      res = RefalRTS.splice_elem( res, n191 );
      res = RefalRTS.splice_elem( res, n190 );
      RefalRTS.link_brackets( n188, n189 );
      res = RefalRTS.splice_elem( res, n189 );
      res = RefalRTS.splice_elem( res, n188 );
      RefalRTS.link_brackets( n125, n187 );
      res = RefalRTS.splice_elem( res, n187 );
      res = RefalRTS.splice_elem( res, n186 );
      res = RefalRTS.splice_elem( res, n185 );
      res = RefalRTS.splice_elem( res, n184 );
      res = RefalRTS.splice_evar( res, eName_b_4, eName_e_4 );
      res = RefalRTS.splice_elem( res, n183 );
      res = RefalRTS.splice_elem( res, n182 );
      res = RefalRTS.splice_elem( res, n181 );
      res = RefalRTS.splice_elem( res, n180 );
      res = RefalRTS.splice_elem( res, n179 );
      res = RefalRTS.splice_elem( res, n178 );
      res = RefalRTS.splice_elem( res, n177 );
      res = RefalRTS.splice_elem( res, n176 );
      res = RefalRTS.splice_elem( res, n175 );
      res = RefalRTS.splice_elem( res, n174 );
      res = RefalRTS.splice_elem( res, n173 );
      res = RefalRTS.splice_elem( res, n172 );
      res = RefalRTS.splice_elem( res, n171 );
      res = RefalRTS.splice_elem( res, n170 );
      res = RefalRTS.splice_elem( res, n169 );
      res = RefalRTS.splice_elem( res, n168 );
      res = RefalRTS.splice_elem( res, n167 );
      res = RefalRTS.splice_elem( res, n166 );
      res = RefalRTS.splice_elem( res, n165 );
      res = RefalRTS.splice_elem( res, n164 );
      res = RefalRTS.splice_elem( res, n163 );
      res = RefalRTS.splice_elem( res, n162 );
      res = RefalRTS.splice_elem( res, n161 );
      res = RefalRTS.splice_elem( res, n160 );
      res = RefalRTS.splice_elem( res, n159 );
      res = RefalRTS.splice_elem( res, n158 );
      res = RefalRTS.splice_elem( res, n157 );
      res = RefalRTS.splice_elem( res, n156 );
      res = RefalRTS.splice_elem( res, n155 );
      res = RefalRTS.splice_elem( res, n154 );
      res = RefalRTS.splice_elem( res, n153 );
      res = RefalRTS.splice_elem( res, n152 );
      res = RefalRTS.splice_elem( res, n151 );
      res = RefalRTS.splice_elem( res, n150 );
      res = RefalRTS.splice_elem( res, n149 );
      res = RefalRTS.splice_elem( res, n148 );
      res = RefalRTS.splice_elem( res, n147 );
      res = RefalRTS.splice_elem( res, n146 );
      res = RefalRTS.splice_elem( res, n145 );
      res = RefalRTS.splice_elem( res, n144 );
      res = RefalRTS.splice_elem( res, n143 );
      res = RefalRTS.splice_elem( res, n142 );
      res = RefalRTS.splice_elem( res, n141 );
      res = RefalRTS.splice_elem( res, n140 );
      res = RefalRTS.splice_elem( res, n139 );
      res = RefalRTS.splice_elem( res, n138 );
      res = RefalRTS.splice_elem( res, n137 );
      res = RefalRTS.splice_elem( res, n136 );
      res = RefalRTS.splice_elem( res, n135 );
      res = RefalRTS.splice_elem( res, n134 );
      res = RefalRTS.splice_elem( res, n133 );
      res = RefalRTS.splice_elem( res, n132 );
      res = RefalRTS.splice_elem( res, n131 );
      res = RefalRTS.splice_elem( res, n130 );
      res = RefalRTS.splice_elem( res, n129 );
      res = RefalRTS.splice_elem( res, n128 );
      res = RefalRTS.splice_elem( res, n127 );
      res = RefalRTS.splice_elem( res, n126 );
      res = RefalRTS.splice_elem( res, n125 );
      RefalRTS.link_brackets( n123, n124 );
      res = RefalRTS.splice_elem( res, n124 );
      res = RefalRTS.splice_elem( res, n123 );
      RefalRTS.link_brackets( n118, n122 );
      res = RefalRTS.splice_elem( res, n122 );
      res = RefalRTS.splice_elem( res, n121 );
      res = RefalRTS.splice_elem( res, n120 );
      res = RefalRTS.splice_elem( res, n119 );
      res = RefalRTS.splice_elem( res, n118 );
      RefalRTS.link_brackets( n99, n117 );
      res = RefalRTS.splice_elem( res, n117 );
      res = RefalRTS.splice_elem( res, n116 );
      res = RefalRTS.splice_elem( res, n115 );
      RefalRTS.push_stack( n114 );
      RefalRTS.push_stack( n112 );
      res = RefalRTS.splice_elem( res, n114 );
      res = RefalRTS.splice_evar( res, eName_b_3, eName_e_3 );
      res = RefalRTS.splice_elem( res, n113 );
      res = RefalRTS.splice_elem( res, n112 );
      res = RefalRTS.splice_elem( res, n111 );
      res = RefalRTS.splice_elem( res, n110 );
      res = RefalRTS.splice_elem( res, n109 );
      res = RefalRTS.splice_elem( res, n108 );
      res = RefalRTS.splice_elem( res, n107 );
      res = RefalRTS.splice_elem( res, n106 );
      res = RefalRTS.splice_elem( res, n105 );
      res = RefalRTS.splice_elem( res, n104 );
      res = RefalRTS.splice_elem( res, n103 );
      res = RefalRTS.splice_elem( res, n102 );
      res = RefalRTS.splice_elem( res, n101 );
      res = RefalRTS.splice_elem( res, n100 );
      res = RefalRTS.splice_elem( res, n99 );
      RefalRTS.link_brackets( n94, n98 );
      res = RefalRTS.splice_elem( res, n98 );
      res = RefalRTS.splice_elem( res, n97 );
      res = RefalRTS.splice_elem( res, n96 );
      res = RefalRTS.splice_elem( res, n95 );
      res = RefalRTS.splice_elem( res, n94 );
      RefalRTS.link_brackets( n55, n93 );
      res = RefalRTS.splice_elem( res, n93 );
      res = RefalRTS.splice_elem( res, n92 );
      res = RefalRTS.splice_elem( res, n91 );
      res = RefalRTS.splice_elem( res, n90 );
      res = RefalRTS.splice_elem( res, n89 );
      res = RefalRTS.splice_elem( res, n88 );
      res = RefalRTS.splice_elem( res, n87 );
      res = RefalRTS.splice_elem( res, n86 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_elem( res, n70 );
      res = RefalRTS.splice_elem( res, n69 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_elem( res, n67 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      res = RefalRTS.splice_elem( res, n55 );
      RefalRTS.link_brackets( n37, n54 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_elem( res, n51 );
      res = RefalRTS.splice_elem( res, n50 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
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
      RefalRTS.link_brackets( n34, n36 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      RefalRTS.link_brackets( n0, n33 );
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
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class global_GenFnStart: RefalRTS.Function
{
  private global_GenFnStart() { }
  public override string func_name ()
  {
    return "global_GenFnStart";
  }

  public static readonly RefalRTS.Function instance = new global_GenFnStart();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sMemoryClass_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // s.MemoryClass e.Name
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sMemoryClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwGenFnStart.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sMemoryClass_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenFnEnd: RefalRTS.Function
{
  private global_GenFnEnd() { }
  public override string func_name ()
  {
    return "global_GenFnEnd";
  }

  public static readonly RefalRTS.Function instance = new global_GenFnEnd();

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
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n52 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n53 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n57 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n58 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n60 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n61 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n62 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n61, n62 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      RefalRTS.link_brackets( n58, n60 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      RefalRTS.link_brackets( n53, n57 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      res = RefalRTS.splice_elem( res, n55 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_elem( res, n53 );
      RefalRTS.link_brackets( n0, n52 );
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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenFnEnd_Success: RefalRTS.Function
{
  private global_GenFnEnd_Success() { }
  public override string func_name ()
  {
    return "global_GenFnEnd_Success";
  }

  public static readonly RefalRTS.Function instance = new global_GenFnEnd_Success();

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
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'u' ) )
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
      if( ! RefalRTS.alloc_char( ref n14, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n54 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n55 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n59 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n60 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, '}' ) )
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
      RefalRTS.link_brackets( n63, n64 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      RefalRTS.link_brackets( n60, n62 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      RefalRTS.link_brackets( n55, n59 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      res = RefalRTS.splice_elem( res, n55 );
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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenEEnum: RefalRTS.Function
{
  private global_GenEEnum() { }
  public override string func_name ()
  {
    return "global_GenEEnum";
  }

  public static readonly RefalRTS.Function instance = new global_GenEEnum();

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
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwGenFnStart.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Entry.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_GenFnEnd.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class global_GenEnum: RefalRTS.Function
{
  private global_GenEnum() { }
  public override string func_name ()
  {
    return "global_GenEnum";
  }

  public static readonly RefalRTS.Function instance = new global_GenEnum();

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
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwGenFnStart.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n2, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_GenFnEnd.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class global_GenExtern: RefalRTS.Function
{
  private global_GenExtern() { }
  public override string func_name ()
  {
    return "global_GenExtern";
  }

  public static readonly RefalRTS.Function instance = new global_GenExtern();

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
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenForward: RefalRTS.Function
{
  private global_GenForward() { }
  public override string func_name ()
  {
    return "global_GenForward";
  }

  public static readonly RefalRTS.Function instance = new global_GenForward();

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
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenESwap: RefalRTS.Function
{
  private global_GenESwap() { }
  public override string func_name ()
  {
    return "global_GenESwap";
  }

  public static readonly RefalRTS.Function instance = new global_GenESwap();

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
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '$' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'W' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'P' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSwap_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_GN_Entry.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n11 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n0, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class global_GenSwap: RefalRTS.Function
{
  private global_GenSwap() { }
  public override string func_name ()
  {
    return "global_GenSwap";
  }

  public static readonly RefalRTS.Function instance = new global_GenSwap();

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
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '$' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'W' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'P' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSwap_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, global_GN_Local.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n0, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSwap_Aux: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSwap_Aux() { }
  public override string func_name ()
  {
    return "GenSwap_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSwap_Aux();

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
      UInt64 sMemoryClass_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      UInt64 eName_b_3 = UInt64.MaxValue;
      UInt64 eName_e_3 = UInt64.MaxValue;
      UInt64 eName_b_4 = UInt64.MaxValue;
      UInt64 eName_e_4 = UInt64.MaxValue;
      // s.MemoryClass e.Name
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sMemoryClass_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_4, ref eName_e_4 );
      RefalRTS.check_evar( ref eName_b_3, ref eName_e_3 );
      RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eName_b_3, ref eName_e_3, eName_b_2, eName_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eName_b_4, ref eName_e_4, eName_b_3, eName_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ':' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'w' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n50 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n51 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n60, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n62, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n64, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n65, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n66, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n67, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n68, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n69, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n70, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n77, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n78, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n79, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n81, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n82, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n85, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n86 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n86, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n87 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n87, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n88 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n88, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n89 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n89 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n90 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n90 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n91 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n91, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n92 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n92, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n93 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n93, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n94 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n94 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n95 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n95 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n96 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n96, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n97 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n97, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n98 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n98, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n99 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n99, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n100 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n100, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n101 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n101, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n102 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n102, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n103 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n103, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n104 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n104, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n105 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n105, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n106 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n106, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n107 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n107, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n108 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n108, '"' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n109 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n109, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n110 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n110 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n111 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n111 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n112 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n112, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n113 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n113, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n114 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n114, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n115 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n115 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n116 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n116 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n117 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n117 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n118 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n118 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n119 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n119, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n120 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n120, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n121 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n121, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n122 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n122, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n123 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n123, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n124 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n124, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n125 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n125, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n126 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n126, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n127 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n127, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n128 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n128, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n129 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n129, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n130 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n130, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n131 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n131, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n132 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n132, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n133 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n133, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n134 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n134, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n135 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n135, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n136 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n136, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n137 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n137, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n138 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n138, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n139 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n139, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n140 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n140, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n141 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n141, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n142 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n142, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n143 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n143, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n144 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n144, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n145 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n145, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n146 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n146, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n147 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n147, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n148 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n148, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n149 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n149, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n150 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n150, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n151 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n151, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n152 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n152, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n153 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n153, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n154 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n154, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n155 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n155, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n156 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n156, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n157 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n157, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n158 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n158, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n159 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n159, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n160 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n160, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n161 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n161, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n162 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n162, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n163 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n163, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n164 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n164, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n165 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n165, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n166 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n166, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n167 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n167, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n168 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n168, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n169 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n169, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n170 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n170, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n171 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n171, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n172 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n172, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n173 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n173, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n174 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n174, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n175 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n175, 'w' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n176 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n176, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n177 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n177, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n178 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n178, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n179 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n179, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n180 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n180 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n181 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n181 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n182 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n182, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n183 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n183 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n184 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n184 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n185 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n185 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n184, n185 );
      res = RefalRTS.splice_elem( res, n185 );
      res = RefalRTS.splice_elem( res, n184 );
      RefalRTS.link_brackets( n181, n183 );
      res = RefalRTS.splice_elem( res, n183 );
      res = RefalRTS.splice_elem( res, n182 );
      res = RefalRTS.splice_elem( res, n181 );
      RefalRTS.link_brackets( n118, n180 );
      res = RefalRTS.splice_elem( res, n180 );
      res = RefalRTS.splice_elem( res, n179 );
      res = RefalRTS.splice_elem( res, n178 );
      res = RefalRTS.splice_elem( res, n177 );
      res = RefalRTS.splice_evar( res, eName_b_4, eName_e_4 );
      res = RefalRTS.splice_elem( res, n176 );
      res = RefalRTS.splice_elem( res, n175 );
      res = RefalRTS.splice_elem( res, n174 );
      res = RefalRTS.splice_elem( res, n173 );
      res = RefalRTS.splice_elem( res, n172 );
      res = RefalRTS.splice_elem( res, n171 );
      res = RefalRTS.splice_elem( res, n170 );
      res = RefalRTS.splice_elem( res, n169 );
      res = RefalRTS.splice_elem( res, n168 );
      res = RefalRTS.splice_elem( res, n167 );
      res = RefalRTS.splice_elem( res, n166 );
      res = RefalRTS.splice_elem( res, n165 );
      res = RefalRTS.splice_elem( res, n164 );
      res = RefalRTS.splice_elem( res, n163 );
      res = RefalRTS.splice_elem( res, n162 );
      res = RefalRTS.splice_elem( res, n161 );
      res = RefalRTS.splice_elem( res, n160 );
      res = RefalRTS.splice_elem( res, n159 );
      res = RefalRTS.splice_elem( res, n158 );
      res = RefalRTS.splice_elem( res, n157 );
      res = RefalRTS.splice_elem( res, n156 );
      res = RefalRTS.splice_elem( res, n155 );
      res = RefalRTS.splice_elem( res, n154 );
      res = RefalRTS.splice_elem( res, n153 );
      res = RefalRTS.splice_elem( res, n152 );
      res = RefalRTS.splice_elem( res, n151 );
      res = RefalRTS.splice_elem( res, n150 );
      res = RefalRTS.splice_elem( res, n149 );
      res = RefalRTS.splice_elem( res, n148 );
      res = RefalRTS.splice_elem( res, n147 );
      res = RefalRTS.splice_elem( res, n146 );
      res = RefalRTS.splice_elem( res, n145 );
      res = RefalRTS.splice_elem( res, n144 );
      res = RefalRTS.splice_elem( res, n143 );
      res = RefalRTS.splice_elem( res, n142 );
      res = RefalRTS.splice_elem( res, n141 );
      res = RefalRTS.splice_elem( res, n140 );
      res = RefalRTS.splice_elem( res, n139 );
      res = RefalRTS.splice_elem( res, n138 );
      res = RefalRTS.splice_elem( res, n137 );
      res = RefalRTS.splice_elem( res, n136 );
      res = RefalRTS.splice_elem( res, n135 );
      res = RefalRTS.splice_elem( res, n134 );
      res = RefalRTS.splice_elem( res, n133 );
      res = RefalRTS.splice_elem( res, n132 );
      res = RefalRTS.splice_elem( res, n131 );
      res = RefalRTS.splice_elem( res, n130 );
      res = RefalRTS.splice_elem( res, n129 );
      res = RefalRTS.splice_elem( res, n128 );
      res = RefalRTS.splice_elem( res, n127 );
      res = RefalRTS.splice_elem( res, n126 );
      res = RefalRTS.splice_elem( res, n125 );
      res = RefalRTS.splice_elem( res, n124 );
      res = RefalRTS.splice_elem( res, n123 );
      res = RefalRTS.splice_elem( res, n122 );
      res = RefalRTS.splice_elem( res, n121 );
      res = RefalRTS.splice_elem( res, n120 );
      res = RefalRTS.splice_elem( res, n119 );
      res = RefalRTS.splice_elem( res, n118 );
      RefalRTS.link_brackets( n116, n117 );
      res = RefalRTS.splice_elem( res, n117 );
      res = RefalRTS.splice_elem( res, n116 );
      RefalRTS.link_brackets( n111, n115 );
      res = RefalRTS.splice_elem( res, n115 );
      res = RefalRTS.splice_elem( res, n114 );
      res = RefalRTS.splice_elem( res, n113 );
      res = RefalRTS.splice_elem( res, n112 );
      res = RefalRTS.splice_elem( res, n111 );
      RefalRTS.link_brackets( n95, n110 );
      res = RefalRTS.splice_elem( res, n110 );
      res = RefalRTS.splice_elem( res, n109 );
      res = RefalRTS.splice_elem( res, n108 );
      res = RefalRTS.splice_evar( res, eName_b_3, eName_e_3 );
      res = RefalRTS.splice_elem( res, n107 );
      res = RefalRTS.splice_elem( res, n106 );
      res = RefalRTS.splice_elem( res, n105 );
      res = RefalRTS.splice_elem( res, n104 );
      res = RefalRTS.splice_elem( res, n103 );
      res = RefalRTS.splice_elem( res, n102 );
      res = RefalRTS.splice_elem( res, n101 );
      res = RefalRTS.splice_elem( res, n100 );
      res = RefalRTS.splice_elem( res, n99 );
      res = RefalRTS.splice_elem( res, n98 );
      res = RefalRTS.splice_elem( res, n97 );
      res = RefalRTS.splice_elem( res, n96 );
      res = RefalRTS.splice_elem( res, n95 );
      RefalRTS.link_brackets( n90, n94 );
      res = RefalRTS.splice_elem( res, n94 );
      res = RefalRTS.splice_elem( res, n93 );
      res = RefalRTS.splice_elem( res, n92 );
      res = RefalRTS.splice_elem( res, n91 );
      res = RefalRTS.splice_elem( res, n90 );
      RefalRTS.link_brackets( n51, n89 );
      res = RefalRTS.splice_elem( res, n89 );
      res = RefalRTS.splice_elem( res, n88 );
      res = RefalRTS.splice_elem( res, n87 );
      res = RefalRTS.splice_elem( res, n86 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_elem( res, n70 );
      res = RefalRTS.splice_elem( res, n69 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_elem( res, n67 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      res = RefalRTS.splice_elem( res, n55 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_elem( res, n51 );
      RefalRTS.link_brackets( n33, n50 );
      res = RefalRTS.splice_elem( res, n50 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
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
      RefalRTS.link_brackets( n30, n32 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      RefalRTS.link_brackets( n0, n29 );
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
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
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

public class global_GenIdent: RefalRTS.Function
{
  private global_GenIdent() { }
  public override string func_name ()
  {
    return "global_GenIdent";
  }

  public static readonly RefalRTS.Function instance = new global_GenIdent();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 ePrefix_b_1 = UInt64.MaxValue;
      UInt64 ePrefix_e_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eName_b_2 = UInt64.MaxValue;
      UInt64 eName_e_2 = UInt64.MaxValue;
      // e.Prefix 'E_ e.Name
      //(0 1 )
      //РћС‚РєСЂС‹С‚Р°СЏ e-РїРµСЂРµРјРµРЅРЅР°СЏ e.Prefix
      for(
        UInt64 boe_0_0 = bb_0_0;
        ! RefalRTS.is_empty( boe_0_0, be_0_0 );
        RefalRTS.next_term( ref boe_0_0, ref be_0_0 )
      ) {
        UInt64 bb_0_1 = bb_0_0;
        UInt64 be_0_1 = be_0_0;
        bb_0_1 = boe_0_0;
        ePrefix_b_1 = bb_0_0;
        ePrefix_e_1 = boe_0_0;
        RefalRTS.move_right( ref ePrefix_b_1, ref ePrefix_e_1 );
        if( ! RefalRTS.char_left( 'E', ref bb_0_1, ref be_0_1 ) )
          continue;
        if( ! RefalRTS.char_left( '_', ref bb_0_1, ref be_0_1 ) )
          continue;
        eName_b_1 = bb_0_1;
        RefalRTS.use( ref eName_b_1 );
        eName_e_1 = be_0_1;
        RefalRTS.use( ref eName_e_1 );
        RefalRTS.check_evar( ref eName_b_2, ref eName_e_2 );
        RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
        RefalRTS.check_evar( ref ePrefix_b_1, ref ePrefix_e_1 );

        RefalRTS.reset_allocator();
        UInt64 res = arg_begin;
        if( ! RefalRTS.copy_evar( ref eName_b_2, ref eName_e_2, eName_b_1, eName_e_1 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n0 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n1 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n1, 'c' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n2 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n3 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n3, 'a' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n4 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n4, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n5 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n5, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n6 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n7 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n7, 'E' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n8 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n8, '_' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n9 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n10 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n10, '{' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n11 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n12 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n12 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n13 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n14 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n15 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n15, 'p' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n16 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n16, 'u' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n17 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n17, 'b' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n18 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n18, 'l' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n19 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n19, 'i' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n20 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n20, 'c' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n21 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n22 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n22, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n23 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n23, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n24 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n24, 'a' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n25 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n25, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n26 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n26, 'i' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n27 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n27, 'c' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n28 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n29 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n29, 'r' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n30 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n31 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n31, 'a' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n32 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n32, 'd' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n33 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n33, 'o' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n34 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n34, 'n' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n35 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n35, 'l' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n36 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n36, 'y' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n37 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n37, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n38 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n38, 'R' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n39 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n39, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n40 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n40, 'f' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n41 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n41, 'a' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n42 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n42, 'l' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n43 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n43, 'R' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n44 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n44, 'T' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n45 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n45, 'S' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n46 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n46, '.' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n47 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n47, 'F' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n48 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n48, 'u' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n49 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n49, 'n' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n50 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n50, 'c' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n51 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n51, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n52 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n52, 'i' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n53 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n53, 'o' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n54 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n54, 'n' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n55 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n55, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n56 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n56, 'i' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n57 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n57, 'n' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n58 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n58, 's' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n59 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n59, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n60 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n60, 'a' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n61 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n61, 'n' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n62 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n62, 'c' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n63 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n63, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n64 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n64, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n65 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n65, '=' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n66 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n66 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n67 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n67 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n68 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n68, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n69 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n69, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n70 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n70, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n71 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n71, ' ' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n72 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n72, 'R' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n73 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n73, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n74 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n74, 'f' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n75 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n75, 'a' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n76 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n76, 'l' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n77 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n77, 'R' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n78 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n78, 'T' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n79 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n79, 'S' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n80 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n80, '.' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n81 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n81, 'a' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n82 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n82, 'l' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n83 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n83, 'l' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n84 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n84, 'o' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n85 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n85, 'c' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n86 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n86, '_' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n87 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n87, 'i' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n88 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n88, 'd' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n89 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n89, 'e' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n90 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n90, 'n' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n91 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n91, 't' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n92 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n92, '(' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n93 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n93, '"' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n94 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n94, '"' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n95 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n95, ')' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n96 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n96, ';' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n97 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n97 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n98 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n98 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n99 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_char( ref n99, '}' ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n100 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n100 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n101 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_open_bracket( ref n101 ) )
          return RefalRTS.FnResult.NoMemory;
        UInt64 n102 = UInt64.MaxValue;
        if( ! RefalRTS.alloc_close_bracket( ref n102 ) )
          return RefalRTS.FnResult.NoMemory;
        RefalRTS.link_brackets( n101, n102 );
        res = RefalRTS.splice_elem( res, n102 );
        res = RefalRTS.splice_elem( res, n101 );
        RefalRTS.link_brackets( n98, n100 );
        res = RefalRTS.splice_elem( res, n100 );
        res = RefalRTS.splice_elem( res, n99 );
        res = RefalRTS.splice_elem( res, n98 );
        RefalRTS.link_brackets( n67, n97 );
        res = RefalRTS.splice_elem( res, n97 );
        res = RefalRTS.splice_elem( res, n96 );
        res = RefalRTS.splice_elem( res, n95 );
        res = RefalRTS.splice_elem( res, n94 );
        res = RefalRTS.splice_evar( res, eName_b_2, eName_e_2 );
        res = RefalRTS.splice_elem( res, n93 );
        res = RefalRTS.splice_elem( res, n92 );
        res = RefalRTS.splice_elem( res, n91 );
        res = RefalRTS.splice_elem( res, n90 );
        res = RefalRTS.splice_elem( res, n89 );
        res = RefalRTS.splice_elem( res, n88 );
        res = RefalRTS.splice_elem( res, n87 );
        res = RefalRTS.splice_elem( res, n86 );
        res = RefalRTS.splice_elem( res, n85 );
        res = RefalRTS.splice_elem( res, n84 );
        res = RefalRTS.splice_elem( res, n83 );
        res = RefalRTS.splice_elem( res, n82 );
        res = RefalRTS.splice_elem( res, n81 );
        res = RefalRTS.splice_elem( res, n80 );
        res = RefalRTS.splice_elem( res, n79 );
        res = RefalRTS.splice_elem( res, n78 );
        res = RefalRTS.splice_elem( res, n77 );
        res = RefalRTS.splice_elem( res, n76 );
        res = RefalRTS.splice_elem( res, n75 );
        res = RefalRTS.splice_elem( res, n74 );
        res = RefalRTS.splice_elem( res, n73 );
        res = RefalRTS.splice_elem( res, n72 );
        res = RefalRTS.splice_elem( res, n71 );
        res = RefalRTS.splice_elem( res, n70 );
        res = RefalRTS.splice_elem( res, n69 );
        res = RefalRTS.splice_elem( res, n68 );
        res = RefalRTS.splice_elem( res, n67 );
        RefalRTS.link_brackets( n12, n66 );
        res = RefalRTS.splice_elem( res, n66 );
        res = RefalRTS.splice_elem( res, n65 );
        res = RefalRTS.splice_elem( res, n64 );
        res = RefalRTS.splice_elem( res, n63 );
        res = RefalRTS.splice_elem( res, n62 );
        res = RefalRTS.splice_elem( res, n61 );
        res = RefalRTS.splice_elem( res, n60 );
        res = RefalRTS.splice_elem( res, n59 );
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
        RefalRTS.link_brackets( n0, n11 );
        res = RefalRTS.splice_elem( res, n11 );
        res = RefalRTS.splice_elem( res, n10 );
        res = RefalRTS.splice_elem( res, n9 );
        res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
        res = RefalRTS.splice_elem( res, n8 );
        res = RefalRTS.splice_elem( res, n7 );
        res = RefalRTS.splice_evar( res, ePrefix_b_1, ePrefix_e_1 );
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
      break;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenCommonHeaders: RefalRTS.Function
{
  private global_GenCommonHeaders() { }
  public override string func_name ()
  {
    return "global_GenCommonHeaders";
  }

  public static readonly RefalRTS.Function instance = new global_GenCommonHeaders();

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
      if( ! RefalRTS.alloc_char( ref n1, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'A' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'D' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, '!' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n46 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n60 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n61 ) )
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
      RefalRTS.link_brackets( n63, n64 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      RefalRTS.link_brackets( n61, n62 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      RefalRTS.link_brackets( n46, n60 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
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
      RefalRTS.link_brackets( n0, n45 );
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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenCommonTailer: RefalRTS.Function
{
  private global_GenCommonTailer() { }
  public override string func_name ()
  {
    return "global_GenCommonTailer";
  }

  public static readonly RefalRTS.Function instance = new global_GenCommonTailer();

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
      if( ! RefalRTS.alloc_close_bracket( ref n1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'E' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n16 );
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
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class global_GenSentence: RefalRTS.Function
{
  private global_GenSentence() { }
  public override string func_name ()
  {
    return "global_GenSentence";
  }

  public static readonly RefalRTS.Function instance = new global_GenSentence();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eAlgorithm_b_1 = UInt64.MaxValue;
      UInt64 eAlgorithm_e_1 = UInt64.MaxValue;
      // e.Algorithm
      //(0 0 )
      eAlgorithm_b_1 = bb_0_0;
      RefalRTS.use( ref eAlgorithm_b_1 );
      eAlgorithm_e_1 = be_0_0;
      RefalRTS.use( ref eAlgorithm_e_1 );
      RefalRTS.check_evar( ref eAlgorithm_b_1, ref eAlgorithm_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n33, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n34, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n35, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n50 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n51 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n60, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n62, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n64, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n65 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n66, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n67, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n68, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n69 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n70, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n77, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n78, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n79, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n81 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n82 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n85, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n86 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n86, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n87 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n87, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n88 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n88, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n89 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n89, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n90 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n90, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n91 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n91, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n92 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n92, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n93 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n93, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n94 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n94, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n95 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n95, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n96 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n96, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n97 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n97, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n98 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n98, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n99 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n99, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n100 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n100, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n101 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n101, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n102 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n102, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n103 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n103, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n104 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n104, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n105 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n105, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n106 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n106, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n107 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n107, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n108 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n108, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n109 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n109, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n110 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n110, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n111 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n111, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n112 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n112, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n113 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n113 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n114 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n114, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n115 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n115, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n116 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n116, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n117 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n117 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n118 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n118, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n119 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n119, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n120 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n120, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n121 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n121, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n122 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n122, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n123 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n123, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n124 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n124 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n125 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n125, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n126 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n126, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n127 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n127, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n128 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n128 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n129 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n129, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n130 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n130, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n131 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n131, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n132 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n132 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n133 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n133 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n134 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n134, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n135 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n135, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n136 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n136, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n137 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n137, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n138 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n138, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n139 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n139, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n140 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n140, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n141 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n141, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n142 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n142, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n143 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n143, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n144 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n144, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n145 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n145, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n146 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n146, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n147 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n147, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n148 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n148, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n149 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n149, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n150 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n150, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n151 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n151, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n152 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n152, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n153 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n153, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n154 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n154, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n155 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n155, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n156 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n156, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n157 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n157, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n158 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n158, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n159 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n159, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n160 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n160, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n161 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n161, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n162 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n162, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n163 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n163, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n164 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n164 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n165 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n165, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n166 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n166, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n167 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n167, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n168 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n168 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n169 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n169, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n170 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n170, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n171 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n171, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n172 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n172, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n173 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n173, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n174 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n174, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n175 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n175 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n176 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n176, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n177 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n177, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n178 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n178, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n179 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n179 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n180 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n180, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n181 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n181, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n182 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n182, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n183 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n183 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n184 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n184 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n185 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n185, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n186 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n186, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n187 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n187, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n188 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n188, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n189 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n189, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n190 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n190, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n191 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n191, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n192 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n192, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n193 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n193, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n194 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n194, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n195 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n195, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n196 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n196, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n197 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n197, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n198 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n198, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n199 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n199, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n200 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n200, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n201 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n201, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n202 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n202, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n203 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n203, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n204 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n204, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n205 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n205, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n206 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n206, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n207 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n207, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n208 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n208, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n209 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n209, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n210 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n210, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n211 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n211, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n212 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n212, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n213 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n213, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n214 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n214, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n215 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n215, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n216 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n216 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n217 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n217, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n218 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n218, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n219 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n219, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n220 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n220 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n221 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n221, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n222 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n222, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n223 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n223, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n224 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n224, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n225 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n225, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n226 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n226, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n227 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n227 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n228 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n228, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n229 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n229, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n230 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n230, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n231 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n231 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n232 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n232, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n233 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n233, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n234 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n234, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n235 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n235 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n236 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n236 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n237 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n237, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSentence_Aux.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n238 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n238 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n239 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n239, global_MapReduce.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n240 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n240, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCommand.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n241 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n241 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n242 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n242, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n243 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n243, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n244 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n244, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n245 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n245, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n246 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n246, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n247 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n247, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n248 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n248 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n249 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n249 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n250 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n250 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n250 );
      RefalRTS.push_stack( n236 );
      res = RefalRTS.splice_elem( res, n250 );
      RefalRTS.push_stack( n249 );
      RefalRTS.push_stack( n238 );
      res = RefalRTS.splice_elem( res, n249 );
      res = RefalRTS.splice_evar( res, eAlgorithm_b_1, eAlgorithm_e_1 );
      RefalRTS.link_brackets( n241, n248 );
      res = RefalRTS.splice_elem( res, n248 );
      res = RefalRTS.splice_elem( res, n247 );
      res = RefalRTS.splice_elem( res, n246 );
      res = RefalRTS.splice_elem( res, n245 );
      res = RefalRTS.splice_elem( res, n244 );
      res = RefalRTS.splice_elem( res, n243 );
      res = RefalRTS.splice_elem( res, n242 );
      res = RefalRTS.splice_elem( res, n241 );
      res = RefalRTS.splice_elem( res, n240 );
      res = RefalRTS.splice_elem( res, n239 );
      res = RefalRTS.splice_elem( res, n238 );
      res = RefalRTS.splice_elem( res, n237 );
      res = RefalRTS.splice_elem( res, n236 );
      RefalRTS.link_brackets( n184, n235 );
      res = RefalRTS.splice_elem( res, n235 );
      res = RefalRTS.splice_elem( res, n234 );
      res = RefalRTS.splice_elem( res, n233 );
      res = RefalRTS.splice_elem( res, n232 );
      RefalRTS.push_stack( n231 );
      RefalRTS.push_stack( n227 );
      res = RefalRTS.splice_elem( res, n231 );
      res = RefalRTS.splice_elem( res, n230 );
      res = RefalRTS.splice_elem( res, n229 );
      res = RefalRTS.splice_elem( res, n228 );
      res = RefalRTS.splice_elem( res, n227 );
      res = RefalRTS.splice_elem( res, n226 );
      res = RefalRTS.splice_elem( res, n225 );
      res = RefalRTS.splice_elem( res, n224 );
      res = RefalRTS.splice_elem( res, n223 );
      res = RefalRTS.splice_elem( res, n222 );
      res = RefalRTS.splice_elem( res, n221 );
      RefalRTS.push_stack( n220 );
      RefalRTS.push_stack( n216 );
      res = RefalRTS.splice_elem( res, n220 );
      res = RefalRTS.splice_elem( res, n219 );
      res = RefalRTS.splice_elem( res, n218 );
      res = RefalRTS.splice_elem( res, n217 );
      res = RefalRTS.splice_elem( res, n216 );
      res = RefalRTS.splice_elem( res, n215 );
      res = RefalRTS.splice_elem( res, n214 );
      res = RefalRTS.splice_elem( res, n213 );
      res = RefalRTS.splice_elem( res, n212 );
      res = RefalRTS.splice_elem( res, n211 );
      res = RefalRTS.splice_elem( res, n210 );
      res = RefalRTS.splice_elem( res, n209 );
      res = RefalRTS.splice_elem( res, n208 );
      res = RefalRTS.splice_elem( res, n207 );
      res = RefalRTS.splice_elem( res, n206 );
      res = RefalRTS.splice_elem( res, n205 );
      res = RefalRTS.splice_elem( res, n204 );
      res = RefalRTS.splice_elem( res, n203 );
      res = RefalRTS.splice_elem( res, n202 );
      res = RefalRTS.splice_elem( res, n201 );
      res = RefalRTS.splice_elem( res, n200 );
      res = RefalRTS.splice_elem( res, n199 );
      res = RefalRTS.splice_elem( res, n198 );
      res = RefalRTS.splice_elem( res, n197 );
      res = RefalRTS.splice_elem( res, n196 );
      res = RefalRTS.splice_elem( res, n195 );
      res = RefalRTS.splice_elem( res, n194 );
      res = RefalRTS.splice_elem( res, n193 );
      res = RefalRTS.splice_elem( res, n192 );
      res = RefalRTS.splice_elem( res, n191 );
      res = RefalRTS.splice_elem( res, n190 );
      res = RefalRTS.splice_elem( res, n189 );
      res = RefalRTS.splice_elem( res, n188 );
      res = RefalRTS.splice_elem( res, n187 );
      res = RefalRTS.splice_elem( res, n186 );
      res = RefalRTS.splice_elem( res, n185 );
      res = RefalRTS.splice_elem( res, n184 );
      RefalRTS.link_brackets( n133, n183 );
      res = RefalRTS.splice_elem( res, n183 );
      res = RefalRTS.splice_elem( res, n182 );
      res = RefalRTS.splice_elem( res, n181 );
      res = RefalRTS.splice_elem( res, n180 );
      RefalRTS.push_stack( n179 );
      RefalRTS.push_stack( n175 );
      res = RefalRTS.splice_elem( res, n179 );
      res = RefalRTS.splice_elem( res, n178 );
      res = RefalRTS.splice_elem( res, n177 );
      res = RefalRTS.splice_elem( res, n176 );
      res = RefalRTS.splice_elem( res, n175 );
      res = RefalRTS.splice_elem( res, n174 );
      res = RefalRTS.splice_elem( res, n173 );
      res = RefalRTS.splice_elem( res, n172 );
      res = RefalRTS.splice_elem( res, n171 );
      res = RefalRTS.splice_elem( res, n170 );
      res = RefalRTS.splice_elem( res, n169 );
      RefalRTS.push_stack( n168 );
      RefalRTS.push_stack( n164 );
      res = RefalRTS.splice_elem( res, n168 );
      res = RefalRTS.splice_elem( res, n167 );
      res = RefalRTS.splice_elem( res, n166 );
      res = RefalRTS.splice_elem( res, n165 );
      res = RefalRTS.splice_elem( res, n164 );
      res = RefalRTS.splice_elem( res, n163 );
      res = RefalRTS.splice_elem( res, n162 );
      res = RefalRTS.splice_elem( res, n161 );
      res = RefalRTS.splice_elem( res, n160 );
      res = RefalRTS.splice_elem( res, n159 );
      res = RefalRTS.splice_elem( res, n158 );
      res = RefalRTS.splice_elem( res, n157 );
      res = RefalRTS.splice_elem( res, n156 );
      res = RefalRTS.splice_elem( res, n155 );
      res = RefalRTS.splice_elem( res, n154 );
      res = RefalRTS.splice_elem( res, n153 );
      res = RefalRTS.splice_elem( res, n152 );
      res = RefalRTS.splice_elem( res, n151 );
      res = RefalRTS.splice_elem( res, n150 );
      res = RefalRTS.splice_elem( res, n149 );
      res = RefalRTS.splice_elem( res, n148 );
      res = RefalRTS.splice_elem( res, n147 );
      res = RefalRTS.splice_elem( res, n146 );
      res = RefalRTS.splice_elem( res, n145 );
      res = RefalRTS.splice_elem( res, n144 );
      res = RefalRTS.splice_elem( res, n143 );
      res = RefalRTS.splice_elem( res, n142 );
      res = RefalRTS.splice_elem( res, n141 );
      res = RefalRTS.splice_elem( res, n140 );
      res = RefalRTS.splice_elem( res, n139 );
      res = RefalRTS.splice_elem( res, n138 );
      res = RefalRTS.splice_elem( res, n137 );
      res = RefalRTS.splice_elem( res, n136 );
      res = RefalRTS.splice_elem( res, n135 );
      res = RefalRTS.splice_elem( res, n134 );
      res = RefalRTS.splice_elem( res, n133 );
      RefalRTS.link_brackets( n82, n132 );
      res = RefalRTS.splice_elem( res, n132 );
      res = RefalRTS.splice_elem( res, n131 );
      res = RefalRTS.splice_elem( res, n130 );
      res = RefalRTS.splice_elem( res, n129 );
      RefalRTS.push_stack( n128 );
      RefalRTS.push_stack( n124 );
      res = RefalRTS.splice_elem( res, n128 );
      res = RefalRTS.splice_elem( res, n127 );
      res = RefalRTS.splice_elem( res, n126 );
      res = RefalRTS.splice_elem( res, n125 );
      res = RefalRTS.splice_elem( res, n124 );
      res = RefalRTS.splice_elem( res, n123 );
      res = RefalRTS.splice_elem( res, n122 );
      res = RefalRTS.splice_elem( res, n121 );
      res = RefalRTS.splice_elem( res, n120 );
      res = RefalRTS.splice_elem( res, n119 );
      res = RefalRTS.splice_elem( res, n118 );
      RefalRTS.push_stack( n117 );
      RefalRTS.push_stack( n113 );
      res = RefalRTS.splice_elem( res, n117 );
      res = RefalRTS.splice_elem( res, n116 );
      res = RefalRTS.splice_elem( res, n115 );
      res = RefalRTS.splice_elem( res, n114 );
      res = RefalRTS.splice_elem( res, n113 );
      res = RefalRTS.splice_elem( res, n112 );
      res = RefalRTS.splice_elem( res, n111 );
      res = RefalRTS.splice_elem( res, n110 );
      res = RefalRTS.splice_elem( res, n109 );
      res = RefalRTS.splice_elem( res, n108 );
      res = RefalRTS.splice_elem( res, n107 );
      res = RefalRTS.splice_elem( res, n106 );
      res = RefalRTS.splice_elem( res, n105 );
      res = RefalRTS.splice_elem( res, n104 );
      res = RefalRTS.splice_elem( res, n103 );
      res = RefalRTS.splice_elem( res, n102 );
      res = RefalRTS.splice_elem( res, n101 );
      res = RefalRTS.splice_elem( res, n100 );
      res = RefalRTS.splice_elem( res, n99 );
      res = RefalRTS.splice_elem( res, n98 );
      res = RefalRTS.splice_elem( res, n97 );
      res = RefalRTS.splice_elem( res, n96 );
      res = RefalRTS.splice_elem( res, n95 );
      res = RefalRTS.splice_elem( res, n94 );
      res = RefalRTS.splice_elem( res, n93 );
      res = RefalRTS.splice_elem( res, n92 );
      res = RefalRTS.splice_elem( res, n91 );
      res = RefalRTS.splice_elem( res, n90 );
      res = RefalRTS.splice_elem( res, n89 );
      res = RefalRTS.splice_elem( res, n88 );
      res = RefalRTS.splice_elem( res, n87 );
      res = RefalRTS.splice_elem( res, n86 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      RefalRTS.link_brackets( n51, n81 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_elem( res, n70 );
      RefalRTS.push_stack( n69 );
      RefalRTS.push_stack( n65 );
      res = RefalRTS.splice_elem( res, n69 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_elem( res, n67 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      res = RefalRTS.splice_elem( res, n55 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_elem( res, n51 );
      RefalRTS.link_brackets( n18, n50 );
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
      RefalRTS.push_stack( n36 );
      RefalRTS.push_stack( n32 );
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
      RefalRTS.link_brackets( n0, n17 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSentence_Aux: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSentence_Aux() { }
  public override string func_name ()
  {
    return "GenSentence_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenSentence_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eGenerated_b_1 = UInt64.MaxValue;
      UInt64 eGenerated_e_1 = UInt64.MaxValue;
      // (~1 e.Indent )~1 e.Generated
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      eGenerated_b_1 = bb_0_0;
      RefalRTS.use( ref eGenerated_b_1 );
      eGenerated_e_1 = be_0_0;
      RefalRTS.use( ref eGenerated_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );
      RefalRTS.check_evar( ref eGenerated_b_1, ref eGenerated_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCloseBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n3, n4 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.push_stack( n2 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B() { }
  public override string func_name ()
  {
    return "BracketsVar_B";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      // s.BracketNum s.Nested
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E() { }
  public override string func_name ()
  {
    return "BracketsVar_E";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      // s.BracketNum s.Nested
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n8, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n9 );
      RefalRTS.push_stack( n7 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE() { }
  public override string func_name ()
  {
    return "BracketsVar_OE";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      // s.BracketNum s.Nested
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n5, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n6 ) )
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
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      RefalRTS.push_stack( n6 );
      RefalRTS.push_stack( n4 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintStkBracket: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintStkBracket() { }
  public override string func_name ()
  {
    return "PrintStkBracket";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintStkBracket();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sStkBracket_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 sStkBracket_2 = UInt64.MaxValue;
      UInt64 sStkBracket_3 = UInt64.MaxValue;
      UInt64 sStkBracket_4 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      UInt64 sNested_3 = UInt64.MaxValue;
      UInt64 sNested_4 = UInt64.MaxValue;
      // e.Indent (~1 s.StkBracket s.Nested )~1
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_0_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_0_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sStkBracket_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_1_0, ref be_1_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_1_0, be_1_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sStkBracket_2, sStkBracket_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sStkBracket_3, sStkBracket_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sStkBracket_4, sStkBracket_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_3, sNested_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_4, sNested_3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n9, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n18, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n31, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n33, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n40, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n22, n43 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      RefalRTS.push_stack( n41 );
      RefalRTS.push_stack( n39 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_stvar( res, sNested_4 );
      res = RefalRTS.splice_stvar( res, sStkBracket_4 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      RefalRTS.push_stack( n35 );
      RefalRTS.push_stack( n30 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.push_stack( n34 );
      RefalRTS.push_stack( n32 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_stvar( res, sNested_3 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_stvar( res, sStkBracket_3 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n22 );
      RefalRTS.link_brackets( n0, n21 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.push_stack( n19 );
      RefalRTS.push_stack( n17 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_stvar( res, sNested_2 );
      res = RefalRTS.splice_stvar( res, sStkBracket_2 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n8 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_stvar( res, sStkBracket_1 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_CCreateClosure {
  public static readonly RefalRTS.Function instance =
    RefalRTS.alloc_ident("CCreateClosure");
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintName: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintName() { }
  public override string func_name ()
  {
    return "PrintName";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // # local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_CCreateClosure
      //(0 0 )
      if( ! RefalRTS.ident_left( local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_CCreateClosure.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
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
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // e.Name
      //(0 0 )
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    //return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCommand: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCommand() { }
  public override string func_name ()
  {
    return "GenCommand";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCommand();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eText_b_1 = UInt64.MaxValue;
      UInt64 eText_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdComment e.Text )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdComment.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      eText_b_1 = bb_2_0;
      RefalRTS.use( ref eText_b_1 );
      eText_e_1 = be_2_0;
      RefalRTS.use( ref eText_e_1 );
      RefalRTS.check_evar( ref eText_b_1, ref eText_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, '/' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eText_b_1, eText_e_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eText_b_1 = UInt64.MaxValue;
      UInt64 eText_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdPrint e.Text )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdPrint.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      eText_b_1 = bb_2_0;
      RefalRTS.use( ref eText_b_1 );
      eText_e_1 = be_2_0;
      RefalRTS.use( ref eText_e_1 );
      RefalRTS.check_evar( ref eText_b_1, ref eText_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eText_b_1, eText_e_1 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eVarInfo_b_1 = UInt64.MaxValue;
      UInt64 eVarInfo_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 eVarInfo_b_2 = UInt64.MaxValue;
      UInt64 eVarInfo_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdDeclareEVar e.VarInfo )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdDeclareEVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      eVarInfo_b_1 = bb_2_0;
      RefalRTS.use( ref eVarInfo_b_1 );
      eVarInfo_e_1 = be_2_0;
      RefalRTS.use( ref eVarInfo_e_1 );
      RefalRTS.check_evar( ref eVarInfo_b_2, ref eVarInfo_e_2 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eVarInfo_b_1, ref eVarInfo_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eVarInfo_b_2, ref eVarInfo_e_2, eVarInfo_b_1, eVarInfo_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n42, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n60, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n62, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n63 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n33, n63 );
      res = RefalRTS.splice_elem( res, n63 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
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
      RefalRTS.push_stack( n43 );
      RefalRTS.push_stack( n41 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_evar( res, eVarInfo_b_2, eVarInfo_e_2 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n2, n32 );
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
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eVarInfo_b_1 = UInt64.MaxValue;
      UInt64 eVarInfo_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdDeclareVar e.VarInfo )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdDeclareVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      eVarInfo_b_1 = bb_2_0;
      RefalRTS.use( ref eVarInfo_b_1 );
      eVarInfo_e_1 = be_2_0;
      RefalRTS.use( ref eVarInfo_e_1 );
      RefalRTS.check_evar( ref eVarInfo_b_1, ref eVarInfo_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n32 );
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
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdChar s.Direction s.BracketNum s.Nested s.Char )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdChar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchChar.instance ) )
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
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdNumber s.Direction s.BracketNum s.Nested s.Number )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdNumber.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchNumber.instance ) )
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
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdName s.Direction s.BracketNum s.Nested e.Name )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdName.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eName_b_1 = bb_2_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_2_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchName.instance ) )
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
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdIdent s.Direction s.BracketNum s.Nested e.Name )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdIdent.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eName_b_1 = bb_2_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_2_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchIdent.instance ) )
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
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sInnerBrackets_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 eIndent_b_4 = UInt64.MaxValue;
      UInt64 eIndent_e_4 = UInt64.MaxValue;
      UInt64 sInnerBrackets_2 = UInt64.MaxValue;
      UInt64 sInnerBrackets_3 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdBrackets s.Direction s.BracketNum s.Nested s.InnerBrackets )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdBrackets.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerBrackets_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_4, ref eIndent_e_4 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_4, ref eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sInnerBrackets_2, sInnerBrackets_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sInnerBrackets_3, sInnerBrackets_2 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n12, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '0' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n29, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n30, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, '0' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n39, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n40 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n42 );
      RefalRTS.push_stack( n38 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_stvar( res, sInnerBrackets_3 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n40, n41 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_evar( res, eIndent_b_4, eIndent_e_4 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      RefalRTS.link_brackets( n20, n37 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.push_stack( n31 );
      RefalRTS.push_stack( n28 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, sInnerBrackets_2 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n2, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sInnerBrackets_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sInnerBrackets_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 eIndent_b_4 = UInt64.MaxValue;
      UInt64 eIndent_e_4 = UInt64.MaxValue;
      UInt64 sInnerBrackets_2 = UInt64.MaxValue;
      UInt64 sInnerBrackets_3 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdADT s.Direction s.BracketNum s.Nested s.InnerBrackets e.Name )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdADT.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerBrackets_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eName_b_1 = bb_2_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_2_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eIndent_b_4, ref eIndent_e_4 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_4, ref eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sInnerBrackets_2, sInnerBrackets_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sInnerBrackets_3, sInnerBrackets_2 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n12, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '0' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n29, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n30, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, '0' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n39, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchADT.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n40 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n42 );
      RefalRTS.push_stack( n38 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_stvar( res, sInnerBrackets_3 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n40, n41 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_evar( res, eIndent_b_4, eIndent_e_4 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      RefalRTS.link_brackets( n20, n37 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.push_stack( n31 );
      RefalRTS.push_stack( n28 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, sInnerBrackets_2 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n2, n19 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sInnerBrackets_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdEmpty s.BracketNum s.Nested )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdEmpty.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchEmpty.instance ) )
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
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eInfo_b_1 = UInt64.MaxValue;
      UInt64 eInfo_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdVar s.Direction s.BracketNum s.Nested s.Mode e.Info )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eInfo_b_1 = bb_2_0;
      RefalRTS.use( ref eInfo_b_1 );
      eInfo_e_1 = be_2_0;
      RefalRTS.use( ref eInfo_e_1 );
      RefalRTS.check_evar( ref eInfo_b_1, ref eInfo_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchSTVar.instance ) )
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
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eInfo_b_1, eInfo_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eVarInfo_b_1 = UInt64.MaxValue;
      UInt64 eVarInfo_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdRepeated s.Direction s.BracketNum s.Nested e.VarInfo )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdRepeated.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eVarInfo_b_1 = bb_2_0;
      RefalRTS.use( ref eVarInfo_b_1 );
      eVarInfo_e_1 = be_2_0;
      RefalRTS.use( ref eVarInfo_e_1 );
      RefalRTS.check_evar( ref eVarInfo_b_1, ref eVarInfo_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchRepeated.instance ) )
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
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n4, n5 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 eIndent_b_4 = UInt64.MaxValue;
      UInt64 eIndent_e_4 = UInt64.MaxValue;
      UInt64 eIndent_b_5 = UInt64.MaxValue;
      UInt64 eIndent_e_5 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 eIndex_b_4 = UInt64.MaxValue;
      UInt64 eIndex_e_4 = UInt64.MaxValue;
      UInt64 sBracketNum_2 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdClosedE & global_AlgLeft s.BracketNum s.Nested 'e e.Index )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdClosedE.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.function_left( global_AlgLeft.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_4, ref eIndex_e_4 );
      RefalRTS.check_evar( ref eIndent_b_5, ref eIndent_e_5 );
      RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
      RefalRTS.check_evar( ref eIndent_b_4, ref eIndent_e_4 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_4, ref eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_5, ref eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_4, ref eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_2, sBracketNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
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
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n5, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n36, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n37, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n46, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n47, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n49 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n53 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n54, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n55 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n57 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n58 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n60, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n62, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n64, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n65, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n66, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n67, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n68, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n69, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n70, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n77 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n78, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n79, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n81 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n82, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n85 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n58, n85 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      RefalRTS.push_stack( n81 );
      RefalRTS.push_stack( n77 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_evar( res, eIndex_b_4, eIndex_e_4 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_elem( res, n70 );
      res = RefalRTS.splice_elem( res, n69 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_elem( res, n67 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_evar( res, eIndent_b_5, eIndent_e_5 );
      res = RefalRTS.splice_elem( res, n58 );
      RefalRTS.link_brackets( n44, n57 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      RefalRTS.push_stack( n55 );
      RefalRTS.push_stack( n53 );
      res = RefalRTS.splice_elem( res, n55 );
      res = RefalRTS.splice_stvar( res, sNested_2 );
      res = RefalRTS.splice_stvar( res, sBracketNum_2 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_elem( res, n51 );
      res = RefalRTS.splice_elem( res, n50 );
      RefalRTS.push_stack( n49 );
      RefalRTS.push_stack( n45 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_evar( res, eIndent_b_4, eIndent_e_4 );
      res = RefalRTS.splice_elem( res, n44 );
      RefalRTS.link_brackets( n16, n43 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      RefalRTS.push_stack( n39 );
      RefalRTS.push_stack( n35 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n16 );
      RefalRTS.link_brackets( n2, n15 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n11 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eBracketsForSave_b_1 = UInt64.MaxValue;
      UInt64 eBracketsForSave_e_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 eIndent_b_4 = UInt64.MaxValue;
      UInt64 eIndent_e_4 = UInt64.MaxValue;
      UInt64 eIndent_b_5 = UInt64.MaxValue;
      UInt64 eIndent_e_5 = UInt64.MaxValue;
      UInt64 eIndent_b_6 = UInt64.MaxValue;
      UInt64 eIndent_e_6 = UInt64.MaxValue;
      UInt64 eIndent_b_7 = UInt64.MaxValue;
      UInt64 eIndent_e_7 = UInt64.MaxValue;
      UInt64 eIndent_b_8 = UInt64.MaxValue;
      UInt64 eIndent_e_8 = UInt64.MaxValue;
      UInt64 eIndent_b_9 = UInt64.MaxValue;
      UInt64 eIndent_e_9 = UInt64.MaxValue;
      UInt64 eIndent_b_10 = UInt64.MaxValue;
      UInt64 eIndent_e_10 = UInt64.MaxValue;
      UInt64 eIndent_b_11 = UInt64.MaxValue;
      UInt64 eIndent_e_11 = UInt64.MaxValue;
      UInt64 sBracketNum_2 = UInt64.MaxValue;
      UInt64 sBracketNum_3 = UInt64.MaxValue;
      UInt64 sBracketNum_4 = UInt64.MaxValue;
      UInt64 sBracketNum_5 = UInt64.MaxValue;
      UInt64 sBracketNum_6 = UInt64.MaxValue;
      UInt64 sBracketNum_7 = UInt64.MaxValue;
      UInt64 sBracketNum_8 = UInt64.MaxValue;
      UInt64 sBracketNum_9 = UInt64.MaxValue;
      UInt64 sBracketNum_10 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      UInt64 sNested_3 = UInt64.MaxValue;
      UInt64 sNested_4 = UInt64.MaxValue;
      UInt64 sNested_5 = UInt64.MaxValue;
      UInt64 sNested_6 = UInt64.MaxValue;
      UInt64 sNested_7 = UInt64.MaxValue;
      UInt64 sNested_8 = UInt64.MaxValue;
      UInt64 sNested_9 = UInt64.MaxValue;
      UInt64 sNested_10 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 eIndex_b_4 = UInt64.MaxValue;
      UInt64 eIndex_e_4 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdOpenedE & global_AlgLeft s.BracketNum s.Nested 'e e.Index (~3 e.BracketsForSave )~3 )~2
      //(0 0 )(1 0 )(2 0 )(3 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdOpenedE.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.function_left( global_AlgLeft.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      eBracketsForSave_b_1 = bb_3_0;
      RefalRTS.use( ref eBracketsForSave_b_1 );
      eBracketsForSave_e_1 = be_3_0;
      RefalRTS.use( ref eBracketsForSave_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_4, ref eIndex_e_4 );
      RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
      RefalRTS.check_evar( ref eIndent_b_11, ref eIndent_e_11 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndent_b_10, ref eIndent_e_10 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_9, ref eIndent_e_9 );
      RefalRTS.check_evar( ref eIndent_b_8, ref eIndent_e_8 );
      RefalRTS.check_evar( ref eBracketsForSave_b_1, ref eBracketsForSave_e_1 );
      RefalRTS.check_evar( ref eIndent_b_7, ref eIndent_e_7 );
      RefalRTS.check_evar( ref eIndent_b_6, ref eIndent_e_6 );
      RefalRTS.check_evar( ref eIndent_b_5, ref eIndent_e_5 );
      RefalRTS.check_evar( ref eIndent_b_4, ref eIndent_e_4 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_4, ref eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_5, ref eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_6, ref eIndent_e_6, eIndent_b_5, eIndent_e_5 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_7, ref eIndent_e_7, eIndent_b_6, eIndent_e_6 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_8, ref eIndent_e_8, eIndent_b_7, eIndent_e_7 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_9, ref eIndent_e_9, eIndent_b_8, eIndent_e_8 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_10, ref eIndent_e_10, eIndent_b_9, eIndent_e_9 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_11, ref eIndent_e_11, eIndent_b_10, eIndent_e_10 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_2, sBracketNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_3, sBracketNum_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_4, sBracketNum_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_5, sBracketNum_4 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_6, sBracketNum_5 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_7, sBracketNum_6 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_8, sBracketNum_7 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_9, sBracketNum_8 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_10, sBracketNum_9 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_3, sNested_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_4, sNested_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_5, sNested_4 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_6, sNested_5 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_7, sNested_6 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_8, sNested_7 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_9, sNested_8 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_10, sNested_9 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_4, ref eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n21, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n27, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, '!' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n55 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n56, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n57 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n60 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n61, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n62 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n64, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n65, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n66 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n67 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n68, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n69, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n70, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n77, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n78, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n79, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n81, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n82, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n85, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n86 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n86, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n87 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n87, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n88 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n88, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n89 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n89, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n90 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n90, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n91 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n91, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n92 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n92, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n93 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n93, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n94 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n94 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n95 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n95, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n96 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n96 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n97 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n97, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n98 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n98, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n99 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n99, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n100 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n100, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n101 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n101, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n102 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n102, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n103 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n103 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n104 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n104, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n105 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n105 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n106 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n106, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n107 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n107, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n108 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n108 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n109 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n109 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n110 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n110, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n111 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n111, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n112 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n112, '{' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n113 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n113 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n114 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n114 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n115 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n115, global_Map.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n116 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n116 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n117 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n117, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintStkBracket.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n118 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n118, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n119 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n119, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n120 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n120 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n121 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n121 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n122 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n122 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n123 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n123, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n124 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n124, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n125 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n125 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n126 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n126, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n127 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n127 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n128 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n128, global_Inc.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n129 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n129 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n130 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n130 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n131 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n131, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n132 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n132, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n133 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n133, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n134 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n134 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n135 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n135, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n136 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n136 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n137 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n137, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n138 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n138 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n139 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n139 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n140 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n140, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n141 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n141, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n142 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n142 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n143 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n143, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n144 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n144, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n145 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n145, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n146 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n146 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n147 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n147, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n148 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n148, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n149 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n149, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n150 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n150 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n151 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n151, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n152 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n152 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n153 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n153, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n154 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n154 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n155 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n155 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n156 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n156, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n157 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n157, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n158 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n158 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n159 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n159, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n160 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n160, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n161 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n161, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n162 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n162 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n163 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n163, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n164 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n164, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n165 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n165, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n166 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n166 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n167 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n167, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_OE.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n168 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n168 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n169 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n169, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n170 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n170 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n171 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n171 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n172 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n172, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n173 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n173, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n174 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n174, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n175 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n175, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n176 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n176, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n177 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n177, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n178 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n178, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n179 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n179, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n180 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n180, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n181 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n181, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n182 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n182, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n183 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n183, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n184 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n184, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n185 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n185, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n186 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n186, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n187 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n187, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n188 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n188, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n189 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n189, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n190 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n190, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n191 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n191, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n192 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n192, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n193 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n193, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n194 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n194, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n195 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n195, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n196 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n196, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n197 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n197, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n198 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n198, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n199 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n199 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n200 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n200, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n201 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n201, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n202 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n202, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n203 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n203 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n204 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n204, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n205 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n205, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n206 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n206, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n207 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n207, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n208 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n208, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n209 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n209, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n210 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n210 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n211 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n211, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n212 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n212, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n213 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n213, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n214 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n214 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n215 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n215, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n216 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n216, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n217 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n217, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n218 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n218 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n171, n218 );
      res = RefalRTS.splice_elem( res, n218 );
      res = RefalRTS.splice_elem( res, n217 );
      res = RefalRTS.splice_elem( res, n216 );
      res = RefalRTS.splice_elem( res, n215 );
      RefalRTS.push_stack( n214 );
      RefalRTS.push_stack( n210 );
      res = RefalRTS.splice_elem( res, n214 );
      res = RefalRTS.splice_evar( res, eIndex_b_4, eIndex_e_4 );
      res = RefalRTS.splice_elem( res, n213 );
      res = RefalRTS.splice_elem( res, n212 );
      res = RefalRTS.splice_elem( res, n211 );
      res = RefalRTS.splice_elem( res, n210 );
      res = RefalRTS.splice_elem( res, n209 );
      res = RefalRTS.splice_elem( res, n208 );
      res = RefalRTS.splice_elem( res, n207 );
      res = RefalRTS.splice_elem( res, n206 );
      res = RefalRTS.splice_elem( res, n205 );
      res = RefalRTS.splice_elem( res, n204 );
      RefalRTS.push_stack( n203 );
      RefalRTS.push_stack( n199 );
      res = RefalRTS.splice_elem( res, n203 );
      res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = RefalRTS.splice_elem( res, n202 );
      res = RefalRTS.splice_elem( res, n201 );
      res = RefalRTS.splice_elem( res, n200 );
      res = RefalRTS.splice_elem( res, n199 );
      res = RefalRTS.splice_elem( res, n198 );
      res = RefalRTS.splice_elem( res, n197 );
      res = RefalRTS.splice_elem( res, n196 );
      res = RefalRTS.splice_elem( res, n195 );
      res = RefalRTS.splice_elem( res, n194 );
      res = RefalRTS.splice_elem( res, n193 );
      res = RefalRTS.splice_elem( res, n192 );
      res = RefalRTS.splice_elem( res, n191 );
      res = RefalRTS.splice_elem( res, n190 );
      res = RefalRTS.splice_elem( res, n189 );
      res = RefalRTS.splice_elem( res, n188 );
      res = RefalRTS.splice_elem( res, n187 );
      res = RefalRTS.splice_elem( res, n186 );
      res = RefalRTS.splice_elem( res, n185 );
      res = RefalRTS.splice_elem( res, n184 );
      res = RefalRTS.splice_elem( res, n183 );
      res = RefalRTS.splice_elem( res, n182 );
      res = RefalRTS.splice_elem( res, n181 );
      res = RefalRTS.splice_elem( res, n180 );
      res = RefalRTS.splice_elem( res, n179 );
      res = RefalRTS.splice_elem( res, n178 );
      res = RefalRTS.splice_elem( res, n177 );
      res = RefalRTS.splice_elem( res, n176 );
      res = RefalRTS.splice_elem( res, n175 );
      res = RefalRTS.splice_elem( res, n174 );
      res = RefalRTS.splice_elem( res, n173 );
      res = RefalRTS.splice_elem( res, n172 );
      res = RefalRTS.splice_evar( res, eIndent_b_11, eIndent_e_11 );
      res = RefalRTS.splice_elem( res, n171 );
      RefalRTS.link_brackets( n155, n170 );
      res = RefalRTS.splice_elem( res, n170 );
      res = RefalRTS.splice_elem( res, n169 );
      RefalRTS.push_stack( n168 );
      RefalRTS.push_stack( n166 );
      res = RefalRTS.splice_elem( res, n168 );
      res = RefalRTS.splice_stvar( res, sNested_10 );
      res = RefalRTS.splice_stvar( res, sBracketNum_10 );
      res = RefalRTS.splice_elem( res, n167 );
      res = RefalRTS.splice_elem( res, n166 );
      res = RefalRTS.splice_elem( res, n165 );
      res = RefalRTS.splice_elem( res, n164 );
      res = RefalRTS.splice_elem( res, n163 );
      RefalRTS.push_stack( n162 );
      RefalRTS.push_stack( n158 );
      res = RefalRTS.splice_elem( res, n162 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n161 );
      res = RefalRTS.splice_elem( res, n160 );
      res = RefalRTS.splice_elem( res, n159 );
      res = RefalRTS.splice_elem( res, n158 );
      res = RefalRTS.splice_elem( res, n157 );
      res = RefalRTS.splice_elem( res, n156 );
      res = RefalRTS.splice_evar( res, eIndent_b_10, eIndent_e_10 );
      res = RefalRTS.splice_elem( res, n155 );
      RefalRTS.link_brackets( n139, n154 );
      res = RefalRTS.splice_elem( res, n154 );
      res = RefalRTS.splice_elem( res, n153 );
      RefalRTS.push_stack( n152 );
      RefalRTS.push_stack( n150 );
      res = RefalRTS.splice_elem( res, n152 );
      res = RefalRTS.splice_stvar( res, sNested_9 );
      res = RefalRTS.splice_stvar( res, sBracketNum_9 );
      res = RefalRTS.splice_elem( res, n151 );
      res = RefalRTS.splice_elem( res, n150 );
      res = RefalRTS.splice_elem( res, n149 );
      res = RefalRTS.splice_elem( res, n148 );
      res = RefalRTS.splice_elem( res, n147 );
      RefalRTS.push_stack( n146 );
      RefalRTS.push_stack( n142 );
      res = RefalRTS.splice_elem( res, n146 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n145 );
      res = RefalRTS.splice_elem( res, n144 );
      res = RefalRTS.splice_elem( res, n143 );
      res = RefalRTS.splice_elem( res, n142 );
      res = RefalRTS.splice_elem( res, n141 );
      res = RefalRTS.splice_elem( res, n140 );
      res = RefalRTS.splice_evar( res, eIndent_b_9, eIndent_e_9 );
      res = RefalRTS.splice_elem( res, n139 );
      RefalRTS.link_brackets( n122, n138 );
      res = RefalRTS.splice_elem( res, n138 );
      res = RefalRTS.splice_elem( res, n137 );
      RefalRTS.push_stack( n136 );
      RefalRTS.push_stack( n134 );
      res = RefalRTS.splice_elem( res, n136 );
      res = RefalRTS.splice_stvar( res, sNested_8 );
      res = RefalRTS.splice_stvar( res, sBracketNum_8 );
      res = RefalRTS.splice_elem( res, n135 );
      res = RefalRTS.splice_elem( res, n134 );
      res = RefalRTS.splice_elem( res, n133 );
      res = RefalRTS.splice_elem( res, n132 );
      res = RefalRTS.splice_elem( res, n131 );
      RefalRTS.push_stack( n130 );
      RefalRTS.push_stack( n125 );
      res = RefalRTS.splice_elem( res, n130 );
      RefalRTS.push_stack( n129 );
      RefalRTS.push_stack( n127 );
      res = RefalRTS.splice_elem( res, n129 );
      res = RefalRTS.splice_stvar( res, sNested_7 );
      res = RefalRTS.splice_elem( res, n128 );
      res = RefalRTS.splice_elem( res, n127 );
      res = RefalRTS.splice_stvar( res, sBracketNum_7 );
      res = RefalRTS.splice_elem( res, n126 );
      res = RefalRTS.splice_elem( res, n125 );
      res = RefalRTS.splice_elem( res, n124 );
      res = RefalRTS.splice_elem( res, n123 );
      res = RefalRTS.splice_evar( res, eIndent_b_8, eIndent_e_8 );
      res = RefalRTS.splice_elem( res, n122 );
      RefalRTS.push_stack( n121 );
      RefalRTS.push_stack( n114 );
      res = RefalRTS.splice_elem( res, n121 );
      res = RefalRTS.splice_evar( res, eBracketsForSave_b_1, eBracketsForSave_e_1 );
      RefalRTS.link_brackets( n116, n120 );
      res = RefalRTS.splice_elem( res, n120 );
      res = RefalRTS.splice_elem( res, n119 );
      res = RefalRTS.splice_elem( res, n118 );
      res = RefalRTS.splice_evar( res, eIndent_b_7, eIndent_e_7 );
      res = RefalRTS.splice_elem( res, n117 );
      res = RefalRTS.splice_elem( res, n116 );
      res = RefalRTS.splice_elem( res, n115 );
      res = RefalRTS.splice_elem( res, n114 );
      RefalRTS.link_brackets( n109, n113 );
      res = RefalRTS.splice_elem( res, n113 );
      res = RefalRTS.splice_elem( res, n112 );
      res = RefalRTS.splice_elem( res, n111 );
      res = RefalRTS.splice_elem( res, n110 );
      res = RefalRTS.splice_evar( res, eIndent_b_6, eIndent_e_6 );
      res = RefalRTS.splice_elem( res, n109 );
      RefalRTS.link_brackets( n67, n108 );
      res = RefalRTS.splice_elem( res, n108 );
      res = RefalRTS.splice_elem( res, n107 );
      res = RefalRTS.splice_elem( res, n106 );
      RefalRTS.push_stack( n105 );
      RefalRTS.push_stack( n103 );
      res = RefalRTS.splice_elem( res, n105 );
      res = RefalRTS.splice_stvar( res, sNested_6 );
      res = RefalRTS.splice_stvar( res, sBracketNum_6 );
      res = RefalRTS.splice_elem( res, n104 );
      res = RefalRTS.splice_elem( res, n103 );
      res = RefalRTS.splice_elem( res, n102 );
      res = RefalRTS.splice_elem( res, n101 );
      res = RefalRTS.splice_elem( res, n100 );
      res = RefalRTS.splice_elem( res, n99 );
      res = RefalRTS.splice_elem( res, n98 );
      res = RefalRTS.splice_elem( res, n97 );
      RefalRTS.push_stack( n96 );
      RefalRTS.push_stack( n94 );
      res = RefalRTS.splice_elem( res, n96 );
      res = RefalRTS.splice_stvar( res, sNested_5 );
      res = RefalRTS.splice_stvar( res, sBracketNum_5 );
      res = RefalRTS.splice_elem( res, n95 );
      res = RefalRTS.splice_elem( res, n94 );
      res = RefalRTS.splice_elem( res, n93 );
      res = RefalRTS.splice_elem( res, n92 );
      res = RefalRTS.splice_elem( res, n91 );
      res = RefalRTS.splice_elem( res, n90 );
      res = RefalRTS.splice_elem( res, n89 );
      res = RefalRTS.splice_elem( res, n88 );
      res = RefalRTS.splice_elem( res, n87 );
      res = RefalRTS.splice_elem( res, n86 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_elem( res, n70 );
      res = RefalRTS.splice_elem( res, n69 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_evar( res, eIndent_b_5, eIndent_e_5 );
      res = RefalRTS.splice_elem( res, n67 );
      RefalRTS.link_brackets( n31, n66 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      RefalRTS.push_stack( n62 );
      RefalRTS.push_stack( n60 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_stvar( res, sNested_4 );
      res = RefalRTS.splice_stvar( res, sBracketNum_4 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      RefalRTS.push_stack( n57 );
      RefalRTS.push_stack( n55 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_stvar( res, sNested_3 );
      res = RefalRTS.splice_stvar( res, sBracketNum_3 );
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
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_evar( res, eIndent_b_4, eIndent_e_4 );
      res = RefalRTS.splice_elem( res, n31 );
      RefalRTS.link_brackets( n10, n30 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n26 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, sNested_2 );
      res = RefalRTS.splice_stvar( res, sBracketNum_2 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      RefalRTS.push_stack( n22 );
      RefalRTS.push_stack( n20 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n4, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n0, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdEmptyResult )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdEmptyResult.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n57 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n33, n57 );
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
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n4, n32 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n4 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 sUsings_2 = UInt64.MaxValue;
      UInt64 sUsings_3 = UInt64.MaxValue;
      UInt64 sUsings_4 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 eIndex_b_4 = UInt64.MaxValue;
      UInt64 eIndex_e_4 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdCopyEVar s.Usings 'e e.Index )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdCopyEVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndex_b_4, ref eIndex_e_4 );
      RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_2, sUsings_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_3, sUsings_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_4, sUsings_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_4, ref eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '!' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n34, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n44, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n46 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n49 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n50, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n51 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n52, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n53 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n55 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n58 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n59, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n60 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n61, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n62 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n64 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n65, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n66, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n67, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n68, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n69 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n70 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n77, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n78, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n79, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n81, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n82, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n85, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n86 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n86, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n87 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n87, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n88 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n88, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n89 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n89, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n90 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n90, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n91 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n91, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n92 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n92, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n93 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n93, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n94 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n94, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n95 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n95, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n96 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n96, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n97 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n97, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n98 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n98, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n99 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n99, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n100 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n100, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n101 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n101, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n102 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n102, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n103 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n103, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n104 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n104, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n105 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n105, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n106 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n106, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n107 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n107 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n70, n107 );
      res = RefalRTS.splice_elem( res, n107 );
      res = RefalRTS.splice_elem( res, n106 );
      res = RefalRTS.splice_elem( res, n105 );
      res = RefalRTS.splice_elem( res, n104 );
      res = RefalRTS.splice_elem( res, n103 );
      res = RefalRTS.splice_elem( res, n102 );
      res = RefalRTS.splice_elem( res, n101 );
      res = RefalRTS.splice_elem( res, n100 );
      res = RefalRTS.splice_elem( res, n99 );
      res = RefalRTS.splice_elem( res, n98 );
      res = RefalRTS.splice_elem( res, n97 );
      res = RefalRTS.splice_elem( res, n96 );
      res = RefalRTS.splice_elem( res, n95 );
      res = RefalRTS.splice_elem( res, n94 );
      res = RefalRTS.splice_elem( res, n93 );
      res = RefalRTS.splice_elem( res, n92 );
      res = RefalRTS.splice_elem( res, n91 );
      res = RefalRTS.splice_elem( res, n90 );
      res = RefalRTS.splice_elem( res, n89 );
      res = RefalRTS.splice_elem( res, n88 );
      res = RefalRTS.splice_elem( res, n87 );
      res = RefalRTS.splice_elem( res, n86 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n70 );
      RefalRTS.link_brackets( n2, n69 );
      res = RefalRTS.splice_elem( res, n69 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_elem( res, n67 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      RefalRTS.push_stack( n64 );
      RefalRTS.push_stack( n58 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_evar( res, eIndex_b_4, eIndex_e_4 );
      res = RefalRTS.splice_elem( res, n63 );
      RefalRTS.push_stack( n62 );
      RefalRTS.push_stack( n60 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_stvar( res, sUsings_4 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      RefalRTS.push_stack( n55 );
      RefalRTS.push_stack( n49 );
      res = RefalRTS.splice_elem( res, n55 );
      res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = RefalRTS.splice_elem( res, n54 );
      RefalRTS.push_stack( n53 );
      RefalRTS.push_stack( n51 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_stvar( res, sUsings_3 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_elem( res, n51 );
      res = RefalRTS.splice_elem( res, n50 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      RefalRTS.push_stack( n46 );
      RefalRTS.push_stack( n43 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_stvar( res, sUsings_2 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      RefalRTS.push_stack( n36 );
      RefalRTS.push_stack( n33 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 sUsings_2 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdCopyVar s.Usings s.Mode e.Index )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdCopyVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_2, sUsings_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '!' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n35, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n40, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n42, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n49 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n50 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n60, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n62, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n64, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n65, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n66, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n67, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n68, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n69, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n70, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n77, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n78, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n79, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n81, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n82, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n85, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n86 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n86, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n87 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n87 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n50, n87 );
      res = RefalRTS.splice_elem( res, n87 );
      res = RefalRTS.splice_elem( res, n86 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_elem( res, n70 );
      res = RefalRTS.splice_elem( res, n69 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_elem( res, n67 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
      res = RefalRTS.splice_elem( res, n58 );
      res = RefalRTS.splice_elem( res, n57 );
      res = RefalRTS.splice_elem( res, n56 );
      res = RefalRTS.splice_elem( res, n55 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_elem( res, n53 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_elem( res, n51 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n50 );
      RefalRTS.link_brackets( n2, n49 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_elem( res, n45 );
      RefalRTS.push_stack( n44 );
      RefalRTS.push_stack( n39 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      RefalRTS.push_stack( n43 );
      RefalRTS.push_stack( n41 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_stvar( res, sUsings_2 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      RefalRTS.push_stack( n36 );
      RefalRTS.push_stack( n34 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sElemNumber_1 = UInt64.MaxValue;
      UInt64 eElemInfo_b_1 = UInt64.MaxValue;
      UInt64 eElemInfo_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 sElemNumber_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdAllocateElem s.ElemNumber e.ElemInfo )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdAllocateElem.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sElemNumber_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eElemInfo_b_1 = bb_2_0;
      RefalRTS.use( ref eElemInfo_b_1 );
      eElemInfo_e_1 = be_2_0;
      RefalRTS.use( ref eElemInfo_e_1 );
      RefalRTS.check_evar( ref eElemInfo_b_1, ref eElemInfo_e_1 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sElemNumber_2, sElemNumber_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n11, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'I' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, '6' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, '4' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'x' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'V' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n34, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocateElem.instance ) )
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
      RefalRTS.push_stack( n33 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_evar( res, eElemInfo_b_1, eElemInfo_e_1 );
      res = RefalRTS.splice_stvar( res, sElemNumber_2 );
      RefalRTS.link_brackets( n35, n36 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      RefalRTS.link_brackets( n2, n32 );
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
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_stvar( res, sElemNumber_1 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sLeft_1 = UInt64.MaxValue;
      UInt64 sRight_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdLinkBrackets s.Left s.Right )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdLinkBrackets.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sLeft_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sRight_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '_' ) )
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
      if( ! RefalRTS.alloc_char( ref n24, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n27 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n28, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n33, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n38 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.push_stack( n34 );
      RefalRTS.push_stack( n32 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_stvar( res, sRight_1 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      RefalRTS.push_stack( n29 );
      RefalRTS.push_stack( n27 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_stvar( res, sLeft_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sElemNumber_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdPushStack s.ElemNumber )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdPushStack.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sElemNumber_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 't' ) )
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
      if( ! RefalRTS.alloc_char( ref n22, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n25, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n30 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      RefalRTS.push_stack( n26 );
      RefalRTS.push_stack( n24 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_stvar( res, sElemNumber_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sElemNumber_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdInsertElem & global_ElElem s.ElemNumber )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdInsertElem.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.function_left( global_ElElem.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sElemNumber_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n37, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n42 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      RefalRTS.push_stack( n38 );
      RefalRTS.push_stack( n36 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_stvar( res, sElemNumber_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdInsertElem & global_ElSTVar s.Usings s.Mode e.Index )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdInsertElem.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.function_left( global_ElSTVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n38, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n43 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      RefalRTS.push_stack( n39 );
      RefalRTS.push_stack( n37 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 sUsings_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdInsertEVar s.Usings 'e e.Index )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdInsertEVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_2, sUsings_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, '=' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n37, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n43, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n49 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n49 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      RefalRTS.push_stack( n45 );
      RefalRTS.push_stack( n42 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_stvar( res, sUsings_2 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      RefalRTS.push_stack( n39 );
      RefalRTS.push_stack( n36 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 sUsings_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdCheckEVar s.Usings 'e e.Index )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdCheckEVar.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_2_0, ref be_2_0 ) )
        break;
      eIndex_b_1 = bb_2_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_2_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_2, sUsings_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n29, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n39, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n2, n45 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      RefalRTS.push_stack( n41 );
      RefalRTS.push_stack( n38 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_stvar( res, sUsings_2 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.push_stack( n31 );
      RefalRTS.push_stack( n28 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 eIndent_b_4 = UInt64.MaxValue;
      UInt64 eIndent_e_4 = UInt64.MaxValue;
      // (~1 e.Indent )~1 (~2 & global_CmdReturnResult )~2
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.function_left( global_CmdReturnResult.instance, ref bb_2_0, ref be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_2_0, be_2_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      RefalRTS.check_evar( ref eIndent_b_4, ref eIndent_e_4 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_4, ref eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
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
      if( ! RefalRTS.alloc_char( ref n3, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '(' ) )
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
      if( ! RefalRTS.alloc_char( ref n19, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n27 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n52, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n54, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n55, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n56 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n56, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n57 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n57, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n58 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n58, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n59 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n59, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n60 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n60, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n61 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n61, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n62 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n62, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n63 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n63, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n64 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n64, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n65 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n65, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n66 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n66, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n67 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n67, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n68 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n68 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n69 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n69 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n70 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n70, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n71 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n71, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n72 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n72, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n73 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n73, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n74 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n74, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n75 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n75, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n76 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n76, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n77 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n77, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n78 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n78, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n79 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n79, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n80 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n80, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n81 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n81, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n82 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n82, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n83 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n83, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n84 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n84, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n85 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n85, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n86 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n86, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n87 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n87, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n88 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n88, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n89 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n89, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n90 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n90, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n91 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n91, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n92 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n92, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n93 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n93, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n94 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n94, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n95 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n95, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n96 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n96, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n97 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n97, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n98 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n98, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n99 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n99, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n100 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n100, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n101 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n101, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n102 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n102, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n103 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n103 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n69, n103 );
      res = RefalRTS.splice_elem( res, n103 );
      res = RefalRTS.splice_elem( res, n102 );
      res = RefalRTS.splice_elem( res, n101 );
      res = RefalRTS.splice_elem( res, n100 );
      res = RefalRTS.splice_elem( res, n99 );
      res = RefalRTS.splice_elem( res, n98 );
      res = RefalRTS.splice_elem( res, n97 );
      res = RefalRTS.splice_elem( res, n96 );
      res = RefalRTS.splice_elem( res, n95 );
      res = RefalRTS.splice_elem( res, n94 );
      res = RefalRTS.splice_elem( res, n93 );
      res = RefalRTS.splice_elem( res, n92 );
      res = RefalRTS.splice_elem( res, n91 );
      res = RefalRTS.splice_elem( res, n90 );
      res = RefalRTS.splice_elem( res, n89 );
      res = RefalRTS.splice_elem( res, n88 );
      res = RefalRTS.splice_elem( res, n87 );
      res = RefalRTS.splice_elem( res, n86 );
      res = RefalRTS.splice_elem( res, n85 );
      res = RefalRTS.splice_elem( res, n84 );
      res = RefalRTS.splice_elem( res, n83 );
      res = RefalRTS.splice_elem( res, n82 );
      res = RefalRTS.splice_elem( res, n81 );
      res = RefalRTS.splice_elem( res, n80 );
      res = RefalRTS.splice_elem( res, n79 );
      res = RefalRTS.splice_elem( res, n78 );
      res = RefalRTS.splice_elem( res, n77 );
      res = RefalRTS.splice_elem( res, n76 );
      res = RefalRTS.splice_elem( res, n75 );
      res = RefalRTS.splice_elem( res, n74 );
      res = RefalRTS.splice_elem( res, n73 );
      res = RefalRTS.splice_elem( res, n72 );
      res = RefalRTS.splice_elem( res, n71 );
      res = RefalRTS.splice_elem( res, n70 );
      res = RefalRTS.splice_evar( res, eIndent_b_4, eIndent_e_4 );
      res = RefalRTS.splice_elem( res, n69 );
      RefalRTS.link_brackets( n28, n68 );
      res = RefalRTS.splice_elem( res, n68 );
      res = RefalRTS.splice_elem( res, n67 );
      res = RefalRTS.splice_elem( res, n66 );
      res = RefalRTS.splice_elem( res, n65 );
      res = RefalRTS.splice_elem( res, n64 );
      res = RefalRTS.splice_elem( res, n63 );
      res = RefalRTS.splice_elem( res, n62 );
      res = RefalRTS.splice_elem( res, n61 );
      res = RefalRTS.splice_elem( res, n60 );
      res = RefalRTS.splice_elem( res, n59 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n28 );
      RefalRTS.link_brackets( n2, n27 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n2 );
      RefalRTS.link_brackets( n0, n1 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar() { }
  public override string func_name ()
  {
    return "PrintVar";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // s.Usings s.Mode e.Index
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_char( ref n0, '_' ) )
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
      RefalRTS.push_stack( n3 );
      RefalRTS.push_stack( n1 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B() { }
  public override string func_name ()
  {
    return "PrintEVar_B";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // s.Usings s.Mode e.Index
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_char( ref n0, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E() { }
  public override string func_name ()
  {
    return "PrintEVar_E";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      // s.Usings s.Mode e.Index
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_0_0, ref be_0_0 ) )
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
      if( ! RefalRTS.alloc_char( ref n0, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_elem( res, n0 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_Escape: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_Escape() { }
  public override string func_name ()
  {
    return "Escape";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_Escape();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '\n'
      //(0 0 )
      if( ! RefalRTS.char_left( '\n', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // '\t'
      //(0 0 )
      if( ! RefalRTS.char_left( '\t', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // '\r'
      //(0 0 )
      if( ! RefalRTS.char_left( '\r', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // '\\'
      //(0 0 )
      if( ! RefalRTS.char_left( '\\', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // '\''
      //(0 0 )
      if( ! RefalRTS.char_left( '\'', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, '\\' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
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
      UInt64 sOther_1 = UInt64.MaxValue;
      // s.Other
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sOther_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      res = RefalRTS.splice_stvar( res, sOther_1 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchChar: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchChar() { }
  public override string func_name ()
  {
    return "PrintMatchChar";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchChar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sChar_1 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Char
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n9 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_Escape.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n15 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n11 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      RefalRTS.link_brackets( n4, n9 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchNumber: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchNumber() { }
  public override string func_name ()
  {
    return "PrintMatchNumber";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchNumber();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sNumber_1 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Number
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n12 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n13, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n14 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'L' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n12 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      RefalRTS.link_brackets( n4, n11 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchName: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchName() { }
  public override string func_name ()
  {
    return "PrintMatchName";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchName();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested e.Name
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
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
      if( ! RefalRTS.alloc_char( ref n11, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'e' ) )
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
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      RefalRTS.link_brackets( n4, n13 );
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
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchIdent: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchIdent() { }
  public override string func_name ()
  {
    return "PrintMatchIdent";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchIdent();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested e.Name
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n20 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n20 );
      RefalRTS.push_stack( n0 );
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
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      RefalRTS.link_brackets( n4, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchBrackets: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchBrackets() { }
  public override string func_name ()
  {
    return "PrintMatchBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sInnerNum_1 = UInt64.MaxValue;
      UInt64 sInnerNum_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.InnerNum
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sInnerNum_2, sInnerNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n19, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n20, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n21 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n29, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n30, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n32 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n32 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n32 );
      RefalRTS.push_stack( n31 );
      RefalRTS.push_stack( n28 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, sInnerNum_2 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      RefalRTS.push_stack( n21 );
      RefalRTS.push_stack( n18 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_stvar( res, sInnerNum_1 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n4, n13 );
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
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchADT: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchADT() { }
  public override string func_name ()
  {
    return "PrintMatchADT";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchADT();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sInnerNum_1 = UInt64.MaxValue;
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      UInt64 sInnerNum_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.InnerNum e.Name
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sInnerNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sInnerNum_2, sInnerNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n15, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n24, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n25, 0UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n38 );
      RefalRTS.push_stack( n0 );
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
      res = RefalRTS.splice_evar( res, eName_b_1, eName_e_1 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      RefalRTS.push_stack( n26 );
      RefalRTS.push_stack( n23 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_stvar( res, sInnerNum_2 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_stvar( res, sInnerNum_1 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n4, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BreakerFromIndent: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BreakerFromIndent() { }
  public override string func_name ()
  {
    return "BreakerFromIndent";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BreakerFromIndent();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '      '
      //(0 0 )
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, ';' ) )
        return RefalRTS.FnResult.NoMemory;
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
      UInt64 eOtherIndent_b_1 = UInt64.MaxValue;
      UInt64 eOtherIndent_e_1 = UInt64.MaxValue;
      // e.OtherIndent
      //(0 0 )
      eOtherIndent_b_1 = bb_0_0;
      RefalRTS.use( ref eOtherIndent_b_1 );
      eOtherIndent_e_1 = be_0_0;
      RefalRTS.use( ref eOtherIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ';' ) )
        return RefalRTS.FnResult.NoMemory;
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchEmpty: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchEmpty() { }
  public override string func_name ()
  {
    return "PrintMatchEmpty";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchEmpty();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 sBracketNum_2 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.BracketNum s.Nested
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_2, sBracketNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '!' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n27, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n32, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n38 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n42 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n43, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BreakerFromIndent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n39, n45 );
      res = RefalRTS.splice_elem( res, n45 );
      RefalRTS.push_stack( n44 );
      RefalRTS.push_stack( n42 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n39 );
      RefalRTS.link_brackets( n0, n38 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      RefalRTS.push_stack( n33 );
      RefalRTS.push_stack( n31 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_stvar( res, sNested_2 );
      res = RefalRTS.splice_stvar( res, sBracketNum_2 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      RefalRTS.push_stack( n28 );
      RefalRTS.push_stack( n26 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_StrFromDirection: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_StrFromDirection() { }
  public override string func_name ()
  {
    return "StrFromDirection";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_StrFromDirection();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // & global_AlgLeft
      //(0 0 )
      if( ! RefalRTS.function_left( global_AlgLeft.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_AlgRight
      //(0 0 )
      if( ! RefalRTS.function_left( global_AlgRight.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'g' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_VarMatchFunction: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_VarMatchFunction() { }
  public override string func_name ()
  {
    return "VarMatchFunction";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_VarMatchFunction();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // 's'
      //(0 0 )
      if( ! RefalRTS.char_left( 's', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // 't'
      //(0 0 )
      if( ! RefalRTS.char_left( 't', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchSTVar: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchSTVar() { }
  public override string func_name ()
  {
    return "PrintMatchSTVar";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchSTVar();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Mode e.Index
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_VarMatchFunction.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n8 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n14, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_number( ref n15, 1UL ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n16 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n17 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n17 );
      RefalRTS.push_stack( n16 );
      RefalRTS.push_stack( n13 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      res = RefalRTS.splice_elem( res, n15 );
      res = RefalRTS.splice_elem( res, n14 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n4, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchRepeated: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchRepeated() { }
  public override string func_name ()
  {
    return "PrintMatchRepeated";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatchRepeated();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sUsings_2 = UInt64.MaxValue;
      UInt64 sUsings_3 = UInt64.MaxValue;
      UInt64 sUsings_4 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      UInt64 eIndex_b_3 = UInt64.MaxValue;
      UInt64 eIndex_e_3 = UInt64.MaxValue;
      UInt64 eIndex_b_4 = UInt64.MaxValue;
      UInt64 eIndex_e_4 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Usings 'e e.Index
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( 'e', ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_4, ref eIndex_e_4 );
      RefalRTS.check_evar( ref eIndex_b_3, ref eIndex_e_3 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sUsings_2, sUsings_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_3, sUsings_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sUsings_4, sUsings_3 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_3, ref eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_4, ref eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n18 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n23 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n24, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n34, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n36 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n40, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n41 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n42, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n43 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n48 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n49, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintEVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n50 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n51, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n52 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n53 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n53, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n54 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n54 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n55 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n55 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n55 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n55 );
      RefalRTS.push_stack( n54 );
      RefalRTS.push_stack( n48 );
      res = RefalRTS.splice_elem( res, n54 );
      res = RefalRTS.splice_evar( res, eIndex_b_4, eIndex_e_4 );
      res = RefalRTS.splice_elem( res, n53 );
      RefalRTS.push_stack( n52 );
      RefalRTS.push_stack( n50 );
      res = RefalRTS.splice_elem( res, n52 );
      res = RefalRTS.splice_stvar( res, sUsings_4 );
      res = RefalRTS.splice_elem( res, n51 );
      res = RefalRTS.splice_elem( res, n50 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      RefalRTS.push_stack( n45 );
      RefalRTS.push_stack( n39 );
      res = RefalRTS.splice_elem( res, n45 );
      res = RefalRTS.splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = RefalRTS.splice_elem( res, n44 );
      RefalRTS.push_stack( n43 );
      RefalRTS.push_stack( n41 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_stvar( res, sUsings_3 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      RefalRTS.push_stack( n36 );
      RefalRTS.push_stack( n33 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_stvar( res, sUsings_2 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      RefalRTS.push_stack( n26 );
      RefalRTS.push_stack( n23 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_elem( res, n19 );
      RefalRTS.link_brackets( n4, n18 );
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
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 sUsings_1 = UInt64.MaxValue;
      UInt64 sMode_1 = UInt64.MaxValue;
      UInt64 eIndex_b_1 = UInt64.MaxValue;
      UInt64 eIndex_e_1 = UInt64.MaxValue;
      UInt64 sUsings_2 = UInt64.MaxValue;
      UInt64 sMode_2 = UInt64.MaxValue;
      UInt64 eIndex_b_2 = UInt64.MaxValue;
      UInt64 eIndex_e_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Usings s.Mode e.Index
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sUsings_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sMode_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndex_b_1 = bb_0_0;
      RefalRTS.use( ref eIndex_b_1 );
      eIndex_e_1 = be_0_0;
      RefalRTS.use( ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndex_b_2, ref eIndex_e_2 );
      RefalRTS.check_evar( ref eIndex_b_1, ref eIndex_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_stvar( ref sUsings_2, sUsings_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sMode_2, sMode_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndex_b_2, ref eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch.instance ) )
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
      if( ! RefalRTS.alloc_char( ref n5, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'v' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n25, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n26 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n30, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n31 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n32, global_Dec.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n33 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n34 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n35 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n35 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n35 );
      RefalRTS.push_stack( n34 );
      RefalRTS.push_stack( n29 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = RefalRTS.splice_stvar( res, sMode_2 );
      RefalRTS.push_stack( n33 );
      RefalRTS.push_stack( n31 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_stvar( res, sUsings_2 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_elem( res, n31 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      RefalRTS.push_stack( n26 );
      RefalRTS.push_stack( n24 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = RefalRTS.splice_stvar( res, sMode_1 );
      res = RefalRTS.splice_stvar( res, sUsings_1 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.link_brackets( n4, n19 );
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
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch() { }
  public override string func_name ()
  {
    return "PrintMatch";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintMatch();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sDirection_1 = UInt64.MaxValue;
      UInt64 sBracketNum_1 = UInt64.MaxValue;
      UInt64 sNested_1 = UInt64.MaxValue;
      UInt64 eFunction_b_1 = UInt64.MaxValue;
      UInt64 eFunction_e_1 = UInt64.MaxValue;
      UInt64 eTextRep_b_1 = UInt64.MaxValue;
      UInt64 eTextRep_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      UInt64 sBracketNum_2 = UInt64.MaxValue;
      UInt64 sNested_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested (~2 e.Function )~2 e.TextRep
      //(0 0 )(1 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sDirection_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sBracketNum_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNested_1, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eFunction_b_1 = bb_2_0;
      RefalRTS.use( ref eFunction_b_1 );
      eFunction_e_1 = be_2_0;
      RefalRTS.use( ref eFunction_e_1 );
      eTextRep_b_1 = bb_0_0;
      RefalRTS.use( ref eTextRep_b_1 );
      eTextRep_e_1 = be_0_0;
      RefalRTS.use( ref eTextRep_e_1 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eTextRep_b_1, ref eTextRep_e_1 );
      RefalRTS.check_evar( ref eFunction_b_1, ref eFunction_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sBracketNum_2, sBracketNum_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sNested_2, sNested_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '!' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n17 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n18, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_StrFromDirection.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n19 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n28 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n29, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_B.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n37 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n38, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BracketsVar_E.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n39 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n44 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n45 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n48 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n49, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_BreakerFromIndent.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n50 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n51 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n45, n51 );
      res = RefalRTS.splice_elem( res, n51 );
      RefalRTS.push_stack( n50 );
      RefalRTS.push_stack( n48 );
      res = RefalRTS.splice_elem( res, n50 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n49 );
      res = RefalRTS.splice_elem( res, n48 );
      res = RefalRTS.splice_elem( res, n47 );
      res = RefalRTS.splice_elem( res, n46 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n45 );
      RefalRTS.link_brackets( n0, n44 );
      res = RefalRTS.splice_elem( res, n44 );
      res = RefalRTS.splice_elem( res, n43 );
      res = RefalRTS.splice_elem( res, n42 );
      res = RefalRTS.splice_elem( res, n41 );
      res = RefalRTS.splice_elem( res, n40 );
      RefalRTS.push_stack( n39 );
      RefalRTS.push_stack( n37 );
      res = RefalRTS.splice_elem( res, n39 );
      res = RefalRTS.splice_stvar( res, sNested_2 );
      res = RefalRTS.splice_stvar( res, sBracketNum_2 );
      res = RefalRTS.splice_elem( res, n38 );
      res = RefalRTS.splice_elem( res, n37 );
      res = RefalRTS.splice_elem( res, n36 );
      res = RefalRTS.splice_elem( res, n35 );
      res = RefalRTS.splice_elem( res, n34 );
      res = RefalRTS.splice_elem( res, n33 );
      res = RefalRTS.splice_elem( res, n32 );
      res = RefalRTS.splice_elem( res, n31 );
      RefalRTS.push_stack( n30 );
      RefalRTS.push_stack( n28 );
      res = RefalRTS.splice_elem( res, n30 );
      res = RefalRTS.splice_stvar( res, sNested_1 );
      res = RefalRTS.splice_stvar( res, sBracketNum_1 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_evar( res, eTextRep_b_1, eTextRep_e_1 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      RefalRTS.push_stack( n19 );
      RefalRTS.push_stack( n17 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_stvar( res, sDirection_1 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eFunction_b_1, eFunction_e_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar() { }
  public override string func_name ()
  {
    return "PrintElemVar";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar();

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
      // s.Number
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'n' ) )
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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocateElem: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocateElem() { }
  public override string func_name ()
  {
    return "PrintAllocateElem";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocateElem();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 sElemNumber_1 = UInt64.MaxValue;
      UInt64 sElementType_1 = UInt64.MaxValue;
      UInt64 eInfo_b_1 = UInt64.MaxValue;
      UInt64 eInfo_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 sElementType_2 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.ElemNumber s.ElementType e.Info
      //(0 0 )(1 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      if( ! RefalRTS.svar_left( ref sElemNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sElementType_1, ref bb_0_0, ref be_0_0 ) )
        break;
      eInfo_b_1 = bb_0_0;
      RefalRTS.use( ref eInfo_b_1 );
      eInfo_e_1 = be_0_0;
      RefalRTS.use( ref eInfo_e_1 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eInfo_b_1, ref eInfo_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_stvar( ref sElementType_2, sElementType_1 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n1, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocate_Aux.instance ) )
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
      if( ! RefalRTS.alloc_open_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n6, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwAllocator.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n7 ) )
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
      if( ! RefalRTS.alloc_function( ref n11, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwInfo.instance ) )
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
      if( ! RefalRTS.alloc_open_bracket( ref n15 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n29, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n30, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n31, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, 'F' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n40, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n41 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n41, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n42 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n42, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n43 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n43, 'N' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n44 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n44, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n45 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n45, 'M' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n46 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n46, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n47 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n47, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n48 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n48, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n49 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n49, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n50 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n50, 'y' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n51 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n51, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n52 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n52 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n15, n52 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n15 );
      RefalRTS.push_stack( n14 );
      RefalRTS.push_stack( n0 );
      res = RefalRTS.splice_elem( res, n14 );
      RefalRTS.link_brackets( n9, n13 );
      res = RefalRTS.splice_elem( res, n13 );
      RefalRTS.push_stack( n12 );
      RefalRTS.push_stack( n10 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_evar( res, eInfo_b_1, eInfo_e_1 );
      res = RefalRTS.splice_stvar( res, sElementType_2 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      RefalRTS.link_brackets( n4, n8 );
      res = RefalRTS.splice_elem( res, n8 );
      RefalRTS.push_stack( n7 );
      RefalRTS.push_stack( n5 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_stvar( res, sElementType_1 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sElemNumber_1 );
      RefalRTS.link_brackets( n2, n3 );
      res = RefalRTS.splice_elem( res, n3 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocate_Aux: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocate_Aux() { }
  public override string func_name ()
  {
    return "PrintAllocate_Aux";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintAllocate_Aux();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eConstructor_b_1 = UInt64.MaxValue;
      UInt64 eConstructor_e_1 = UInt64.MaxValue;
      UInt64 eValue_b_1 = UInt64.MaxValue;
      UInt64 eValue_e_1 = UInt64.MaxValue;
      UInt64 sElemNumber_1 = UInt64.MaxValue;
      // (~1 e.Indent )~1 s.ElemNumber (~2 e.Constructor )~2 (~3 e.Value )~3
      //(0 0 )(1 0 )(3 0 )(2 0 )
      UInt64 bb_1_0 = 0;
      UInt64 be_1_0 = 0;
      if( ! RefalRTS.brackets_left( ref bb_1_0, ref be_1_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_3_0 = 0;
      UInt64 be_3_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_3_0, ref be_3_0, ref bb_0_0, ref be_0_0 ) )
        break;
      UInt64 bb_2_0 = 0;
      UInt64 be_2_0 = 0;
      if( ! RefalRTS.brackets_right( ref bb_2_0, ref be_2_0, ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_1_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_1_0;
      RefalRTS.use( ref eIndent_e_1 );
      eConstructor_b_1 = bb_2_0;
      RefalRTS.use( ref eConstructor_b_1 );
      eConstructor_e_1 = be_2_0;
      RefalRTS.use( ref eConstructor_e_1 );
      eValue_b_1 = bb_3_0;
      RefalRTS.use( ref eValue_b_1 );
      eValue_e_1 = be_3_0;
      RefalRTS.use( ref eValue_e_1 );
      if( ! RefalRTS.svar_left( ref sElemNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;
      RefalRTS.check_evar( ref eValue_b_1, ref eValue_e_1 );
      RefalRTS.check_evar( ref eConstructor_b_1, ref eConstructor_e_1 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '!' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'R' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'T' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'S' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, '(' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n22 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n23, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintElemVar.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n24 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ')' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n29 );
      res = RefalRTS.splice_elem( res, n29 );
      res = RefalRTS.splice_elem( res, n28 );
      res = RefalRTS.splice_elem( res, n27 );
      res = RefalRTS.splice_elem( res, n26 );
      res = RefalRTS.splice_elem( res, n25 );
      res = RefalRTS.splice_evar( res, eValue_b_1, eValue_e_1 );
      RefalRTS.push_stack( n24 );
      RefalRTS.push_stack( n22 );
      res = RefalRTS.splice_elem( res, n24 );
      res = RefalRTS.splice_stvar( res, sElemNumber_1 );
      res = RefalRTS.splice_elem( res, n23 );
      res = RefalRTS.splice_elem( res, n22 );
      res = RefalRTS.splice_elem( res, n21 );
      res = RefalRTS.splice_elem( res, n20 );
      res = RefalRTS.splice_elem( res, n19 );
      res = RefalRTS.splice_elem( res, n18 );
      res = RefalRTS.splice_elem( res, n17 );
      res = RefalRTS.splice_elem( res, n16 );
      res = RefalRTS.splice_evar( res, eConstructor_b_1, eConstructor_e_1 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwAllocator: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwAllocator() { }
  public override string func_name ()
  {
    return "SwAllocator";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwAllocator();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // & global_ElChar
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElChar.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'h' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElName
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElName.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'f' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'c' ) )
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
      // & global_ElNumber
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElNumber.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'm' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElIdent
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElIdent.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElOpenADT
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElOpenADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElCloseADT
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElCloseADT.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'd' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElOpenBracket
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElOpenBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElCloseBracket
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElCloseBracket.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'b' ) )
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
      if( ! RefalRTS.alloc_char( ref n16, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, 't' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElOpenCall
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElOpenCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'p' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
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
      // & global_ElCloseCall
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElCloseCall.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, '_' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, 'l' ) )
        return RefalRTS.FnResult.NoMemory;
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

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwInfo: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwInfo() { }
  public override string func_name ()
  {
    return "SwInfo";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_SwInfo();

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
      // & global_ElChar s.Char
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElChar.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sChar_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n4, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_Escape.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n5 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, '\'' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n6 );
      RefalRTS.push_stack( n5 );
      RefalRTS.push_stack( n3 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_stvar( res, sChar_1 );
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
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // & global_ElName e.Name
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElName.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_PrintName.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n11, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
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
      UInt64 sNumber_1 = UInt64.MaxValue;
      // & global_ElNumber s.Number
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElNumber.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.svar_left( ref sNumber_1, ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n3, global_StrFromInt.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n4 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'U' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'L' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      RefalRTS.push_stack( n4 );
      RefalRTS.push_stack( n2 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_stvar( res, sNumber_1 );
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
      UInt64 eName_b_1 = UInt64.MaxValue;
      UInt64 eName_e_1 = UInt64.MaxValue;
      // & global_ElIdent e.Name
      //(0 0 )
      if( ! RefalRTS.function_left( global_ElIdent.instance, ref bb_0_0, ref be_0_0 ) )
        break;
      eName_b_1 = bb_0_0;
      RefalRTS.use( ref eName_b_1 );
      eName_e_1 = be_0_0;
      RefalRTS.use( ref eName_e_1 );
      RefalRTS.check_evar( ref eName_b_1, ref eName_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n0, ',' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, '.' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 's' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n10, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_elem( res, n3 );
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
      UInt64 sOther_1 = UInt64.MaxValue;
      // s.Other
      //(0 0 )
      if( ! RefalRTS.svar_left( ref sOther_1, ref bb_0_0, ref be_0_0 ) )
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

public class local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCloseBrackets: RefalRTS.Function
{
  private local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCloseBrackets() { }
  public override string func_name ()
  {
    return "GenCloseBrackets";
  }

  public static readonly RefalRTS.Function instance = new local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCloseBrackets();

  public override RefalRTS.FnResult perform(UInt64 arg_begin, UInt64 arg_end)
  {
    RefalRTS.this_is_a_generated_function();
    for( ; ; ) {
      UInt64 bb_0_0 = arg_begin;
      UInt64 be_0_0 = arg_end;
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_left( ref bb_0_0, ref be_0_0 );
      RefalRTS.move_right( ref bb_0_0, ref be_0_0 );
      // '      '
      //(0 0 )
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.is_empty( bb_0_0, be_0_0 ) )
        break;

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n6 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.link_brackets( n0, n6 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      // '           e.Indent
      //(0 0 )
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_0_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_0_0;
      RefalRTS.use( ref eIndent_e_1 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n2, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n3, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n12, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n13, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n14 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n14, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n15 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n15, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n16 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n16, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n17 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n17, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n18 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n18, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n19 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n19, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n20 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n20, 'c' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n21 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n21, 'o' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n22 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n22, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n23 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n23, 't' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n24 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n24, 'i' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n25 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n25, 'n' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n26 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n26, 'u' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n27 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n27, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n28 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n28, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n29 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n29 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n30 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n30 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n31 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n31, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCloseBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n32 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n32, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n33 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n33, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n34 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n34, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n35 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n35, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n36 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n36, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n37 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n37, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n38 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n38, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n39 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n39, ' ' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n40 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n40 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n40 );
      RefalRTS.push_stack( n30 );
      res = RefalRTS.splice_elem( res, n40 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
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
      RefalRTS.link_brackets( n11, n29 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n0, n10 );
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
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
      UInt64 eIndent_b_1 = UInt64.MaxValue;
      UInt64 eIndent_e_1 = UInt64.MaxValue;
      UInt64 eIndent_b_2 = UInt64.MaxValue;
      UInt64 eIndent_e_2 = UInt64.MaxValue;
      UInt64 eIndent_b_3 = UInt64.MaxValue;
      UInt64 eIndent_e_3 = UInt64.MaxValue;
      // '   e.Indent
      //(0 0 )
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      if( ! RefalRTS.char_left( ' ', ref bb_0_0, ref be_0_0 ) )
        break;
      eIndent_b_1 = bb_0_0;
      RefalRTS.use( ref eIndent_b_1 );
      eIndent_e_1 = be_0_0;
      RefalRTS.use( ref eIndent_e_1 );
      RefalRTS.check_evar( ref eIndent_b_3, ref eIndent_e_3 );
      RefalRTS.check_evar( ref eIndent_b_2, ref eIndent_e_2 );
      RefalRTS.check_evar( ref eIndent_b_1, ref eIndent_e_1 );

      RefalRTS.reset_allocator();
      UInt64 res = arg_begin;
      if( ! RefalRTS.copy_evar( ref eIndent_b_2, ref eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
        return RefalRTS.FnResult.NoMemory;
      if( ! RefalRTS.copy_evar( ref eIndent_b_3, ref eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n0 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n0 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n1 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n1, '}' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n2 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n2 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n3 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_bracket( ref n3 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n4 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n4, 'b' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n5 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n5, 'r' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n6 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n6, 'e' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n7 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n7, 'a' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n8 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n8, 'k' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n9 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_char( ref n9, ';' ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n10 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_bracket( ref n10 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n11 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_open_call( ref n11 ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n12 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_function( ref n12, local_71_101_110_101_114_97_116_111_114_46_115_114_101_102_E_GenCloseBrackets.instance ) )
        return RefalRTS.FnResult.NoMemory;
      UInt64 n13 = UInt64.MaxValue;
      if( ! RefalRTS.alloc_close_call( ref n13 ) )
        return RefalRTS.FnResult.NoMemory;
      RefalRTS.push_stack( n13 );
      RefalRTS.push_stack( n11 );
      res = RefalRTS.splice_elem( res, n13 );
      res = RefalRTS.splice_evar( res, eIndent_b_3, eIndent_e_3 );
      res = RefalRTS.splice_elem( res, n12 );
      res = RefalRTS.splice_elem( res, n11 );
      RefalRTS.link_brackets( n3, n10 );
      res = RefalRTS.splice_elem( res, n10 );
      res = RefalRTS.splice_elem( res, n9 );
      res = RefalRTS.splice_elem( res, n8 );
      res = RefalRTS.splice_elem( res, n7 );
      res = RefalRTS.splice_elem( res, n6 );
      res = RefalRTS.splice_elem( res, n5 );
      res = RefalRTS.splice_elem( res, n4 );
      res = RefalRTS.splice_evar( res, eIndent_b_2, eIndent_e_2 );
      res = RefalRTS.splice_elem( res, n3 );
      RefalRTS.link_brackets( n0, n2 );
      res = RefalRTS.splice_elem( res, n2 );
      res = RefalRTS.splice_elem( res, n1 );
      res = RefalRTS.splice_evar( res, eIndent_b_1, eIndent_e_1 );
      res = RefalRTS.splice_elem( res, n0 );
      RefalRTS.use( ref res );
      RefalRTS.garbage( arg_begin, arg_end );
      return RefalRTS.FnResult.Success;
    }

    return RefalRTS.FnResult.RecognitionImpossible;
  }
}


//End of file
