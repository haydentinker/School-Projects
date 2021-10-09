/****************************************************************************
 *
 * hw17: Read a file and output any prime numbers to another file
 *
 * File Name: savePrime.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */
#include <fstream>
#include <iostream>
using namespace std;

ofstream fout;
ifstream fin;
// prototype
void isPrime(int nums, int &prime);

int main() {
  int nums, prime = 0;
  string fileName;

  cout << "Input File: ";
  cin >> fileName;
  fin.open(fileName);
  fout.open("primes.txt");

  if (!fin.is_open()) {
    cerr << "Error! Could not open file.\n";
    return 0;
  }
  do {
    fin >> nums;
    if (fin.fail()) {
      cerr << "Error! Invalid number found.\n";
      fin.clear();
      fin.ignore(1000, '\n');
    } else {
      isPrime(nums, prime);
      if (prime == 1) {
        fout << nums << endl;
      }
    }
  } while (!fin.eof());
  fin.close();
  fout.close();
  cout << "File succesfully processed." << endl;
  return 0;
}

void isPrime(int nums, int &prime) {
  prime = 1;
  for (int i = 2; i <= (nums / 2); ++i) {
    if (nums % i == 0) {
      prime = 0;
      break;
    }
  }
}