@refgo ..\lexgen\lexgen Lexer.sref
@call ..\srmake\make Srefc
@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@call run %1
