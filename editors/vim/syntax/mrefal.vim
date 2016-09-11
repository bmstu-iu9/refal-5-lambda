syntax include @mrefalCpp $VIMRUNTIME/syntax/cpp.vim
syntax case match
syntax keyword mrefalKeyword $MODULE $ENTRY $END $IMPORT $SWAP $PROGRAM $ESWAP
syntax keyword mrefalKeyword $DATA $EXTERN $FORWARD $LABEL $ENUM $EENUM $INIT $FINAL
syntax keyword mrefalKeyword $EASTEREGG
syntax match mrefalBrokenKeyword /\$\a*\>/
syntax match mrefalVariable /\<[ste]\.[A-Za-z0-9!?_-]\+\>/
syntax match mrefalIdentifier /\<[A-Z!?][A-Za-z0-9!?_-]*\>/
syntax match mrefalNumber /\<\d*\>/
syntax match mrefalBrokenString /'[^']*$/
syntax match mrefalString /'\(\(\\.\)\|[^']\)*'/
syntax region mrefalComment start=/\/\*/ skip=/\n/ end=/\*\//
syntax region mrefalComment start=/\/\// end=/$/
syntax region mrefalComment start=/^\*/ end=/$/
syntax region mrefalInlineNative matchgroup=mrefalInlineNativeEdge start=/^%%$/ end=/^%%$/ contains=@mrefalCpp

highlight link mrefalKeyword Keyword
highlight link mrefalIdentifier Normal
highlight link mrefalVariable Special
highlight link mrefalNumber Number
highlight link mrefalString String
highlight link mrefalComment Comment
highlight link mrefalBrokenKeyword Error
highlight link mrefalBrokenString Error
highlight link mrefalInlineNativeEdge Macro

setlocal iskeyword+=$,-
setlocal matchpairs=(:),[:],<:>,{:}
setlocal autoindent
