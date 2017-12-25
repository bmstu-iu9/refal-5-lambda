# Основы программирования на Рефале, Базисный Рефал

## Программа Hello, World!

В [предыдущей части](2-intro.md) нам удалось откомпилировать и запустить
программу `hello.ref`, которая распечатала строчку «Hello, World!». Давайте
теперь научимся читать и понимать её исходный код.

    $ENTRY Go {                                 /* 1 */
      /* empty */ = <Prout 'Hello, World!'>;    /* 2 */
    }                                           /* 3 */

Внимательные читатели заметили отличия от программы в предыдущей главе:
добавились строчки, начинающиеся на `/*` и заканчивающиеся на `*/`.
Это комментарии — любой текст между `/*` и `*/` компилятором игнорируется
и используется для пояснения смысла программы читающему её программисту.

В эту программу были добавлены комментарии, просто нумерующие строки
(для удобства ссылки на них из текста руководства) и слово `/* empty */`,
обращающее внимание читателя на то, что в этом месте программы ничего нет.
Да, звучит на первый взгляд странно, но вскоре всё станет понятнее.

Комментарии, ограниченные знаками `/*` и `*/`, являются многострочными,
т.е. `*/` не обязана находиться в той же строке, что и предшествующая ей `/*`.
Помимо многострочных комментариев также допустимы однострочные — любая
строка, начинающаяся со знака (в первой колонке) `*`, игнорируется
компилятором.

Например, следующая программа полностью идентична предыдущей, только
замусорена большим количеством бесполезных комментариев.

    /*
      Ньютонометр безусловно не зависит от скорости вращения внутреннего
      кольца подвеса, что не кажется странным, если вспомнить о том,
      что мы не исключили из рассмотрения периодический кожух.
    */
    $ENTRY Go {                                 /* 1 */
    * Проекция на подвижные оси, несмотря на некоторую погрешность,
    * относительно не зависит от скорости вращения внутреннего кольца
    * подвеса, что не кажется странным, если вспомнить о том, что мы
    * не исключили из рассмотрения штопор. 
      /* empty */ = <Prout 'Hello, World!'>;    /* 2 */
    }                                           /* 3 */
    * Источник текста комментариев:
    /* https://yandex.ru/referats/?t=gyroscope&s=34928 */

Но вернёмся к нашей функции.

    $ENTRY Go {                                 /* 1 */
      /* empty */ = <Prout 'Hello, World!'>;    /* 2 */
    }                                           /* 3 */

Любая программа на Рефале-5λ представляет собой набор функций (язык ведь
функционального программирования всё-таки). И эта программа не исключение.
Здесь определена функция `Go`: определение функции записывается как имя
функции, за которым следует _блок_ — тело функции, ограниченное фигурными
скобками (в строках 1 и 3 соответственно). Имя `Go` неслучайно: любая
программа на Рефале должна содержать единственное определение функции с именем
`Go` либо `GO` — процесс выполнения есть вычисление функции `Go` (или `GO`)
с пустым аргументом.

Непонятное `$ENTRY` перед именем функции будет прояснено в следующих разделах,
сейчас нам достаточно знать, что ключевое слово `$ENTRY` обязано предварять
точку входа (entry point) `Go` или `GO` в программу.

В строке 2 находится единственное _предложение_ функции `Go`. Предложение —
это правило, определяющее, как построить значение функции на некотором
подмножестве её аргументов. Функция в общем случае может состоять из нескольких
предложений, каждое из которых завершается знаком `;` (точкой с запятой). Точка
с запятой в конце последнего предложения может не ставиться.

Любое предложение состоит из двух частей — _левой части, образца,_ описывающей
подмножество значений аргумента функции, на котором это предложение применимо,
и _правой части, результата,_ описывающей значение функции на этом подмножестве.
Левая и правая части разделяются знаком `=` (равенства).

Примечание. _В дальнейшем будет рассматриваться расширенный синтаксис Рефала,
в котором синтаксис предложения будет уже сложнее._

В программе `hello.ref` единственное предложение говорит о том, что оно
применимо только для пустого аргумента функции (перед равенством ничего
не записано), комментарий `/* empty */` подчёркивает этот факт. И правая часть
описывает значение функции `Go` с пустым аргументом как результат вычисления
функции `Prout`, которому в качестве аргумента передаётся последовательность
знаков `Hello, World!`. Вызовы функций на Рефале, в отличие от математической
нотации, оформляются при помощи угловых скобок `<` и `>` (знаков «меньше»
и «больше»), при этом имя функции пишется не перед открывающей скобкой, а после
неё.

Функция `Prout` при любом своём аргументе вычисляет «пустоту», однако её
выполнение имеет побочный эффект — она свой аргумент распечатывает на экране.
И, как не трудно догадаться, ради этого побочного эффекта её и вызывают.

