@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% DFA-Lexer.ref
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% Flex-Lexer.ref
call ..\make lexgen lexgen LexGen "" ..\..\distrib
