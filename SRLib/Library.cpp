#include <stdio.h>
#include <string.h>
#include <vector>
#include <ctype.h>
#include <stdlib.h>

#include "refalrts.h"

//FROM refalrts

namespace refalrts {

class UnexpectedTypeException { };

} // namespace refalrts

namespace {

static refalrts::Iter next( refalrts::Iter current ) {
  return current->next;
}

static refalrts::Iter prev( refalrts::Iter current ) {
  return current->prev;
}

} // unnamed namespace

//------------------------------------------------------------------------------

// Операции распределителя памяти

namespace refalrts{

namespace allocator {

void reset_allocator();
bool alloc_node( Iter& node );
Iter free_ptr();
void splice_to_freelist( Iter begin, Iter end );

} // namespace allocator

} // namespace refalrts

//==============================================================================
// Библиотека "встроенных" функций
//==============================================================================

// Основные перечисления

refalrts::FnResult Success( refalrts::Iter, refalrts::Iter ) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Fails( refalrts::Iter, refalrts::Iter ) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult True( refalrts::Iter, refalrts::Iter ) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult False( refalrts::Iter, refalrts::Iter ) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult TypeNumber(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult TypeCharacter(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult TypeFunction(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult TypeFile(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

// Математические операции

refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info + sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info - sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info * sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Div(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info / sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Mod(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info % sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

// Ввод-вывод

refalrts::FnResult write_to_stream(
  FILE *out, refalrts::Iter str_begin, refalrts::Iter str_end
) {
  if( ferror( out ) ) {
    return refalrts::cRecognitionImpossible;
  }

  int printf_res;

  for(
    refalrts::Iter p = str_begin;
    ! empty_seq( p, str_end );
    move_left( p, str_end )
  ) {
    switch( p->tag ) {
      case refalrts::cDataChar: {
        printf_res = fprintf( out, "%c", p->char_info );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataNumber: {
        printf_res = fprintf( out, "%d ", p->number_info );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataFunction: {
        if( p->function_info.name[0] != '\0' ) {
          printf_res = fprintf( out, "%s ", p->function_info.name );
        } else {
          printf_res = fprintf( out, "&%p ", p->function_info.ptr );
        }

        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataOpenBracket: {
        printf_res = fprintf( out, "(" );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataCloseBracket: {
        printf_res = fprintf( out, ")" );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataFile: {
        printf_res = fprintf( out, "*%p", p->file_info );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      default:
        throw refalrts::UnexpectedTypeException();
        // break;
    }
  }

  printf_res = fprintf( out, "\n" );
  if( printf_res < 0 ) {
    return refalrts::cRecognitionImpossible;
  } else {
    return refalrts::cSuccess;
  }
}

refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eLine_b_1;
    refalrts::Iter eLine_e_1;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::FnResult fnres =
      write_to_stream( stdout, eLine_b_1, eLine_e_1 );

    if( fnres != refalrts::cSuccess )
      return fnres;

    refalrts::reset_allocator();
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return fnres;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sFileHandle_1;
    refalrts::Iter eLine_b_1;
    refalrts::Iter eLine_e_1;
    // s.FileHandle e.Line
    if( ! refalrts::svar_left( sFileHandle_1, bb_0, be_0 ) ) 
      break;
    if( sFileHandle_1->tag != refalrts::cDataFile )
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::FnResult write_result =
      write_to_stream(
        static_cast<FILE*>( sFileHandle_1->file_info ), eLine_b_1, eLine_e_1
      );

    if( write_result != refalrts::cSuccess )
      return write_result;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::splice_stvar( res, sFileHandle_1 );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult read_from_stream(
  FILE *input, refalrts::Iter& begin, refalrts::Iter& end
) {
  refalrts::Iter before_begin =
    prev( refalrts::allocator::free_ptr() );
  refalrts::Iter cur_char_node = 0;

  int cur_char;

  for( ;; ) {
    cur_char = getc(input);
    if( EOF == cur_char ) {
      if( ! refalrts::alloc_number( cur_char_node, 0UL ) ) {
        return refalrts::cNoMemory;
      }
      break;
    } else if ( '\n' == cur_char ) {
      break;
    } else {
      /*
        Пользуемся тем фактом, что в данной реализации размещёные в свободной
        памяти узлы располагаются в последовательных адресах, которые будут
        начинаться с before_begin->next.
      */
      if( ! refalrts::alloc_char( cur_char_node, cur_char ) ) {
        return refalrts::cNoMemory;
      }
    }
  }

  if( cur_char_node != 0 ) {
    begin = next( before_begin );
    end = cur_char_node;
  } else {
    begin = 0;
    end = 0;
  }

  return refalrts::cSuccess;
}

refalrts::FnResult ReadLine(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter str_begin, str_end;

    refalrts::FnResult fn_result =
      read_from_stream( stdin, str_begin, str_end );

    if( fn_result != refalrts::cSuccess )
      return fn_result;

    res = refalrts::splice_evar( res, str_begin, str_end );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult FReadLine(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sFileHandle_1;
    // s.FileHandle
    if( ! refalrts::svar_left( sFileHandle_1, bb_0, be_0 ) ) 
      break;
    if( sFileHandle_1->tag != refalrts::cDataFile )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter str_begin, str_end;

    refalrts::FnResult fn_result =
      read_from_stream(
        static_cast<FILE*>( sFileHandle_1->file_info ), str_begin, str_end
      );

    if( fn_result != refalrts::cSuccess )
      return fn_result;

    res = refalrts::splice_evar( res, str_begin, str_end );
    res = refalrts::splice_stvar( res, sFileHandle_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult string_from_seq(
  std::vector<char>& string, refalrts::Iter begin, refalrts::Iter end
) {
  std::vector<char> result;

  while(
    ! empty_seq( begin, end )
      && (refalrts::cDataChar == begin->tag)
  ) {
    result.push_back( begin->char_info );

    move_left( begin, end );
  }

  /*
    Здесь empty_seq( begin, end ) || (begin->tag != cDataChar).
  */

  if( empty_seq( begin, end ) ) {
    result.push_back( '\0' );
    string.swap( result );
    return refalrts::cSuccess;
  } else {
    // здесь begin->tag != cDataChar
    return refalrts::cRecognitionImpossible;
  }
}

refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eFileName_b_1;
    refalrts::Iter eFileName_e_1;

    const char *mode;

    if( refalrts::char_left( 'r', bb_0, be_0 ) ) {
      mode = "r";
    } else if ( refalrts::char_left( 'w', bb_0, be_0 ) ) {
      mode = "w";
    } else {
      break;
    }

    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    std::vector<char> filename;

    refalrts::FnResult fname_read =
      string_from_seq( filename, eFileName_b_1, eFileName_e_1 );

    if( refalrts::cSuccess != fname_read )
      return fname_read;

    if( filename.empty() )
      return refalrts::cRecognitionImpossible;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter file_ptr = 0;
    if( ! refalrts::allocator::alloc_node( file_ptr ) )
      return refalrts::cNoMemory;

    file_ptr->tag = refalrts::cDataFile;

    if( FILE *f = fopen( &filename[0], mode ) ) {
      file_ptr->file_info = f;
    } else {
      return refalrts::cRecognitionImpossible;
    }

    res = refalrts::splice_elem( res, file_ptr );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sFileHandle_1;
    // s.FileHandle
    if( ! refalrts::svar_left( sFileHandle_1, bb_0, be_0 ) ) 
      break;
    if( sFileHandle_1->tag != refalrts::cDataFile )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    int fclose_res =
      fclose( static_cast<FILE*>( sFileHandle_1->file_info ) );

    if( EOF == fclose_res ) {
      return refalrts::cRecognitionImpossible;
    } else {
      /* Ничего не делаем */;
    }

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

/*
  Глобальные переменные, хранящие параметры вызова
  (устанавливаются в refalrts.cpp).
*/

extern char **g_argv;
extern int g_argc;

refalrts::FnResult Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sParamNumber_1;
    // s.ParamNumber
    if( ! refalrts::svar_left( sParamNumber_1, bb_0, be_0 ) ) 
      break;
    if( sParamNumber_1->tag != refalrts::cDataNumber )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    int arg_number = sParamNumber_1->number_info;

    if( arg_number < g_argc ) {
      refalrts::Iter char_pos;

      for(char *arg = g_argv[ arg_number ]; *arg != '\0'; ++arg ) {
        if( ! refalrts::alloc_char( char_pos, *arg ) )
          return refalrts::cNoMemory;

        refalrts::splice_elem( res, char_pos );
      }
    }

    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eFileName_b_1;
    refalrts::Iter eFileName_e_1;
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    std::vector<char> fname;

    refalrts::FnResult fname_res =
      string_from_seq( fname, eFileName_b_1, eFileName_e_1 );

    if( fname_res != refalrts::cSuccess )
      return fname_res;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter ans = 0;
    if( FILE *f = fopen( &fname[0], "r" ) ) {
      // Файл существует
      fclose( f );

      if( ! refalrts::alloc_name( ans, & True, "True" ) ) {
        return refalrts::cNoMemory;
      }
    } else {
      // Файл по-видимому не существует
      if( ! refalrts::alloc_name( ans, & False, "False" ) ) {
        return refalrts::cNoMemory;
      }
    }

    res = refalrts::splice_elem( res, ans );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sCode_1;
    // s.Code
    if( ! refalrts::svar_left( sCode_1, bb_0, be_0 ) ) 
      break;
    if( sCode_1->tag != refalrts::cDataNumber )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    exit( sCode_1->number_info );

    refalrts::reset_allocator();
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eCommand_b_1;
    refalrts::Iter eCommand_e_1;
    // e.Command
    eCommand_b_1 = bb_0;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_0;
    refalrts::use( eCommand_e_1 );

    std::vector<char> command;

    refalrts::FnResult read_res =
      string_from_seq( command, eCommand_b_1, eCommand_e_1 );

    if( read_res != refalrts::cSuccess )
      return read_res;

    system( &command[0] );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

// Работа с типами символов

refalrts::FnResult IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eNumber_b_1;
    refalrts::Iter eNumber_e_1;
    // e.NoNumber
    eNumber_b_1 = bb_0;
    refalrts::use( eNumber_b_1 );
    eNumber_e_1 = be_0;
    refalrts::use( eNumber_e_1 );

    bool start_is_digit =
      !empty_seq( eNumber_b_1, eNumber_e_1 )
      && (refalrts::cDataChar == eNumber_b_1->tag)
      && isdigit( eNumber_b_1->char_info );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    if( ! start_is_digit ) {
      refalrts::Iter fail_pos = 0;
      if( ! refalrts::alloc_name( fail_pos, & Fails, "Fails" ) )
        return refalrts::cNoMemory;

      res = refalrts::splice_evar( res, eNumber_b_1, eNumber_e_1 );
      res = refalrts::splice_elem( res, fail_pos );
    } else {
      refalrts::RefalNumber acc = 0;

      for( ; ; ) {
        if( empty_seq( eNumber_b_1, eNumber_e_1 ) ) {
          break;
        } else if ( eNumber_b_1->tag != refalrts::cDataChar ) {
          break;
        } else if ( ! isdigit( eNumber_b_1->char_info ) ) {
          break;
        } else {
          (acc *= 10) += eNumber_b_1->char_info - '0';
        }

        move_left( eNumber_b_1, eNumber_e_1 );
      }

      refalrts::Iter success_pos = 0;
      refalrts::Iter number_pos = 0;

      if( ! refalrts::alloc_name( success_pos, & Success, "Success" ) )
        return refalrts::cNoMemory;

      if( ! refalrts::alloc_number( number_pos, acc ) )
        return refalrts::cNoMemory;

      res = refalrts::splice_evar( res, eNumber_b_1, eNumber_e_1 );
      res = refalrts::splice_elem( res, number_pos );
      res = refalrts::splice_elem( res, success_pos );
    }

    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber_1;
    // s.Number
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( sNumber_1->tag != refalrts::cDataNumber )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter char_pos = 0;
    if( refalrts::RefalNumber num = sNumber_1->number_info ) {
      while( num != 0 ) {
        if( ! refalrts::alloc_char( char_pos, (num % 10) + '0' ) )
          return refalrts::cNoMemory;
        res = refalrts::splice_elem( res, char_pos );

        num /= 10;
      }
    } else {
      if( ! refalrts::alloc_char( char_pos, '0' ) )
        return refalrts::cNoMemory;

      res = refalrts::splice_elem( res, char_pos );
    }

    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sCode_1;
    // s.Code
    if( ! refalrts::svar_left( sCode_1, bb_0, be_0 ) ) 
      break;
    if( sCode_1->tag != refalrts::cDataNumber )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    char result = static_cast<char>( sCode_1->number_info );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sChar_1;
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( sChar_1->tag != refalrts::cDataChar )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::RefalNumber result =
      static_cast<unsigned char>( sChar_1->char_info );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

namespace {

template <typename T>
char compare_char( T x, T y ) {
  if( x < y ) {
    return '<';
  } else if( x == y ) {
    return '=';
  } else {
    return '>';
  }
}

} // unnamed namespace

refalrts::FnResult SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sSymb1_1;
    refalrts::Iter sSymb2_1;
    // s.Num1 s.Num2
    if( ! refalrts::svar_left( sSymb1_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sSymb2_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    char order;

    switch( sSymb1_1->tag ) {
    case refalrts::cDataNumber:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = compare_char( sSymb1_1->number_info, sSymb2_1->number_info );
          break;

        case refalrts::cDataChar:
          order = '>';
          break;

        case refalrts::cDataFunction:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataChar:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = compare_char( sSymb1_1->char_info, sSymb2_1->char_info );
          break;

        case refalrts::cDataFunction:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataFunction:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          {
            int cmpres =
              strcmp(
                sSymb1_1->function_info.name,
                sSymb2_1->function_info.name
              );

            if( cmpres < 0 ) {
              order = '<';
            } else if (cmpres > 0) {
              order = '>';
            } else {
              order =
                compare_char(
                  sSymb1_1->function_info.ptr,
                  sSymb2_1->function_info.ptr
                );
            }
          }
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataFile:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          order = '<';
          break;

        case refalrts::cDataFile:
          order =
            compare_char(
              sSymb1_1->file_info,
              sSymb2_1->file_info
            );
          break;

        default:
          order = '?';
          break;
      }
      break;

    default:
      order = '?';
      break;
    }

    if( '?' == order )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, order ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sSymb_1;
    // s.Num
    if( ! refalrts::svar_left( sSymb_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    char *fnname = 0;
    refalrts::RefalFunctionPtr fnptr = 0;

    switch( sSymb_1->tag ) {
    case refalrts::cDataNumber:
      fnname = "TypeNumber";
      fnptr = & TypeNumber;
      break;

    case refalrts::cDataChar:
      fnname = "TypeCharacter";
      fnptr = & TypeCharacter;
      break;

    case refalrts::cDataFunction:
      fnname = "TypeFunction";
      fnptr = & TypeFunction;
      break;

    case refalrts::cDataFile:
      fnname = "TypeFile";
      fnptr = & TypeFile;
      break;

    default:
      break;
    }

    if( 0 == fnname )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, fnptr, fnname ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );


  return refalrts::cRecognitionImpossible;
}

