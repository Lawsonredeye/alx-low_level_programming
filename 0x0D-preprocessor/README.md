# 0x0D. C - Preprocessor

`Preprocessors` is actually the first thing that gets compiled first to include the necessary files for the compiler to use to execute any given source code.
The preprocessor uses the sharp sign `#`.
Now when it comes to the preprocessor it is the first stage of compilation and this is what passes on the compiling phase to the compiler.

It has three parts which are:
1. Directives
2. constants
3. Macros

The `Directives` is responsible for telling the preprocessor what to ignore, compile and also  include as well as define.
A good example of directives is the `#include <stdio.h>` header file which is always located at the top and adds the necessary files and function needed for that particular source code to run.

Constants in `preprocessor`s are represented in ALL CAPS for easy identification and also improves readability by anyone.
Examples of a constant preprocessor is; `#define SUM` where SUM represents the constant.

Macros on the other hand uses the sharpsign as well as constants when be declared as this helps to improve readablity. in most cases macros can be used as functions for simple tasks but it is advised not to be used for large tasks to avoid bugs and errors.
Examples of a `macro` is;
`#define SUM(x,y)`
`#define ADD(x,y) (x) + (y)`
