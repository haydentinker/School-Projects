/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  snail.h
 * Course:     CPTR 142
 *
 */
#ifndef SNAIL_H
#define SNAIL_H

#include "Creature.h"
#include <string>

class Snail : public Creature {
public:
  Snail(std::string name) { this->name = name; };

  int getNumberOfLegs() const { return 0; };

  std::string getDescription() const { return "Snail"; }
};

#endif // SNAIL_H