На самом деле, практически все программы на Рефале пишутся ради побочных
эффектов. После завершения вычисления функции `Go` (или `GO`), её результат
отбрасывается и программа завершается. Пользователю достаётся лишь то, что
было выведено на экран функциями типа `Prout`, записано в файлы, либо передано
«наружу» из процесса вычислений иным путём.

Примечание. _Есть исключения из этого правила. Во-первых, это автоматизированные
тесты (автотесты) — программы, которые запускают тестируемую функцию, проверяют
её результат и завершаются. При успешной проверке программа молча завершается,
при неуспешной — аварийно вылетает с ошибкой. Среда запуска тестов умеет
различать эти два случая и сообщает пользователю о подобных неуспешных запусках.
Другой пример — исследования в области автоматического преобразования
и верификации программ, например, при помощи суперкомпиляции. В этом случае
пишется какая-нибудь математически интересная функция на Рефале, скармливается
инструментальному средству, например, суперкомпилятору РЕФАЛа-5 SCP4 (\[1],
\[2], \[3]), после чего изучается результат преобразования или анализа этой
функции. Собственно, исследования в области разработки подобных инструментальных
средств — это одно из основных применений Рефала на сегодня.

Функция `Prout` — это одна из функций, входящих в стандартную библиотеку языка,
и по умолчанию неявно доступна к использованию в любой программе. В классическом
РЕФАЛе-5 она является встроенной, т.е. определённой неявно всегда в любой
программе. Рефал-5λ, однако, позволяет писать программы, в которых
не используется стандартная библиотека.

### Промежуточные выводы — что мы увидели в `hello.ref`

Давайте подытожим, что мы к этому моменту узнали.

* В программах можно писать комментарии, которые никак не влияют на выполнение
  программы и служат лишь для пояснения.
* Комментарии бывают двух видов: однострочные и многострочные.
* Однострочный комментарий представляет собой строку, первым символом которой
  является знак `*`, а остальные могут быть любыми.
* Многострочный комментарий может располагаться в любом месте программы, где
  допустим незначащий пробельный символ. Комментарий начинается знаками `/*`
  и заканчивается знаками `*/`.
* Программа на Рефале есть набор функций.
* Выполнение программы начинается с вызова «стартовой» функции `Go` или `GO`
  с пустым аргументом.
* Перед именем стартовой функции должно располагаться ключевое слово `$ENTRY`.
* Функция на Рефале записывается как имя функции, за которым в фигурных скобках
  следует одно или несколько предложений.
* Предложение состоит из двух частей: левой части — «образца» и правой части —
  «результата».
* Левая часть определяет подмножество значений аргумента, на котором применимо
  данное предложение.
* Правая часть определяет, каким способом будет строиться результат вычисления
  функции на этом подмножестве аргумента.
* «Пустое значение» записывается пустым местом, обычно в этом месте ставят
  комментарий `/* empty */` или `/* пусто */`.
* Последовательность печатных знаков записывается в одинарных кавычках:
  `'Hello, World!'`.
* Вызов функции `F` с некоторым аргументом `arg` записывается как `<F arg>`.

Выполнение программы является вычислением функции `Go` с пустым аргументом,
вызов функции оформляется при помощи угловых скобок, пустое значение
записывается пустым местом. Значит, правомерно будет записать, что выполнение
программмы на Рефале эквивалено вызову функции `<Go>` или `<Go /*empty*/>`.
В первом случае мы между именем функции `Go` и закрывающей скобкой `>` мы
не написали ничего (приписали вплотную одно к другому). Во втором случае
для наглядности воткнули комментарий. Обычно вызов функции с пустым аргументом
пишут без комментария внутри.

## Другие примеры программ

### Программы из нескольких предложений

Прежде чем перейти к рассмотрению других примеров, нужно дать пояснения
по синтаксису, не отражённые в листинге `hello.ref`.

Во-первых, Рефал — язык со свободным синтаксисом. В нём переход на новую
строку — точно такой же пробельный символ, как и пробел или табуляция. Пара
исключений — открывающая и закрывающая кавычки должны располагаться в одной
строке (разрыв строки не может располагаться внутри последовательности
символов) и символ перевода строки завершает однострочный комментарий
по определению.

Во-вторых, каждый из знаков внутри одинарных кавычек является самостоятельным,
следующие записи эквивалентны: `'Hello`, `'Hel' 'lo'`, `'H' 'e' 'l' 'l' 'o'`.

В-третьих, именем функции может быть любая последовательность букв, цифр,
знаков `_` («прочерк») и `-` («дефис»), начинающаяся с прочерка или буквы.
Например, `Go`, `Hello`, `A-plus-B`, `_remove_file`, `ANSWER_42`. Строчные
и прописные буквы различаются, т.е. имена `hello`, `Hello` и `HELLO` различные.

