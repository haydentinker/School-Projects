/*************************************************************************
 *
 * Homework: Grand Tour
 *
 * File Name:   Node.h
 * Course:      CPTR 142
 *
 */

#include <deque>
#include <map>
#include <string>
#include <vector>
using namespace std;

// define our class
class Node {
public:
  Node() { label = nextLabel++; }
  char getLabel() { return label; }
  void addLinkTo(Node *node, int cost);
  void print();
  int costOfPath(deque<Node*> path);
  void printPath(deque<Node*> path);
  void findPaths(deque<Node*> currentPath, vector<deque<Node*>> &allPaths, string indent);

private:
  char label;
  map<Node*, int> linkAndCostPairs;
  static char nextLabel;
};
