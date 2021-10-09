#include <iostream>

#include "areaFunction.h"

int main() {
  std::cout << "Running Square and Circle Area functions test on the following "
               "numbers: 3 and 4. "
               "If it gives the correct answer the main function will return "
               "0. If not there will be an error messaage and will return 1"
            << std::endl;
  int test1 = findTheSquare(3);
  if (test1 == 9) {
    std::cout << "Square Test 1 Passed" << std::endl;
    int test2 = findTheSquare(4);
    if (test2 == 16) {
      std::cout << "Square Test 2 Passed" << std::endl;

      int circleTest1 = areaOfACricle(3);
      if (circleTest1 == 28) {
        std::cout << "Circle Test 1 Passed" << std::endl;
      }
      int circleTest2 = areaOfACricle(4);
      if (circleTest2 == 50) {
        std::cout << "Circle Test 2 Passed" << std::endl;
        return 0;
      }
    }
  }
  std::cerr << "There was an Error" << std::endl;
  return 1;
}