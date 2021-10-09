/****************************************************************************
 *
 * Homework Assignment:  Merge strings
 *
 * File Name:  mergeStrings.cpp
 * Name:       ?
 * Course:     CPTR 142
 * Date:       ?
 *
 */

// TODO Add code here.
#include "mergeStrings.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

string mergeStrings(int argc, char *argv[], string userEntry) {
  int MaxSoFar = userEntry.size();
  int currValue;
  for (int i = 0; i < argc; ++i) {
    currValue = strlen(argv[i]);
    if (currValue > MaxSoFar) {
      MaxSoFar = currValue;
    }
  }
  char *resultString = new char[(argc + 1) * MaxSoFar];
  int k = 0;
  for (int i = 0; i < MaxSoFar; i++) {
    if (i < userEntry.size()) {
      resultString[k++] = userEntry.at(i);
    } else {
      resultString[k++] = ' ';
    }

    for (int j = 0; j < argc; j++) {
      if (i < strlen(argv[j])) {
        resultString[k++] = argv[j][i];
      } else {
        resultString[k++] = ' ';
      }
    }
  }
  return resultString;
}