# Интерфейсы между отдельными проходами компиляции

## Лексический анализ Рефала-5λ (проход 1А)

    <R5-Scan e.SourceFile> == t.Token*

    t.Token ::= (s.TokType t.SrcPos e.TokValue)
    t.SrcPos ::= (RowCol s.Line s.Col)

    s.TokType ~ e.TokValue ::=
        TkName ~ s.CHAR*
      | TkCompound ~ s.CHAR*
      | TkMacroDigit ~ s.NUMBER
      | TkChar ~ s.CHAR
      | TkVariable ~ s.VarType e.VarName
      | TkOpenBracket, TkCloseBracket, TkCloseCall, TkCloseADT,
      | TkOpenBlock, TkCloseBlock ~ пусто
      | TkOpenCall, TkOpenADT ~ s.CHAR* -- имя функции
      | TkComma, TkColon, TkAssign, TkSemicolon ~ пусто
      | TkExtern, TkEntry, TkEnum, TkEEnum, TkSwap,
      | TkESwap, TkInclude, TkInline, TkDrive,
      | TkSpec, TkMeta ~ пусто
      | TkScopeId ~ пусто
      | TkLabel ~ пусто
      | TkEOF ~ пусто
      | TkError ~ s.CHAR*
      | TkWarning ~ s.CHAR*
      | TkRefal5Mode ~ Classic | Extended
      | TkAmpersand ~ empty
      | TkRedefinition ~ empty
      | TkNativeCode ~ (s.CHAR*)*
    s.VarType ::= 's' | 't' | 'e'
    e.VarName ::= s.CHAR*

* `e.SourceFile` — имя файла исходного текста.
* `t.Token` — токен.
* `t.SrcPos` — позиция токена.
* `s.TokType` — тег лексического домена.
* `e.TokValue` — атрибут токена, зависит от `s.TokType`.

Ниже перечислены значения тегов типов и атрибутов. Для лексем с атрибутами
атрибут записан после тега типа. Если атрибут явно не указан, значит его нет
(`e.TokValue` пустое).

* `TkName s.CHAR*` — идентификатор.
* `TkCompound s.CHAR*` — строка в двойных кавычках.
* `TkMacroDigit s.NUMBER` — макроцифра.
* `TkChar s.CHAR` — символ-литера. Несколько литер в общих кавычках
  (например `'hello'`) трактуются как отдельные токены.
* `TkVariable s.VarType e.VarName` — переменная.
* `TkOpenBracket`, `TkCloseBracket` — круглые скобки.
* `TkOpenCall s.CHAR*`, `TkCloseCall` — угловые скобки. Имя вызываемой
  функции является частью открывающей скобки. Для скобок без имени имя
  пустое.
* `TkOpenBlock`, `TkCloseBlock` — фигурные скобки.
* `TkOpenADT s.CHAR*`, `TkCloseATD` — квадратные скобки.
* `TkComma`, `TkColon`, `TkAssign`, `TkSemicolon` — `,`, `:`, `=`, `;`.
* `TkExtern` — `$EXTERN`, `$EXTRN`, `$EXTERNAL`.
* `TkEntry` — `$ENTRY`.
* `TkEnum`, `TkEEum` — `$ENUM`, `$EENUM`.
* `TkSwap`, `TkESwap` — `$SWAP`, `$ESWAP`.
* `TkInclude` — `$INCLUDE`.
* `TkInline`, `TkDrive`, `TkSpec` — `$INLINE`, `$DRIVE`, `$SPEC`.
* `TkMeta` — `$META`.
* `TkScopeId` — `$SCOPEID`.
* `TkLabel` — `$LABEL`.
* `TkEOF` — конец файла.
* `TkError s.CHAR*`, `TkWarning s.CHAR*` — сообщение о лексической ошибке
  или предупреждении.
* `TkRefal5Mode s.Refal5Mode` — псевдокомментарий `*$CLASSIC` или
  `*$EXTENDED`.
* `TkAmpersand`, `TkRedefinition` — знаки `&` и `^`.
* `TkNativeCode (s.CHAR*)*` — вставка нативного кода.


## Лексический анализ Простого Рефала (проход 1Б)

    <SR-Scan e.FileName>
      == e.Tokens

    e.Tokens ::= (s.TokType s.LineNumber e.Info)*

* `e.FileName` — имя файла исходного текста.
* `e.Tokens` — последовательность токенов.
* `s.TokType` — тег типа лексемы.
* `s.LineNumber` — номер строки исходного текста с лексемой.
* `e.Info` — атрибуты лексемы, зависят от тега типа.

Ниже перечислены значения тегов типов и атрибутов. Для лексем с атрибутами
атрибут записан после тега типа. Если атрибут явно не указан, значит его нет
(`e.Info` пустое).

* `TkChar s.Char` — символ в кавычках.
* `TkOpenADT`, `TkCloseADT` — квадратные абстрактные скобки.
* `TkOpenCall`, `TkCloseCall` — скобки активации.
* `TkOpenBlock`, `TkCloseBlock` — фигурные скобки.
* `TkOpenBracket`, `TkCloseBracket` — структурные скобки.
* `TkComma` — запятая.
* `TkDirective s.Directive` — директива (ключевое слово). Атрибут может быть
  * `EEnum` — `$EENUM`,
  * `Entry` — `$ENTRY`,
  * `Enum` — `$ENUM`,
  * `Extern` — `$EXTERN`,
  * `Forward` — `$FORWARD`,
  * `Swap` — `$SWAP`,
  * `ESwap` — `$ESWAP`,
  * `Ident` — `$LABEL`,
  * `Include` — `$INCLUDE`,
  * `Spec` — `$SPEC`,
  * `Meta` — `$META`.
* `TkIdentMarker` — знак решётки.
* `TkName e.Name` — идентификатор (имя функции или идентификатора после `#`).
* `TkNumber s.Number` — целое число. `s.Number` может быть как целым числом,
  так и знаками Cookie1 и Cookie2 — на более поздних проходах становятся
  первым и вторым хешами области видимости.
