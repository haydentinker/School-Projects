/*************************************************************************
 *
 * Homework: Grand Tour
 *
 * File Name:   Main.cpp
 * Course:      CPTR 142
 *
 */

#include <algorithm> // find()
#include <deque>
#include <iostream> // for cin and cout
#include <map>
using namespace std;

int main() {
  // seed the random so we all get the same results
  srand(0);
  // define our nodes
  deque<Node *> nodes;
  for (int i = 0; i < 6; ++i) {
    nodes.push_back(new Node);
  }
  // add some random links with some random costs
  for (int i = 0; i < nodes.size(); ++i) {
    for (int j = i + 1; j < nodes.size(); ++j) {
      if (rand() % 3) { // don't link every node
        int cost = rand() % 20 * 3 + 10;
        nodes.at(i)->addLinkTo(nodes.at(j), cost);
      }
    }
  }
  // print the nodes and links so we can visualize the map
  for (int i = 0; i < nodes.size(); ++i) {
    nodes.at(i)->print();
  }
  cout << endl;
  // pick a starting point for our travels
  Node *node = nodes.at(0);
  // call our recursive function to give a list of all paths
  map<int, deque<Node *>> allPaths = node->costsAndPaths(nodes, "");
  cout << "Cost  Path" << endl;
  for (auto aPair : allPaths) {
    // check to see that we ended up at the beginning point
    if (aPair.second.back() == node) {
      // show the cost and beginning point for the trip
      cout << " " << aPair.first << " " << (char)(node->getLabel());
      // show each subsequent point on the trip
      for (auto node : aPair.second) {
        cout << (char)(node->getLabel());
      }
      cout << endl;
    }
  }
  return 0;
}
