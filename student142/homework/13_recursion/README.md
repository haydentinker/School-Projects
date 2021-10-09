# CPTR 142: Homework Assignment #13

## Problem Overview

Search for the lowest-cost path for a six city tour.

## Solution Specifications

The [Travelling Salesman Problem](https://en.wikipedia.org/wiki/Travelling_salesman_problem) is a classic artificial intelligence search problem.
A variation of it is given in zyBook [Figure 16.7](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020/chapter/16/section/7).

You have been given a file with everything needed except the code for one function, `Node::costsAndPaths()`.
This function does, however, have extensive comments so you should have some clear guidance on what to do.
You will, however, need to understand the workings of the other parts of the code.

Your submission should only make changes to `Node.cpp`.

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp Node.cpp && ./a.out
```

### Push to GitLab

When you are satisfied that your code works, use the `push.sh` script to save it to GitLab.
To verify that step you can open [GitLab](https://gitlab.cs.wallawalla.edu/) in a web browser to verify that the code transferred from Code.CS.
While you should write a test program to verify your code, your submitted code should not include `main()`.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

* E -- passes all Submitty tests with a score of 100% (green bars, no
compiler warnings)
* M -- passes all Submitty tests, but has a score of less than 100% on
some (yellow or green bars)
* R -- fails at least one Submitty test (red bars)
* N -- no substantive changes made to template, or nothing submitted
