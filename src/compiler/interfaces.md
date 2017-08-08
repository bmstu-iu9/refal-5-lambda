# Интерфейсы между отдельными проходами компиляции

## Загрузка исходного текста (проход 1)

    <LoadSource e.FileName>
      == e.SourceText

    e.SourceText ::= s.Char*

* `e.FileName` — имя файла исходного текста.
* `e.SourceText` — исходный текст в виде непрерывного потока char’ов. Всегда
  завершается символом перехода на новую строку `\n`, даже если в конце
  последней строки файла его не было.

## Лексический анализ (проход 2)

    <LexFolding e.SourceText>
      == e.Tokens

    e.Tokens ::= (s.TokType s.LineNumber e.Info)*

* `e.Tokens` — последовательность токенов.
* `s.TokType` — тег типа лексемы.
* `s.LineNumber` — номер строки исходного текста с лексемой.
* `e.Info` — атрибуты лексемы, зависят от тега типа.

Ниже перечислены значения тегов типов и атрибутов. Для лексем с атрибутами
атрибут записан после тега типа. Если атрибут явно не указан, значит его нет
(`e.Info` пустое).

* `#TkChar s.Char` — символ в кавычках.
* `#TkOpenADT`, `#TkCloseADT` — квадратные абстрактные скобки.
* `#TkOpenCall`, `#TkCloseCall` — скобки активации.
* `#TkOpenBlock`, `#TkCloseBlock` — фигурные скобки.
* `#TkOpenBracket`, `#TkCloseBracket` — структурные скобки.
* `#TkComma` — запятая.
* `#TkDirective s.Directive` — директива (ключевое слово). Атрибут может быть
  * `#EEnum` — `$EENUM`,
  * `#Entry` — `$ENTRY`,
  * `#Enum` — `$ENUM`,
  * `#Extern` — `$EXTERN`,
  * `#Forward` — `$FORWARD`,
  * `#Swap` — `$SWAP`,
  * `#ESwap` — `$ESWAP`,
  * `#Ident` — `$LABEL`.
* `#TkIdentMarker` — знак решётки.
* `#TkName e.Name` — идентификатор (имя функции или идентификатора после `#`).
* `#TkNumber s.Number` — целое число.
* `#TkReplace` — знак равенства.
* `#TkSemicolon` — точка с запятой.
* `#TkVariable s.Mode e.Index` — переменная:
  * `s.Mode ::= 's' | 't' | 'e'` — вид переменной,
  * `e.Index` — индекс переменной.
* `#TkRedefinition` — крышка — знак переопределения переменной.
* `#TkEOF` — лексема конца файла.
* `#TkError e.Message` — лексема с сообщением об ошибке лексического анализа.
* `#TkUnexpected e.Unexpected` — лексема с последовательностью неопознанных
  символов.

