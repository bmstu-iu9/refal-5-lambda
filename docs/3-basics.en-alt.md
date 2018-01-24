## Variables

> This section has alternative translations [one](3-basics.en.md), **two**.

It was said earlier, that the left part determines arguments definitions
subset, with which this sentence can be used. But now we have examined only
subsets cases that consist of one element.

Refal allows writing expressions on the left part (exact definition of
“expression” concern will be given later), which, besides obviously provided
symbols, contain unknown undefined fragments – _variables._

Set of values, which variables can assume, are defined with variables _type._
There are three variables types in Refal: s-, t- and e-variables. T-variables
will be described later, when we will learn about structure brackets.

Value of _s-variables_ or _symbol variables_ can be any single symbol. Value of
_e-variable_ or _expression variables_ can be any fragment of function argument,
also empty (not any, in fact, but it will be discussed later).

Variables are written as variable type (`s`, `t`, `e`), after which goes the
sign `.` (“dot”) and variable name-set of letters and numbers. The variable
name often called a variable index.

If variable is found in the expression not once, it is named as iterated
variable and all her instances must have the same value.

Let’s examine some expressions with variables:

* `s.1 s.2 s.3` – three any symbols, for example `'ABC'`, `'999'`, `'@#$'`.
* `s.A s.A s.A` – three any similar symbols, for example `'666'`, `'www'`.
* `s.Edge s.Middle s.Edge` – three any symbols, the first and the last should
  be the same. For example: `'@$@'`, `'kek'`, `'^_^'`.
* `s.first e.middle s.last` –  any expression, which contains at least two
  symbols. For example:`'Hello'`, `'10'`, `'0_o'`.
* `s.EDGE e.CENTER s.EDGE` – any expression, which consists at least of two
  symbols, which start and end with the same meaning. For example : `'++'`,
  `'LOOOL'`, `'revolver'`.
* `'(' e.Inner ')'` – expression, which starts and ends with bracket. Examples:
  `'()'`, `'()()'`, `'(ok)'`.
* `e.Key '=' e.Value` – expression, which contains at least one equal mark. For
  example: `'='`, `'x=1'`, `'-1=10'`, `'A=B==C=D'`.
* `e.Eq e.Eq` – expression with symmetric length, which can be divided into two
  equal parts: `'ABCABC'`, `'8888'`, empty expression (it can also be divided
  on two empty).

Variables can be both in the left and right  parts of the sentence. In this
case in the right part of the sentence can be used only those variables, which
are in the left part.

Now we should specify the process of function execution on Refal.

1. The sentence is chosen. In its left part it should be possible to get a
   function argument by changing variables on some values. If there are some
   sentences like that, the one with the least number is chosen. If there are
   no such sentences, the program is finished with recognition impossible.
2. The variables values are fixed. They should be so, that putting them in the
   left side of the chosen sentence, it turns in function argument. If there
   are some expressions like that, one will be fixed, which allows the left
   e-variable to get the shortest value; if it does not  reject the indoubt,
   the next e-variable will be examined and so on (in the next chapter we will
   examine this process more concrete).
3. In the right part of the chosen sentence variables are changed into their
   values. After that functions in the right part are counted.

In the next chapter this process will be examined in more details and more
formally.

**Example 5.** Now, having got the new knowledge, we can simplify function
`IsEqual`:

    IsEqual {
      e.Equal '=' e.Equal = 'True';
      e.Left '=' e.Right = 'False';
    }

It can be seen that firstly the function was cut from 16 to 2 sentences,
secondly, its domain set has become wider – it takes not only pairs of binary
integers, but also any expressions, which contains sign `'='`.

The first sentence of its function can be used with any sentences which contain
at least one equal mark, and also can be divided so, that the part which was
before this sign `'='`, will be similar to the part which goes after it.

The second sentence can be used with any argument, which contains equal mark.

