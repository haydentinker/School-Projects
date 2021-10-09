/*************************************************************************
 *
 * Homework Assignment: Class for taking a pizza order
 * 
 * File Name:       main.cpp
 * Course:          cp1TR 142
 * 
 */

#include "Pizza.h"
#include <iostream>

using namespace std;

int main() {

  // Variable declarations
  Pizza cheesy;
  Pizza veggie;
  Pizza custom;

  cheesy.setToppings(1);
  cheesy.setType(HANDTOSSED);
  cheesy.outputDescription();
  cout << "Price of cheesy: $" << cheesy.computePrice() << endl;

  veggie.setSize(LARGE);
  veggie.setToppings(5);
  veggie.setType(PAN);
  veggie.outputDescription();
  cout << "Price of veggie : $" << veggie.computePrice() << endl;

  veggie.setSize(MEDIUM);
  veggie.setToppings(3);
  veggie.setType(DEEPDISH);
  veggie.outputDescription();
  cout << "Price of custom : $" << veggie.computePrice() << endl;
  cout << endl;
}