/****************************************************************************
 *
 * Homework Assignment:  Class for counting words
 *
 * File Name:  main.cpp
 * Course:     CPTR 141
 *
 */
#include "BagOfWords.h"
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream fin;
  fin.open("poem1.txt");

  if (!fin) {
    std::cerr << "Unable to open file poem.txt";
    exit(1); // call system to stop
  }

  BagOfWords bow;
  std::string word;
  while (fin >> word) {
    if (word == "Source:") {
      break;
    }
    bow.addWord(word);
  }

  //  wc.printWordCount();
  //  std::cout << std::endl;
  std::cout << "Unique words: " << bow.getUniqueWordCount() << std::endl;
  std::cout << "Top word: " << bow.getTopWord() << std::endl;
  std::cout << "Count for 'mouse': " << bow.getWordCount("mouse") << std::endl;

  fin.close();
  return 1;
}