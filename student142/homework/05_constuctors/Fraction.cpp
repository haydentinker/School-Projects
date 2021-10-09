/*************************************************************************
 *
 * Homework Assignment: Create constructors for the Fraction class
 *
 * File Name:       Fraction.cpp
 * Name:            ?
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */

#include "Fraction.h"

using namespace std;

// ======================
// Fraction::Fraction
// Constructors for the fraction class
// ======================

// TODO Add fraction constuctors here
Fraction::Fraction() {
  numerator = 1;
  denominator = 1;
}

// ======================
// Fraction::getDouble
// Returns the fraction's value as a double
// ======================
double Fraction::getDouble() {
  return (static_cast<double>(numerator) / denominator);
}

// ======================
// Fraction::outputReducedFraction
// Reduces the fraction and outputs it to the console.
// ======================
void Fraction::outputReducedFraction() {
  int g;

  g = gcd();
  cout << numerator / g << " / " << denominator / g << endl;
  return;
}

// ======================
// Fraction::gcd
// Finds greatest common divisor of numerator and denominator
// by brute force (start at larger of two, work way down to 1)
// ======================
int Fraction::gcd() {
  int g; // candidate for gcd, start at the smaller of the
         // numerator and denominator

  if (numerator > denominator) {
    g = denominator;
  } else {
    g = numerator;
  }

  // Work down to 1, testing to see if both numerator and denominator
  // can be divided by g.  If so, return it.
  while (g > 1) {
    if (((numerator % g) == 0) && ((denominator % g) == 0))
      return g;
    g--;
  }
  return 1;
}
