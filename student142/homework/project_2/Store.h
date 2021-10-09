#ifndef STORE_H
#define STORE_H
#include "Brand.h"
#include "Product.h"
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <vector>
class Brand;
class Product;
class Store {
public:
  void SetStoreUp(string UPC, string BrandName,
                  string ProductName); // Initalizes the store
  void
  printBrandByProduct(string ProductName); // Find the Brand by the Product Name
  void
  printBrandInfo(string BrandName); // Prints out to information about the brand
  void printProductInfo(
      string productName); // Prints out of the information about the product
  void printProducts();    // Prints all of the Products
  void printBrandList();   // Prints all of  the Brands
  void findProduct(string UPC);

private:
  vector<Brand *> BrandPointers; // vector of Brand Pointers that is used to
                                 // check for duplicates
  map<Product *, Brand *>
      BrandProductMap; // map of Product and Brand pointers that is used for
                       // getting information
  bool first = true; // Helps not get out of range because the Brand Pointers
                     // vector is empty at the start
};
#endif