* `TkReplace` — знак равенства.
* `TkSemicolon` — точка с запятой.
* `TkVariable s.Mode e.Index` — переменная:
  * `s.Mode ::= 's' | 't' | 'e'` — вид переменной,
  * `e.Index` — индекс переменной.
* `TkRedefinition` — крышка — знак переопределения переменной.
* `TkEOF` — лексема конца файла.
* `TkError e.Message` — лексема с сообщением об ошибке лексического анализа.
* `TkUnexpected e.Unexpected` — лексема с последовательностью неопознанных
  символов.

## Синтаксический анализ Рефала-5λ (проход 2А)

    <R5-Parse t.ErrorList s.Mode e.Tokens>
      == t.ErrorList t.Unit*

    s.Mode ::= Classic | Extended

    t.Unit ::= t.Function | t.Extern | t.SingleDeclaration | t.Include
      | t.NativeBlock | t.Ident | t.SpecUnit
    t.Extern ::= (Declaration t.Pos GN-Entry e.Name)
    t.SingleDeclaration ::= (s.SingleDeclarationTag t.Pos s.ScopeClass e.Name)
    s.SingleDeclarationTag ::= Enum | Swap | Inline | Drive | Meta
    t.Include ::= (Include t.Pos e.Name)
    t.NativeBlock ::= (NativeBlock t.Pos e.Code)
    t.Ident ::= (Ident t.SrcPos e.Name)
    t.SpecUnit ::= (Spec t.Pos (e.Name) e.Pattern)

    t.Function ::= (Function t.SrcPos s.ScopeClass (e.Name) e.Body)
    e.Body ::=
        Sentences t.Sentence*
      | NativeBody t.Pos e.Code
    s.ScopeClass ::= GN-Entry | GN-Local
    t.Sentence ::=
      (t.Pattern (s.Chain t.Result (e.Blocks) t.Pattern)* t.Result (e.Blocks))
    s.Chain ::= Condition | Assign
    e.Blocks ::= (e.Body)*
    e.Code ::= (s.CHAR*)*

    t.Pattern, t.Result ::= (t.Term*)
    t.Term ::=
        (Symbol s.SymType e.SymInfo)
      | (Var t.SrcPos s.VarType e.Index)
      | (Brackets t.Term*)
      | (CallBrackets (Symbol Name t.SrcPos e.Function)? t.Term*)
      | (Closure e.Body)
      | (NewVar t.SrcPos s.VarType e.Index)
      | (ADT-Brackets t.SrcPos (e.ADT-Name) t.Term*)
    s.SymType e.SymInfo ::=
        Char s.CHAR
      | Number s.Number
      | Name t.SrcPos s.Char*
      | Identifier s.Char*
    e.ADT-Name ::= s.CHAR* | UnnamedADT
    s.VarType ::= 's' | 't' | 'e'

    s.Number ::= s.NUMBER | Cookie1 | Cookie2

Проходы 2А и 2Б порождают структурно одно и то же синтаксическое дерево,
однако их содержимое незначительно различается. Например, в Рефале-5λ
отсутствует конструкция `$FORWARD`, а потому объявления функций
(`(Declaration …)`) всегда имеют область видимости `GN-Extern`. И наоборот,
списки `$INLINE` и `$DRIVE` есть только в Рефале-5λ.

Для списков `Inline`, `Drive` и `Meta` тег области видимости всегда
`GN-Local`, в дерево он добавлен для общности.

Подробное описание большинства элементов дерева в проходе 2Б.

## Синтаксический анализ Простого Рефала (проход 2Б)

    <SR-ParseProgram t.ErrorList e.Tokens>
      == t.ErrorList e.AST

    e.AST ::= t.ProgramElement*
    t.ProgramElement ::=
        (Function t.SrcPos s.ScopeClass (e.Name) e.Body)
      | (Enum t.SrcPos s.ScopeClass e.Name)
      | (Swap t.SrcPos s.ScopeClass e.Name)
      | (Meta t.SrcPos GN-Local e.Name)
      | (Declaration t.SrcPos s.ScopeClass e.Name)
      | (Entry t.SrcPos GN-Entry e.Name)
      | (Ident t.SrcPos e.Name)
      | (Include t.SrcPos e.Name)
      | (NativeBlock t.SrcPos e.Code)


    s.ScopeClass ::= GN-Entry | GN-Local
    t.SrcPos ::= s.LineNumber

    e.Body ::=
        Sentences t.Sentence*
      | NativeBody t.SrcPos e.Code
    t.Sentence ::= ((e.Pattern) t.AssignOrCondition* (e.Result) (e.Blocks))
    t.AssignOrCondition ::=
        (Assign (e.Result) (e.Blocks) (e.Pattern))
      | (Condition (e.Result) (e.Blocks) (e.Pattern))
    e.Blocks ::= (e.Body)*
    e.Pattern, e.Result ::= e.Expression
    e.Code ::= (s.Char*)*

    e.Expression ::= t.Term*
    t.Term ::=
        (Symbol s.SymType e.SymInfo)
      | (Brackets e.Expression)
      | (ADT-Brackets t.SrcPos (e.ADTName) e.Expression)
      | (CallBrackets e.Expression)
      | (Var t.SrcPos s.Mode e.Index)
      | (NewVar t.SrcPos s.Mode e.Index)
      | (Closure e.Body)
    s.SymType e.SymInfo ::=
        Char s.CHAR
      | Number s.Number
      | Name t.SrcPos e.Name
      | Identifier e.Name
    e.ADTName ::= e.Name | UnnamedADT

    s.Number ::= s.NUMBER | Cookie1 | Cookie2

* `t.ErrorList` — список ошибок, определён в `Error.sref`.
* `e.Tokens` — последовательность токенов (см. выше).
* `e.AST` — синтаксическое дерево исходного текста.
* `t.ProgramElement` — генерируемый элемент верхнего уровня. Предполагается, что
  при генерации для каждого элемента программы генерируется свой кусок кода:
  определение или объявление функции, определение идентификатора. Делится на
  * `Function` — определение регулярной (обычной) функции,
  * `Enum` — определение пустой функции,
  * `Swap` — определение статического ящика,
  * `Declaration` — объявление функции,
  * `Entry` — отделённое (detached) объявление функции как entry,
  * `Ident` — объявление идентификатора,
  * `Include` — имя включаемого файла,
  * `NativeBlock` — блок нативного кода вне определения функции.
