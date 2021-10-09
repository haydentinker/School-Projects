/*************************************************************************
 *
 * hw04: Compute the gross pay, withholdings, and net pay for an
 *       employee given the number of hours worked and number of
 *       dependents.
 *
 * File Name: paycheck.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
  double hours;
  int dependents;
  double OT_HOURS;
  const double wage = 18.5;
  const double otwage = 27.75;
  double gross;
  double net;
  double withhold;
  double ot;
  // taxes
  const double ss = 0.062;
  const double medicare = 0.0145;
  double income;
  income = .15;
  OT_HOURS = 40;

  cout << "Enter the number of hours worked: ";
  cin >> hours;
  cout << "Enter the number of dependents: ";
  cin >> dependents;
  // compute gross pay
  ot = hours - 40;
  if (hours < OT_HOURS) {
    gross = wage * hours;
  } else {
    gross = (wage * (hours - ot)) + (otwage * ot);
  }

  // compute withholdings

  withhold = gross * (ss + medicare + income);
  withhold = 10 + withhold - ((gross * dependents) / 100);
  net = gross - withhold;
  cout << endl;
  // output results
  cout << setprecision(5) << showpoint;
  cout << "Your gross pay is: $";
  printf("%.2f", gross);
  cout << endl << "The withholdings are: $" << withhold << endl;
  cout << "So that your net pay is: $" << net << endl;

  return 0;
}
// I used the website for the code to print
// only 2 decimal places
// https://www.geeksforgeeks.org/rounding-floating-point-number-two-decimal-places-c-c/