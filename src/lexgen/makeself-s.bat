@echo off
..\..\distrib\bin\rl-lexgen %LEXGEN_FLAGS% DFA-Lexer.ref || exit /b 1
..\..\distrib\bin\rl-lexgen %LEXGEN_FLAGS% Flex-Lexer.ref || exit /b 1
call ..\make lexgen rl-lexgen main ..\..\distrib
