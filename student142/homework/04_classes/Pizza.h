/*************************************************************************
 *
 * Homework Assignment: Class for taking a pizza order
 *
 * File Name:       pizza.h
 * Name:            ?
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */
const int SMALL = 0;
const int MEDIUM = 1;
const int LARGE = 2;

const int DEEPDISH = 0;
const int HANDTOSSED = 1;
const int PAN = 2;

class Pizza {
public:
  Pizza();
  ~Pizza(){};

  // TODO Add the accessor and mutator functions for each class variable.
  void setSize(int newsize) { size = newsize; }
  void setToppings(int numtop) { toppings = numtop; }
  void setType(int newtype) { type = newtype; }
  //==================================
  // computePrice
  // Returns:
  //   Price of a pizza using the formula:
  //     Small = $10 + $2 per topping
  //     Medium = $14 + $2 per topping
  //     Large = $17 + $2 per topping
  //==================================
  double computePrice() {
    double price = 0;
    switch (size) {
    case SMALL:
      price += 10;
      break;
    case MEDIUM:
      price += 14;
      break;
    case LARGE:
      price += 17;
    }
    for (int i = 0; i < toppings; i++) {
      price += 2;
    }

    return price;
  }

  void outputDescription();

private:
  int size, type, toppings;
};
