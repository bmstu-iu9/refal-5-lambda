The core idea is that the condition turns into an auxiliary function checking
the condition itself. If it does not, it transfers control to the following
sentences:

    F {
      . . .
      Pat1, ResC1: PatC1 = Res1;
      Pat2 = Res2;
      . . .
    }

    ↓ ↓ ↓

    F {
      . . .
      Pat1 = <F_check [vars] ResC1>;
      e.X = <F_cont e.X>;
    }

    F_check {
      [vars] PatC1 = Res1;
      [vars] e.Other = <F_cont Pat1>;
    }

    F_cont {
      Pat2 = Res2;
      . . .
    }

Here `F_check` is a condition checking function. `F_cont` is a “continuation”
function, formed from sentences following the condition. Continuation is needed
in order to simplify the code and to avoid duplication of the code. By `[vars]`
is meant the set of variables in the pattern.

It becomes peculiar if the pattern before the condition contains open
e-variables.

    F {
      . . .
      PL1 e.A s.B e.C PR1, ResC1: PatC1 = Res1;
      Pat2 = Res2;
      . . .
    }

Here, both `PL1` and `PR1` are pattern fragments that unbalanced brackets might
contain. Also, dealing with this example, let us assume that there is only one
open e-variable. Therefore, the first step of transformation is the following:
continuation and calling the verification function:

    F {
      . . .
      PL1 e.A e.C PR1 = <F_check [vars] ResC1>;
      e.X = <F_conte.X>;
    }

    F_cont {
      Pat2 = Res2;
      . . .
    }

(Here we assume that the open variable has a general `e.A e.C` form. We can put
any rigit pattern here instead of `e.C`)

What about the verification function? The first sentence is clear:

    F_check {
      [vars] PatC1 = Res1;
      [vars] e.Other = А тут чего?
    }

In case of fail it’s essential to roll back and try a new comparison:

    F_check {
      [vars] PatC1 = Res1;
      [vars] e.Other = <F_forward PL1 (e.A) e.C PR1>;
    }

    F_forward {
      PL1 (e.A_fix) t.A_next e.A_rest PR1
        = <F_next PL1 (e.A_fix t.A_next) e.A_rest PR1>;

      PL1 (e.A) PR1 = <F_cont PL1 e.A PR1>;
    }

    F_next {
      PL1’ (e.A_fix) e.A_var e.C PR1’ = <F_check [vars’] ResC1’>;
      PL1  (e.A_fix) e.A_rest    PR1  = <F_cont PL1 e.A_fix e.A_rest PR1>;
    }

The `F_forward` function moves the open e-variable one term forward. If it
fails, the function argument restores and the continuation takes the control.

The `F_next` function makes a comparison with the “moved” open variable.
Instead of `e.A`, which was in the source program, there are two variables
here: fixed `e.A_fix` and variable `e.A_var`. The apostrophes in parts `PL1’`,
`PR1’`, `ResC1’` show the completed substitution `e.A → e.A_fix e.A_var`.

Let’s consider the case with several open e-variables on the specific example:

    F {
      /* E0 */
      (e.A (e.B (e.A e.B) e.C) e.D) (e.E e.E e.F)
        , <G (e.A) (e.B) (e.E)> : Ok
        = Ok;

      Other = Fail;
    }

