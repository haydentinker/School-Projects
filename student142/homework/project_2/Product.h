#ifndef PRODUCT_H
#define PRODUCT_H
#include "Brand.h"
#include "Store.h"
#include <iomanip>
#include <list>
#include <map>
#include <string>
#include <vector>

using namespace std;
class Product {
public:
  Product(string ProductName, string UPC);
  string GetUPC();
  string GetName();

private:
  string ProductName;
  string UPC;
};

#endif