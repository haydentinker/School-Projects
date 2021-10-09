# CPTR 142: Homework Assignment #3

## Problem Overview

Your task in this homework assignment is to refactor a program using the `struct` construct to analyze and manipulate points.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Define two data structures, one for a cartesian point `CartesianPoint` and another for a polar point `PolarPoint`.
2. Replace the code that uses (x,y) with code using a cartesian point structure.
3. Replace the code that uses (r,t) with code using a polar point structure.
4. When you can return a single structure from a function do so (rather than using pass-by-reference to get to multiple values).
5. After updating the functions, the following should true about each function:
   * `CartesianToPolar` should take a cartesian point as a parameter and return a polar point.
   * `PolarToCartesian` should take a polar point as a parameter and return a cartesian point.
   * `LengthC` should take a cartesian point as a parameter and return a double.
   * `NormalizedC` should take a cartesian point point as a parameter and return a cartesian point.
   * `DotProductC` should take two cartesian points as parameters and return a double.
   * `SumC` should take two cartesian points as parameters and return a return a cartesian point.

You **must** product output matching the existing output, but change the internals of the code.

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp points.cpp
./a.out
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
