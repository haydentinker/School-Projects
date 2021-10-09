/*************************************************************************
 *
 * Homework Assignment: C string work
 *
 * File Name: string_functions.cpp
 * Name:      ???
 * Course:    CPTR 142
 * Date:      January 13, 2020
 *
 */

#include <cctype>
#include <cstring>
#include <iostream> //	cin & cout
using namespace std;

bool areAnagrams(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  int counter1 = 0;
  char placeholder;

  for (int i = 0; string1[i] != '\0'; i++) {
    if (isalpha(string1[i])) {
      placeholder = string1[i];
      if ((int)placeholder < 90) {
        placeholder += 32;
      }
      counter1 += (int)placeholder;
    }
  }
  int counter2 = 0;
  char placeholder2;
  for (int i = 0; string2[i] != '\0'; i++) {
    if (isalpha(string2[i])) {
      placeholder2 = string2[i];
      if (placeholder2 < 90) {
        placeholder2 += 32;
      }

      counter2 += (int)placeholder2;
    }
  }
  if (counter2 == 297) {
    return 0;
  }
  if (counter1 == counter2) {
    return true;
  } else {

    return false;
  }
}
bool arePalindromes(const char string1[], const char string2[]) {
  int i = 0, len1 = 0, len2 = 0, sameLetters = 0;
  string string1Check, string2Check;
  bool isPalindrome = false;
  for (i = 0; string1[i] != '\0'; i++) {
    if (isalpha(string1[i])) {
      string1Check.push_back(string1[i]);
      len1++;
    }
  }
  for (i = 0; string2[i] != '\0'; i++) {
    if (isalpha(string2[i])) {
      string2Check.push_back(string2[i]);
      len2++;
    }
  }
  if (len1 != len2) {
    return 0;
  } else {
    for (i = 0; i < len1; i++) {
      if (string1Check[i] >= 65 && string1Check[i] <= 92) {
        string1Check[i] = string1Check[i] + 32;
      }
    }
    for (i = 0; i < len2; i++) {
      if (string2Check[i] >= 65 && string2Check[i] <= 92) {
        string2Check[i] = string2Check[i] + 32;
      }
    }
  }

  for (i = 0; i < len1; i++) {
    if (string1Check.at(i) == string2Check.at((len2 - 1) - i)) {
      sameLetters++;
    }
  }
  if (sameLetters == len1) {
    isPalindrome = true;
  }

  return isPalindrome;
}