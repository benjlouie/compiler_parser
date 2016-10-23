README file for Programming Assignment 3 (C++ edition)
======================================================

Your directory should now contain the following files:

 README                                     | readme (this file)
 cool.y                                     | bison parser file
 parser_test_files/
     bad.cl                                 | tests that our parser correctly reports errors
     good.cl                                | tests that our parser works with all correct cool code
     bad/                                   | files that test for errors (pertaining to name of file)
         class.cl                           | 
         expr.cl                            |
         features.cl                        |
         formals.cl                         |
         program1.cl                        | misc
         program2.cl                        | misc
         program3.cl                        | misc
         program4.cl                        | misc
     good/                                  | Tests for correct parsing in extreme conditions
         features.cl                        |
         holy_statement_nesting_batman.cl   |
         precedence.cl                      |

The include (.h) files for this assignment can be found in 
[course dir]/include/PA3

	
Instructions
------------
Move cool.y into a new version of the PA3 folder from Stanford's VM, which can be downloaded here: http://d2bk0s8yylvsxl.cloudfront.net/stanford-compilers/vm/compilers-vm.zip. If you need help, you can get it here: http://pashabd.com/how-to-install-classroom-object-oriented-language-cool-programming-in-your-windows-computer/ or ask Group 4.

Due to line 17 in cool.y being commented out, this will compile, but does not get correct line numbers in the AST.

Run:
  gmake parser

This will give you multiple files including an executable file:
  parser

You can then run:
  myparser <test_file.cl>

This will print of the generated AST.

You can also run:
  mycoolc <tests_file.cl>

This will use the parser that we made in conjunction with Stanford's sections to compile cool code.

You can check our code against Stanford's parser by using:
  gmake lexer
from the PA2 folder. 
Copy parser from PA2 to the new PA3 directory and rename it to "parserStanford".
You can then run:
  ./lexer <test_file.cl> | ./parserStanford
To see the output of Stanford's parser, which you can then compare against ours to see the correctness.


Write-up for PA3
----------------

cool.y:
We started by defining types for all the grammars' non-terminals.
Next we declared the precedence and associativity for every operation. This is where the majority of our shift/reduce conflicts were fixed. We chose left precedence for the majority of the left-to-right operations. Some notable exceptions are the comparison ops, assignment, and negation. We also declared a precedence rule for use in a production rule.
Next we defined all the grammar rules, conforming, as closely as possible, to the cool manual. We started at the largest non-terminal, program, and worked our way down to the terminals in the expression non-terminal. We pulled all the AST functions from cool-tree.cc. 
For error checking, we added specific cases to certain non-terminals. This allowed us to catch and recover from most errors. Our parser actually catches more errors than Stanford's and catches them more correctly in some cases. As the instructions told us, we ignored errors in class definitions after the first one. For errors within expressions we used yyerrok so that bison would continue parsing from right after the error and give all errors in the expression.
Our line numbers work for errors due to the fact that the line numbers are coming from the lexer. However, the line numbers are not being correctly reported in the AST due to errors beyond our control. The variable curr_lineno is throwing a redeclaration error that can't be nailed down to any single file. Because of this, we did not include any "@$" or "NODELOC()" calls in our grammar rules.
Our printed AST will differ from Stanford's parser by a number with a hash in front of it. This is not an error with our code. Our parser output will also differ in the errors it finds for the reasons explained above.

parser_test_files/*:
  As explained above, these files test for correctness in parsing or error checking. See above for specifics on what each file is supposed to be.
  The BAD files have comments on each line that is supposed to throw an error. See these for details when comparing the file and the parser output.