The transformation result might look like this:

    F {
      /* E0 */
      (e.A (e.B (e.A e.B) e.C) e.D) (e.E e.E e.F)
        = <F_check
            (e.A) (e.B) (e.C) (e.D) (e.E) (e.F)
            <G (e.A) (e.B) (e.E)>
          >;

      e.Other = <F_cont e.Other>;
    }

    F_cont {
      Other = Fail;
    }

    F_check {
      (e.A) (e.B) (e.C) (e.D) (e.E) (e.F) Ok
        = Ok;

      (e.A) (e.B) (e.C) (e.D) (e.E) (e.F) e.Other
        = <F_forward_1
            /* E1 */
            ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E) e.E e.F)
          >;
    }

    F_forward_1 {
      /* E2 */
      ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix) t.E_next e.E_rest)
        = <F_next_1
            /* E3 */
            ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix t.E_next) e.E_rest)
          >;

      /* E4 */
      ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix))
        = <F_forward_2
            /* E5 */
            ((e.A) ((e.B) (e.A e.B) e.C) e.D) (e.E_fix)
          >;
    }

    F_next_1 {
      /* E6 */
      ((e.A) ((e.B) (e.A e.B) e.C) e.D)
      ((e.E_fix) e.E_var e.E_fix e.E_var e.F)
        = <F_check
            (e.A) (e.B) (e.C) (e.D) (e.E_fix e.E_var) (e.F)
            <G (e.A) (e.B) (e.E_fix e.E_var)>
          >;

      /* E7 */
      ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix) e.E_rest)
        = <F_forward_2
            /* E8 */
            ((e.A) ((e.B) (e.A e.B) e.C) e.D) (e.E_fix e.E_rest)
          >;
    }

    F_forward_2 {
      /* E9 */
      ((e.A) ((e.B_fix) t.B_next e.B_rest) e.D) (e.E_rest)
        = <F_next_2
            /* E10 */
            ((e.A) ((e.B_fix t.B_next) e.B_rest) e.D) (e.E_rest)
          >;

      /* E11 */
      ((e.A) ((e.B_fix)) e.D) (e.E_rest)
        = <F_forward_3
            /* E12 */
            ((e.A) (e.B_fix) e.D) (e.E_rest)
          >;
    }

    F_next_2 {
      /* E13 */
      ((e.A) ((e.B_fix) e.B_var (e.A e.B_fix e.B_var) e.C) e.D) (e.E e.E e.F)
        = <F_check
            (e.A) (e.B_fix e.B_var) (e.C) (e.D) (e.E) (e.F)
            <G (e.A) (e.B_fix e.B_var) (e.E)
          >;

      /* E14 */
      ((e.A) ((e.B_fix) e.B_rest) e.D) (e.E_rest)
        = <F_forward_3
            /* E15 */
            ((e.A) (e.B_fix e.B_rest) e.D) (e.E_rest)
          >;
    }

    F_forward_3 {
      /* E16 */
      ((e.A_fix) t.A_next e.A_rest) (e.E_rest)
        = <F_next_3
            /* E17 */
            ((e.A_fix t.A_next) e.A_rest) (e.E_rest)
          >;

      /* E18 */
      ((e.A_fix)) (e.E_rest)
        = <F_cont
            /* E19 */
            (e.A_fix) (e.E_rest)
          >;
    }

    F_next_3 {
      /* E20 */
      ((e.A_fix) e.A_var (e.B (e.A_fix e.A_var e.B) e.C) e.D) (e.E e.E e.F)
        = <F_check
            (e.A_fix e.A_var) (e.B) (e.C) (e.D) (e.E) (e.F)
            <G (e.A_fix e.A_var) (e.B) (e.E)
          >;

      /* E21 */
      ((e.A_fix) e.A_rest) (e.E_rest)
        = <F_cont
            /* E22 */
            (e.A_fix e.A_rest) (e.E_rest)
          >;
    }

The `F_check` function checks the condition ofall the process stages. For
instance, `F_forward_1` and `F_next_1` extend the last compared open e-variable
(`e.E`); `F_forward_2` and `F_next_2` extend the penultimate open e-variable
`e.B`; `F_forward_3` and `F_next_3` extend the first `e.A`. The `F_forward_N`
function class moves the fixed part of the extended variable one term forward,
the `F_next_N` function class searches for comparison in terms of the extension
and then runs a check. If we compare the remainder of the expression in terms
of the above mentioned position of the fixed variables, the (`F_check`) function
will be carried out. Otherwise we should try to extend the previous variable.

During the process of transformations, we have obtained 22 new expressions
(`E0` – is an old one):

    E0:  (e.A (e.B (e.A e.B) e.C) e.D) (e.E e.E e.F)
    E1:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E) e.E e.F)

    E2:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix) t.E_next e.E_rest)
    E3:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix t.E_next) e.E_rest)
    E4:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix))
    E5:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) (e.E_fix)
    E6:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix) e.E_var e.E_fix e.E_var e.F)
    E7:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) ((e.E_fix) e.E_rest)
    E8:  ((e.A) ((e.B) (e.A e.B) e.C) e.D) (e.E_fix e.E_rest)

    E9:  ((e.A) ((e.B_fix) t.B_next e.B_rest) e.D) (e.E_rest)
    E10: ((e.A) ((e.B_fix t.B_next) e.B_rest) e.D) (e.E_rest)
    E11: ((e.A) ((e.B_fix)) e.D)                   (e.E_rest)
    E12: ((e.A) (e.B_fix) e.D)                     (e.E_rest)
    E13: ((e.A) ((e.B_fix) e.B_var (e.A e.B_fix e.B_var) e.C) e.D) (e.E e.E e.F)
    E14: ((e.A) ((e.B_fix) e.B_rest) e.D)          (e.E_rest)
    E15: ((e.A) (e.B_fix e.B_rest) e.D)            (e.E_rest)

    E16: ((e.A_fix) t.A_next e.A_rest) (e.E_rest)
    E17: ((e.A_fix t.A_next) e.A_rest) (e.E_rest)
    E18: ((e.A_fix))                   (e.E_rest)
    E19: (e.A_fix)                     (e.E_rest)
    E20: ((e.A_fix) e.A_var (e.B (e.A_fix e.A_var e.B) e.C) e.D) (e.E e.E e.F)
    E21: ((e.A_fix) e.A_rest)          (e.E_rest)
    E22: (e.A_fix e.A_rest)            (e.E_rest)

