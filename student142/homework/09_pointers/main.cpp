/****************************************************************************
 *
 * Homework Assignment:  Class for counting words
 *
 * File Name:  main.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include "Bee.h"
#include "Cat.h"
#include "Duck.h"
#include "Snail.h"
#include "Zoo.h"
#include <iostream>
#include <string>

int main() {
  Zoo zoo;

  zoo.addCreature(BEE, "Bumble");
  zoo.addCreature(CAT, "Grumpy");
  zoo.addCreature(DUCK, "Ugly");
  zoo.addCreature(SNAIL, "Turbo");

  zoo.printCensus();


  std::cout << "Total Legs: " << zoo.getNumberOfLegs() << std::endl;

  return 1;
}