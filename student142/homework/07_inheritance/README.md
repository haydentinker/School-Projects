# CPTR 142: Homework Assignment #7

## Problem Overview

Your task in this homework assignment is write two derived class.
The base class of `Temperature` has been provided with an example derived class of `Kelvin`.
In this assignment, you will write a `Celsius` and `Fahrenheit` derived class from `Temperature`.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Write a `Celsius` and `Fahrenheit` classes that inherits from `Temperature`.
2. The classes should use encapsulation with both a header and cpp file.
3. Implement the functions to convert the temperature to `Celsius`, `Fahrenheit`, and  `Kelvin` for each class.

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp Celsius.cpp Fahrenheit.cpp Kelvin.cpp && ./a.out
```

### Push to GitLab

When you are satisfied that your code works, use the `push.sh` script to save it to GitLab.
To verify that step you can open [GitLab](https://gitlab.cs.wallawalla.edu/) in a web browser to verify that the code transferred from Code.CS.
While you should write a test program to verify your code, your submitted code should not include `main()`.

### Submitty

You **must** produce output matching the output expected by Submitty.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

* E -- passes all Submitty tests with a score of 100% (green bars, no
compiler warnings)
* M -- passes all Submitty tests, but has a score of less than 100% on
some (yellow or green bars)
* R -- fails at least one Submitty test (red bars)
* N -- no substantive changes made to template, or nothing submitted
