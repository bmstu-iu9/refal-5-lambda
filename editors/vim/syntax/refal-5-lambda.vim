syntax include @refal5LambdaCpp $VIMRUNTIME/syntax/cpp.vim
syntax case match
syntax keyword refal5LambdaKeyword $ENTRY $EXTERN $EXTRN $EXTERNAL $EASTEREGG
syntax keyword refal5LambdaKeyword $ENUM $EENUM $SWAP $ESWAP $INCLUDE $SCOPEID
syntax keyword refal5LambdaKeyword $DRIVE $INLINE $SPEC $META
syntax match refal5LambdaBrokenKeyword /\$\a*\>/
syntax match refal5LambdaIdentifier /\<[A-Za-z_][A-Za-z0-9_\-]*\>/
syntax match refal5LambdaVariable /\<[ste]\.[A-Za-z0-9_-]\+\>/
syntax match refal5LambdaNumber /\<\d*\>/

syntax region refal5LambdaString
  \ start=+'+ skip=+\\\\\|\\'+ end=+'+ contains=refal5LambdaEscape
syntax region refal5LambdaCompound
  \ start=+"+ skip=+\\\\\|\\"+ end=+"+ contains=refal5LambdaEscape
syntax match refal5LambdaEscape contained /\\\(x\x\{2}\|[ntr'"<>()\\]\)/

syntax match refal5LambdaBrokenChar /\\./
syntax match refal5LambdaChar /\\\(x\x\{2}\|[ntr'"<>()\\]\)/

syntax match refal5LambdaBrokenString /'[^']*$/
syntax match refal5LambdaBrokenCompound /"[^"]*$/

syntax region refal5LambdaComment start=/\/\*/ skip=/\n/ end=/\*\//
syntax region refal5LambdaComment start=/^\*/ end=/$/

syntax region refal5LambdaSpecialComment start=/\/\*\*/ skip=/\n/ end=/\*\//
syntax region refal5LambdaSpecialComment start=/^\*\$/ end=/$/

syntax region refal5LambdaInlineNative
  \ matchgroup=refal5LambdaInlineNativeEdge
  \ start=/^%%$/ end=/^%%$/ contains=@refal5LambdaCpp

highlight link refal5LambdaKeyword Keyword
highlight link refal5LambdaIdentifier Normal
highlight link refal5LambdaVariable Special
highlight link refal5LambdaNumber Number
highlight link refal5LambdaString String
highlight link refal5LambdaCompound String
highlight link refal5LambdaEscape SpecialChar
highlight link refal5LambdaChar String
highlight link refal5LambdaComment Comment
highlight link refal5LambdaSpecialComment Include
highlight link refal5LambdaBrokenKeyword Error
highlight link refal5LambdaBrokenString Error
highlight link refal5LambdaBrokenCompound Error
highlight link refal5LambdaBrokenChar Error
highlight link refal5LambdaInlineNativeEdge Macro

setlocal iskeyword+=$,-
setlocal matchpairs=(:),[:],<:>,{:}
setlocal autoindent
