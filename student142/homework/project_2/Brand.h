#ifndef BRANDTEST_H
#define BRANDTEST_H
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
class Brand {
public:
  Brand(string BrandName);

  string GetName();

private:
  string BrandName;
};
#endif