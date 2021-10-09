/*************************************************************************
 *
 * Assignment: Searching
 *
 * File Name:   BinarySearch.cpp
 * Name:        ?
 * Course:      CPTR 242
 * Date:        ?
 */
#include "BinarySearch.h"
#include "ItemType.h"

// TODO implement search
void BinarySearch::Search(std::vector<ItemType> list, ItemType key,
                          int &location, int &comparisons) {
  comparisons = 0;
  int left_bound = 0;
  int right_bound = list.size();
  while (left_bound <= right_bound) {

    int mid = (right_bound + left_bound) / 2;
    comparisons++;
    switch (key.ComparedTo(list.at(mid))) {

    case LESS:
      // Do something for less than
      if (mid == 0) {
        location = -1;
        return;
      }
      right_bound = mid - 1;
      break;
    case GREATER:
      // Do something for greater than
      if (mid == list.size() - 1) {

        location = -1;
        return;
      }
      left_bound = mid + 1;
      break;
    case EQUAL:
      // Do something for equal
      location = mid;
      return;
      break;
    }
  }
  location = -1;
  return;
}