/*************************************************************************
 *
 * Assignment: Sorting
 *
 * File Name:   SelectionSort.cpp
 * Name:        ?
 * Course:      CPTR 242
 * Date:        ?
 */
#include "SelectionSort.h"
#include "ItemType.h"

// TODO implement search
void SelectionSort::sort(std::vector<ItemType> &list, int &comparisons,
                         int &writes) {

  comparisons = 0;
  writes = 0;
  for (int i = 0; i < list.size() - 1; i++) {
    int SmallestIndex = i;
    for (int j = i + 1; j < list.size(); j++) {
      if (SelectionSort::compareItems(list.at(j), list.at(SmallestIndex),
                                      comparisons) == "LESS") {
        SmallestIndex = j;
        writes++;
      }
    }
    ItemType temp = list.at(i);
    list.at(i) = list.at(SmallestIndex);
    list.at(SmallestIndex) = temp;
    // writes++;
  }
}

std::string SelectionSort::compareItems(ItemType item1, ItemType item2,
                                        int &comparisions) {
  comparisions++;
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