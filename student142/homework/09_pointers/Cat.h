/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  cat.h
 * Course:     CPTR 142
 *
 */
#ifndef CAT_H
#define CAT_H

#include "Creature.h"
#include <string>

class Cat : public Creature {
public:
  Cat(std::string name) { this->name = name; };

  int getNumberOfLegs() const { return 4; };

  std::string getDescription() const { return "Cat"; }
};

#endif // CAT_H
