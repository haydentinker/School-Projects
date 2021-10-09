# CPTR 142: Homework Assignment #10

## Problem Overview

Your task in this homework assignment is to create and output a result string
that is interleved from several input strings.
One input string comes from the user and the remaining input strings come from
the command line (search zyBooks for "command line arguments").

## Solution Specifications

* Implement `string mergeStrings(int argc, char *argv[], string userEntry);`.
  * The command-line arguments in `argv` plus the `userEntry` will be the *input strings*.
  * Note that any of the strings may contain spaces.
* Allocate space for a C-string (the *result string*) large enough to hold as many
  characters as you would have if each of the input strings were the length of the
  longest of them.
* Starting with the user's string, add one character in turn from each input string
  to the result string, padding with spaces when an input string is exhausted, and
  finish with a null terminator.
* Return the merged string value.
* A sample main has been supplied and pre-compiled solution.
* Match the behavior of the sample application.
  For example, try the following from the command prompt and then enter a string
  with a space when prompted to do so:

```sh
~/code/cpp/student142/homework/10_dynamic_arrays/sample.o AAAAA BBBBB "CCCCC DDDDD"
```

### Hints

* Start with a `mergeStrings()` function that outputs `argc` and then try running your simple
  application from the command line with a different number of command line arguments.
* Next write a loop to output the command line arguments (use the zyBooks sample code for
  command line arguments as a starting point).
* Enhance the loop to also output the length of each command line argument.
* After the list of command line arguments output the length of the longest of the arguments.
* Update your output at the end to consider the length of the user entry.
* Report the number of *input strings* (command line arguments plus one for the user input)
  and the size of the *result string*.
* Allocate a dynamic array to hold the *result string*.
  *  `char* resultString = new char[resultStringSize];`
  * Did you allow for a null character at the end?
* Using an outer loop for the length of the longest of the *input strings* and an inner loop
  for the command line arguments, add a character at a time to the *result string*.
  Once you reach the length of any particular string, add spaces.
* Since your function returns the new string, 
  you should not delete the dynamically allocated memory.

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp mergeStrings.cpp && ./a.out
```

### Push to GitLab

When you are satisfied that your code works, use the `push.sh` script to save it to GitLab.
To verify that step you can open [GitLab](https://gitlab.cs.wallawalla.edu/) in a web browser to verify that the code transferred from Code.CS.
While you should write a test program to verify your code, `mergeStrings.cpp` should not include `main()`.

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
