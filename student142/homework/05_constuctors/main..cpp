/*************************************************************************
 *
 * Homework Assignment: Create constructors for the Fraction class
 * 
 * File Name:       main.cpp
 * Course:          cp1TR 142
 * 
 */

#include "Fraction.h"
#include <iostream>

using namespace std;

int main() {
  // Some test fractions
  Fraction f0;
  cout << f0.getDouble() << endl;
  f0.outputReducedFraction();
  cout << endl;

  Fraction f1(16);
  cout << f1.getDouble() << endl;
  f1.outputReducedFraction();
  cout << endl;

  Fraction f2(8, 2);
  cout << f2.getDouble() << endl;
  f2.outputReducedFraction();
  cout << endl;
}
