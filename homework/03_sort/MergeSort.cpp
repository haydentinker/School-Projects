/*************************************************************************
 *
 * Assignment: Sorting
 *
 * File Name:   MergeSort.cpp
 * Name:        ?
 * Course:      CPTR 242
 * Date:        ?
 */
#include "MergeSort.h"
#include "ItemType.h"

// TODO implement search
void MergeSort::sort(std::vector<ItemType> &list, int &comparisons,
                     int &writes) {
  writes = 0;
  comparisons = 0;
  int startIndex = 0;
  int endIndex = list.size() - 1;
  recursiveMergeSort(list, comparisons, writes, startIndex, endIndex);
}
void MergeSort::recursiveMergeSort(std::vector<ItemType> &list,
                                   int &comparisons, int &writes,
                                   int startIndex, int endIndex) {
  int mid = 0;
  if (startIndex < endIndex) {
    mid = (startIndex + endIndex) / 2;
    // Recursive Sort left and right
    recursiveMergeSort(list, comparisons, writes, startIndex, mid);
    recursiveMergeSort(list, comparisons, writes, mid + 1, endIndex);
    merge(list, comparisons, writes, startIndex, mid, endIndex);
  }
}
void MergeSort::merge(std::vector<ItemType> &list, int &comparisons,
                      int &writes, int leftFirst, int leftLast, int rightLast) {
  ItemType temp[rightLast - leftFirst + 1];
  int i = leftFirst;
  int j = leftLast + 1;
  int k = 0;
  while (i <= leftLast && j <= rightLast) {
    if (compareItems(list.at(i), list.at(j), comparisons) == "LESS" ||
        compareItems(list.at(i), list.at(j), comparisons) == "EQUAL") {
      writes++;
      temp[k] = list.at(i);
      k++;
      i++;
    } else {
      writes++;
      temp[k] = list.at(j);
      k++;
      j++;
    }
  }
  while (i <= leftLast) {
    writes++;
    temp[k] = list.at(i);
    k++;
    i++;
  }
  while (j <= rightLast) {
    writes++;
    temp[k] = list.at(j);
    k++;
    j++;
  }
  for (i = leftFirst; i <= rightLast; i++) {
    writes++;
    list.at(i) = temp[i - leftFirst];
  }
}

std::string MergeSort::compareItems(ItemType item1, ItemType item2,
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