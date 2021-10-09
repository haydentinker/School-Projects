# CPTR 142: Homework Assignment #5

## Problem Overview

Your task in this homework assignment is to add three constructors to the Fraction class.

The fraction class stores a numerator and denominator. Member functions allow for retrieval of the
fraction as a double and another outputs the value in lowest terms.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Write a default constructor that creates a fraction with the value of one.
2. Write a custom constructor that takes one integer as an argument to be used as the denominator.
3. Write a second custom constructor that takes two integer as arguments to be used as the numerator and denominator.

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp Fraction.cpp && ./a.out
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
