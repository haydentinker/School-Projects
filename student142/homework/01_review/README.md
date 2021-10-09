# Mastery Grading

In this homework you will review a number of the concepts that were presented in CPTR 141 and apply them to calculating of the homework portion of a student's grade using the Mastery Grading model described in the syllabus. You are provided with a program, `gradebook.cpp`, that contains a main function and prototypes for six other functions. One of the functions has been provided to you.

## Assignment

Your assignment is to modify main() by adding input validation and then add the five remaining functions so that the program provides the requested behavior. The remainder of this section will discuss these tasks and give some hints on the order in which to do the development and how to approach each task. I suggest that you read through the remainder of this document, including the section on Development and Testing below before starting on the assignment.

### Input validation

After setup of some variables used throughout the program (names, ids, homeworkScores), `main()` enters an infinite loop presenting a menu and doing the operation requested by the user (one of the options is to quit). The menu choice is an integer collected in the `menu` variable. If the user enters an integer other than the menu options (1-4), then the `default:` case in the `switch` statement will handle it.

But if the user enters something other than an integer, then the input stream will enter an error state. You need to add code to handle this situation. Basically, if the input is good then you can proceed to the `switch` statement, otherwise you should alert the user and clear the error. See [Stream Errors](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020/chapter/8/section/2) in your zyBook for details on how to handle this problem.

### `getNextResubmission()`

As described in the function prototype comment, this function takes two arguments, a single-dimension character array of scores (E/M/R/N) and an integer designating the size of the array, and returns an integer indicating the next homework number (zero-based) the student should submit. If any score is 'R' or 'N', then the index of the first such score is returned. Next, if any score is an 'M', then the index of the first such score is returned. Finally, if all the scores are 'E's (which will be the case if neither of the previous conditions is satisfied), then return a -1 indicating that no assignments need to be redone.

Note that you will need to make two passes over the provided scores, first looking for 'R' or 'N', and next looking for 'M'. As you consider your loops (in this function and others), ask yourself which type of loop is best suited for the situation (`for`, `while`, or `do-while`). For a review of loops, see [Chapter 4](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020).

To test each homework score you will need some form of branching (see [Chapter 3](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020)). As you work on this function note that there are three ways it can return, one for an 'R' or 'N', one for an 'M', and one for all 'E's.

To test this function you could try variations on the following:

```c++
assert(getNextResubmission(homeworkScores[0], NUMBER_OF_SCORES) == 5);
assert(getNextResubmission(homeworkScores[2], NUMBER_OF_SCORES) == 4);
assert(getNextResubmission(homeworkScores[5], NUMBER_OF_SCORES) == -1);
```

### `displaySuggestedResubmissions()`

As described in the function prototype, this function takes three arguments, an array of strings, a two-dimensional array of scores, and an integer of the class size, and prints the student name and one of the following:

* "`STUDENT` should resubmit homework `NUMBER`", or
* "`STUDENT` has no homework to resubmit".

As should be obvious, it depends on `getNextResubmission()`. As you develop this function, I suggest that you do it in stages:

1. List the student names without any further text;
2. List the student names with the result of a call to `getNextResubmission()`; then
3. List the student names with the correct string (note that the value will be `-1` when no homework needs to be resubmitted).

Try to avoid calling `getNextResubmission()` more than once per student.

### `getHomeworkGrade()`

As described in the function prototype, this function takes four integer arguments (the number of scores with E/M/R/N respectively), and returns a character A/B/C/D/F based on the following criteria:

* 'A' requires an 'E' or 'M' on all 14 with an E on at least 10.
* 'B' requires an 'E' or 'M' on at least 13 with an E on at least 5.
* 'C' requires an 'E' or 'M' on at least 11.
* 'D' requires an 'E' or 'M' on at least 8.
* 'F' if an 'E' or 'M' on 7 or less.

As you work on this function, note that several of the tests look at the combined 'E' and 'M' score so look for a way to simplify that test. Also note that a couple of the tests have multiple criteria. The lesson on [Detecting ranges](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020/chapter/3/section/2) is a good review for how this should be handled. Note that this function also has multiple return values.

To test this function you could try variations on the following:

```c++
assert(getHomeworkGrade(10, 4, 0, 0) == 'A';
assert(getHomeworkGrade(9, 5, 0, 0) == 'B';
```

### `getGradeTotals()`

You may find this function to be one of the more conceptually challenging tasks, but there is a relatively simple and elegant solution that can be done in less than 20 lines total. This void function has five arguments: an array of characters and four integers. Part of the complexity is that the four integer parameters are [pass-by-reference](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020/chapter/6/section/12) since the purpose of the function is to return four counts.

I suggest that you loop over the scores and use a [`switch`](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020/chapter/3/section/11) statement to calculate the totals.

To test this function you could try variations on the following:

```c++
    int e = 0, m = 0, r = 0, n = 0;
    getGradeTotals(homeworkScores[0], NUMBER_OF_SCORES, e, m, r, n);
    assert((e == 6) && (m == 2) && (r == 3) && (n == 3));
```

### `displayGrades()`

This function takes three arguments, a one-dimensional array of student names, a two-dimensional array of homework scores, and an integer of class sizes, and displays `Student Grades` as a heading then lines for each student's name, a tab, and the student's homework letter grade. You should be able to assemble out of the earlier functions and examples.

## Development and Testing

### Compile and Run

To get the program to compile, I suggest that you first comment out the function calls for cases `2` and `3` in the main menu. Test your code to see that it handles invalid integers and the quit request. Add input validation and see that it non-integer input.

Next, add [function stubs](https://learn.zybooks.com/zybook/WALLAWALLACPTR142Winter2020/chapter/6/section/4) for the declared functions (use the prototypes as guides). Remove the comments in the switch statement and see that the program still compiles correctly. 

### Function Tests

Next, add test code before the `while (true)` line to test the `getNextResubmission()` function using the suggested `assert()` functions.
Modify your function stub to simply return an invalid result, such as `-99`, and verify that the code compiles and runs.
Then implement you function based on the suggestions above.
When these tests work, modify them to try a few other things, then move on to the next function.

### Push to GitLab

When you are satisfied that your code works, use the `push.sh` script to save it to GitLab.
To verify that step you can open [GitLab](https://gitlab.cs.wallawalla.edu/) in a web browser to verify that the code transferred from Code.CS.

### Submitty

You **must** product output matching the output expected by Submitty.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

* E -- passes all Submitty tests with a score of 100% (green bars, no
compiler warnings)
* M -- passes all Submitty tests, but has a score of less than 100% on
some (yellow or green bars)
* R -- fails at least one Submitty test (red bars)
* N -- no substantive changes made to template, or nothing submitted
