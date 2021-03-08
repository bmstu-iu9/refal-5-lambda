@echo off
..\..\bin\rl-lexgen %LEXGEN_FLAGS% DFA-Lexer.ref || exit /b 1
..\..\bin\rl-lexgen %LEXGEN_FLAGS% Flex-Lexer.ref || exit /b 1
call ..\make lexgen rl-lexgen main

