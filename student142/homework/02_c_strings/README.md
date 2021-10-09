# CPTR 142: Homework Assignment #2

## Problem Overview

Your task in this homework assignment is to define two functions that demonstrate certain tasks with C strings.

## Solution Specifications

* The functions will take two character arrays as parameters.
* The first function, `bool areAnagrams(const char[], const char[])`, that reports whether the two c-strings are [anagrams](https://en.wikipedia.org/wiki/Anagram) of each other. That is, each c-string has the same count of each (case-insensitive) letter (ignoring non-letters). For example, "Eleven plus two" is an anagram of "Twelve plus one."
* The second function, `bool arePalindromes(const char[], const char[])`, that reports whether the two strings are [palindromes](https://en.wikipedia.org/wiki/Palindrome) of each other. Examples of palindromes are "A man, a plan, a canal, Panama!" and "Was it a car or a cat I saw?"

### Resources and Tips

Remember a character can be used as a number as defined by [ASCII](https://en.wikipedia.org/wiki/ASCII).

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp string_functions.cpp
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
