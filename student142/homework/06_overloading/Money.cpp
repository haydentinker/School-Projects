/*************************************************************************
 *
 * Homework Assignment: Implement operator overloading with money.
 *
 * File Name:       Money.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include "Money.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

bool Money::operator==(const Money &amount2) {
  return ((dollars == amount2.dollars) && (cents == amount2.cents));
}

// TODO Add overloading < operator here
bool Money::operator<(const Money &amount2) {

  return (((dollars * 100) + cents < amount2.cents + (amount2.dollars * 100)));
}
// TODO Add overloading > operator here
bool Money::operator>(const Money &amount2) {
  return (((dollars * 100) + cents > amount2.cents + (amount2.dollars * 100)));
}
// TODO Add overloading + operator here

const Money Money::operator+(const Money &amount2) {
  double money = 0;
  money = (dollars + amount2.dollars);
  money = money + (cents * 0.01 + amount2.cents * 0.01);
  return money;
}
// TODO Add overloading - operator here
const Money Money::operator-(const Money &amount2) {
  double money = 0;
  money =
      (dollars + (cents * 0.01) - (amount2.dollars + (amount2.cents * 0.01)));
  return money;
}

Money::Money() {
  dollars = 0;
  cents = 0;
}

Money::Money(double amount) {
  dollars = dollarsPart(amount);
  cents = centsPart(amount);
}

Money::Money(int theDollars) {
  dollars = theDollars;
  cents = 0;
}

// Uses cstdlib:
Money::Money(int theDollars, int theCents) {
  if ((theDollars < 0 && theCents > 0) || (theDollars > 0 && theCents < 0)) {
    cout << "Inconsistent money data.\n";
    exit(1);
  }
  dollars = theDollars;
  cents = theCents;
}

double Money::getAmount() const { return (dollars + cents * 0.01); }

int Money::getDollars() const { return dollars; }

int Money::getCents() const { return cents; }

int Money::dollarsPart(double amount) const { return static_cast<int>(amount); }

int Money::centsPart(double amount) const {
  double doubleCents = amount * 100;
  int intCents = (round(fabs(doubleCents))) % 100; //% can misbehave
                                                   // for negatives
  if (amount < 0)
    intCents = -intCents;
  return intCents;
}

int Money::round(double number) const { return floor(number + 0.5); }

ostream &operator<<(ostream &outputStream, const Money &amount) {
  int absDollars = abs(amount.dollars);
  int absCents = abs(amount.cents);
  if (amount.dollars < 0 || amount.cents < 0)
    // accounts for dollars == 0 or cents == 0
    outputStream << "$-";
  else
    outputStream << '$';
  outputStream << absDollars;

  if (absCents >= 10)
    outputStream << '.' << absCents;
  else
    outputStream << '.' << '0' << absCents;

  return outputStream;
}
