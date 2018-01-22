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
identify with the argument: the sample starts with `'a'`, but argument – with
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
