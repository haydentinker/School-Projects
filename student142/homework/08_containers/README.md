# CPTR 142: Homework Assignment #8

## Problem Overview

Your task in this homework assignment is to create a `BagOfWords` class.
In machine learning, one way to analysis text is to use a [Bag-of-words](https://en.wikipedia.org/wiki/Bag-of-words_model).
Our class will be creating this Bag-of-words that could then be used by a machine learning algorithm.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Use the `map` container to store the word counts.

1. All words should be case-insensitive and not include any symbols.

1. Write the `BagOfWords` member functions:

```c++
  void addWord(std::string);
  std::string getTopWord();
  int getUniqueWordCount();
  int getWordCount(std::string word);
```

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp BagOfWords.cpp && ./a.out
```

### Hints

* Create a print method for showing what is currently in the map.
* Write a function to normalize the string before adding it to the map.

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
