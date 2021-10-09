/*************************************************************************
 *
 * Homework: Exceptions
 *
 * File Name:   Account.h
 * Course:      CPTR 142
 *
 */

class Account {
public:
  // default constructor initializes balance to zero
  Account() { balance = 0; }
  // custom constructor to set initial balance
  Account(double balance) { this->balance = balance; }
  // generic accessor
  double getBalance() { return balance; }
  // returns new balance or -1 if error
  double deposit(double amount);
  // returns new balance or -1 if invalid amount
  double withdraw(double amount);

private:
  double balance;
};
