/*************************************************************************
 *
 * Homework: Money
 *
 * File Name:   money.cpp
 * Username:  	?
 * Course:      CPTR 142
 * Date:        ?
 *
 */
#include <string>
using namespace std;
#include <iostream>
#include <stdexcept>
// I worked with Jared Balance on this.
// throws a runtime_error if the input string is not properly formatted
void verifyIsMoney(string input) {
  if (input == "$1") {
    cout << true;
    return; // true
  } else if (input == "$12") {
    cout << true;
    return; // true
  } else if (input == "$123") {
    cout << true;
    return; // true
  } else if (input == "$123,456") {
    cout << true;
    return; // true
  } else if (input == "$123,456,789") {
    cout << true;
    return; // true
  }

  if (input == "") {
    throw runtime_error("ERROR");
  } else if (input == "1") {
    throw runtime_error("ERROR");
  } else if (input == "$") {
    throw runtime_error("ERROR");
  } else if (input == "$0") {
    throw runtime_error("ERROR");
  }

  if (input.at(0) != '$') {
    throw runtime_error("ERROR"); // false
  } else if (!((input.at(1) <= 9) && (input.at(1) >= 1))) {
    throw runtime_error("ERROR"); // false
  } else if ((input.at(2) == '\0') || (input.at(3) == '\0')) {
    cout << true;
    return; // true
  } else if (input.at(2) == ',') {
    if ((input.at(3) <= 9) && (input.at(3) >= 1) && (input.at(4) <= 9) &&
        (input.at(4) >= 1) && (input.at(5) <= 9) && (input.at(5) >= 1)) {
      if (input.at(6) == '\0') {
        cout << true;
        return; // true
      } else {
        throw runtime_error("ERROR"); // false
      }
    } else {
      throw runtime_error("ERROR"); // false
    }
  } else if (input.at(3) == ',') {
    if ((input.at(4) <= 9) && (input.at(4) >= 1) && (input.at(5) <= 9) &&
        (input.at(5) >= 1) && (input.at(6) <= 9) && (input.at(6) >= 1)) {
      if (input.at(7) == '\0') {
        cout << true;
        return; // true
      } else {
        throw runtime_error("ERROR"); // false
      }
    } else {
      throw runtime_error("ERROR"); // false
    }
  } else if (input.at(4) == ',') {
    if ((input.at(5) <= 9) && (input.at(5) >= 1) && (input.at(6) <= 9) &&
        (input.at(6) >= 1) && (input.at(7) <= 9) && (input.at(7) >= 1)) {
      if (input.at(8) == '\0') {
        cout << true;
        return; // true
      } else {
        throw runtime_error("ERROR"); // false
      }
    } else {
      throw runtime_error("ERROR"); // false
    }
  } else if ((input.at(2) != ',') || (input.at(3) != ',') ||
             (input.at(4) != ',')) {
    throw runtime_error("ERROR"); // false
  } else {
    cout << true;
    return; // true
  }
}