## Синтаксический анализ (проход 3)

    <ParseProgram t.ErrorList e.Tokens>
      == t.ErrorList e.AST

    e.AST ::= t.ProgramElement*
    t.ProgramElement ::=
        (#Function t.SrcPos s.ScopeClass (e.Name) e.Body)
      | (#Enum t.SrcPos s.ScopeClass e.Name)
      | (#Swap t.SrcPos s.ScopeClass e.Name)
      | (#Declaration t.SrcPos s.ScopeClass e.Name)
      | (#Ident t.SrcPos e.Name)
      | (#Include t.SrcPos e.Name)
      | (#NativeBlock t.SrcPos e.Code)


    s.ScopeClass ::= #GN-Entry | #GN-Local
    t.SrcPos ::= s.LineNumber

    e.Body ::=
        #Sentences t.Sentence*
      | #NativeBody t.SrcPos e.Code
    t.Sentence ::= ((e.Pattern) (e.Result))
    e.Pattern, e.Result ::= e.Expression
    e.Code ::= (s.Char*)*

    e.Expression ::= t.Term*
    t.Term ::=
        (#TkChar s.Char)
      | (#TkNumber s.Number)
      | (#TkName t.SrcPos e.Name)
      | (#TkIdentifier e.Name)
      | (#Brackets e.Expression)
      | (#ADT-Brackets t.SrcPos (e.ADTName) e.Expression)
      | (#CallBrackets e.Expression)
      | (#TkVariable t.SrcPos s.Mode e.Index)
      | (#TkNewVariable t.SrcPos s.Mode e.Index)
      | (#Closure e.Sentences)
    e.ADTName ::= e.Name | #UnnamedADT

* `t.ErrorList` — список ошибок, определён в `Error.sref`.
* `e.Tokens` — последовательность токенов (см. выше).
* `e.AST` — синтаксическое дерево исходного текста.
* `t.ProgramElement` — генерируемый элемент верхнего уровня. Предполагается, что
  при генерации для каждого элемента программы генерируется свой кусок кода:
  определение или объявление функции, определение идентификатора. Делится на
  * `#Function` — определение регулярной (обычной) функции,
  * `#Enum` — определение пустой функции,
  * `#Swap` — определение статического ящика,
  * `#Declaration` — объявление функции,
  * `#Ident` — объявление идентификатора,
  * `#Include` — имя включаемого файла,
  * `#NativeBlock` — блок нативного кода вне определения функции.
* `t.SrcPos` — позиция данного объекта (требуется при семантической проверке).
* `s.ScopeClass` — область видимости для функции.
* `e.Body` — тело функции:
  * `#Sentences` — функция написана на Рефале,
  * `#NativeBody` — тело функции представляет собой блок нативного кода.
* `t.Sentence` — отдельное предложение.
* `e.Pattern`, `e.Result` — левая и правая части соответственно, оба имеют
  одинаковую структуру (за исключением скобок активации, которые в образцах
  отсутствуют).
* `e.Expression` — последовательность термов.
* `t.Term` — терм. Делятся на
  * `#TkChar` — атом-символ,
  * `#TkNumber` — атом-целое число,
  * `#TkName` — атом-имя глобальной функции,
  * `#TkIdentifier` — атом-идентификатор,
  * `#Brackets` — скобочный терм из круглых скобок. Содержит подвыражение.
  * `#ADT-Brackets` — абстрактный скобочный терм, `e.Name` — имя функции,
    которая является тегом для абстрактных скобок.
  * `#CallBrackets` — терм активации. Содержит подвыражение. Может находиться
    только в правой части.
  * `#TkVariable` — переменная.
  * `#TkNewVariable` — переменная, помеченная знаком переопределения.
  * `#Closure` — тело вложенной функции.
* `e.ADTName` — значение `#UnnamedADT` используется в случае синтаксической
  ошибки: отсутствия метки АТД-терма после квадратной скобки.

## Разрешение подключаемых файлов (проход 4)
Данный проход не выделен в отдельную функцию. Он выполняется внутри
`Driver.sref`, обнаруживает в исходных текстах директивы `$INCLUDE` (элемент
дерева `(#Include t.SrcPos e.Name)`) и подгружает содержимое указанных
файлов. При этом для подключаемых файлов выполняются проходы 1-3.

После получения всех синтаксических деревьев строится результирующее
дерево, равное их конкатенации, при этом в нём, (а) изменяются `t.SrcPos`,
(б) удаляются узлы `#Include` за ненадобностью.

Замена `t.SrcPos`:

    t.SrcPos ::= (#FileLine s.LineNumber e.FileName)

Таким образом последующие проходы (5 и 9) правильным образом выписывают путь
к файлу.

## Проверка контекстных зависимостей (проход 5)

    <CheckProgram t.ErrorList e.AST>
      == t.ErrorList

Проверка только пополняет список ошибок контекстно-зависимыми ошибками.

## Редуктор до подмножества (обессахариватель) (проход 6)

    <Desugar e.AST>
      == e.ReducedAST

    e.ReducedAST ::= t.ReducedProgramElement*

    t.ReducedProgramElement ::=
        (#Function s.ScopeClass (e.Name) e.ReducedBody)
      | (#Enum s.ScopeClass e.Name)
      | (#Swap s.ScopeClass e.Name)
      | (#Declaration s.ScopeClass e.Name)
      | (#Ident e.Name)
      | (#NativeBlock t.SrcPos e.Code)


    e.ReducedBody ::=
        #Sentences t.ReducedSentence*
      | #NativeBody t.SrcPos e.Code
    t.ReducedSentence ::= ((e.ReducedPattern) (e.ReducedResult))
    e.ReducedPattern, e.ReducedResult ::= e.ReducedExpression

    e.ReducedExpression ::= t.ReducedTerm*
    t.ReducedTerm ::=
        (#TkChar s.Char)
      | (#TkNumber s.Number)
      | (#TkName e.Name)
      | (#TkIdentifier e.Name)
      | (#Brackets e.ReducedExpression)
      | (#ADT-Brackets (e.Name) e.Expression)
      | (#CallBrackets e.Expression)
      | (#TkVariable s.Mode e.Index s.Depth)

Нужно отметить, что в `#ADT-Brackets` на входе не может быть имени как `#UnnamedADT`,
поскольку этот проход и последующие вызываются только при отсутствии ошибок.

Ниже описаны только отличия `e.ReducedAST` от `e.AST`.

* `t.ReducedProgramElement` — генерируемый элемент верхнего уровня.
  Предполагается, что при генерации последовательно для каждого элемента
  программы генерируется свой кусок кода: определение или объявление функции,
  определение идентификатора, пустая строка. В отличие от `t.ProgramElement`,
  эти элементы уже не несут позиции. Редуктор гарантирует, что для каждой
  функции создаётся ровно одно предобъявление, за исключением пустых функций
  и статических ящиков. Смысл у элементов тот же, что и в `t.ProgramElement`
  за исключением `#Separator` — он при генерации даёт пустую строку (за счёт
  чего сгенерированный код читается лучше).
* `t.ReducedTerm` — некоторые виды термов уже не несут позицию в исходном
  тексте, `#TkNewVariable` и `#Closure` отсутствуют. Переменные имеют
  дополнительный атрибут `s.Depth` — глубина вложенности вложенной функции,
  в которой эта переменная впервые определена. Для именованных функций
  `s.Depth` равен нулю. Таким образом, `#TkNewVariable` превращается
  в `#TkVariable` с индексом глубины, равным глубине самой функции.
  Вложенные функции из `#Closure` превращаются в глобальные функции
  в `t.ReducedProgramElement`.

## Генерация высокоуровневого RASL’а (проход 7)
    <HighLevelRASL s.Joint s.OptResult e.AST>
      == e.RASLAST

    s.Joint ::= #Cojoint | #Disjoint
    s.OptResult ::= #NoOpt | #OptResult

    e.RASLAST ::= t.RASLAST-Item*
    t.RASLAST-Item ::=
        (#Function s.ScopeClass (e.Name) e.HiCommands)
      | (#CmdNativeFunction s.ScopeClass (e.Name) t.SrcPos e.Code)
      | t.CmdTopLevelItem

    t.CmdTopLevelItem ::=
        (#CmdEnum s.ScopeClass e.Name)
      | (#CmdSwap s.ScopeClass e.Name)
      | (#CmdDeclaration s.ScopeClass e.Name)
      | (#CmdDefineIdent e.Name)
      | (#CmdEmitNativeCode t.SrcPos e.Code)

    e.HiCommands ::= t.HiCommand*
    t.HiCommand ::=
        t.StatementCommand
      | t.SingleCommand

    t.StatementCommand ::=
        (#CmdSentence e.HiCommands)
      | (#CmdOpenELoop s.Direction s.RangeOffset s.VarOffset e.HiCommands)

    t.SingleCommand ::=
        (#CmdIssueMemory s.Offset)
      | (#CmdInitB0)
      | (#CmdInitB0-Lite)
      | (s.MatchCommand s.Direction s.Offset e.MatchInfo)
      | (#CmdSave s.OldOffset s.NewOffset)
      | (#CmdComment e.Text)
      | (#CmdVariableDebugTable s.Mode e.Index s.Depth s.Offset)
      | (#CmdResetAllocator)
      | (#CmdCreateElem s.CreateMode s.Offset s.CreateType e.AllocInfo)
      | (#CmdCopyVar s.Mode s.VarOffset s.SampleOffset
      | (#CmdInsertElem s.Offset)
      | (#CmdInsertRange s.Offset)
      | (#CmdInsertVar s.Mode s.Offset)
      | (#CmdLinkBrackets s.LeftOffset s.RightOffset)
      | (#CmdPushStack s.Offset)
      | (#CmdFail)
      | (s.MatchSave s.Direction s.Offset e.MatchSaveInfo)
      | (#CmdInsertTile s.BeginOffset s.EndOffset)
      | (#CmdSetRes s.R-Offset)
      | (#CmdTrash s.L-Offset)
      | (#CmdSpliceToFreeList)
      | (#CmdNextStep)
      | (#CmdCallSave s.Direction s.Num s.ContextOffset s.Name)
      | (#CmdUseRes)

    s.MatchCommand e.MatchInfo ::=
        #CmdBrackets s.NewBracketsOffset
      | #CmdADT s.NewBracketsOffset e.Name
      | #CmdNumber s.Number
      | #CmdIdent e.Name
      | #CmdChar s.Char
      | #CmdName e.Name
      | #CmdRepeated s.Mode s.VarOffset s.SampleOffset
      | #CmdEmpty
      | #CmdVar s.Mode s.VarOffset

    s.MatchSaveCommand e.MatchSaveInfo
        #CmdBracketsSave s.NewBracketsOffset
      | #CmdADTSave s.NewBracketsOffset e.Name
      | #CmdNumberSave s.SaveOffset s.Number
      | #CmdIdentSave s.SaveOffset e.Name
      | #CmdCharSave s.SaveOffset s.Char
      | #CmdNameSave s.SaveOffset e.Name
      | #CmdRepeatedSave 't' s.VarOffset s.SampleOffset
      | #CmdVarSave 't' s.VarOffset

    s.Direction ::= #AlgLeft | #AlgRight | #AlgTerm

    s.CreateMode ::= #Allocate | #Reinit | #Update
    s.CreateType e.AllocInfo ::=
        #ElChar s.Char
      | #ElName e.Name
      | #ElIdent e.Name
      | #ElNumber s.Number
      | #ElString e.String
      | #ElOpenADT | #ElCloseADT
      | #ElOpenBracket | #ElCloseBracket
      | #ElOpenCall | #ElCloseCall

    s.VarOffset, s.SampleOffset ::= s.Offset
    s.OldOffset, s.NewOffset ::= s.Offset
    s.LeftOffset, s.RightOffset ::= s.Offset
    s.SaveOffset ::= s.Offset
    s.R-Offset ::= #ARG-BEGIN | s.Offset | #RIGHT-EDGE
    s.L-Offset ::= s.Offset | #LEFT-EDGE

* `e.AST` — см. предыдущий раздел.
* `e.RASLAST` — (сильно упрощая) синтаксическое дерево, в котором в функциях
  вместо предложений последовательности команд.
* `t.RASLAST-Item` — генерируемый элемент, аналогичен `t.ProgramElement`
  из предыдущего раздела.
* `t.TopLevelItem` — простой (несоставной) элемент верхнего уровня:
  * (`#CmdNativeFunction` — функция, написанная на целевом коде),
  * `#CmdEnum` — пустая функция,
  * `#CmdSwap` — статический ящик,
  * `#CmdDeclaration` — объявление функции,
  * `#CmdDefineIdent` — определение идентификатора,
  * `#CmdEmitNativeCode` — кусок целевого кода, выводимый как есть.
* `t.HiCommand` — высокоуровневая императивная команда как часть функции.
  Может быть как элементарной командой, так и составной.

* `t.StatementCommand` — составная высокоуровневая команда.
  * `(#CmdSentence e.HiCommands)` — предложение, при неудаче сопоставления
    с образцом внутри этого блока происходит выход за пределы блока.
    `e.HiCommands` могут включать в себя другие предложения и циклы
    по открытым e-переменным.
  * `(#CmdOpenELoop s.Direction s.RangeOffset s.VarOffset e.HiCommands)` — цикл
    по открытой e-переменной.
    * `s.Direction` — текущая реализация поддерживает только направление
      слева-направо, поэтому всегла `#AlgLeft`,
    * `s.RangeOffset` — смещение диапазона, внутри которого находится
      открытой e-переменная,
    * `s.VarOffset` — смещение для открытой e-переменной,
    * `e.HiCommands` — высокоуровневые команды, могут включать в себя циклы
      по открытым e-переменным. Не, если среди команд будут присутствовать
      ещё и предложение, последующие проходы отработают корректно, только
      предложений там возникать не должно.
* `t.SingleCommand` — элементарная высокоуровневая команда.
  * `(#CmdIssueMemory s.Offset)` — резервирование памяти для локальных переменных.
  * `(#CmdInitB0)` — инициализация нулевого диапазона на основе аргумента
    функции (`arg_begin` и `arg_end` в сгенерированном коде C++). При этом
    осуществляется пропуск скобок вызова и имени функции.
  * `(#CmdInitB0-Lite)` — в нулевом диапазоне сохраняются только указатели
    на `arg_begin` и `arg_end`.
  * `(s.MatchCommand s.Direction s.Offset e.MatchInfo)` — элементарная команда
    сопоставления с образцом.
    * `s.MatchCommand` — тип элементарной команды.
    * `s.Direction ::= #AlgLeft | #AlgRight` — направление сопоставления
      в диапазоне.
    * `s.Offset` — смещение диапазона, в котором происходит сопоставление.
    * `e.MatchInfo` — аргументы, специфичные для команды.
    `s.MatchCommand s.MatchInfo` могут принимать следующие значения:
    * `#CmdBrackets s.NewBracketsOffset` — сопоставление со структурными
      скобками, аргумент — номер нового диапазона, соответствующий содержимому
      скобок.
    * `#CmdADT s.NewBracketsOffset e.Name` — сопоставление с абстрактными
      скобками. Аргументы — номер нового диапазона и тег АТД.
    * `#CmdNumber s.Number` — сопоставление с целым числом.
    * `#CmdIdent e.Name` — сопоставление с идентификатором.
    * `#CmdChar s.Char` — сопоставление с литерой.
    * `#CmdName e.Name` — сопоставление с указателем на именованную функцию.
    * `#CmdRepeated s.Mode s.VarOffset s.SampleOffset` — сопоставление
      с повторной переменной.
      * `s.Mode ::= 's' | 't' | 'e'` — вид переменной.
      * `s.VarOffset` — смещение новой переменной.
      * `s.SampleOffset` — смещение ранее сопоставленной переменной.
    * `#CmdEmpty` — этот диапазон должен быть пустым. Поле `s.Direction`
      игнорируется (обычно передаётся `#AlgLeft`).
    * `#CmdVar s.Mode s.VarOffset` — сопоставление с s- или t-переменной.
    * `#Cmd****Save s.Offset e.Info` — аналогично без `Save`, но они
      сохраняют сопоставленный элемент на контексте по смещению `s.Offset`.
  * `(#CmdSave s.OldOffset s.NewOffset)` — копирование границ диапазона
    `s.OldOffset` в `s.NewOffset`.
  * `(#CmdComment e.Text)` — соответствует однострочному комментарию
    в сгенерированном коде. Содержимое `e.Text` предваряется `// `
    и выписывается в целевой файл без изменений.
  * `(#CmdVariableDebugTable s.Mode e.Index s.Depth s.Offset)` — формирует
    запись отладочной таблицы переменных (для интерактивного просмотра
    значений переменных в отладчике).
  * `(#CmdResetAllocator)` — подготавливает рантайм к формированию элементов
    результатного выражения в списке свободных узлов. Должно предшествовать
    любым командам распределения (включая копирование переменных).
    В режиме включённого отладчика в этой команде происходят проверки точек
    останова и диалог с пользователем.
  * `(#CmdCreateElem s.CreateMode s.Offset s.AllocType e.AllocInfo)` — создание
    нового объекта в списке свободных узлов (указатель на созданный объект
    помещается в контекст по смещению `s.Offset`), либо повторное использование
    имеющегося (переиспользуется элемент по указателю `s.Offset`).
    Поля `s.AllocType e.AllocInfo` определяют тип и аргументы команды
    распределения. Их смысл очевиден, за исключением `#ElString e.String` — она
    создаёт непрерывную последовательность литер.
  * `(#CmdCopyVar s.Mode s.VarOffset s.SampleOffset)` — копирование переменной
    вида `s.Mode` в смещение `s.VarOffset`, используя как оригинал переменную
    по смещению `s.SampleOffset`.
  * `(#CmdInsertElem s.Offset)` — перенос элемента (узла) со смещением
    `s.Offset` к построенной части результатного выражения.
  * `(#CmdInsertRange s.Offset)` — перенос диапазона со смещением `s.Offset`
    к построенной части результатного выражения
  * `(#CmdInsertVar s.Mode s.Offset)` — перенос переменной вида `s.Mode`
    и смещением `s.Offset` к построенной части результатного выражения.
  * `(#CmdLinkBrackets s.LeftOffset s.RightOffset)` — связывание круглых или
    квадратных скобок с заданными смещениями.
  * `(#CmdPushStack s.Offset)` — помещение угловой скобки на стек.
  * `(#CmdFail)` — возврат из функции значения «сопоставление невозможно».
  * `(s.MatchSave s.Direction s.Offset e.MatchInfo)` — смысл этих
    команд аналогичен соответствующим командам без суффикса `…Save`, отличие
    в том, что при выполнении сопоставления сохраняются в контексте сохраняется
    смещение вновь сопоставленного объекта. Для круглых скобок смещения самих
    скобок сохраняются в `s.NewBracketsOffset+2`, `…+3`, для квадратных —
    вместе со скобками сохраняется смещение для идентификатора АТД. Поле
    информации каждого атома содержит смещение `s.SaveOffset`, по которому
    должен быть сохранён указатель на этот атом.
    `#CmdVarSave` и `#CmdRepeatedSave` используются для сопоставления
    c t-переменными, при этом они сохраняют начало и конец переменной (отрезка
    поля зрения) в смежных ячейках контекста.
    с структурной скобкой, сохраняющее указатель на узел в context.
  * `(#CmdCallSave s.Direction s.Num s.ContextOffset s.Name)` — пропуск скобок
    конкретизации и имени функции в нулевом диапазоне с сохранением указателей
    на них в контексте (выполняется после команды `#CmdInitB0-Lite`).
  * `(#CmdInsertTile s.BeginOffset s.EndOffset)` — команда переноса диапазона 
    из списка свободных узлов в поле зрения.
  * `(#CmdSetRes s.R-Offset)` — устанавливает начальное значение переменной
    `res` (на arg_begin, по указателю, равному смещению в контексте,
    либо по правой кромке).
  * `(#CmdTrash s.L-Offset)` — удаляет диапазон от `s.L-Offset` до текущего
    значения `res`. `s.L-Offset` равно либо смещению в контексте, либо левой
    кромке.
  * `(#CmdSpliceToFreeList)` — удаление содержимого скобок конкретизации
    (`arg_begin`…`arg_end`) в список свободных узлов.
  * `(#CmdNextStep)` — успешное завершение работы функции, переход к следующему
    шагу работы рефал-машины.
  * `(#CmdUseRes)` — добавляет в целевой код команду `refalrts::use(res);`.


### Вычислительная модель высокоуровневых команд
Последовательность команд внутри функции должна начинаться с `#CmdIssueMemory`,
которая резервирует стек для локальных переменных — указателей на элементы
поля зрения и списка свободных узлов.

Далее должны располагаться команды сопоставления с образцом и вложенные
предложения (команды `#CmdSentence`). Затем либо должна следовать составная
команда — цикл по открытой e-переменной (`#CmdOpenELoop`), за которой следует
`#CmdFail`, либо команды создания новых узлов и команды сборки результатного
выражения (завершающаяся `#CmdNextStep`).

Составные команды внутри себя должны иметь точно такую же структуру,
за исключением того, что внутри `#CmdOpenELoop` не может располагаться
`#CmdFail` и не должно быть `#CmdSentence`.

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
      == e.RASL (e.NativeRASL)

    s.GenMode ::= #OnlyDirect | #OnlyInterpret
    e.RASL ::= t.LoCommand*
    e.NativeRASL ::= t.NativeLoCommand*

    t.LoCommand ::=
        t.DeclarationCommand
      | t.InterpretCommand

    t.DeclarationCommand ::=
        t.CommonDeclarationCommand
      | (#CmdEnumDescr e.CookiedName)
      | (#CmdInterpretFuncDescr e.CookiedName)
      | (#CmdSwapDescr e.CookiedName)

    e.CookiedName ::= e.Name #Hash s.Cookie1 s.Cookie2
    s.Cookie1, s.Cookie2 ::= s.NUMBER

    e.OptionalName ::= /* пусто */ | e.Name

    t.CommonDeclarationCommand ::=
        (#CmdExtern e.CookiedName)
      | (#CmdDefineIndent e.Name)
      | (#CmdSeparator)

    t.NativeLoCommand ::=
        t.NativeDeclarationCommand
      | (#CmdProfileFunction)
      | t.SingleCommand
      | (#CmdStartSentence)
      | (#CmdEndSentence)
      | (#CmdOpenedE-Start s.Direction s.RangeOffset s.VarOffset)
      | (#CmdOpenedE-End s.Direction s.RangeOffset s.VarOffset)

    t.NativeDeclarationCommand ::=
        t.CommonDeclarationCommand
      | (#CmdNativeFuncDescr e.CookiedName)
      | (#CmdFnStart e.Name)
      | (#CmdFnEnd)
      | (#CmdEmitNativeCode t.SrcPos e.Code)

    t.InterpretCommand ::=
        (#CmdFuncArray (e.Name)*)
      | (#CmdLabelArray (e.Name)*)
      | (#CmdNumberArray s.Number*)
      | (#CmdStringArray (e.String)*)
      | (#CmdInitRAA e.Name)
      | t.InterpretArrayLines
      | (#CmdFinRAA)
      | (#CmdIssueMemory s.Memory)
      | (#CmdReserveBacktrackStack s.Depth)

    t.InterpretArrayLines ::=
        (#CmdInitB0)
      | (#CmdProfileFunction)
      | (#CmdLoadConstants)
      | (s.iMatchCommand s.Direction s.Offset e.iMatchInfo)
      | (#CmdSave s.OldOffset s.NewOffset)
      | (#CmdEPrepare s.RangeOffset s.VarOffset)
      | (#CmdEStart s.RangeOffset s.VarOffset)
      | (#CmdEmpty s.Offset)
      | (#CmdVariableDebugTable s.StringId s.Offset)
      | (#CmdResetAllocator)
      | (#CmdCreateElem s.CreateMode s.Offset s.iCreateType e.iCreateInfo)
      | (#CmdCopyVar s.Mode s.VarOffset s.SampleOffset)
      | (#CmdInsertElem s.Offset)
      | (#CmdInsertRange s.Offset)
      | (#CmdInsertVar s.Mode s.VarOffset)
      | (#CmdLinkBrackets s.LeftOffset s.RightOffset)
      | (#CmdPushStack s.Offset)
      | (#CmdFail)
      | (#CmdOnFailGoTo s.Delta)
      | (#CmdInitB0-Lite)
      | (s.iMatchSaveCommand s.Direction s.Offset s.iMatchSaveInfo)
      | (#CmdSetRes s.R-Offset)
      | (#CmdTrash s.L-Offset)
      | (#CmdInsertTile s.BeginOffset s.EndOffset)
      | (#CmdSpliceToFreeList)
      | (#CmdNextStep)

    s.iMatchCommand e.iMatchInfo ::=
        #CmdRepeat s.Mode s.VarOffset s.SampleOffset
      | #CmdADT s.NewRangeOffset s.NameId
      | #CmdChar s.Char
      | #CmdVar s.Mode s.VarOffset
      | #CmdName s.NameId
      | #CmdIdent s.NameId
      | #CmdNum s.Number
      | #CmdHugeNum s.NumberId
      | #CmdBracket s.NewRangeOffset

    s.iMatchSaveCommand e.iMatchSaveInfo ::=
        #CmdRepeatedSave s.Mode s.VarOffset s.SampleOffset
      | #CmdADTSave s.NewRangeOffset s.NameId
      | #CmdCharSave s.SaveOffset s.Char
      | #CmdVarSave s.Mode s.VarOffset
      | #CmdNameSave s.SaveOffset s.NameId
      | #CmdIdentSave s.SaveOffset s.NameId
      | #CmdNumSave s.SaveOffset s.Number
      | #CmdHugeNumSave s.SaveOffset s.NumberId
      | #CmdBracketSave s.NewRangeOffset

    s.iCreateType e.iCreateInfo ::=
        #ElChar s.Char
      | #ElName s.NameId
      | #ElIdent s.NameId
      | #ElHugeNumber s.NumberId
      | #ElNumber s.Number
      | #ElString s.StringId
      | #ElOpenADT | #ElCloseADT
      | #ElOpenBracket | #ElCloseBracket
      | #ElOpenCall | #ElCloseCall

* `e.RASL` — последовательность элементарных команд. Каждая из них отображается
  в шаблон кода на C++.
* `e.NativeRASL` — последовательность элементарных команд. Каждая из них
  отображается в шаблон кода на C++.
* `t.LoCommand`, `t.NativeLoCommand` — низкоуровневая команда
* `t.CommonDeclarationCommand` — объявление или определение чего-то на C++,
  общее для интерпретируемого и нативного RASL’а:
  * `#CmdExtern` — создаёт предобъявление для дескриптора функции,
  * `#CmdDefineIndent` — тот же смысл, что и для высокоуровневых команд;
  * `#CmdSeparator` — вставка пустой строки в целевой код.
* `t.DeclarationCommand` — объявление или определение чего-то на C++
  для интерпретируемого RASL’а:
  * `#CmdEnumDescr`, `#CmdInterpretFuncDescr`, `#CmdSwapDescr` —
     определяют дескриптор соответствующего объекта.
* `t.NativeDeclarationCommand` — объявление или определение чего-то на C++
  для нативного RASL’а, сюда же  входят начало и конец регулярных функций
  на C++:
  * `#CmdNativeFuncDescr`, — определяют дескриптор нативной функции,
  * `#CmdEmitNativeCode` — тот же смысл, что и для высокоуровневых команд;
  * `#CmdFnStart`, `#CmdFnEnd` — начало и конец тела функции.
* `e.CookiedName` — имя функции с ключом области видимости
  (0, 0 для entry-функций; два числа для локальной, для каждой единицы
  трансляции эта пара чисел своя).
* `t.DirectCommand` — команды прямой кодогенерации. Бо́льшая их часть совпадает
  с элементарными командами тел функций высокоуровневого RASL, в дополнение
  к ним определены команды, соответствующие началу и концу составных команд
  (начало и конец предложения и цикла по открытой переменной):
  * `#CmdProfileFunction` — запуск профилировщика для функции Рефала,
  * `#CmdStartSentence`, `#CmdEndSentence` — начало и конец предложения,
  * `#CmdOpenedE-Start`, `#CmdOpenedE-End` — начало и конец цикла по открытой
    e-переменной.
* `t.InterpretCommand` — команды режима интерпретации:
  * `(s.LiteralArray t.LiteralItem*)` — массив литеральных значений. Поскольку
    массивы команд в качестве аргументов могут использовать только 8-битные
    целые, для аргуметов других типов описываются массивы, а в интерпретируемых
    командах используются индексы массивов. `s.LiteralArray t.LiteralItem`:
    * `#CmdFuncArray e.Name` — массив указателей на функции,
    * `#CmdLabelArray e.Name` — массив идентификаторов,
    * `#CmdNumberArray s.Number` — массив больших (>255) чисел,
    * `#CmdStringArray e.String` — массив строк.
  * `(#CmdInitRAA e.Name)` — заголовок массива интерпретируемых команд.
  * `t.InterpretArrayLines` — команды, генерирующие строчки массива.
  * `(#CmdFinRAA)` — последняя строка массива и закрывающая фигурная скобка.
  * `(#CmdIssueMemory s.Memory)` — резервирование памяти для указателей на узлы.
  * `(#CmdReserveBacktrackStack s.Depth)` — резервирование стека для переходов
    по ошибкам сопоставления. Команды инициализации цикла по открытым
    переменным (`#CmdEPrepare`) и перехода к концу предложения
    (`#CmdOnFailGoTo`) помещают смещение в этот массив.
* `t.InterpretArrayLines` — команды, генерирующие строчки массива
  интерпретируемых команд. Во многом совпадают с одноимёнными командами прямой
  кодогенерации — такие команды будут пропускаться. При неудаче сопоставления
  команды сопоставления запускают _откат._
  * `(s.iMatchCommand s.Direction s.Offset e.iMatchInfo)`.
    При неудаче сопоставления эти команды запускают _откат._
    Отдельное замечание: `#CmdNum` соответствует числу, влезающему в 8 бит,
    её аргумент записывается непосредственно в массив. `#CmdHugeNum` ссылается
    на число в массиве `numbers` по индексу.
  * `s.iMatchSaveCommand` → `s.iMatchCommand` × `s.MatchSave`.
  * `#CmdEPrepare` и `#CmdEStart` в генерируемом коде всегда располагаются
    рядом (но заменить их одной командой нельзя). Интерпретатор, обнаружив…
  * `(#CmdEPrepare s.RangeOffset s.VarOffset)` устанавливает для заданной
    переменной пустое значение (аргумент `s.RangeOffset` игнорируется),
    помещает адрес следующей команды в стек откатов и пропускает следующую
    команду (это должна быть `#CmdEStart`).
  * `(#CmdEStart s.RangeOffset s.VarOffset)` удлиняет переменную `s.VarOffset`
    на один терм, отрывая его от `s.RangeOffset`, либо запускает _откат,_
    если `s.RangeOffset` уже пустой. В противном случае кладёт на стек откатов
    свой адрес.
  * `(#CmdiVariableDebugTable s.StringId s.Offset)` → `#CmdVariableDebugTable`.
    Человекочитаемое имя хранится в таблице строк.
  * `(#CmdCreateElem s.CreateMode s.Offset s.iAllocType e.iAllocInfo)`.
    Оговорка о `#ElNumber` и `#ElHugeNumber` та же,
    что и для `#CmdNum` и `#CmdHugeNum`.
  * `(#CmdOnFailGoTo s.Delta)` — кладёт на стек откатов адрес команды,
    с которой начинается следующее предложение. Смещение этой команды
    задаётся относительно текущей команды `#CmdOnFailGoTo`.

**Понятие отката.** При неудаче сопоставления с образцом в интерпретируемом
коде запускается откат: со стека откатов снимается адрес следующей команды
и осуществляется на неё переход. Если стек откатов пустой, то интерпретатор
функции завершается с ошибкой сопоставления.

На стек откатов нужные значения кладутся командами `#CmdEPrepare`
(устанавливает откат следующую команду, которая должна быть `#CmdEStart`),
`#CmdEStart` (кладёт свой адрес) и `#CmdOnFailGoTo` (кладёт адрес команды
с заданным смещением). Механизм откатов позволяет реализовать семантику циклов
по открытым e-переменным (команды внутри цикла откатываются к `#CmdEStart`,
которая удлиняет переменную) и предложений (в начале каждого предложения
выполняется `#CmdOnFailGoTo`, которая устанавливает адрес перехода на следующее
предложение).

## Генерация целевого кода на C++ (проход 9)
    <GenProgram-RASL e.RASL>
      == (e.Line)*
    <GenProgram-Native (e.SrcName) (e.OutputName) e.RASL>
      == (e.Line)*

Генератор преобразует каждую из команд промежуточного кода в соответствующий
фрагмент кода на C++. Функции `GenProgram-*` возвращает последовательность
строк целевого файла. Аргументы `e.SrcName` и `e.OutputName` необходимы
для правильной генерации нативных вставок.
