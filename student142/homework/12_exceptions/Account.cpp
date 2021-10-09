/*************************************************************************
 *
 * Homework: Exceptions
 *
 * File Name:   Account.cpp
 * Username:  	?
 * Course:      CPTR 142
 * Date:        ?
 *
 */

#include "Account.h"
#include <stdexcept>
using namespace std;
// returns new balance or -1 if error
double Account::deposit(double amount) {
  if (amount < 0) { // check for invalid argument
    throw runtime_error("Invalid Deposit");
  }
  balance += amount;

  return balance;
}

// returns new balance or -1 if invalid amount
double Account::withdraw(double amount) {
  if (amount < 0 || amount > balance) { // check for invalid argument
    throw runtime_error("Invalid Withdrawl");
  }
  balance -= amount;
  return balance;
}
