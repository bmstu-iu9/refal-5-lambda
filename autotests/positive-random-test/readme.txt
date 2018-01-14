Generator of random Refal-5 modules.
Version 13.01.2018

 Using:
       refgo random NATURAL FOUT [/SWITCH]

             where NATURAL is a number of the iteration producing a random Refal-5 module in the following two files:
                       1) tmp999FOUT.ref  -- the module written in Refal-5
                       2) main999FOUT.ref -- a Refal-5 module, where the random Refal-5 module generated is presented as Refal data that is ready
                                                               to be transformed with an external function TransformOfModule
                                                                 and printed out with an external function PrettyProut;
                                             Both TransformOfModule and PrettyProut have to be implemented by the user.
                                             No documentation on the format of main999FOUT.ref is given. Please see the presentation in examples generated.
                   SWITCH ::= comm | comms | comments , it is an optional switch allowing randomly to insert comments in the tmp999FOUT.ref module  


