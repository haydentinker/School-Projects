/****************************************************************************
 *
 * hw12:  Functions for tracking quiz grades in CPTR 141
 *
 * File Name:  gradeBookFunctions.h
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include "gradeBookFunctions.h"
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#define NDEBUG
using namespace std;

const int NUM_QUIZZES = 8;
vector<char> quizScores;

const int MIN_PASS_FOR_A = 8;
const int MIN_E_FOR_A = 4;
const int MIN_PASS_FOR_B = 7;
const int MIN_E_FOR_B = 2;
const int MIN_PASS_FOR_C = 5;
const int MIN_PASS_FOR_D = 4;

int numOfE;
int numOfM;
int numOfR;
int numOfN;

/*=====================================================================
 * FUNCTION: getScore(string message)
 *   Prompts for a new quiz score using the string "message" and
 *   validates it before storing it in the global "quizScores" vector.
 *   Also makes sure that we have no more than NUM_QUIZZES quiz scores.
 *    - Precondition: none
 *    - Postcondition: returns false if the score vector is full (already
 *      at NUM_QUIZZES) or an invalid grade is entered, otherwise an E,
 *      M, R, or N is pushed onto "quizScores" and true is returned
 */
bool getScore(string message) {
  char grade;
  if (quizScores.size() == NUM_QUIZZES) {
    return false;
  } else {
    cout << message;
    cin >> grade;
    if ((grade == 'E') || (grade == 'M') || (grade == 'R') || (grade == 'N')) {
      quizScores.push_back(grade);
      return true;
    } else {
      return false;
    }
  }
}

/*=====================================================================
 * FUNCTION: calcGrade()
 *   Calculates and returns the letter grade ('A', 'B', 'C', 'D', or
 *   'F') from the global vector of homework scores as defined by the
 *   global constants: MIN_PASS_FOR_A, MIN_PASS_FOR_B, MIN_PASS_FOR_C,
 *   MIN_PASS_FOR_D, MIN_E_FOR_A, and MIN_E_FOR_B.
 *     - Precondition: the global "quizScores" vector must have at least
 *       one entry
 *     - Post condition: the correct grade letter is returned
 */
char calcGrade() {
  int NumEs = 0;
  int NumMs = 0;
  char grade = 'F';
  for (int i = 0; i < quizScores.size(); i++) {
    if (quizScores.at(i) == 'E') {
      NumEs++;
      NumMs++;
    } else if (quizScores.at(i) == 'M') {
      NumMs++;
    }
  }
  if (NumEs >= MIN_E_FOR_A && NumMs >= MIN_PASS_FOR_A) {
    grade = 'A';
  } else if (NumEs >= MIN_E_FOR_B && NumMs >= MIN_PASS_FOR_B) {
    grade = 'B';
  } else if (NumMs >= MIN_PASS_FOR_C) {
    grade = 'C';
  } else if (NumMs >= MIN_PASS_FOR_D) {
    grade = 'D';
  } else {
    grade = 'F';
  }
  return grade;
}

/*=====================================================================
 * FUNCTION: changeScore(int index, char newScore)
 *   Updates quizScores at the given index to a newScore if the newScore
 *   is valid (E, M, R, or N) and better than the current score.
 *     - Precondition: the global "quizScores" vector must have an entry at
 *       the given index
 *     - Postcondition: if newScore is valid and higher, the entry in the
 *       global "quizScores" will be updated and true returned, otherwise
 *       false is returned
 */
bool changeScore(int index, char newScore) {
  assert((quizScores.at(index) == 'E') || (quizScores.at(index) == 'M') ||
         (quizScores.at(index) == 'R') || (quizScores.at(index) == 'N'));
  char temp, temp2;
  int E = 4, M = 3, R = 2, N = 1;

  switch (quizScores.at(index)) {
  case 'E':
    temp = E;
    break;
  case 'M':
    temp = M;
    break;
  case 'R':
    temp = R;
    break;
  case 'N':
    temp = N;
    break;
  default:
    temp = 0;
    break;
  }

  switch (newScore) {
  case 'E':
    temp2 = E;
    break;
  case 'M':
    temp2 = M;
    break;
  case 'R':
    temp2 = R;
    break;
  case 'N':
    temp2 = N;
    break;
  default:
    temp2 = 0;
    break;
  }

  if (temp < temp2) {
    quizScores.at(index) = newScore;
    return true;
  } else {
    return false;
  }
}