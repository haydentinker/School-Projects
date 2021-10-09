/*************************************************************************
 *
 * Homework Assignment: Class for taking a pizza order
 *
 * File Name:       pizza.cpp
 * Name:            ?
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */

#include "Pizza.h"
#include <iostream>

using namespace std;

//========================
// Pizza
// The constructor sets the default pizza
// to a small, deep dish, with only cheese.
//========================
Pizza::Pizza() {
  size = SMALL;
  type = DEEPDISH;
  toppings = 1;
}

//==================================
// Accessors and Mutators Follow
//==================================

// TODO Add the accessor and mutator functions for each class variable.

// TODO Add a function to compute price of the pizza

//==================================
// outputDescription
// Prints a textual description of the contents of the pizza.
//==================================
void Pizza::outputDescription() {
  cout << "This pizza is: ";
  switch (size) {
  case SMALL:
    cout << "Small, ";
    break;
  case MEDIUM:
    cout << "Medium, ";
    break;
  case LARGE:
    cout << "Large, ";
    break;
  default:
    cout << "Unknown size, ";
  }
  switch (type) {
  case DEEPDISH:
    cout << "Deep dish, ";
    break;
  case HANDTOSSED:
    cout << "Hand tossed, ";
    break;
  case PAN:
    cout << "Pan, ";
    break;
  default:
    cout << "Uknown type, ";
  }
  cout << "with " << toppings << " topping(s)" << endl;
}