Примечание. _Классическая реализация РЕФАЛа-5 не поддерживает имена, которые
начинаются на прочерк._

**Пример 1.** Напишем функцию, которая складывает две двоичные цифры.

    BinAdd {
      '0' '0' = '0';
      '0' '1' = '1';
      '1' '0' = <BinAdd '0' '1'>;
      '1' '1' = '10';
    }

Левые части предложений можно было записать и слитно, например `'00'`,
на работу программы это бы никак не повлияло — они написаны раздельно для
удобочитаемости.

Нетрудно понять, что первое предложение применимо, когда аргумент функции —
`'00'`, т.е. результатом вызова `<BinAdd '00'>` будет `'0'`, со вторым
и четвёртым предложением тоже всё понятно.

Третье предложение говорит о том, что результат вызова функции
`<BinAdd '10'>` точно такой же, как и `<BinAdd '01'>`, от перемены мест
слагаемых сумма не меняется. Можно было написать в правой части сразу `'1'`,
вызов функции был добавлен в правую часть ради самого вызова.

Областью определения этой функции будут пары символов `'00'`, `'01'`, `'10'`,
`'11'`. При попытке вызвать эту функцию с аргументом вне области определения
программа аварийно завершится (т.н. ошибка невозможности отождествления,
«recognition impossible»).

**Пример 2.** Напишем функцию, которая вычитает две двоичные цифры.

    BinSub {
      '0' '0' = '0';
      '1' '1' = '0';
      '1' '0' = '1';
      '0' '1' = '-' <BinSub '1' '0'>;
    }

Здесь всё аналогично, кроме последнего предложения. В правой части четвёртого
предложения записан символ минуса, вслед за которым находится вызов функции
`BinSub`. Что это значит? Это значит, что результатом вызова функции
`<BinSub '0' '1'>` будет знак `'-'`, за которым следует результат вычисления
`<BinSub '1' '0'>` — `'1'`. Т.е. результат `<BinSub '0' '1'>` будет равен
`'-' '1'` или `'-1'`.

**Пример 3.** Напишем функцию, которая проверяет равенство двух двоичных
чисел, не больших 2 (т.е. 10 в двоичной записи) и не меньших -1. Будем считать,
что оба числа в аргументе функции разделяются знаком `'='`.

    IsEqual {
      '-1=-1' = 'True'; '-1=0' = 'False'; '-1=1' = 'False'; '-1=10' = 'False';

      '0=-1' = 'False'; '0=0' = 'True'; '0=1' = 'False'; '0=10' = 'True';

      '1=-1' = 'False'; '1=0' = 'False'; '1=1' = 'True'; '1=10' = 'False';

      '10=-1' = 'False'; '10=0' = 'False'; '10=1' = 'True'; '10=10' = 'True';
    }

Да, скучно. Да, длинно. Позже мы увидим, как можно сократить эту запись.

**Пример 4.** Напишем функцию `Go`, демонстрирующую коммутативность сложения
и некоммутативность вычитания.

    $ENTRY Go {
      = <Prout '1+0=0+1? ' <IsEqual <BinAdd '1' '0'> '=' <BinAdd '0' '1'>>>
        <Prout '1-0=0-1? ' <IsEqual <BinSub '1' '0'> '=' <BinSub '0' '1'>>>;
    }

Функции `BinAdd`, `BinSub`, `IsEqual` и `Go` можно положить в один файл
(назовём его `binmath-1.ref`) и откомпилировать следующей командой:

    srmake binmath-1.ref

то получится исполнимый файл `binmath-1.exe` (или `binmath-1` на unix-like),
который при запуске напечатает

    1+0=0+1? True
    1-0=0-1? False

В этом разделе мы рассмотрели функции, у которых в левых частях предложений
записаны различные, но _фиксированные_ значения. И очевидно, областями
областями определения таких функций являются все явно перечисленные значения
образцов. Понятно, что для написания нетривиальных программ этого чертовски
мало: можно задать только функции с конечной областью определения и для каждого
из значений аргумента придётся написать предложение. Это привело к тому,
что даже такая простая функция, как `IsEqual` потребовала целых 16 предложений.

О том, как писать функции с бесконечной областью определения, мы узнаем
в следующем параграфе.

У внимательного читателя наверняка возник вопрос: а что будет, если несколько
предложений будут иметь одинаковые левые части? Не будет ли это синтаксической
ошибкой? Ответ: не будет. Если аргумент функции таков, что становятся
применимыми несколько предложений, то приоритет имеет то, которое написано выше.
Например, результатом вызова `<F 'A'>` будет `'1'`, а не `'3'`:

    F {
      'A' = '1';
      'B' = '2';
      'A' = '3';
    }

Первое предложение имеет приоритет над третьим.

