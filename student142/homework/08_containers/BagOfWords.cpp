/*************************************************************************
 *
 * Homework Assignment: Class for counting words
 *
 * File Name:       BagOfWords.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include "BagOfWords.h"
#include <map>
#include <string>
using namespace std;
int BagOfWords::printWordCount() { return totalWords; }
string BagOfWords::normalizeWord(string word) {
  string newWord;
  for (int i = 0; i < word.size(); i++) {
    if (word[0] == '-') {
      break;
    }
    word[i] = tolower(word[i]);
    if (isalpha(word[i])) {
      newWord += word[i];
    }
  }
  return newWord;
}
void BagOfWords::addWord(string word) {
  word = normalizeWord(word);
  if (word.size() < 1) {
    return;
  }
  if (count.count(word)) {
    count.at(word)++;
  } else {
    count.emplace(word, 1);
    uniqueWords++;
  }
  totalWords++;
}
string BagOfWords::getTopWord() {
  string topWord;
  int topWordCount = 0;
  map<string, int>::iterator it;
  for (it = count.begin(); it != count.end(); it++) {
    if (it->second > topWordCount) {
      topWordCount = it->second;
      topWord = it->first;
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() { return uniqueWords; }
int BagOfWords::getWordCount(string word) {
  int specificWordCount;
  word = normalizeWord(word);
  map<string, int>::iterator iter;
  for (iter = count.begin(); iter != count.end(); iter++) {
    if ((iter->first) == word) {
      specificWordCount = iter->second;
    }
  }
  return specificWordCount;
}