@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% SR-Lexer.sref
..\..\bin\rasl-constants.exe ../lib/refalrts-commands.h Opcodes.refi
call ..\make compiler rlc-core main "" ..\..\distrib
copy ..\..\bin\rlc-core.exe ..\..\bin\srefc-core.exe
