#include "Brand.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

Brand::Brand(string BrandName) { this->BrandName = BrandName; }

string Brand::GetName() { return BrandName; }