/*************************************************************************
 *
 * Homework Assignment: Class for counting words
 *
 * File Name:       BagOfWords.h
 * Name:            ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include <cstring>
#include <map>
#include <string>
using namespace std;

class BagOfWords {
private:
  map<string, int> count;
  // std::string normalizeWord(std::string);
  string normalizeWord(string Words);
  int uniqueWords = 0;
  int totalWords = 0;

public:
  int printWordCount();
  void addWord(string word);
  std::string getTopWord();
  int getUniqueWordCount();
  int getWordCount(string word);
  // void printWordCount();
};
