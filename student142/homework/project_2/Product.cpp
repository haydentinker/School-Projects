#include "Product.h"
#include "Brand.h"
#include "Store.h"
#include <iomanip>
#include <list>
#include <map>
#include <string>
#include <vector>

Product::Product(string ProductName, string UPC) {
  this->ProductName = ProductName;
  this->UPC = UPC;
}

string Product::GetName() { return ProductName; }

string Product::GetUPC() { return UPC; }