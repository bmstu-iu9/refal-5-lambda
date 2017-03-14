@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% DFA-Lexer.sref
call ..\make lexgen lexgen LexGen -DDONT_PRINT_STATISTICS ..\..\distrib
