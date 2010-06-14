@..\lexgen\lexgen Lexer.sref
@copy srefc.exe srefc_.exe
@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Algorithm_v1 Algorithm_v2
@set modules=%modules%  LibraryEx 
@set modules=%modules% Alg_Pattern_v1 Alg_Pattern_v2
@set modules=%modules% Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Algorithm_v1 Algorithm_v2
@set modules=%modules%  LibraryEx 
@set modules=%modules% Alg_Pattern_v1 Alg_Pattern_v2
@set modules=%modules% Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Algorithm_v1 Algorithm_v2
@set modules=%modules%  LibraryEx 
@set modules=%modules% Alg_Pattern_v1 Alg_Pattern_v2
@set modules=%modules% Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Algorithm_v1 Algorithm_v2
@set modules=%modules%  LibraryEx 
@set modules=%modules% Alg_Pattern_v1 Alg_Pattern_v2
@set modules=%modules% Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Algorithm_v1 Algorithm_v2
@set modules=%modules%  LibraryEx 
@set modules=%modules% Alg_Pattern_v1 Alg_Pattern_v2
%1 -d ..\SRLib %modules% 2>__%1.log
@del *.obj
@del *.tds
