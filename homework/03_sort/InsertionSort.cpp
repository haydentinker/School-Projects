/*************************************************************************
 *
 * Assignment: Sorting
 *
 * File Name:   InsertionSort.cpp
 * Name:        ?
 * Course:      CPTR 242
 * Date:        ?
 */
#include "InsertionSort.h"
#include "ItemType.h"
#include <iostream>
// TODO implement search
void InsertionSort::sort(std::vector<ItemType> &list, int &comparisons,
                         int &writes) {
  comparisons = 0;
  writes = 0;
  for (int i = 1; i < list.size(); i++) {
    int j = i;
    while ((j > 0) &&
           (compareItems(list.at(j), list.at(j - 1), comparisons) == "LESS")) {
      ItemType temp = list.at(j);
      list.at(j) = list.at(j - 1);
      list.at(j - 1) = temp;
      j--;
      writes++;
    }
  }
}
std::string InsertionSort::compareItems(ItemType item1, ItemType item2,
                                        int &comparisons) {
  comparisons++;
  switch (item1.ComparedTo(item2)) {
  case LESS:
    // Do something for less than
    return "LESS";
    break;
  case GREATER:
    // Do something for greater than
    return "GREATER";
    break;
  case EQUAL:
    // Do something for equal
    return "EQUAL";
    break;
  }
  return "ERROR";
}