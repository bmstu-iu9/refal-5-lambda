@echo off
..\..\bin\lexgen Lexer.sref
..\..\bin\rasl-constants.exe ../srlib/refalrts.h Opcodes.sref
call ..\make compiler srefc-core srefc
