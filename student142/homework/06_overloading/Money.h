/*************************************************************************
 *
 * Homework Assignment: Implement operator overloading with money.
 * 
 * File Name:       Money.h
 * Course:          CPTR 142
 * 
 */
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

// Class for amounts of money in U.S. currency.
class Money {
public:
  Money();
  Money(double amount);
  Money(int theDollars, int theCents);
  Money(int theDollars);
  double getAmount() const;
  int getDollars() const;
  int getCents() const;

  bool operator==(const Money &amount2);
  bool operator<(const Money &amount2);
  bool operator>(const Money &amount2);

  const  int  operator+(const Money &amount2);
  const  int  operator-(const Money &amount2);

  friend ostream &operator<<(ostream &outputStream, const Money &amount);

private:
  // negative amounts are represented as negative dollars
  // and negative cents. Negative $4.50 is represented as -4
  //(dollars) and -50 (cents)
  int dollars;
  int cents;

  int dollarsPart(double amount) const;
  int centsPart(double amount) const;
  int round(double number) const;
};
