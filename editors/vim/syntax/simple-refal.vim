syntax include @simpleRefalCpp $VIMRUNTIME/syntax/cpp.vim
syntax case match
syntax keyword simpleRefalKeyword $ENTRY $SWAP $ESWAP
syntax keyword simpleRefalKeyword $EXTERN $FORWARD $LABEL $ENUM $EENUM
syntax keyword simpleRefalKeyword $EASTEREGG $INCLUDE $SCOPEID $SPEC
syntax match simpleRefalBrokenKeyword /\$\a*\>/
syntax match simpleRefalIdentifier /\<[A-Za-z_][A-Za-z0-9_\-]*\>/
syntax match simpleRefalVariable /\<[ste]\.[A-Za-z0-9_-]\+\>/
syntax match simpleRefalNumber /\<\d*\>/
syntax match simpleRefalBrokenString /'[^']*$/
syntax match simpleRefalString /'\(\(\\.\)\|[^']\)*'/
syntax match simpleRefalBrokenCompound /"[^"]*$/
syntax match simpleRefalCompound /"\(\(\\.\)\|[^"]\)*"/
syntax region simpleRefalComment start=/\/\*/ skip=/\n/ end=/\*\//
syntax region simpleRefalComment start=/\/\// end=/$/
syntax region simpleRefalInlineNative
  \ matchgroup=simpleRefalInlineNativeEdge
  \ start=/^%%$/ end=/^%%$/ contains=@simpleRefalCpp

highlight link simpleRefalKeyword Keyword
highlight link simpleRefalIdentifier Normal
highlight link simpleRefalVariable Special
highlight link simpleRefalNumber Number
highlight link simpleRefalString String
highlight link simpleRefalCompound String
highlight link simpleRefalComment Comment
highlight link simpleRefalBrokenKeyword Error
highlight link simpleRefalBrokenString Error
highlight link simpleRefalBrokenCompound Error
highlight link simpleRefalInlineNativeEdge Macro

setlocal iskeyword+=$,-
setlocal matchpairs=(:),[:],<:>,{:}
setlocal autoindent
