/*************************************************************************
 *
 * Nomework: Exceptions
 *
 * File Name:   testAccount.cpp
 * Username:  	?
 * Course:      CPTR 142
 * Date:        ?
 */
#include "Account.h"
#include <cassert>
#include <iostream> // for cin and cout
using namespace std;

void testAccount() {
  double value;
  Account account(1000);

  cout << "Test 1: account.getBalance() == ";
  try {
    value = account.getBalance();
    cout << value << endl;
  } catch (runtime_error &excpt) {
    cout << "Could not get Balance" << endl;
  }

  cout << "Test 2: account.deposit(-1) == ";
  try {
    value = account.deposit(-1);
    cout << value << endl;

  } catch (runtime_error &excpt) {
    cout << "ERROR" << endl;
  }
  cout << "Test 3: account.deposit(500) == ";
  try {
    value = account.deposit(500);
    cout << value << endl;
  } catch (runtime_error &excpt) {
    cout << "ERROR" << endl;
  }

  cout << "Test 4: account.withdraw(-1) == ";
  try {
    value = account.withdraw(-1);
    cout << value << endl;
  } catch (runtime_error &excpt) {
    cout << "ERROR" << endl;
  }

  cout << "Test 5: account.withdraw(750) == ";
  try {
    value = account.withdraw(750);
    cout << value << endl;
  } catch (runtime_error &excpt) {
    cout << "ERROR" << endl;
  }

  cout << "Test 6: account.withdraw(1750) == ";
  try {
    value = account.withdraw(1750);
    cout << value << endl;
  } catch (runtime_error &excpt) {
    cout << "ERROR" << endl;
  }

  cout << "Test 7: account.getBalance() == ";
  try {
    value = account.getBalance();
    cout << value << endl;
  } catch (runtime_error &excpt) {
    cout << "ERROR" << endl;
  }

  cout << "Finished test run!" << endl;
}
