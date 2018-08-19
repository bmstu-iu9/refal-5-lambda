@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% DFA-Lexer.sref
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% Flex-Lexer.sref
call ..\make lexgen lexgen LexGen "" ..\..\distrib
