#include "Store.h"
#include "Brand.h"
#include <iomanip>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
void Store::SetStoreUp(string UPC, string BrandName, string ProductName) {
  Product *Products; // Product Class Type Pointer
  bool NewBrand = false;
  Brand *Brands; // Brand Class Type Pointer
  Products =
      new Product(ProductName, UPC); // Creates a new Product because we
                                     // don't need to check for duplicates
  if (first ==
      true) { // If it is the first time running the function it will
              // automatically add the Brand to the vector of Brand Pointers
    Brands = new Brand(BrandName); //Creates a new instance for a brand and then pushes back the vector of pointers
    BrandPointers.push_back(Brands); 
    first = false;
  }
  for (vector<Brand *>::iterator i = BrandPointers.begin();
       i != BrandPointers.end(); i++) {
    if ((*i)->GetName() != BrandName) { // Checks to see if the Brand is new
      NewBrand = true;
    } else { // If it isn't it sets it to false then breaks out of the iterator
      Brands = (*i);
      NewBrand = false;
      break;
    }
  }
  if (NewBrand == true) {
    Brands = new Brand(BrandName);
    BrandPointers.push_back(Brands); // If the Brand is New then it adds it to
                                     // the Brand Pointer Vector
  }
  BrandProductMap.emplace(Products,
                          Brands); // Emplaces the New Brand and Product Objects
}
void Store::printProducts() {
  Product *pr; // Product Class Type Pointer
  map<Product *, Brand *>::iterator iter;
  int ProductNum = 0;
  int Counter = 0;
  cout << "How many Products would you like to print out? ";
  cin >> ProductNum;
  if ((cin.fail()) || (ProductNum <= 0)) {
    cin.clear(); //error checking to make sure the user does not break the program
    cin.ignore(1000, '\n');
    cerr << "You have entered an invalid number. Setting the number of "
            "Products printed out to 5."
         << endl;
    ProductNum = 5;
  }
  for (iter = BrandProductMap.begin(); iter != BrandProductMap.end(); iter++) {
    pr = iter->first; // Sets a pointer to the pointer of the Product
    cout << pr->GetName() << endl; //Prints the name of the Product it is pointing to
    Counter++;
    if (Counter >= ProductNum) {
      cout << "Requested amount of Products printed. Breaking out of the loop "
              "now."
           << endl;
      break;
    }
  }
}
void Store::printBrandList() {
  // Prints out Brands
  map<Product *, Brand *>::iterator iter;
  int BrandNum = 0;
  int Counter = 0;
  cout << "How many Brands would you like to print out? ";
  cin >> BrandNum;
  if ((cin.fail()) || (BrandNum <= 0)) {
    cin.clear(); //checking for error to make sure user does not break the program
    cin.ignore(1000, '\n');
    cerr << "You have entered an invalid number. Setting the number of Brands "
            "printed out to 5."
         << endl;
    BrandNum = 5;
  }
  Brand *Br; // Pointer for Brand class objects
  for (iter = BrandProductMap.begin(); iter != BrandProductMap.end(); iter++) {
    Br = iter->second; //sets the pointer to the pointer of a brand
    cout << Br->GetName() << endl; //outputs the Name of the Pointer
    Counter++;
    if (Counter >= BrandNum) {
      cout
          << "Requested amount of Brands printed. Breaking out of the loop now."
          << endl;
      break;
    }
  }
}

void Store::printProductInfo(string ProductName) {
  // Prints out the Product info
  cout << "My name is " << ProductName << endl;
  map<Product *, Brand *>::iterator iter;
  Product *Pr; // Product Class Type Pointer
  for (iter = BrandProductMap.begin(); iter != BrandProductMap.end(); iter++) {
    Pr = iter->first; // setting the iter to Pr so that GetName() works
    if ((Pr->GetName()) == ProductName) {
      // outputs the UPC
      cout << "My UPC is " << Pr->GetUPC() << endl;
    }
  }
}

void Store::printBrandInfo(string BrandName) {
  // Prints the Brand Info
  cout << "My name is " << BrandName << endl;
  map<Product *, Brand *>::iterator iter; // Sets the iterator
  Brand *Br;                              // Brand Class type Pointer
  Product *Pr;                            // Brand Class Type Pointer
  cout << "My products are: " << endl;
  for (iter = BrandProductMap.begin(); iter != BrandProductMap.end(); iter++) {
    Br = iter->second;                  // Sets Br to a Brand Pointer
    if ((Br->GetName() == BrandName)) { // Checks if the Brand Names are the
                                        // same
      Pr = iter->first; // If the brand names are the same it outputs the
                        // Product Name
      cout << Pr->GetName() << endl;
    }
  }
}

void Store::printBrandByProduct(string ProductName) {
  cout << "My name is " << ProductName << " and my brand is ";
  map<Product *, Brand *>::iterator iter;
  Product *Pr; // Product Class Type Pointer
  Brand *Br;   // Brand Class Type Pointer
  for (iter = BrandProductMap.begin(); iter != BrandProductMap.end(); iter++) {
    Pr = iter->first; // Sets the key to Pr
    if (Pr->GetName() ==
        ProductName) {   // Checks to see if the Product names are the same
      Br = iter->second; // If they are it outputs the brand and breaks out of
                         // the loop
      cout << Br->GetName() << endl;
      break;
    }
  }
}
void Store::findProduct(string UPC) {
  map<Product *, Brand *>::iterator iter;
  Product *Pr; //sets a Product class type pointer
  for (iter = BrandProductMap.begin(); iter != BrandProductMap.end(); iter++) {
    Pr = iter->first; //sets the Pointer to the Product Pointer in the map
    if (Pr->GetUPC() == UPC) { //Checks the UPC
      cout << "Found the Product using the UPC " << UPC << ". The product is "
           << Pr->GetName() << "." << endl; //Outputs the name of the Product
      break;
    }
  }
}