@echo off
..\..\distrib\bin\rl-lexgen %LEXGEN_FLAGS% DFA-Lexer.ref
..\..\distrib\bin\rl-lexgen %LEXGEN_FLAGS% Flex-Lexer.ref
call ..\make lexgen rl-lexgen main ..\..\distrib
