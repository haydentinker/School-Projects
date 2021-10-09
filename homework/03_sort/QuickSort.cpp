/*************************************************************************
 *
 * Assignment: Sorting
 *
 * File Name:   QuickSort.cpp
 * Name:        ?
 * Course:      CPTR 242
 * Date:        ?
 */
#include "QuickSort.h"
#include "ItemType.h"

// TODO implement search
void QuickSort::sort(std::vector<ItemType> &list, int &comparisons,
                     int &writes) {
  writes = 0;
  comparisons = 0;
  int high = list.size() - 1;
  int low = 0;

  actualSort(list, high, low, comparisons, writes);
}

std::string QuickSort::compareItems(ItemType item1, ItemType item2,
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
int QuickSort::partition(std::vector<ItemType> &list, int low, int high,
                         int &comparisons, int &writes) {

  ItemType pivot = list.at(high);
  int low2 = low - 1;
  for (int j = low; j < high - 1; j++) {
    if (compareItems(list.at(j), pivot, comparisons) == "LESS" ||
        compareItems(list.at(j), pivot, comparisons) == "EQUAL") {
      low2++;
      ItemType temp = list.at(low2);
      list.at(low2) = list.at(j);
      list.at(j) = temp;
      writes++;
    }
  }
  ItemType temp = list.at(low2 + 1);
  list.at(low2 + 1) = list.at(high);
  list.at(high) = temp;
  writes++;
  return low2 + 1;
}
void QuickSort::actualSort(std::vector<ItemType> &list, int high, int low,
                           int &comparisons, int &writes) {
  if (low < high) {
    int part = partition(list, low, high, comparisons, writes);
    actualSort(list, part - 1, low, comparisons, writes);
    actualSort(list, high, part + 1, comparisons, writes);
  }
}