To understand how are all these expressions, and, accordingly, as to build
function `F_forward_N` and `F_next_N`, consider the process of pattern
matching (see in [book][1], section 2.5) the original expression. Map
operations rigid elements (terms, brackets, s-, t – and repeated variables),
firstly, is always clear, second, the relative order of matching is not
important. So we consider only the stages of mapping of open e-variables.
Marks `[[...]]` will surround hasn't been analyzed fragments. Current matching
e-the variable will be enclosed in curly braces. Open e-variables mapped
earlier, we will surround the angle brackets.

       [[(   e.A   (   e.B   (e.A e.B) e.C  ) e.D  ) (   e.E   e.E e.F  )]]

    S6:  ([[{e.A}  (   e.B   (e.A e.B) e.C  ) e.D]]) ([[ e.E   e.E e.F]])
    S5:  (  {e.A}[[(   e.B   (e.A e.B) e.C  ) e.D]]) ([[ e.E   e.E e.F]])

    S4:  (  <e.A>  ([[{e.B}  (e.A e.B) e.C]]) e.D  ) ([[ e.E   e.E e.F]])
    S3:  (  <e.A>  (  {e.B}[[(e.A e.B) e.C]]) e.D  ) ([[ e.E   e.E e.F]])

    S2:  (  <e.A>  (  <e.B>  (e.A e.B) e.C  ) e.D  ) ([[{e.E}  e.E e.F]])
    S1:  (  <e.A>  (  <e.B>  (e.A e.B) e.C  ) e.D  ) (  {e.E}[[e.E e.F]])

    S0:  (  <e.A>  (  <e.B>  (e.A e.B) e.C  ) e.D  ) (  <e.E>  e.E e.F  )

Fragments bounded by `[[...]]` will be called “holes”, the variables surrounded
by curly brackets will be called “active variables”. At the S2, S4, and S6
stages, the “holes” will be named in accordance with the open variables inside
them. The open variables, which belong to the holes (these are `e.A`, `e.B` and
`e.E`) will be called the “representatives” of holes. If the “representative”
of the holes is active, the hole will also be called active.

The expression E1 is obtained by surrounding all open (`<...>`) variables in S0
with round brackets.

The expressions E2, E9, E16 are obtained from the states S2, S4, S6 by
substitution of the active hole with the representative `e.X` by
`(e.X_fix) t.X_next e.X_rest`, the remaining holes by the variables `e.Y_rest`,
where `e.Y` is the hole representative.

The expressions E3, E10, E17 are obtained similarly to E2, E9, E16 with a
slightly different substitution of active holes (`(e.X_fix t.X_next) e.X_rest`).

E4, E11, E18 and E5, E12, E19 are replaced as the previous ones.

Expressions E6, E13, E20 are obtained by substitution of the active variables
of the `e.X` form with (`e.X_fix`) `e.X_var` in S1, S3, S5 and by substitution
of `e.X → e.X_fix e.X_var` in holes where these variables appear. The last
substitution also extends into the right side of the sentence, where the
`F_check` function is called (the right side is the same as the converted
"root" F, but with the substitution).

The expressions E7, E14, E21 and E8, E15, E22 are constructed from S2, S4, S6,
same as E2-E5, E9-E12, E16-E19.

Let's try to summarize the expressions generation. Let's mark the templates by
which E2-E8, E9-E15, E16-E22 are created as T1-T7. The template for E1 will be
marked as T0. The S6, S4, S2 stages will be called the first half-stages; the
S5, S3, S1 will be called the second half-stages. The stage S0 will be called
the final stage (it matches with the original expression apart from the open
variables markup).
The template T0 is formed from the final stage by enclosing the open variables
in brackets.

In **T1 ... T4, T6, T7** all the inactive holes of the first half-stage,
including the representatives of `e.Y` are substituted with the variable
`e.Y_rest`. The active holes in each of the templates are replaced in their
own way (hereinafter, `e.X` is the hole representative):