Obviously, for the arguments with the type '`ab=ab'` it is possible to use both
sentences-the first, because before and after sign `'='` there are equal
expressions, the second, because it contains equal mark. However, as it was
said above, preceding sentences have a priority on forthcoming, so that the
first sentence will process only the cases of equal parts, and the second will
get all the others (non-equal).

After interchanging positions of both sentences, the function result (on its
domain set) will always be `'False'`.

**Example 6.** `IsPalindrome` function, which checks whether the function
argument is a palindrome or not.


    IsPalindrome {
      s.OneSymbol = 'True';
      /* empty */ = 'True';
      s.Equal e.Middle s.Equal = <IsPalindrome e.Middle>;
      e.Other = 'False';
    }

The definition of this function can be read the following way: the line which
consists of one symbol is a palindrome. The empty line is also a palindrome.
The line which starts and ends on the same symbol is a palindrome if the middle
part of the line is also a palindrome. Any other line can’t be a palindrome.

The definition of functions on FL can often be read as mathematical definitions.

**Example 8.** We right an add option for two binary integers of undefined
length. Functions on Refal commit one argument, but here we want to pass two of
them. In the first variant off add option we avoided this complexity by
expressing function into two symbols. Now we should pass two expressions of
undefined length. Each of arguments can consist only of symbols such as `'0'`
and `'1'`, so that it is possible to put any symbol between them, except zero
and one – using it it will be possible to define the end of one argument and
the beginning of another argument. We will use the `'+'` symbol for clarity.

Note. _Later we will know about really easie, effective and general way of
arguments division._

    BinAdd {
      e.Num1 '0' '+' e.Num2 '0' = <BinAdd e.Num1 '+' e.Num2> '0';
      e.Num1 '0' '+' e.Num2 '1' = <BinAdd e.Num1 '+' e.Num2> '1';
      e.Num1 '1' '+' e.Num2 '0' = <BinAdd e.Num1 '+' e.Num2> '1';
      e.Num1 '1' '+' e.Num2 '1'
        = <BinAdd <BinAdd e.Num1 '+' '1'> '+' e.Num2> '0';
      /* empty */ '+' e.Num2 = e.Num2;
      e.Num1 '+' /* empty */ = e.Num1;
    }

It is not difficult to see that function implements columnar addition of binary
integers. If the last numeric symbols of both digits are `'1'` and `'1'`, then
there is a transposition in the next place – this extending 1 adds to the first
argument.

### Intermediate conclusions

Let’s summarize:

* In the left and right parts of sentence can be variables – expressions
  fragments which can be changed on undefined values in accordance with their
  type.
* S-variables can be changed on any symbol.
* E-variables can be changed on undefined expression.
* Syntax of variables names: `s.varname`, `e.ab123`, `s.123ab`.
* That function sentence is conducted, for the left part of which it is
  possible to fund such value substitution, which thunks the left part into
  function argument.
* The same substitution is made into the right part of expression.

> *Translation to English of this hunk of paper is prepared by*
> **Yarullina Diana <190471@list.ru>** _at 2018-01-17_

## Structure brackets

> This section has alternative translations [one](3-basics.en.md), **two**.

Mathematically examined Refal subset is enough for writing an algorithm of any
complexity.(look \[4, lection No. 6]). However, practically it is not enough:
examined forms allow working only with “flat” symbols lines, meanwhile some
non-trivial algorithms need also hierarchically organized data.

What is data hierarchy? It is a possibility to work with a data fragment as
with one object, abstracting from its inner complex structure. For example, we
can work with text document like with file: transport it from one folder to
another, copy, delete, not thinking about whether there are text, tables,
pictures etc. in it. On defined hierarchy level it does not matter.

In order to work with expression as with one object in Refal, it is put in
brackets, which are called _structure brackets._ Such object is called _bracket
term,_ it can be a part of another expression, which can also be in brackets.
In this way hierarchically nested data are built. Symbols, which we examined
previously, are also terms.  So, the expression on Refal consists of terms,
each of which can be either a symbol or a brackets term, which has another
Rrefal expression in it.

As distinct to round, _structure_ brackets, angle brackets of function call in
the right parts of sentences are called _evaluation brackets,_ _activation
brackets_ and _function call brackets_ (all this phrases are synonyms).

**Example 8.** Expression

    ('abc') 'def' (('ghi') 'j' ('klm') ()) 'nop' ((('rst')))

Consists of 9 terms. The first – brackets term,contains expression of three
symbol terms in it, next three – type signs `'def'`, the next-brackets term
again, which consists of three brackets terms and one symbol, and the last
bracket term contain an empty expression.

Brackets should necessarily make the correct brackets structure both in the
left and in the right part of the sentence in Refal expression. In the right
part of the sentence circle and angle brackets mustn’t overlap on each other.

Let’s make our new knowledge about variables more concrete.

* E-variables can commit indoubt sequence _of terms,_ so the value of
  e-variable can be only expression with the right brackets structure.
* The value of _t-variables_ (written as `t.varname`) can be any single term –
  not only symbol, but also an expression in brackets.

**Example 9.** Let’s make Pushkin’s genealogy as an expression on Refal. Each
person of genealogy will be imaged as brackets term, which contains the
person’s name and two terms: mother and father. And if the foregoer is known,
it is imagined as the same person, if there is not any, then on their place
will be sign `'?'`. So, each person can be matched with the pattern

    (e.Name t.Father t.Mother)

The genealogy:

    (
      'Alexander Sergeyevich Pushkin'
      (
        'Sergey Lvovich Pushkin'
        (
          'Lev Aleksandrovich Pushkin'
          '?'   /* unknown father */
          (
            'Evdokia Ivanovna Golovin'
            '?' /* unknown father */
            '?' /* unknown mother */
          )
        )
        (
          'Olga Vasilievna Chicherina'
          ('Vasily Ivanovich Chicherin??')
          '?'   /* unknown mother */
        )
      )
      (
        'Nadezhda Ossipovna Pushkina (Gannibal)'
        (
          'Ossip Abramovich Gannibal'
          ('Abram Petrovich Gannibal (The Moor of Peter the Great)??')
          ('Christina Regina von Sioberg??')
        )
        ('Maria Alekseevna Pushkina??')
      )
    )

**Note.** In fact, Pushkin’s biography is known more detailed, but for making
it clear some foregoers were missed on different hierarchy levels.

**Example 10.** Let’s write the function, which takes the genealogy tree and
foregoer branch as characters string like `'MFFM…'` – where `'M'` means
‘mother’, `'F'` – father and finds the foregoer.

For example, `'F'` – father, `'FF'` – grandfather on father’s line, `'MM'` –
grandmother on mother’s line, `'FM'`- grandmother on father’s line, `'FMM'` -
greatgrandmother on grandmother on father’s line, empty expression – the
person.

    FindAncestor {
      /* advancing on the father line */
      (e.Name t.Father t.Mother) 'F' e.Branch
        = <FindAncestor t.Father e.Branch>;

      /* advancing on the mother line */
      (e.Name t.Father t.Mother) 'M' e.Branch
        = <FindAncestor t.Mother e.Branch>;

      /* an unknown character has unknown the ancestors */
      '?' e.Branch = '?';

      /* Branch ended – the person you are looking for is the current */
      (e.Name t.Father t.Mother) /* empty branch */ = e.Name;
    }

In other words, in order to find a foregoer on father’s line in genealogy,
(branch starts with `'F…'`), we should take father’s genealogy (`t.Father`
field) and find a foregoer in it (having thrown the branches `'F'` from the
beginning – that is what the first sentence makes. The second sentence is
similar.

If the genealogy is not known on some level, then any foregoer will not be
known – this case is worked with the third sentence. If the branch is empty
(clearly shown empty branch or one that has been made empty after some
iterations), then the root of this genealogy is desired person-the last forth
sentence.


**Example 11.** Let’s write the program, which prints out some Pushkin’s
foregoers ([`pushkin.ref`](pushkin.ref)).

    $ENTRY Go {
      = <Prout <FindAncestor <Pushkin> 'FF'>>
        <Prout <FindAncestor <Pushkin> 'FFF'>>
        <Prout <FindAncestor <Pushkin> 'MFF'>>
        <Prout <FindAncestor <Pushkin> 'MFM'>>
        <Prout <FindAncestor <Pushkin> 'F'>>
        <Prout <FindAncestor <Pushkin> 'FM'>>
        <Prout <FindAncestor <Pushkin> 'FMF'>>
        <Prout <FindAncestor <Pushkin> 'FMFM'>>
    }

    FindAncestor {
      …see above…
    }

    Pushkin {
      = (
          'Alexander Sergeyevich Pushkin'
          (
            'Sergey Lvovich Pushkin'
            (
              'Lev Aleksandrovich Pushkin'
              '?'   /* unknown father */
              (
                'Evdokia Ivanovna Golovin'
                '?' /* unknown father */
                '?' /* unknown mother */
              )
            )
            (
              'Olga Vasilievna Chicherina'
              ('Vasily Ivanovich Chicherin??')
              '?'   /* unknown mother */
            )
          )
          (
            'Nadezhda Ossipovna Pushkina (Gannibal)'
            (
              'Ossip Abramovich Gannibal'
              ('Abram Petrovich Gannibal (The Moor of Peter the Great)??')
              ('Christina Regina von Sioberg??')
            )
            ('Maria Alekseevna Pushkina??')
          )
        )
    }

Function `Pushkin` consists of one sentence – in any argument it brings the
constant back. In other words, it is the definition of constant. The other
should be clear.

Note (from Russian version of tutorial). The foregoers names are written in
translit – on some operating systems printing Cyrillic characters out on the
screen does not work or works not correctly. It will be corrected in the new
versions.

For compilation and starting the program on Windows enter:

    srefc pushkin.ref
    pushkin.exe

On  Linux:

    srefc pushkin.ref
    ./pushkin

The program should print the following:

    Lev Aleksandrovich Pushkin
    ?
    Abram Petrovich Gannibal (The Moor of Peter the Great)
    Christina Regina von Sioberg
    Sergey Lvovich Pushkin
    Olga Vasilievna Chicherina
    Vasily Ivanovich Chicherin
    ?

Previously, when we wanted to call the function with some arguments, we
expressed them by dividing with some sign, which can’t be into arguments (for
example, `'='` in function `IsEqual` or `'+'` in function `BinAdd`). More
correct practice in expressing some arguments is putting them in brackets
terms. For example, if function takes 3 arguments of any length – we will
denote them  as `e.1`, `e.2`, `e.3`, – they can be expressed as `(e.1) e.2
(e.3)`, `e.1 (e.2) (e.3)`, `(e.1) (e.2) e.3` and `(e.1) (e.2) (e.3)`. The last
variant is putting each argument in bracket term is over-posted, but sometimes
it makes programs more clear.

If N arguments are expressed in function, it is enough to put in brackets only
N-1 arguments.

In the next chapter we will see that putting arguments in brackets instead of
divider signs not only easier (it is not necessarily to create a divider sign),
but also more effective from the point of time spent on program realization.

Now functions `IsEqual` and  `BinAdd` can be written the following way:

    IsEqual {
      (e.X) (e.X) = 'True';
      (e.X) (e.Y) = 'False';
    }

    BinAdd {
      (e.Num1 '0') e.Num2 '0' = <BinAdd (e.Num1) e.Num2> '0';
      (e.Num1 '0') e.Num2 '1' = <BinAdd (e.Num1) e.Num2> '1';
      (e.Num1 '1') e.Num2 '0' = <BinAdd (e.Num1) e.Num2> '1';
      (e.Num1 '1') e.Num2 '1' = <BinAdd (<BinAdd (e.Num1) '1'>) e.Num2> '0';
      (/* empty */) e.Num2 = e.Num2;
      (e.Num1) /* empty */ = e.Num1;
    }

> *Translation to English of this hunk of paper is prepared by*
> **Yarullina Diana <190471@list.ru>** _at 2018-01-17_


## Abstract refal-machine. The semantics of the view field.

> This section has alternative translations [one](3-basics.en.md), **two**.

Earlier we said that functions in the right part of the sentence after
substitution of variables are somehow evaluated. Now it’s time to specify how
exactly, because without this it is impossible to write efficient programs and
to debug programs in Refal-5λ.

It is said that the program on Refal is performed by the _abstract
Refal-machine,_ which is an imaginary computing machine, that understands the
syntax of programs on Refal. This machine has two memory areas: the program
field that stores all definitions of the program functions, and view field that
stores the current state of computing. The state of the computation is
described as _active expressions_ of the language Refal, which contains
activation brackets, but it cannot contain variables.

Refal-machine implements the program by doing steps. Every step is the
following sequence of actions:

1. Refal machine finds in the view field of the left-most pair of parentheses
   activation, that the inside of this call aren’t any of other angle brackets.
   This area of the view field is called primary active sub-expression.
2. Refal machine finds out, what is to the right of the left bracket of
   activation: there must be a function name. If it’s not there (the language
   allows you to write such a program), the Refal machine will stop with an
   error “recognition impossible”.
3. Refal machine finds a function name in programs fields. The function can be
   written not only on Refal, but also built in. If the function is built in,
   Refal-machine transfers control to the procedure in the native code, that
   implements the logic of the function. If the function is written on Refal,
   the machine selects the first function clause.
4. If it is possible to select such values of the variables in the left part of
   the current sentence, that it will appeal to the argument of the function,
   step 5 will be implemented. Otherwise the following sentence will be chosen
   and step 4 will be repeated. If there are no more sentences, the Refal
   machine will stop with an error “recognition impossible“.
5. The retrieved values of variables are substituted to the right part of the
   current sentence. The obtained expression is inserted by Refal-machine into
   the view field on the place of the primary active subexpression.
6. If the view field parenthesis activation are left, Refal-machine performs
   the next step – returns to step 1. Otherwise, the Refal machine is correctly
   completed.

The initial content of the view field is to call a `GO` function with an empty
argument:

    <GO>

if the program defines a function of `GO`, or call `Go`:

    <Go>

if you define a function `Go`. If neither that, nor another function exists,
then the program will not start.

Notes.

1. Classic REFAL-5 does not support empty function, any function must be at
   least one sentence. Refal-5λ supports – the call of such a function leads to
   an error of impossible recognition.
2. Current implementation at the time of creation of the program cannot check,
   if the function `GO` or `Go` is written in the program of not. In this case,
   you will create a program that by running displays an error message and
   terminates.  Perhaps this will be fixed in the next version.

From this algorithm, we can make two important conclusions.

First, the left-most pair of quotes is selected as the primary active
sub-expression, that does not contain other activation brackets. Subsequently,
Refal is an _applicative language,_ with the clearly defined order of evaluation
of functions: from left to right. It means, that if you’ve written several
calls to functions in the right part of the sentence, they will be evaluated
left-to-right, from the most internal to the most external. So we can use
functions with side effect (for example, `Prout`) and clearly know, when this
side effect will occur.

Second, from the semantics of the view field directly follows that Refal
implements the so-called optimization of tail recursion.

In many imperative programming languages, recursion is quite expensive – it
requires overhead for storing the context of the computation point, where the
process of implementation should return after the back call. Moreover, the
memory is extra from the limited area – the system stack. The programmer
usually cannot control the amount of system stack and by overflow the program
aborts.  Therefore, you should not use the recursion in such languages for
implementing a cyclic repetitive action (especially in an imperative language
for this purpose cycle operator exists).

There is no need for Refal functions to save the context of the computation to
return a value, since it makes a recursive call to the function complete before
the next recursive call. This means that if a recursive call in the right part
of the sentence is performed last in the view field, unfinished calculations
will not accumulate. In fact, instead of the recursion (nested contexts) the
cycle will occure.

**Example 13.** Will we illustrate this with a simple example considering the
process of calculating the function Fab, replacing all characters `'a'` to the
letter `'b'` (program [`fab-1.ref`](fab-1.ref)):

    $ENTRY Go {
      = <Prout <Fab 'abracadabra'>>;
    }

    Fab {
      'a' e.Rest = 'b' <Fab e.Rest>;
      s.Other e.Rest = s.Other <Fab e.Rest>;
      /* empty */ = /* empty */;
    }

The initial contents of the view field is a function `Go` call:

    <Go>

In the first step Refal-machine will find the call (it will be the primary
active sub-expression), will see the name `Go` after `<` and will find in
program field the function `Go`. The function is called with an empty argument,
the first sentence has an empty left part. There aren’t any variables in the
left and right side, so the Refal-machine will simply replace the call `<Go>`
to the right part of the sentence:

      <Prout <Fab 'abracadabra'>>
             ^^^^^^^^^^^^^^^^^^^

The primary active sub-expression here is the call to the function `Fab`, since
it does not contain nested parentheses activation (call `Prout` contains on a
parenthesis activate the call Fab).

Refal-machine will see `Fab` after `<` and try to match the argument
`'abracadabra'` with the left part of the first sentence `'a' e.Rest`.
Recognition is possible: if instead of `e.Rest`, `'bracadabra'` can be
substituted, and the left side would turn into an argument. The specified
substitution (`e.Rest → 'bracadabra'`) Refal-machine applies to the right part
of the sentence and it turns into the expression `'b' <Fab 'bracadabra'>` and
replaces the function call in the expression:

    <Prout 'b' <Fab 'bracadabra'>>
               ^^^^^^^^^^^^^^^^^^

In the third step, the primary active subexpression will again call the
function `Fab`. But the left part of the first sentence is impossible to
identify with the argument: the pattern starts with `'a'`, but argument – with
`'b'`. Next the second sentence is selected. The recognition is possible: there
exists a substitution of variables `s.Other → 'b', e.Rest → 'racadabra'`. The
substitution is applied to the right part, the result of the substitution
(`'b' <Fab 'racadabra'>`) gets inserted into the view field in place of the
primary active subexpression:

    <Prout 'bb' <Fab 'racadabra'>>
                ^^^^^^^^^^^^^^^^^

The next few steps are performed in the same way:

    <Prout 'bbr' <Fab 'acadabra'>>
                 ^^^^^^^^^^^^^^^^
    <Prout 'bbrb' <Fab 'cadabra'>>
                  ^^^^^^^^^^^^^^^
    <Prout 'bbrbc' <Fab 'adabra'>>
                   ^^^^^^^^^^^^^^
    <Prout 'bbrbcb' <Fab 'dabra'>>
                    ^^^^^^^^^^^^^
    <Prout 'bbrbcbd' <Fab 'abra'>>
                     ^^^^^^^^^^^^
    <Prout 'bbrbcbdb' <Fab 'bra'>>
                      ^^^^^^^^^^^
    <Prout 'bbrbcbdbb' <Fab 'ra'>>
                       ^^^^^^^^^^
    <Prout 'bbrbcbdbbr' <Fab 'a'>>
                        ^^^^^^^^^

At this stage Refal-machine will execute the first sentence of the function
`Fab`, substitution is interesting because `e.Rest` will get an empty expression.

    <Prout 'bbrbcbdbbrb' <Fab>>
                         ^^^^^

In this case Refal-machine will also execute the function of `Fab`, but the
first sentence is not appropriate (it is impossible to identify an expression
that starts with `'a'`, with an empty expression), and the second too (it’s
impossible to identify an expression that starts with an epty symbol). But the
third sentence matches (an empty left part is successfully identified with an
empty argument). And Refal-machine will replace the function call `<Fab>` with
an empty right part of the third sentence:

    <Prout 'bbrbcbdbbrb'>
    ^^^^^^^^^^^^^^^^^^^^^

Now the primary active subexpression is a function call `Prout`. Refal-machine
will notice that it is an built in function and will call a corresponding
machine procedure to calculate the result. Machine procedure will print on the
screen `bbrbcbdbbrb` and will return an empty expression. The empty expression
is replaced by a call `Prout` in sight.

The view field will be empty, Refal-machine will correctly stop.


> *Translation to English of this hunk of this paper is prepared by*
> **Ksenia Kalinina <ks-kalinina@mail.ru>** _at 2018-01-18_

**Tail and not tail recursion**

> This section has alternative translations [one](3-basics.en.md), **two**.

With _tail recursion,_ as mentioned above, the recursive call on the right side
is the last one. Let’s clearly  demonstrate why. Let’s consider function `Rec1`
which carries out a call of function `F` in the right part and itself:

    Rec1 {
      continued = <F ...> <Rec1 ...>;
      end = rec1-res;
    }

The development of the view field will look something like this:

    <Rec1 ...>
    ^^^^^^^^^%
    <F ...> <Rec1 ...>
    ^^^^^^^
    f-res <Rec1 ...>
          ^^^^^^^^^^^
    f-res <F ...> <Rec1 ...>
          ^^^^^^^
    f-res f-res <Rec1 ...>
                ^^^^^^^^^^^
    . . . . .
    f-res f-res .... f-res rec1-res

We can see that the non-recurrent function calls are not accumulating anywhere.
At each step, before calling `Rec1`, a call `F` is placed, which ends before
the call to `Rec1`.

Consider the function `Rec2`, which is slightly different from the function
`Rec1`:

    Rec2 {
      continuation = <Rec2 ...> <F ...>;
      end = rec2-res
    }

Here, on the contrary, `Rec2` is first called, then `F`. And the view field
will develop quite differently:

    <Rec2 ...>
    ^^^^^^^^^^^
    <Rec2 ...> <F ...>
    ^^^^^^^^^^^
    <Rec2 ...> <F ...> <F ...>
    . . . . . .
    <Rec2 ...> <F ...> <F ...> ... <F ...>
    ^^^^^^^^^^^
    rec2-res <F ...> <F ...> ... <F ...>
             ^^^^^^^
    rec2-res f-res <F ...> ... <F ...>
                   ^^^^^^^
    . . . . . .
    rec2-res f-res ... f-res <F ...>
                             ^^^^^^^
    rec2-res f-res ... f-res f-res

Here, unencumbered calls `F` are accumulated, and they accumulate until the
function `Rec2` ceases to call itself recursively.

Similarly it turns out with nested calls of functions. Recursion in the
function `Rec3` is tail:

    Rec3 {
      continuation = <Rec3 ... <F ...> ...>;
      end = rec3-res;
    }

    <Rec3 ...>
    ^^^^^^^^^^^
    <Rec3 ... <F ...> ...>
              ^^^^^^^
    <Rec3 ... f-res ...>
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    <Rec3 ... <F ...> ...>
              ^^^^^^^
    . . . . .
    <Rec3 ... f-res ...>
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    rec3-res

Recursion in the function of `Rec4` is not tail:

    Rec4 {
      continuation = <F ... <Rec4 ...> ...>;
      end = rec4-res;
    }

    <Rec4 ...>
    ^^^^^^^^^^^
    <F ... <Rec4 ...> ...>
           ^^^^^^^^^^^
    <F ... <F ... <Rec4 ...> ...> ...>
                  ^^^^^^^^^^^
    . . . . . .
    <F ... <F ... ... <F ... rec4-res ...> ... ...> ...>
                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    . . . . . .
    <F ... <F ... f-res ...> ...>
           ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    <F ... f-res ...>
    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    f-res

Text above doesn’t meat that the tail recursion is always good, and the not
tail recursion is always bad. It is just important to understand that in the
first case the process is cyclic, the view field at each iteration returns
to a similar state, and in the second case it grows.

In what follows we shall speak of tail recursion as _cycles._ There are no
classical imperative cycles in Refal-5λ, so this terminology should not cause
confusion. It is simply really more convenient to speak in such cases about
_cyclic processes,_ use the term _iteration,_ etc.

> _Translation to English of this paper and Markdown is prepared by_
> **Liudmila Markova <luckymarkin@gmail.com>** _at 2018-01-18_
