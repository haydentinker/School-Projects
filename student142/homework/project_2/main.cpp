#include "Brand.h"
#include "Product.h"
#include "Store.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
// I worked with Jared Ballance and Jacob Schmidt on this project. So if our codes look similar
// that is why. Please don't destroy me for cheating.
int main() {
  ifstream fin;
  string brand, products, upcString;
  bool first = true;
  Store store;
  fin.open("myInventory.txt");
  if (!fin.is_open()) {
    cerr << "Error! File failed to open." << endl;
    cerr << "Please Try Again" << endl;
    return 0;
  }
  cout << "Starting to Initalize the Store" << endl;
  while (!fin.eof()) {
    if (first == true) { // If it is the first time it runs it basically clears
                         // the first line because it is trash
      getline(fin, brand, '\n');
      first = false;
    }
    getline(fin, upcString, '\t');

    getline(fin, brand, '\t');

    getline(fin, products, '\n');

    store.SetStoreUp(upcString, brand, products);
  }
  fin.close();
  cout << "Initalization is done" << endl;

  cout << "I am going to be running tests on the functions for the brand "
          "Caress and the product Earth's Best Organic Fruit Yogurt Smoothie "
          "Mixed Berry that has the UPC 023923330139"
       << endl;
  string upcTest = "023923330139";
  string brandTest = "Caress";
  string productTest = "Earth's Best Organic Fruit Yogurt Smoothie Mixed Berry";
  cout << "Print Brand By Product function: " << endl;
  ;
  store.printBrandByProduct(productTest);
  cout << endl << "Print Brand Info function: " << endl;
  store.printBrandInfo(brandTest);
  cout << endl << "Print Product Info function: " << endl;
  ;
  store.printProductInfo(productTest);
  cout << endl << "Print Brand List function: " << endl;
  store.printBrandList();
  cout << endl << "Print Products function: " << endl;
  store.printProducts();
  cout << endl << " Finding Product with UPC function" << endl;
  store.findProduct(upcTest);
  cout << endl
       << "All tests are complete exiting out of the program now." << endl;
  return 0;
}
