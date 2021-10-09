/*************************************************************************
 *
 * Assignment: Searching
 *
 * File Name:   LinearSearch.cpp
 * Name:        Hayden Tinker
 * Course:      CPTR 242
 * Date:        04/8
 */
#include "LinearSearch.h"
#include "ItemType.h"

// TODO implement search
void LinearSearch::Search(std::vector<ItemType> list, ItemType key,
                          int &location, int &comparisons) {
  comparisons = 0;
  for (int i = 0; i < list.size(); i++) {

    switch (key.ComparedTo(list.at(i))) {
    case LESS:
      // Do something for less than

      comparisons = i + 1;
      location = -1;
      return;

      break;
    case GREATER:
      // Do something for greater than
      if (i == list.size() - 1) {
        location = -1;
        comparisons = i + 1;
      }
      break;
    case EQUAL:
      // Do something for equal
      location = i;
      comparisons = i + 1;
      return;
      break;
    }
  }
}
