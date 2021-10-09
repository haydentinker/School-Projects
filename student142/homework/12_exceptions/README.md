# CPTR 142: Homework Assignment #12

## Problem Overview

Use exception handling in place of returning an error code.

## Solution Specifications

A function that returns an error code is usually better written to throw an exception instead.
You have been provided with a class, `Account`, that maintains an account balance.
Rewrite the class so that it throws a `runtime_error` instead of returning -1 as an error code.
Modify `testAccount()` so that it properly handles the errors but produces equivalent output.

Your submission will include changes to `testAccount.cpp` and `Account.cpp`.

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp testAccount.cpp Account.cpp && ./a.out
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
