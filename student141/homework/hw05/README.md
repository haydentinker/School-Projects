# CPTR 141: Homework Assignment #5

## Problem Overview
A decision tree is a decision support tool that is often used to help model a complex decision making process.  Simple decision trees can be created by humans, but more complicated decision trees are often produced as a result of a machine learning algorithm in order to help a computer make predictions about an output variable based on a set of input variable values.

In this homework you will use multiple branching statements (if, if/else, if/else/if, or switch) to implement a simple decision tree that helps a student decide if he or she should walk or take the bus to school.  This decision is based on the following inputs:

* Weather Outside (Sunny, Cloudy, or Rainy)
* Amount of Time Until School Starts.
* Number of books you have to carry.

Your program should prompt the user to enter the answers to these questions, and then indicate if the user should walk or take the bus based on the decision tree shown below.

<img src="https://cs.wallawalla.edu/courses/cptr141/hw05_tree.png" width="500"/>


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You **must ** use at least one branching statement of some sort (`if/else/if`, `switch`, etc.).
2. Your solution must be formatted using the "Format Document" command.
3. Your code **must** produce the same output as the included sample program, ``solution.o``.  Run this program several times trying different passwords to make sure you understand what the output should look like.  To run the program, open a new shell and type:

`./student141/homework/hw05/solution.o`


## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted