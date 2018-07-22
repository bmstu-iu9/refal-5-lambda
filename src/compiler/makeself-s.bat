@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% SR-Lexer.sref
..\..\bin\rasl-constants.exe ../srlib/refalrts-commands.h Opcodes.sref
call ..\make compiler srefc-core srefc "" ..\..\distrib