* `t.SrcPos` — позиция данного объекта (требуется при семантической проверке).
* `s.ScopeClass` — область видимости для функции.
* `e.Body` — тело функции:
  * `Sentences` — функция написана на Рефале,
  * `NativeBody` — тело функции представляет собой блок нативного кода.
* `t.Sentence` — отдельное предложение.
* `e.Pattern`, `e.Result` — левая и правая части соответственно, оба имеют
  одинаковую структуру (за исключением скобок активации, которые в образцах
  отсутствуют).
* `e.Expression` — последовательность термов.
* `t.Term` — терм. Делятся на
  * `Symbol` — символ (атом), они делятся на
    * `Char` — символ-литера,
    * `Number` — символ-целое число,
    * `Name` — символ-имя глобальной функции,
    * `Identifier` — символ-идентификатор,
  * `Brackets` — скобочный терм из круглых скобок. Содержит подвыражение.
  * `ADT-Brackets` — абстрактный скобочный терм, `e.Name` — имя функции,
    которая является тегом для абстрактных скобок.
  * `CallBrackets` — терм активации. Содержит подвыражение. Может находиться
    только в правой части.
  * `Var` — переменная.
  * `NewVar` — переменная, помеченная знаком переопределения.
  * `Closure` — тело вложенной функции.
* `e.ADTName` — значение `UnnamedADT` используется в случае синтаксической
  ошибки: отсутствия метки АТД-терма после квадратной скобки.

## Разрешение подключаемых файлов (проход 3)
Данный проход не выделен в отдельную функцию. Он выполняется внутри
`Engine.sref`, обнаруживает в исходных текстах директивы `$INCLUDE` (элемент
дерева `(Include t.SrcPos e.Name)`) и подгружает содержимое указанных
файлов. При этом для подключаемых файлов выполняются проходы 1-3.

После получения всех синтаксических деревьев строится результирующее
дерево, равное их конкатенации, при этом в нём, (а) изменяются `t.SrcPos`,
(б) удаляются узлы `Include` за ненадобностью.

Замена `t.SrcPos`:

    t.SrcPos^ ::= (FileLine s.LineNumber e.FileName)

