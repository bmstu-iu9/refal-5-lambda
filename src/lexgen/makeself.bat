@echo off
..\..\bin\rl-lexgen %LEXGEN_FLAGS% DFA-Lexer.ref
..\..\bin\rl-lexgen %LEXGEN_FLAGS% Flex-Lexer.ref
call ..\make lexgen rl-lexgen main

