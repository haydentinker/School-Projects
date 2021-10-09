/*************************************************************************
 *
 * Homework: Grand Tour
 *
 * File Name:   Node.h
 * Course:      CPTR 142
 *
 */

#include <algorithm>
#include <deque>
#include <iostream> // for cin and cout
#include <map>
using namespace std;

// define our class
class Node {
public:
  Node() { label = nextLabel++; }
  int getLabel() { return label; }
  void addLinkTo(Node *node, int cost);
  void print();
  map<int, deque<Node *>> costsAndPaths(deque<Node *> remaining, string indent);

private:
  char label;
  map<Node *, int> linkAndCostPairs;
  static char nextLabel;
};