* **T1**: `(e.X_fix) t.X_next e.X_rest`
* **T2**: `(e.X_fix t.X_next) e.X_rest`
* **T3**: `(e.X_fix)`
* **T4**: `e.X_fix`
* **T6**: `(e.X_fix) e.X_rest`
* **T7**: `e.X_fix e.X_rest`

The **T5** template is constructed from the expression of the first half-stage,
in which the active entry of the open e-variable `eX` is substituted with
`(e.X_fix) e.X_var`. The remained entries (they will be inside the holes and on
the right side of the corresponding sentence) will be substituted with
`e.X_fix e. X_var`. It’s essential that unlike other templates, it is not the
holes that are replaced here, but the variables themselves.

Expressions are done. Now we have to deal with the function templates. Let’s
rewrite the transformed code (`F` and `F_***` functions), substituting the
expressions with `Ex[Ty]`. These are short references to the expression and
the number of the template.

    F {
      E0 = <F_check [vars] [res]>;
      e.Other = <F_cont e.Other>;
    }

    F_cont {
      Other = Fail;
    }

    F_check {
      [vars] Ok = Ok;
      [vars] e.Other = <F_forward_1 E1[T0]>;
    }

    F_forward_1 {
      E2[T1] = <F_next_1 E3[T2]>;
      E4[T3] = <F_forward_2 E5[T4]>;
    }

    F_next_1 {
      E6[T5] = <F_check [vars|e.E→e.E_fix e.E_var [res|e.E→e.E_fix e.E_var]>;
      E7[T6] = <F_forward_2 E8[T7]>;
    }

    F_forward_2 {
      E9[T1] = <F_next_2 E10[T2]>;
      E11[T3] = <F_forward_3 E12[T4]>;
    }

    F_next_2 {
      E13[T5] = <F_check [vars|e.B→e.B_fix e.B_var] [res|e.B→e.B_fix e.B_var]>;
      E14[T6] = <F_forward_3 E15[T7]>;
    }

    F_forward_3 {
      E16[T1] = <F_next_3 E17[T2]>;
      E18[T3] = <F_cont E19[T4]>;
    }

    F_next_3 {
      E20[T5] = <F_check [vars|e.A→e.A_fix e.A_var] [res|e.A→e.A_fix e.A_var]>;
      E21[T6] = <F_cont E22[T7]>;
    }

Here, `[vars]` and `[res]` denote the list of template variables (the
e-variables are enclosed in round brackets) and the resulting expression of the
condition. `[vars| v → e]` and `[res | v → e]` mean substituting of the
variable with the corresponding expression.

Therefore, the general template for functions is as follows:

    F {
       [sentences without conditions]
       Pat, ResC : PatC [the rest of sentence];
       [following sentences]
    }

The original function will be transformed into a family of functions. K is the
number of the next open variable (in reverse order: 1 – last compared,
N – first compared)

    F {
      [sentences without conditions]
      Pat = <F_check vars(Pat) ResC>;
      e.Other = <F_cont e.Other>;
    }

    F_cont {
      [following sentences]
    }

    F_check {
      [vars] PatC [the rest of sentence];
      [vars] e.Other = <F_forward_1 T0(Pat)>;
    }

    . . .

    F_forward_K {
      T1(Pat, K) = <F_next_K T2(Pat, K)>;
      T3(Pat, K) = <F_forward_K+1 T4(Pat, K)>;
    }

    F_next_K {
      T5(Pat, K)
        = <F_check
            vars(Pat) | e.K → e.K_fix e.K_var
            ResC | e.K → e.K_fix e.K_var
          >;

      T6(Pat, K) = <F_forward_K+1 T7(Pat, K)>;
    }

Here `Ty(Pat, K)` is the use of the Ty pattern to the K-th stage of the
comparison. The `F_forwark_N+1` function (N is the number of variables) is a
synonym for `F_cont`. So if the template in the condition does not contain open
variables (N = 0), calling `F_forward_1` in `F_check` will simply call
`F_cont`, as described at the beginning of the document.

`[the rest of sentence]` and `[following sentences]` can also contain
conditions, so the `F_cont` and `F_check` functions will have to repeat this
algorithm recursively. The remaining functions do not go beyond the Basic
Refal.

> _Translation to English of this paper is prepared by_
> **Philip Cadena <filcadena@gmail.com>** _at 2018-01-18_

> _Markdown is prepared by_ **Liudmila Markova <luckymarkin@gmail.com>**
>  _at 2018-01-18_

[1]: http://refal.botik.ru/book/html/
