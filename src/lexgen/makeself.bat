@echo off
..\..\bin\lexgen %LEXGEN_FLAGS% DFA-Lexer.sref
..\..\bin\lexgen %LEXGEN_FLAGS% Flex-Lexer.sref
call ..\make lexgen lexgen LexGen -DDONT_PRINT_STATISTICS

