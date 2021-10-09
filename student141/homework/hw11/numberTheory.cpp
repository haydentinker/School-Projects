/****************************************************************************
 *
 * hw11:  A library of simple functions
 *
 * File Name:  numberTheory.cpp
 * Name:       ?
 * Course:     CPTR 141
 *
 */
#include <algorithm>
#include <cassert>
#include <cmath>
#include <iostream>
using namespace std;

/*==========================================================================
 * Function: divisible(int,int)
 *
 * Precondition: both parameters are positive integers
 * Postcondition: returns true if the first parameter is divisible by the
 *                second, otherwise returns false.
 */
bool divisible(int numOne = -1, int numTwo = -1) {
  assert(numOne == int(numOne) && (numOne >= 0));
  assert(numTwo == int(numTwo) && (numTwo >= 0));
  bool divisibility;
  if ((numOne % numTwo) == 0) {
    divisibility = true;
  } else {
    divisibility = false;
  }
  return divisibility;
}

/*==========================================================================
 * Function: gcd(int,int)
 *
 * Precondition: both parameters are positive integers
 * Postcondition: returns the greatest common divisor of the two parameters
 *                this is the largest integer that divides into both of them
 */
int gcd(int numOne = -1, int numTwo = -1) {
  assert(numOne == int(numOne) && (numOne >= 0));
  assert(numTwo == int(numTwo) && (numTwo >= 0));
  return __gcd(numOne, numTwo);
}

/*==========================================================================
 * Function: gcd(int,int,int)
 *
 * Precondition: all three parameters are positive integers
 * Postcondition: returns the greatest common divisor of the two parameters
 *                this is the largest integer that divides into both of them
 */
int gcd(int numOne = -1, int numTwo = -1, int numThree = -1) {
  assert(numOne == int(numOne) && (numOne >= 0));
  assert(numTwo == int(numTwo) && (numTwo >= 0));
  assert(numThree == int(numThree) && (numThree >= 0));
  int test1 = __gcd(numOne, numTwo);
  int test2 = __gcd(numOne, numThree);
  return __gcd(test1, test2);
}