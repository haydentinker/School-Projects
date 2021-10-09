/*************************************************************************
 *
 * hw13: Determine how many coins of a given value are in an amount.
 *
 * File Name: makeChange.cpp
 * Name:      ???
 * Course:    CPTR 141
 *
 */

/*=====================================================================
 * FUNCTION: makeChange(int amount, int value, int number)
 *
 *    - Precondition: amount initially contains the amount of money
 *       for which change is being made, value contains the value of
 *       the denomination given, and number represents the number
 *       being given
 *    - Postcondition: number will be changed to the number of
 *       the given denomination to be returned, amount will be
 *       changed to the remainder after number * value is returned,
 *       and the return value will be true if number > 0 and
 *       false otherwise
 */
#include <iomanip>
#include <iostream>
using namespace std;
bool makeChange(int &amount, int value, int &number) {
  if ((number = amount / value) == 0) {
    return false;
  }
  amount = amount % value;
  return true;
}