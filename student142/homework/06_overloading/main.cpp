/*************************************************************************
 *
 * Homework Assignment: Implement operator overloading with money.
 * 
 * File Name:       main.cpp
 * Course:          CPTR 142
 * 
 */#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;
#include "Money.h"

int main() {
  Money yourAmount(16.45), myAmount(10.09);

  cout << "Your amount is " << yourAmount << endl;
  cout << "My amount is " << myAmount << endl;

  if (yourAmount == myAmount) {
    cout << "We have the same amounts.\n";
  } else {
    cout << "One of us is richer.\n";
  }

  Money ourAmount = yourAmount + myAmount;
  cout << yourAmount << " + " << myAmount << " equals " << ourAmount << endl;

  Money diffAmount = yourAmount - myAmount;
  cout << yourAmount << " - " << myAmount << " equals " << diffAmount << endl;

  if (ourAmount > diffAmount) {
    cout << "The sum of our Amounts is greater than the difference.\n";
  } else {
    cout << "Something is terribly wrong.\n";
  }
  return 0;
}
