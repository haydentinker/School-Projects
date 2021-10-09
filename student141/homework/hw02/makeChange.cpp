/*************************************************************************
 *
 * hw02: A change computation program
 *
 * File Name: makeChange.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {

  // define variables
  int twenty;
  int ten;
  int five;
  int one;
  int quarter;
  int dime;
  int nickel;
  int penny;
  double cost;
  double paid;
  double change;

  // Prompt for and collect input
  cout << "Enter the cost in dollars and cents: $";
  cin >> cost;
  cout << "Enter the amount paid in dollars and cents: $";
  cin >> paid;
  cout << endl;

  // convert to cents and compute change
  change = paid - cost;
  twenty = change / 20;
  change = change - (twenty * 20);
  ten = change / 10;
  change = change - (ten * 10);
  five = change / 5;
  change = change - (five * 5);
  one = change / 1;
  change = change - (one * 1);
  quarter = change / 0.25;
  change = change - (.25 * quarter);
  dime = change / 0.10;
  change = change - (0.10 * dime);
  nickel = change / 0.05;
  change = change - (nickel * 0.05);
  penny = change / 0.01;
  change = change - (penny * 0.01);

  // now display number of dollars and coins
  cout << "Your change is:" << endl;
  cout << "  - twenty-dollar bills: " << twenty << endl;
  cout << "  - ten-dollar bills: " << ten << endl;
  cout << "  - five-dollar bills: " << five << endl;
  cout << "  - one-dollar bills: " << one << endl;
  cout << "  - quarters: " << quarter << endl;
  cout << "  - dimes: " << dime << endl;
  cout << "  - nickels: " << nickel << endl;
  cout << "  - pennies: " << penny << endl;

  return 0;
}
