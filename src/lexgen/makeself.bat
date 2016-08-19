@echo off
..\..\bin\lexgen DFA-Lexer.sref
call ..\make lexgen lexgen LexGen -DDONT_PRINT_STATISTICS