Кроме того, на этом проходе создаётся функция-метатаблица, используемая
в реализации метафункций. Таким образом, тело функции меняется на

    e.Body^ ::=
        Sentences t.Sentence*
      | NativeBody t.Pos e.Code
      | Metatable e.Metatable

    e.Metatable ::=
        ((Symbol Identifier s.CHAR*) (Symbol Name t.SrcPos s.CHAR*)*

Таким образом последующие проходы (5 и 9) правильным образом выписывают путь
к файлу.

## Проверка контекстных зависимостей (проход 4)

    <CheckProgram e.WarningIds t.ErrorList e.AST>
      == t.ErrorList

Проверка только пополняет список ошибок контекстно-зависимыми ошибками.

## Редуктор до подмножества (обессахариватель) (проход 5)

    <Desugar s.MarkupContext s.ConditionsMode e.AST>
      == e.ReducedAST

    s.MarkupContext ::= MarkupContext | NoMarkupContext
    s.ConditionsMode ::= ConditionsNative | Conditions-Transform

    e.ReducedAST ::= t.ReducedProgramElement*

    t.ReducedProgramElement ::=
        (s.DeclarationListNode (e.Name)*)
      | (Function (e.Name) e.ReducedBody)
      | (Ident e.Name)
      | (NativeBlock t.SrcPos e.Code)

    s.DeclarationListNode ::=
        Entries
      | Externs
      | Drives
      | Inlines
      | Intrinsics

    e.ReducedBody ::=
        Sentences t.ReducedSentence*
      | NativeBody t.SrcPos e.Code
      | Metatable e.ReducedMetatable
      | Swap
    t.ReducedSentence ::=
        ((e.ReducedPattern) t.ReducedCondition* (e.ReducedResult))
    t.ReducedCondition ::=
        (Condition (e.Name) (e.ReducedResult) (e.ReducedPattern))
    e.ReducedPattern, e.ReducedResult ::= e.ReducedExpression

    e.ReducedExpression ::= t.ReducedTerm*
    t.ReducedTerm ::=
        (Symbol s.SymType e.SymInfo-Reduced)
      | (Brackets e.ReducedExpression)
      | (ADT-Brackets (e.Name) e.Expression)
      | (CallBrackets e.Expression)
      | (Var s.Mode e.Index)
      | (ClosureBrackets e.ClosureContent)
    s.SymType e.SymInfo-Reduced ::=
        Char s.Char
      | Number s.Number
      | Name e.Name
      | Identifier e.Name
    e.ClosureContent ::= (TkName e.Name) t.ContextVariable*
    t.ContextVariable ::=
        (Var s.ModeTS e.Index)
      | (Brackets (Var 'e' e.Index))
      | (Symbol Name e.Name)
    s.ModeTS ::= 't' | 's'

    e.ReducedMetatable ::=
        ((Symbol Identifier s.CHAR*) (Symbol Name s.CHAR*)*

Нужно отметить, что в `ADT-Brackets` на входе не может быть имени как `UnnamedADT`,
поскольку этот проход и последующие вызываются только при отсутствии ошибок.

Ниже описаны только отличия `e.ReducedAST` от `e.AST`.

* `t.ReducedProgramElement` — генерируемый элемент верхнего уровня.
  Предполагается, что при генерации последовательно для каждого элемента
  программы генерируется свой кусок кода: определение или объявление функции,
  определение идентификатора, пустая строка. В отличие от `t.ProgramElement`,
  эти элементы уже не несут позиции. Редуктор гарантирует, что для каждой
  функции создаётся ровно одно предобъявление, за исключением пустых функций
  и статических ящиков. Смысл у элементов тот же, что и в `t.ProgramElement`,
  за исключением `Separator` — он при генерации даёт пустую строку (за счёт
  чего сгенерированный код читается лучше).
* `t.ReducedTerm` — некоторые виды термов уже не несут позицию в исходном
  тексте, `NewVar` и `Closure` отсутствуют.
  Вложенные функции из `Closure` превращаются в глобальные функции
  в `t.ReducedProgramElement`,
* `ClosureBrackets` сворачиваются в объекты замыкания,
* `e.ClosureContent` — содержимое замыкания состоит из имени соответствующей
  глобальной функции и захваченных переменных контекста, последние могут
  предваряться (опция `s.MarkupContext`) идентификатором с именем
  переменной для удобства отладки.

## Высокоуровневая оптимизация (проход 6)
    <OptTree t.Config e.ReducedAST> == e.ReducedOptAST

Проход высокоуровневой оптимизации выполняет преобразования синтаксического
дерева, возвращая уже дерево оптимизированной программы. С точки зрения
структур данных, `e.ReducedOptAST` отличается от исходного только отсутствием
пометки оптимизируемых функций.

Подробнее проход будет описан после реализации этих оптимизаций.

## Генерация высокоуровневого RASL’а (проход 7)
    <HighLevelRASL s.Joint s.OptResult e.AST>
      == e.RASLAST

    s.Joint ::= Cojoint | Disjoint
    s.OptResult ::= NoOpt | OptResult

    e.RASLAST ::= t.RASLAST-Item*
    t.RASLAST-Item ::=
        (Entries (e.Name)*)
      | (Function (e.Name) e.HiCommands)
      | (CmdNativeFunction (e.Name) t.SrcPos e.Code)
      | t.CmdTopLevelItem

    t.CmdTopLevelItem ::=
        (CmdEnum e.Name)
      | (CmdSwap e.Name)
      | (CmdConditionFunc e.Name)
      | (CmdDefineIdent e.Name)
      | (CmdEmitNativeCode t.SrcPos e.Code)
      | (CmdMetatable (e.Name) e.ReducedMetatable)

    e.HiCommands ::= t.HiCommand*
    t.HiCommand ::=
        t.StatementCommand
      | t.SingleCommand
      | (s.MatchCommand s.Direction s.Offset e.MatchInfo)
      | (s.MatchSave s.Direction s.Offset e.MatchSaveInfo)
      | (CmdCreateElem s.CreateMode s.Offset s.CreateType e.AllocInfo)
      | (CmdCreateElem s.CreateMode s.Offset ElString e.String)

    t.StatementCommand ::=
        (CmdSentence e.HiCommands)
      | (CmdOpenELoop s.Direction s.RangeOffset s.VarOffset e.HiCommands)

    t.SingleCommand ::=
        (CmdIssueMemory s.Offset)
      | (CmdInitB0)
      | (CmdInitB0-Lite)
      | (CmdSave s.OldOffset s.NewOffset)
      | (CmdComment s.FnText)
      | (CmdVariableDebugTable s.Mode e.Index s.Depth s.Offset)
      | (CmdResetAllocator)
      | (CmdCopyVar s.Mode s.VarOffset s.SampleOffset
      | (CmdInsertElem s.Offset)
      | (CmdInsertRange s.Offset)
      | (CmdInsertVar s.Mode s.Offset)
      | (CmdLinkBrackets s.LeftOffset s.RightOffset)
      | (CmdWrapClosure s.Offset)
      | (CmdPushStack s.Offset)
      | (CmdFail)
      | (CmdInsertTile s.BeginOffset s.EndOffset)
      | (CmdSetRes s.R-Offset)
      | (CmdTrash s.L-Offset)
      | (CmdSpliceToFreeList)
      | (CmdSpliceToFreeList-Range s.Begin s.End)
      | (CmdNextStep)
      | (CmdCallSave s.Direction s.Num s.ContextOffset s.Name)
      | (CmdUseRes)
      | (CmdCallCondition)

    s.MatchCommand e.MatchInfo ::=
        CmdADT s.NewBracketsOffset e.Name
      | CmdBrackets s.NewBracketsOffset
      | CmdChar s.Char
      | CmdEmpty
      | CmdIdent e.Name
      | CmdName e.Name
      | CmdNumber s.Number
      | CmdRepeated s.Mode s.VarOffset s.SampleOffset
      | CmdVar s.Mode s.VarOffset

    s.MatchSaveCommand e.MatchSaveInfo
        CmdADTSave s.NewBracketsOffset e.Name
      | CmdBracketsSave s.NewBracketsOffset
      | CmdCharSave s.SaveOffset s.Char
      | CmdIdentSave s.SaveOffset e.Name
      | CmdNameSave s.SaveOffset e.Name
      | CmdNumberSave s.SaveOffset s.Number
      | CmdRepeatedSave 't' s.VarOffset s.SampleOffset
      | CmdVarSave 't' s.VarOffset

    s.Direction ::= AlgLeft | AlgRight | AlgTerm

    s.CreateMode ::= Allocate | Reinit | Update
    s.CreateType e.AllocInfo ::=
        ElChar s.Char
      | ElName e.Name
      | ElIdent e.Name
      | ElNumber s.Number
      | ElString e.String
      | ElOpenADT | ElCloseADT
      | ElOpenBracket | ElCloseBracket
      | ElOpenCall | ElCloseCall
      | ElClosureHead
      | ElUnwrappedClosure s.HeadOffset

    s.VarOffset, s.SampleOffset ::= s.Offset
    s.OldOffset, s.NewOffset ::= s.Offset
    <s.FnText> == s.CHAR*
    s.LeftOffset, s.RightOffset ::= s.Offset
    s.SaveOffset ::= s.Offset
    s.R-Offset ::= ARG-BEGIN | s.Offset | RIGHT-EDGE
    s.L-Offset ::= s.Offset | LEFT-EDGE
    s.Number ::= s.NUMBER | Cookie1 | Cookie2

* `e.AST` — см. предыдущий раздел.
* `e.RASLAST` — (сильно упрощая) синтаксическое дерево, в котором в функциях
  вместо предложений последовательности команд.
* `t.RASLAST-Item` — генерируемый элемент, аналогичен `t.ProgramElement`
  из предыдущего раздела.
* `t.TopLevelItem` — простой (несоставной) элемент верхнего уровня:
  * (`CmdNativeFunction` — функция, написанная на целевом коде),
  * `CmdEnum` — пустая функция,
  * `CmdSwap` — статический ящик,
  * `CmdConditionFunc` — определение функции-замыкания,
  * `CmdDefineIdent` — определение идентификатора,
  * `CmdEmitNativeCode` — кусок целевого кода, выводимый как есть.
* `t.HiCommand` — высокоуровневая императивная команда как часть функции.
  Может быть как элементарной командой, так и составной.

* `t.StatementCommand` — составная высокоуровневая команда.
  * `(CmdSentence e.HiCommands)` — предложение, при неудаче сопоставления
    с образцом внутри этого блока происходит выход за пределы блока.
    `e.HiCommands` могут включать в себя другие предложения и циклы
    по открытым e-переменным.
  * `(CmdOpenELoop s.Direction s.RangeOffset s.VarOffset e.HiCommands)` — цикл
    по открытой e-переменной.
    * `s.Direction` — текущая реализация поддерживает только направление
      слева-направо, поэтому всегда `AlgLeft`,
    * `s.RangeOffset` — смещение диапазона, внутри которого находится
      открытой e-переменная,
    * `s.VarOffset` — смещение для открытой e-переменной,
    * `e.HiCommands` — высокоуровневые команды, могут включать в себя циклы
      по открытым e-переменным. Не, если среди команд будут присутствовать
      ещё и предложение, последующие проходы отработают корректно, только
      предложений там возникать не должно.
* `t.SingleCommand` — элементарная высокоуровневая команда.
  * `(CmdIssueMemory s.Offset)` — резервирование памяти для локальных переменных.
  * `(CmdInitB0)` — инициализация нулевого диапазона на основе аргумента
    функции (`arg_begin` и `arg_end` в сгенерированном коде C++). При этом
    осуществляется пропуск скобок вызова и имени функции.
  * `(CmdInitB0-Lite)` — в нулевом диапазоне сохраняются только указатели
    на `arg_begin` и `arg_end`.
  * `(s.MatchCommand s.Direction s.Offset e.MatchInfo)` — элементарная команда
    сопоставления с образцом.
    * `s.MatchCommand` — тип элементарной команды.
    * `s.Direction ::= AlgLeft | AlgRight` — направление сопоставления
      в диапазоне.
    * `s.Offset` — смещение диапазона, в котором происходит сопоставление.
    * `e.MatchInfo` — аргументы, специфичные для команды.
    `s.MatchCommand s.MatchInfo` могут принимать следующие значения:
    * `CmdBrackets s.NewBracketsOffset` — сопоставление со структурными
      скобками, аргумент — номер нового диапазона, соответствующий содержимому
      скобок.
    * `CmdADT s.NewBracketsOffset e.Name` — сопоставление с абстрактными
      скобками. Аргументы — номер нового диапазона и тег АТД.
    * `CmdNumber s.Number` — сопоставление с целым числом.
    * `CmdIdent e.Name` — сопоставление с идентификатором.
    * `CmdChar s.Char` — сопоставление с литерой.
    * `CmdName e.Name` — сопоставление с указателем на именованную функцию.
    * `CmdRepeated s.Mode s.VarOffset s.SampleOffset` — сопоставление
      с повторной переменной.
      * `s.Mode ::= 's' | 't' | 'e'` — вид переменной.
      * `s.VarOffset` — смещение новой переменной.
      * `s.SampleOffset` — смещение ранее сопоставленной переменной.
    * `CmdEmpty` — этот диапазон должен быть пустым. Поле `s.Direction`
      игнорируется (обычно передаётся `AlgLeft`).
    * `CmdVar s.Mode s.VarOffset` — сопоставление с s- или t-переменной.
    * `Cmd****Save s.Offset e.Info` — аналогично без `Save`, но они
      сохраняют сопоставленный элемент на контексте по смещению `s.Offset`.
  * `(CmdSave s.OldOffset s.NewOffset)` — копирование границ диапазона
    `s.OldOffset` в `s.NewOffset`.
  * `(CmdComment s.FnText)` — соответствует однострочному комментарию
    в сгенерированном коде. Вызывается функция `<s.FnText>` без параметров,
    результат вызова предваряется `// ` и выписывается в целевой файл
    без изменений.
  * `(CmdVariableDebugTable s.Mode e.Index s.Depth s.Offset)` — формирует
    запись отладочной таблицы переменных (для интерактивного просмотра
    значений переменных в отладчике).
  * `(CmdResetAllocator)` — подготавливает рантайм к формированию элементов
    результатного выражения в списке свободных узлов. Должно предшествовать
    любым командам распределения (включая копирование переменных).
    В режиме включённого отладчика в этой команде происходят проверки точек
    останова и диалог с пользователем.
  * `(CmdCreateElem s.CreateMode s.Offset s.AllocType e.AllocInfo)` — создание
    нового объекта в списке свободных узлов (указатель на созданный объект
    помещается в контекст по смещению `s.Offset`), либо повторное использование
    имеющегося (переиспользуется элемент по указателю `s.Offset`).
    Поля `s.AllocType e.AllocInfo` определяют тип и аргументы команды
    распределения. Их смысл очевиден, за исключением `ElString e.String` — она
    создаёт непрерывную последовательность литер. Замыкания обслуживают
    `ElClosureHead` и `ElUnwrappedClosure` — первый создаёт счётчик ссылок
    для замыкания (и устанавливает в 1), второй — узел развёрнутого замыкания
    (ссылается на смещение уже созданного счётчика ссылок).
  * `(CmdCopyVar s.Mode s.VarOffset s.SampleOffset)` — копирование переменной
    вида `s.Mode` в смещение `s.VarOffset`, используя как оригинал переменную
    по смещению `s.SampleOffset`.
  * `(CmdInsertElem s.Offset)` — перенос элемента (узла) со смещением
    `s.Offset` к построенной части результатного выражения.
  * `(CmdInsertRange s.Offset)` — перенос диапазона со смещением `s.Offset`
    к построенной части результатного выражения
  * `(CmdInsertVar s.Mode s.Offset)` — перенос переменной вида `s.Mode`
    и смещением `s.Offset` к построенной части результатного выражения.
  * `(CmdLinkBrackets s.LeftOffset s.RightOffset)` — связывание круглых или
    квадратных скобок с заданными смещениями.
  * `(CmdWrapClosure s.Offset)` — сворачивает ссылку на замыкание в кольцевой
    список.
  * `(CmdPushStack s.Offset)` — помещение угловой скобки на стек.
  * `(CmdFail)` — возврат из функции значения «сопоставление невозможно».
  * `(s.MatchSave s.Direction s.Offset e.MatchInfo)` — смысл этих
    команд аналогичен соответствующим командам без суффикса `…Save`, отличие
    в том, что при выполнении сопоставления сохраняются в контексте сохраняется
    смещение вновь сопоставленного объекта. Для круглых скобок смещения самих
    скобок сохраняются в `s.NewBracketsOffset+2`, `…+3`, для квадратных —
    вместе со скобками сохраняется смещение для идентификатора АТД. Поле
    информации каждого атома содержит смещение `s.SaveOffset`, по которому
    должен быть сохранён указатель на этот символ.
    `CmdVarSave` и `CmdRepeatedSave` используются для сопоставления
    c t-переменными, при этом они сохраняют начало и конец переменной (отрезка
    поля зрения) в смежных ячейках контекста со структурной скобкой,
    сохраняющее указатель на узел в context.
  * `(CmdCallSave s.Direction s.Num s.ContextOffset s.Name)` — пропуск скобок
    конкретизации и имени функции в нулевом диапазоне с сохранением указателей
    на них в контексте (выполняется после команды `CmdInitB0-Lite`).
  * `(CmdInsertTile s.BeginOffset s.EndOffset)` — команда переноса диапазона
    из списка свободных узлов в поле зрения.
  * `(CmdSetRes s.R-Offset)` — устанавливает начальное значение переменной
    `res` (на arg_begin, по указателю, равному смещению в контексте,
    либо по правой кромке).
  * `(CmdTrash s.L-Offset)` — удаляет диапазон от `s.L-Offset` до текущего
    значения `res`. `s.L-Offset` равно либо смещению в контексте, либо левой
    кромке.
  * `(CmdSpliceToFreeList)` — удаление содержимого скобок конкретизации
    (`arg_begin`…`arg_end`) в список свободных узлов.
  * `(CmdSpliceToFreeList-Range s.Begin s.End)` — удаление диапазона
    от `s.Begin` до `s.End` в список свободных узлов.
  * `(CmdNextStep)` — успешное завершение работы функции, переход к следующему
    шагу работы рефал-машины.
  * `(CmdUseRes)` — добавляет в целевой код команду `refalrts::use(res);`.
  * `(CmdCallCondition)` — передаёт управление полю зрения замыкания.


### Вычислительная модель высокоуровневых команд
Последовательность команд внутри функции должна начинаться с `CmdIssueMemory`,
которая резервирует стек для локальных переменных — указателей на элементы
поля зрения и списка свободных узлов.

Далее должны располагаться команды сопоставления с образцом и вложенные
предложения (команды `CmdSentence`). Затем либо должна следовать составная
команда — цикл по открытой e-переменной (`CmdOpenELoop`), за которой следует
`CmdFail`, либо команды создания новых узлов и команды сборки результатного
выражения (завершающаяся `CmdNextStep`).

Составные команды внутри себя должны иметь точно такую же структуру,
за исключением того, что внутри `CmdOpenELoop` не может располагаться
`CmdFail` и не должно быть `CmdSentence`.

Многие команды принимают смещение на стеке. Для компактных объектов (атомарные
значения, s- и t-переменные, отдельные скобки при создании результата) в стеке
используется только одна ячейка. Для протяжённых (диапазоны сопоставления,
e-переменные, распределяемые последовательности char’ов — строки) используются
две соседние ячейки. Для них в команде указывается номер младшей ячейки N,
вторая ячейка N+1 подразумевается.

Команд сопоставления с образцом для закрытых e-переменных не генерируется.
В роли смещения закрытой e-переменной выступают границы диапазона, в котором
она находится.

## Генерация низкоуровневого RASL’а (проход 8)
    <LowLevelRASL s.GenMode e.RASLAST>
      == t.RASLModule t.NativeModule?

    s.GenMode ::= OnlyDirect | OnlyInterpret

    t.RASLModule ::=
      (
        (ModuleID s.Cookie1 s.Cookie2)
        (UnitName e.SrcName)
        (CmdFuncArray s.FunctionCount (s.ScopeClass e.FuncName)*)
        (CmdIdentArray s.IdentCount (s.IdentID e.IdentName)*)
        (CmdStringArray s.StringCount (s.StringID s.CHAR*)*)
        (RASL e.RASL)
        (Items t.DeclarationCommand*)
      )

    t.NativeModule ::= (e.NativeRASL)
    e.SrcName ::= s.CHAR*

    e.RASL ::= t.InterpretCommand*
    e.NativeRASL ::= { t.NativeDeclarationCommand | t.DirectCommand }*

    t.DeclarationCommand ::=
        (CmdEnumDescr e.CookiedName)
      | (CmdInterpretFuncDescr e.CookiedName s.LabelId)
      | (CmdSwapDescr e.CookiedName)
      | (CmdNativeFuncDescr s.ScopeClass e.Name)
      | (CmdConditionFuncDescrRasl e.Name)
      | (CmdConditionFuncDescrNative e.Name)
      | (CmdMetatable (e.Name) e.LowMetatable)

    e.CookiedName ::= e.Name Hash s.Cookie1 s.Cookie2
    s.Cookie1, s.Cookie2 ::= s.NUMBER

    e.OptionalName ::= /* пусто */ | e.Name

    t.DirectCommand ::=
        (CmdProfileFunction)
      | t.SingleCommand
      | (CmdStartSentence)
      | (CmdEndSentence)
      | (CmdOpenedE-Start s.Direction s.RangeOffset s.VarOffset)
      | (CmdOpenedE-End s.Direction s.RangeOffset s.VarOffset)
      | (CmdCallCondition)
      | (s.iMatchCommand s.Direction s.Offset e.iMatchInfo)
      | (s.iMatchSaveCommand s.Direction s.Offset s.iMatchSaveInfo)
      | (CmdCreateElem s.CreateMode s.Offset s.iCreateType e.iCreateInfo)
      | (CmdCEnum-Start e.Name)
      | (CmdCEnum-Item (e.Prefix) e.Name s.Val)
      | (CmdCEnum-End)

    t.NativeDeclarationCommand ::=
        (CmdNativeFuncDescr e.CookiedName)
      | (CmdFnStart e.Name)
      | (CmdFnEnd)
      | (CmdEmitNativeCode t.SrcPos e.Code)

    t.InterpretCommand ::=
        t.InterpretArrayLines
      | (CmdIssueMemory s.Memory)
      | (CmdReserveBacktrackStack s.Depth)
      | (LABEL s.LabelId)

    t.InterpretArrayLines ::=
        (CmdInitB0)
      | (CmdProfileFunction)
      | (CmdLoadConstants)
      | (s.iMatchCommand s.Direction s.Offset e.iMatchInfo)
      | (CmdSave s.OldOffset s.NewOffset)
      | (CmdEPrepare s.RangeOffset s.VarOffset)
      | (CmdEStart s.RangeOffset s.VarOffset)
      | (CmdVariableDebugTable s.StringId s.Offset)
      | (CmdResetAllocator)
      | (CmdCreateElem s.CreateMode s.Offset s.iCreateType e.iCreateInfo)
      | (CmdCreateElem s.CreateMode s.Offset ElString s.StringId)
      | (CmdCopyVar s.Mode s.VarOffset s.SampleOffset)
      | (CmdInsertElem s.Offset)
      | (CmdInsertRange s.Offset)
      | (CmdInsertVar s.Mode s.VarOffset)
      | (CmdLinkBrackets s.LeftOffset s.RightOffset)
      | (CmdWrapClosure s.ClosureOffset)
      | (CmdPushStack s.Offset)
      | (CmdFail)
      | (LABEL s.LabelId)
      | (CmdOnFailGoTo s.LabelId "Func name:" e.CookiedName)
      | (CmdInitB0-Lite)
      | (s.iMatchSaveCommand s.Direction s.Offset s.iMatchSaveInfo)
      | (CmdSetRes s.R-Offset)
      | (CmdTrash s.L-Offset)
      | (CmdInsertTile s.BeginOffset s.EndOffset)
      | (CmdSpliceToFreeList)
      | (CmdNextStep)
      | (CmdPushState)

    s.LabelId ::= s.NUMBER

    s.iMatchCommand e.iMatchInfo ::=
        CmdADT s.NewRangeOffset s.NameId e.Name
      | CmdBracket s.NewRangeOffset
      | CmdChar s.Char
      | CmdEmpty
      | CmdIdent s.NameId e.Name
      | CmdName s.NameId e.Name
      | CmdNumber s.NUMBER
      | CmdRepeat s.Mode s.VarOffset s.SampleOffset
      | CmdVar s.Mode s.VarOffset

    s.iMatchSaveCommand e.iMatchSaveInfo ::=
        CmdADTSave s.NewRangeOffset s.NameId e.Name
      | CmdBracketSave s.NewRangeOffset
      | CmdCharSave s.SaveOffset s.Char
      | CmdIdentSave s.SaveOffset s.NameId e.Name
      | CmdNameSave s.SaveOffset s.NameId e.Name
      | CmdNumberSave s.SaveOffset s.NUMBER
      | CmdRepeatedSave s.Mode s.VarOffset s.SampleOffset
      | CmdVarSave s.Mode s.VarOffset

    s.iCreateType e.iCreateInfo ::=
        ElChar s.Char
      | ElName s.NameId e.Name
      | ElIdent s.NameId e.Name
      | ElNumber s.NUMBER
      | ElOpenADT | ElCloseADT
      | ElOpenBracket | ElCloseBracket
      | ElOpenCall | ElCloseCall
      | ElClosureHead
      | ElUnwrappedClosure s.HeadOffset

    e.LowMetatable ::= (s.IdentNameId s.FuncNameId)*
    s.IdentNameId, s.FuncNameId ::= s.NameId

* `(UnitName e.SrcName)` — имя исходного файла.
* `(s.LiteralArray t.LiteralItem*)` — массив литеральных значений. Поскольку
  массивы команд в качестве аргументов могут использовать только 8-битные
  целые, для аргуметов других типов описываются массивы, а в интерпретируемых
  командах используются индексы массивов. `s.LiteralArray t.LiteralItem`:
  * `CmdFuncArray e.Name` — массив указателей на функции,
  * `CmdIdentArray e.Name` — массив идентификаторов,
  * `CmdStringArray e.String` — массив строк.
* `e.RASL` — последовательность элементарных команд. Каждая из них отображается
  в команду интерпретируемого кода.
* `e.NativeRASL` — последовательность элементарных команд. Каждая из них
  отображается в шаблон кода на C++.
* `t.DeclarationCommand` — объявление или определение чего-то
  для интерпретируемого RASL’а — компилируется в блок RASL’а:
  * `CmdEnumDescr`, `CmdInterpretFuncDescr`, `CmdSwapDescr`,
    `CmdNativeFuncDescr` — определяют дескриптор соответствующего объекта,
  * `CmdConditionFuncDescrRasl` — дескриптор функции замыкания для режима
    интерпретации, снимает со стека текущее состояние рефал-машины,
  * `CmdConditionFuncDescrNative` — дескриптор функции-замыкания для режима
    прямой кодогенерации, завершает рекурсивное вычисление поля зрения.
* `t.NativeDeclarationCommand` — объявление или определение чего-то на C++
  для нативного RASL’а, сюда же входят начало и конец регулярных функций
  на C++:
  * `CmdExtern` — создаёт предобъявление для дескриптора функции,
  * `CmdDefineIndent` — тот же смысл, что и для высокоуровневых команд;
  * `CmdNativeFuncDescr` — определяет дескриптор нативной функции,
  * `CmdEmitNativeCode` — тот же смысл, что и для высокоуровневых команд;
  * `CmdFnStart`, `CmdFnEnd` — начало и конец тела функции.
* `e.CookiedName` — имя функции с ключом области видимости
  (0, 0 для entry-функций; два числа для локальной, для каждой единицы
  трансляции эта пара чисел своя).
* `t.DirectCommand` — команды прямой кодогенерации. Бо́льшая их часть совпадает
  с элементарными командами тел функций высокоуровневого RASL, в дополнение
  к ним определены команды, соответствующие началу и концу составных команд
  (начало и конец предложения и цикла по открытой переменной):
  * `CmdProfileFunction` — запуск профилировщика для функции Рефала,
  * `CmdStartSentence`, `CmdEndSentence` — начало и конец предложения,
  * `CmdOpenedE-Start`, `CmdOpenedE-End` — начало и конец цикла по открытой
    e-переменной,
  * `CmdCallCondition` — выполняет рекурсивный вызов рефал-машины для
    выполнения замыкания,
  * команды `CmdName`, `CmdNameSave`, `CmdIdent`, `CmdIdentSave`, `CmdADT`,
    `CmdADTSave`, `CmdCreate` с элементами типа `ElName` и `ElIdent` получают
    в качестве параметра не просто имя `e.Name`, а имя с предшествующим
    идентификатором `s.NameId e.Name`, идентификатор не используется, добавлен
    для универсальности,
  * `CmdCEnum-Start` — начинает перечисление констант с заданным именем,
  * `CmdCEnum-Item` — описывает константу внутри перечисления,
  * `CmdCEnum-End` — завершает определение констант.
* `t.InterpretCommand` — команды режима интерпретации:
  * `t.InterpretArrayLines` — команды, генерирующие строчки массива.
  * `(CmdIssueMemory s.Memory)` — резервирование памяти для указателей на узлы.
  * `(CmdReserveBacktrackStack s.Depth)` — резервирование стека для переходов
    по ошибкам сопоставления. Команды инициализации цикла по открытым
    переменным (`CmdEPrepare`) и перехода к концу предложения
    (`CmdOnFailGoTo`) помещают смещение в этот массив,
  * `(CmdPushState)` — сохраняет на стеке состояний текущее состояние
    рефал-машины.
* `t.InterpretArrayLines` — команды, генерирующие строчки массива
  интерпретируемых команд. Во многом совпадают с одноимёнными командами прямой
  кодогенерации — такие команды будут пропускаться. При неудаче сопоставления
  команды сопоставления запускают _откат._
  * `(s.iMatchCommand s.Direction s.Offset e.iMatchInfo)`.
    При неудаче сопоставления эти команды запускают _откат._
  * `s.iMatchSaveCommand` → `s.iMatchCommand` × `s.MatchSave`.
  * `CmdEPrepare` и `CmdEStart` в генерируемом коде всегда располагаются
    рядом (но заменить их одной командой нельзя). Интерпретатор, обнаружив…
  * `(CmdEPrepare s.RangeOffset s.VarOffset)` устанавливает для заданной
    переменной пустое значение (аргумент `s.RangeOffset` игнорируется),
    помещает адрес следующей команды в стек откатов и пропускает следующую
    команду (это должна быть `CmdEStart`).
  * `(CmdEStart s.RangeOffset s.VarOffset)` удлиняет переменную `s.VarOffset`
    на один терм, отрывая его от `s.RangeOffset`, либо запускает _откат,_
    если `s.RangeOffset` уже пустой. В противном случае кладёт на стек откатов
    свой адрес.
  * `(CmdiVariableDebugTable s.StringId s.Offset)` → `CmdVariableDebugTable`.
    Человекочитаемое имя хранится в таблице строк.
  * `(CmdCreateElem s.CreateMode s.Offset s.iAllocType e.iAllocInfo)`.
  * `(CmdOnFailGoTo s.LabelId "Func name:" e.CookiedName)` — кладёт на стек
    откатов адрес команды, с которой начинается следующее предложение.
    Смещение этой команды задаётся именем метки,
  * `(LABEL s.LabelId)` — задаёт имя метки для `CmdOnFailGoTo`
    и `CmdInterpretFuncDescr`.

**Понятие отката.** При неудаче сопоставления с образцом в интерпретируемом
коде запускается откат: со стека откатов снимается адрес следующей команды
и осуществляется на неё переход. Если стек откатов пустой, то интерпретатор
функции завершается с ошибкой сопоставления.

На стек откатов нужные значения кладутся командами `CmdEPrepare`
(устанавливает откат следующую команду, которая должна быть `CmdEStart`),
`CmdEStart` (кладёт свой адрес) и `CmdOnFailGoTo` (кладёт адрес команды
с заданным смещением). Механизм откатов позволяет реализовать семантику циклов
по открытым e-переменным (команды внутри цикла откатываются к `CmdEStart`,
которая удлиняет переменную) и предложений (в начале каждого предложения
выполняется `CmdOnFailGoTo`, которая устанавливает адрес перехода на следующее
предложение).

## Генерация целевого кода (проход 9)
    <GenProgram-RASL t.RASLModule>
      == s.Byte*
    s.Byte ::= s.NUMBER | s.CHAR

    <GenProgram-Native (e.SrcName) (e.OutputName) t.NativeModule>
      == (e.Line)*

Генератор преобразует каждую из команд промежуточного кода в соответствующий
фрагмент кода на C++. Функции `GenProgram-*` возвращают последовательность
строк целевого файла. Аргументы `e.SrcName` и `e.OutputName` необходимы
для правильной генерации нативных вставок.
