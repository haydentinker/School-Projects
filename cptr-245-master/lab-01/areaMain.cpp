/* Area Main */

#include <iostream>

#include "areaFunction.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: 'area N' where N is an int" << std::endl;
    return 1;
  }
  char *s = argv[1];
  std::cout << "s = \"" << s << "\"" << std::endl;
  int side = std::stoi(s);
  std::cout << "side =" << side << std::endl;
  int square = findTheSquare(side);
  std::cout << "The area of the square with sides of" << side << " units is"
            << square << " units" << std::endl;
  int circleArea = areaOfACricle(side);
  std::cout << "The area of the circle with radius of" << side << " units is"
            << circleArea << " units" << std::endl;
  return 0;
}