### Переменные

Выше было сказано, что левая часть определяет подмножество значений аргумента,
при котором применимо это предложение. Но пока мы рассмотрели только случаи
подмножеств, состоящих из одного единственного элемента.

Рефал позволяет записывать в левых частях выражения (точное определение
понятия «выражение» будет дано позже), которые, помимо явно заданных символов,
содержат неизвестные произвольные фрагменты — _переменные_.

Множества значений, которые могут принимать переменные, определяются _типом_
переменной. В Рефале есть три типа переменных: s-, t- и e-переменные.
t-переменные мы рассмотрим позже, когда будем изучать структурные скобки.

Значением _s-переменной_ или _переменной символа_ может быть любой одиночный
символ. Значением _e-переменной_ или _переменной выражения_ может быть любой
фрагмент аргумента функции, в том числе пустой (не совсем любой, на самом деле,
но об этом позже).

Переменная записывается как признак типа (`s`, `t`, `e`), за которой следует
знак `.` («точка») и имя переменной — некоторая последовательность букв и цифр.
Имя переменной часто называют индексом переменной.

Если в выражении переменная встречается несколько раз, то она называется
_повторной,_ все её вхождения должны иметь одинаковое значение.

Рассмотрим некоторые выражения с переменными:

* `s.1 s.2 s.3` — три любых символа, например `'ABC'`, `'999'`, `'@#$'`.
* `s.A s.A s.A` — три любых _одинаковых,_ символа, например `'666'`, `'www'`.
* `s.Edge s.Middle s.Edge` — три любых символа, причём первый и последний
  должны совпадать. Например: `'@$@'`, `'kek'`, `'^_^'`.
* `s.first e.middle s.last` — любое выражение, содержащее как минимум два
  символа. Например: `'Hello'`, `'10'`, `'0_o'`.
* `s.EDGE e.CENTER s.EDGE` — любое выражение как минимум из двух символов,
  начинающееся и заканчивающееся на одинаковый символ. Например: `'++'`,
  `'LOOOL'`, `'revolver'`.
* `'(' e.Inner ')'` — выражение, начинающееся и заканчивающееся на скобку.
  Примеры: `'()'`, `'()()'`, `'(ok)'`.
* `e.Key '=' e.Value` — выражение, содержащее хотя бы один знак равенства.
  Например: `'='`, `'x=1'`, `'-1=10'`, `'A=B==C=D'`.
* `e.Eq e.Eq` — выражение чётной длины, которое можно разбить на две
  одинаковые половинки: `'ABCABC'`, `'8888'`, пустое выражение (да, его
  тоже можно разбить на два пустых).

**Пример 5.** Теперь, вооружённые новым знанием, мы можем упростить функцию
`IsEqual`:

    IsEqual {
      e.Equal '=' e.Equal = 'True';
      e.Left '=' e.Right = 'False';
    }

Видно, что, во-первых, функция сократилась с 16 предложений до двух, во-вторых,
её область определения существенно расширилась — она принимает не только
пары двоичных чисел, но и вообще любые выражения, содержащие знак `'='`.

Первое предложение функции применимо к любым выражениям, которые содержат
хотя бы один знак равенства, и при этом их можно разбить так, что часть,
предшествующая знаку `'='`, будет совпадать со следующей за ней.

Второе предложение применимо к любому аргументу, содержащему знак равенства.

Очевидно, что для аргументов вида `'ab=ab'` применимы оба предложения, первое,
поскольку до и после знака `'='` находится одинаковые выражения, второе,
потому что просто содержит знак равенства. Но как выше было сказано,
предшествующие предложения имеют приоритет над последующими, поэтому первое
предложение будет обрабатывать только случаи равных «половинок», а второму
будут доставаться все остальные (неравные).

Если оба предложения поменять местами, то результатом функции (на своей области
определения) всегда будет `'False'`.

**Пример 6.** Функция `IsPalindrom`, проверяющая, является ли аргумент функции
палиндромом.

    IsPalindrom {
      s.OneSymbol = 'True';
      /* empty */ = 'True';
      s.Equal e.Middle s.Equal = <IsPalindrom e.Middle>;
      e.Other = 'False';
    }


# Ссылки
1. А. П. Немытых, Суперкомпилятор SCP4: общая структура, ISBN 978-5-382-00365-8,
   Издательство УРСС, Москва, 2007.
2. А. П. Немытых, В. Ф. Турчин, Суперкомпилятор SCP4: исходные тексты,
   on-line демонстрация, ([online]: <http://www.botik.ru/pub/local/scp/refal5/>),
   2000.
3. А. П. Немытых, В. Ф. Турчин, Суперкомпилятор SCP4: on-line демонстрация,
   ([online]: <http://refal.botik.ru/scp_demo/>), 2000. 