# Интерфейсы между отдельными проходами компиляции

## Лексический анализ (проход 1-2)

    <LexFolding e.FileName>
      == e.Tokens

    e.Tokens ::= (s.TokType s.LineNumber e.Info)*

* `e.Tokens` — последовательность токенов.
* `e.FileName` — имя файла исходного текста.
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

## Синтаксический анализ (проход 3-5)

    <ParseProgram t.ErrorList e.Tokens>
      == t.ErrorList e.AST

    e.AST ::= t.ProgramElement
    t.ProgramElement ::=
        (#Function s.ScopeClass (e.Name) e.Sentences)
      | (#Enum s.ScopeClass e.Name)
      | (#Swap s.ScopeClass e.Name)
      | (#Stub s.ScopeClass e.Name)
      | (#Declaration s.ScopeClass e.Name)
      | (#Ident e.Name)
      | (#Separator)

    s.ScopeClass ::= #GN-Entry | #GN-Local

    e.Sentences ::= t.Sentence*
    t.Sentence ::= ((e.Pattern) (e.Result))
    e.Pattern, e.Result ::= e.Expression

    e.Expression ::= t.Term*
    t.Term ::=
        (#TkChar s.Char)
      | (#TkNumber s.Number)
      | (#TkName e.Name)
      | (#TkIdentifier e.Name)
      | (#Brackets e.Expression)
      | (#ADT-Brackets (e.Name) e.Expression)
      | (#CallBrackets e.Expression)
      | (#TkVariable s.Mode e.Index s.Depth)

* `t.ErrorList` — список ошибок, определён в `Error.sref`.
* `e.Tokens` — последовательность токенов (см. выше).
* `e.AST` — синтаксическое дерево исходного текста.
* `t.ProgramElement` — генерируемый элемент верхнего уровня. Предполагается, что
  при генерации последовательно для каждого элемента программы генерируется свой
  кусок кода: определение или объявление функции, определение идентификатора,
  _ничего,_ пустая строка. Делится на
  * `#Function` — определение регулярной (обычной) функции,
  * `#Enum` — определение пустой функции,
  * `#Swap` — определение статического ящика,
  * `#Stub` — артефакт работы синтаксического анализатора, генерируется
    в пустое место.
  * `#Declaration` — объявление функции,
  * `#Ident` — объявление идентификатора,
  * `#Separator` — добавляет пустую строку в сгенерированный файл.
* `s.ScopeClass` — область видимости для функции.
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
  * `#TkVariable` — переменная. `s.Depth` — глубина вложенности вложенной
    функции, в которой эта переменная впервые определена. Для именованных
    функций `s.Depth` равен нулю.

Следует отметить, что в AST нет вложенных функций, поскольку они как
синтаксический сахар разрешаются на уровне синтаксического анализа, превращаясь
в глобальные именованные функции с именами `lambda_…_N`.

## Генерация высокоуровневого RASL’а (проход 6)
    <HightLevelRASL e.AST>
    <HightLevelRASL-OptPattern e.AST>
    <HightLevelRASL-OptResult e.AST>
      == e.RASLAST

    e.RASLAST ::= t.RASLAST-Item*
    t.RASLAST-Item ::=
        (#Function s.ScopeClass (e.Name) e.HiCommands)
      | t.CmdTopLevelItem

    t.CmdTopLevelItem ::=
        (#CmdEnum s.ScopeClass e.Name)
      | (#CmdSwap s.ScopeClass e.Name)
      | (#CmdDeclaration s.ScopeClass e.Name)
      | (#CmdDefineIdent e.Name)
      | (#CmdSeparator)

    e.HiCommands ::= t.HiCommand*
    t.HiCommand ::=
        t.StatementCommand
      | t.SingleCommand

    t.StatementCommand ::=
        (#CmdSentence e.HiCommands)
      | (#CmdOpenELoop s.Direction s.RangeOffset s.VarOffset e.HiCommands)

    t.SingleCommand ::=
        (#CmdIssueMem s.Offset)
      | (#CmdInitB0)
      | (s.MatchCommand s.Direction s.Offset e.MatchInfo)
      | (#CmdSave s.OldOffset s.NewOffset)
      | (#CmdComment e.Text)
      | (#CmdEmptyResult)
      | (#CmdAllocateElem s.Offset s.AllocType e.AllocInfo)
      | (#CmdCopyVar s.Mode s.VarOffset s.SampleOffset
      | (#CmdInsertElem s.Offset)
      | (#CmdInsertRange s.Offset)
      | (#CmdInsertVar s.Mode s.Offset)
      | (#CmdLinkBrackets s.LeftOffset s.RightOffset)
      | (#CmdPushStack s.Offset)
      | (#CmdFail)
      | (#CmdReturnResult)

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
      | #CmdCharSave s.Offset s.Char

    s.Direction ::= #AlgLeft | #AlgRight

    s.AllocType e.AllocInfo ::=
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

* `e.AST` — см. предыдущий раздел.
* `e.RASLAST` — (сильно упрощая) синтаксическое дерево, в котором в функциях
  вместо предложений последовательности команд.
* `t.RASLAST-Item` — генерируемый элемент, аналогичен `t.ProgramElement`
  из предыдущего раздела.
* `t.TopLevelItem` — простой (несоставной) элемент верхнего уровня:
  * `#CmdEnum` — пустая функция,
  * `#CmdSwap` — статический ящик,
  * `#CmdDeclaration` — объявление функции,
  * `#CmdDefineIdent` — определение идентификатора,
  * `#CmdSeparator` — вставка пустой строки в целевой код.
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
  * `(#CmdIssueMem s.Offset)` — резервирование памяти для локальных переменных.
  * `(#CmdInitB0)` — инициализация нулевого диапазона на основе аргумента
    функции (`arg_begin` и `arg_end` в сгенерированном коде C++).
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
  * `(#CmdEmptyResult)` — подготавливает рантайм к формированию элементов
    результатного выражения в списке свободных узлов. Должно предшествовать
    любым командам распределения (включая копирование переменных).
  * `(#CmdAllocateElem s.Offset s.AllocType e.AllocInfo)` — создание нового
    объекта в списке свободных узлов. Указатель на созданный объект помещается
    в контекст по смещению `s.Offset`. Поля `s.AllocType e.AllocInfo`
    определяют тип и аргументы команды распределения. Их смысл очевиден,
    за исключением `#ElString e.String` — она создаёт непрерывную
    последовательность литер.
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
  * `(#CmdReturnResult)` — возврат из функции признака успешного завершения.

### Вычислительная модель высокоуровневых команд
Последовательность команд внутри функции должна начинаться с `#CmdIssueMem`,
которая резервирует стек для локальных переменных — указателей на элементы
поля зрения и списка свободных узлов.

Далее должны располагаться команды сопоставления с образцом и вложенные
предложения (команды `#CmdSentence`). Затем либо должна следовать составная
команда — цикл по открытой e-переменной (`#CmdOpenELoop`), за которой следует
`#CmdFail`, либо команды создания новых узлов и команды сборки результатного
выражения (завершающаяся `#CmdReturnResult`).

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

## Генерация низкоуровневого RASL’а (проход 7)
    <LowLevelRASL s.GenMode e.RASLAST>
      == e.RASL

    s.GenMode ::= #OnlyDirect | #OnlyInterpret | #Both
    e.RASL ::= t.LoCommand*

    t.LoCommand ::=
        t.DeclarationCommand
      | t.DirectCommand
      | t.InterpretCommand
      | t.GlueCommand

    t.DeclarationCommand ::=
        t.TopLevelItem
      | (#CmdFnStart s.ScopeClass e.Name)
      | (#CmdFnEnd)

    t.DirectCommand ::=
        t.SingleCommand
      | (#CmdStartSentence)
      | (#CmdEndSentence)
      | (#CmdOpenedE-Start s.Direction s.RangeOffset s.VarOffset)
      | (#CmdOpenedE-End s.Direction s.RangeOffset s.VarOffset)

    t.InterpretCommand ::=
        (#CmdiFuncArray (e.Name)*)
      | (#CmdiLabelArray (e.Name)*)
      | (#CmdNumberArray s.Number*)
      | (#CmdStringArray (e.String)*)
      | (#CmdInitRAA)
      | t.InterpretArrayLines
      | (#CmdFinRAA)
      | (#CmdiReserveStack s.Depth)
      | (#CmdiRunInterpret)

    t.InterpretArrayLines ::=
        (#CmdiInitB0)
      | (s.iMatchCommand s.Direction s.Offset e.iMatchInfo)
      | (#CmdiSave s.OldOffset s.NewOffset)
      | (#CmdiEPrepare s.RangeOffset s.VarOffset)
      | (#CmdiEStart s.RangeOffset s.VarOffset)
      | (#CmdiEmpty s.Offset)
      | (#CmdiEmptyResult)
      | (#CmdiAllocateElem s.Offset s.iAllocType e.iAllocInfo)
      | (#CmdArrCopy s.Mode s.VarOffset s.SampleOffset)
      | (#CmdSpliceElem s.Offset)
      | (#CmdSpliceRange s.Offset)
      | (#CmdArrSplice s.Mode s.VarOffset)
      | (#CmdiLinkBrackets s.LeftOffset s.RightOffset)
      | (#CmdiPushStack s.Offset)
      | (#CmdiFail)
      | (#CmdiReturnResult)
      | (#CmdiOnFailGoTo s.Delta)

    s.iMatchCommand e.iMatchInfo ::=
        #CmdiRepeat s.Mode s.VarOffset s.SampleOffset
      | #CmdiADT s.NewRangeOffset s.NameId
      | #CmdiChar s.Char
      | #CmdiVar s.Mode s.VarOffset
      | #CmdiName s.NameId
      | #CmdiIdent s.NameId
      | #CmdiNum s.Number
      | #CmdiHugeNum s.NumberId
      | #CmdiBracket s.NewRangeOffset

    s.iAllocType e.iAllocInfo ::=
        #ElChar s.Char
      | #ElName s.NameId
      | #ElIdent s.NameId
      | #ElHugeNumber s.NumberId
      | #ElNumber s.Number
      | #ElString s.StringId
      | #ElOpenADT | #ElCloseADT
      | #ElOpenBracket | #ElCloseBracket
      | #ElOpenCall | #ElCloseCall

    t.GlueCommand ::=
        (#CmdIfDef)
      | (#CmdElse)
      | (#CmdEndIf)

* `e.RASL` — последовательность элементарных команд. Каждая из них отображается
  в шаблон кода на C++.
* `t.LoCommand` — низкоуровневая команда
* `t.DeclarationCommand` — объявление или определение чего-то на C++, сюда же
  входят начало и конец регулярных функций на C++.
* `t.DirectCommand` — команды прямой кодогенерации. Бо́льшая их часть совпадает
  с элементарными командами тел функций высокоуровневого RASL, в дополнение
  к ним определены команды, соответствующие началу и концу составных команд
  (начало и конец предложения и цикла по открытой переменной).
* `t.InterpretCommand` — команды режима интерпретации:
  * `(s.LiteralArray t.LiteralItem*)` — массив литеральных значений. Поскольку
    массивы команд в качестве аргументов могут использовать только 8-битные
    целые, для аргуметов других типов описываются массивы, а в интерпретируемых
    командах используются индексы массивов. `s.LiteralArray t.LiteralItem`:
    * `#CmdiFuncArray e.Name` — массив указателей на функции,
    * `#CmdiLabelArray e.Name` — массив идентификаторов,
    * `#CmdiNumberArray s.Number` — массив больших (>255) чисел,
    * `#CmdiStringArray e.String` — массив строк.
  * `(#CmdInitRAA)` — заголовок массива интерпретируемых команд.
  * `t.InterpretArrayLines` — команды, генерирующие строчки массива.
  * `(#CmdFinRAA)` — последняя строка массива и закрывающая фигурная скобка.
  * `(#CmdiReserveStack s.Depth)` — резервирование стека для переходов
    по ошибкам сопоставления. Команды инициализации цикла по открытым
    переменным (`#CmdiEPrepare`) и перехода к концу предложения
    (`#CmdiOnFailGoTo`) помещают смещение в этот массив.
  * `(#CmdiRunInterpret)` — вызов функции интерпретатора массива.
* `t.InterpretArrayLines` — команды, генерирующие строчки массива
  интерпретируемых команд. Во многом совпадают с командами прямой кодогенерации.
  Для таких команд будет использоваться запись _команда → команда_ для
  отсылки к соответствующей команде.
  * `#CmdiInitB0` → `#CmdInitB0`.
  * `(s.iMatchCommand s.Direction s.Offset e.iMatchInfo)` → `s.MatchCommand`.
    При неудаче сопоставления эти команды запускают _откат._
    Отдельное замечание: `#CmdiNum` соответствует числу, влезающему в 8 бит,
    её аргумент записывается непосредственно в массив. `#CmdHugeNum` ссылается
    на число в массиве `numbers` по индексу.
  * `#CmdiSave` → `#CmdSave`
  * `#CmdiEPrepare` и `#CmdiEStart` в генерируемом коде всегда располагаются
    рядом (но заменить их одной командой нельзя). Интерпретатор, обнаружив
  * `(#CmdiEPrepare s.RangeOffset s.VarOffset)` устанавливает для заданной
    переменной пустое значение (аргумент `s.RangeOffset` игнорируется),
    помещает адрес следующей команды в стек откатов и пропускает следующую
    команду (это должна быть `#CmdiEStart`).
  * `(#CmdiEStart s.RangeOffset s.VarOffset)` удлиняет переменную `s.VarOffset`
    на один терм, отрывая его от `s.RangeOffset`, либо запускает _откат,_
    если `s.RangeOffset` уже пустой. В противном случае кладёт на стек откатов
    свой адрес.
  * `#CmdiEmpty` → `#CmdEmpty`. При неудаче сопоставлениея запускает _откат._
  * `(#CmdiAllocateElem s.Offset s.iAllocType e.iAllocInfo)` → `#CmdAllocateElem`.
    Оговорка о `#ElNumber` и `#ElHugeNumber` та же, что и для `#CmdiNum`
    и `#CmdHugeNum`.
  * `#CmdArrCopy` → `#CmdCopyVar`.
  * `#CmdSpliceElem` → `#CmdInsertElem`.
  * `#CmdSpliceRange` → `#CmdInsertRange`.
  * `#CmdArrSplice` → `#CmdInsertVar`.
  * `#CmdiLinkBrackets` → `#CmdLinkBrackets`.
  * `#CmdiPushStack` → `#CmdPushStack`.
  * `#CmdiFail` → `#CmdFail`.
  * `#CmdiReturnResult` → `#CmdReturnResult`.
  * `(#CmdiOnFailGoTo s.Delta)` — кладёт на стек откатов адрес команды,
    с которой начинается следующее предложение. Смещение этой команды
    задаётся относительно текущей команды `#CmdiOnFailGoTo`.
* `t.GlueCommand` — команды, генерирующие директивы препроцессора вокруг
  команд интерпретации и прямой кодогенерации.
  * `(#CmdIfDef)` → `#ifdef INTERPRET`,
  * `(#CmdElse)` → `#else`,
  * `(#CmdEndIf)` → `#endif`.

**Понятие отката.** При неудаче сопоставления с образцом в интерпретируемом
коде запускается откат: со стека откатов снимается адрес следующей команды
и осуществляется на неё переход. Если стек откатов пустой, то интерпретатор
функции завершается с ошибкой сопоставления.

На стек откатов нужные значения кладутся командами `#CmdiEPrepare`
(устанавливает откат следующую команду, которая должна быть `#CmdiEStart`),
`#CmdiEStart` (кладёт свой адрес) и `#CmdiOnFailGoTo` (кладёт адрес команды
с заданным смещением). Механизм откатов позволяет реализовать семантику циклов
по открытым e-переменным (команды внутри цикла откатываются к `#CmdiEStart`,
которая удлиняет переменную) и предложений (в начале каждого предложения
выполняется `#CmdiOnFailGoTo`, которая устанавливает адрес перехода на следующее
предложение).

## Генерация целевого кода на C++ (проход 8)
    <GenProgram e.RASL>
      == (e.Line)*

Генератор преобразует каждую из команд промежуточного кода в соответствующий
фрагмент кода на C++. Функция `GenProgram` возвращает последовательность
строк целевого файла.