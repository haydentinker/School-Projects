/*************************************************************************
 *
 * Homework Assignment: C string work
 *
 * File Name: main.cpp
 * Course:    CPTR 142
 * Date:      January 13, 2020
 *
 */

#include <iostream> //	cin & cout
#include <cstring>
using namespace std;

#include "string_functions.h"
#include "string_functions.cpp"

void test(const char string1[], const char string2[]) {
  cout << "\"" << string1 << "\" and \"" << string2
       << "\" areAnagrams() = " << areAnagrams(string1, string2)
       << "; arePalindromes() = " << arePalindromes(string1, string2) << endl;
}

int main() {
  test("dormitory", "dirty room");
  test("eleven plus two ", "twelve plus one");
  test("a man, a plan, a canal: Panama.", "a man, a plan, a canal:  Panama.");
  test("abcd", "efgh");
  test("nurses run ", "nurses run");
  test("abcd", "abcd");
  test("abcdd", "abcd");
  test("ace", "ccc");

  return 0;
}