@echo off
..\..\bin\rl-lexgen %LEXGEN_FLAGS% SR-Lexer.sref || exit /b 1
..\..\bin\rasl-constants.exe ../lib/refalrts-commands.h Opcodes.refi || exit /b 1
call ..\make compiler rlc-core main
