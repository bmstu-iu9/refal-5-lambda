@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% SR-Lexer.sref
..\..\bin\rasl-constants.exe ../lib/refalrts-commands.h Opcodes.refi
call ..\make compiler srefc-core srefc "" ..\..\distrib
