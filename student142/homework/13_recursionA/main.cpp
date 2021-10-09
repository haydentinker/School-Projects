/*************************************************************************
 *
 * Homework: Grand Tour
 *
 * File Name:   Main.cpp
 * Course:      CPTR 142
 *
 */

#include <algorithm> // find()
#include <iostream> // for cin and cout
using namespace std;
#include "Node.h"

const int NUMBER_OF_NODES = 6;

int main() {
  // seed the random so we all get the same results
  srand(0);
  // define our nodes
  vector<Node*> nodes;
  for (int i = 0; i < NUMBER_OF_NODES; ++i) {
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

  // pick a starting point for our travels
  Node* home = nodes.at(0);

  // create a starting path
  deque<Node*> path;

  cout << endl << "first test:  ";
  path.push_back(nodes.at(0));  // A
  path.push_back(nodes.at(1));  // B
  path.push_back(nodes.at(5));  // F
  path.push_back(nodes.at(2));  // C
  path.push_back(nodes.at(3));  // D
  path.push_back(nodes.at(4));  // E
  path.push_back(nodes.at(0));  // A
  // test the print function
  home->printPath(path);
  // test the cost function
  cout << " costs " << home->costOfPath(path) << endl;
  path.clear();
  
  cout << "second test: ";
  path.push_back(nodes.at(0));  // A
  path.push_back(nodes.at(3));  // D
  path.push_back(nodes.at(2));  // C
  path.push_back(nodes.at(5));  // F
  path.push_back(nodes.at(1));  // B
  path.push_back(nodes.at(4));  // E
  path.push_back(nodes.at(0));  // A
  // test the print function
  home->printPath(path);
  // test the cost function
  cout << " costs " << home->costOfPath(path) << endl;
  path.clear();

  cout << endl << "call findPaths()" << endl;
  
  // define a variable to hold all the paths
  vector<deque<Node*>> allPaths;
  // call our recursive function to add to list of all paths that return home
  home->findPaths(path, allPaths, "");
  cout << "There are " << allPaths.size() << " that lead home." << endl;

  // look at each path that leads home
  int count = 0;
  cout << endl << "SOLUTIONS: " << endl;
  for (auto each : allPaths) {
    // look only at paths that visit every node
    if (each.size() == NUMBER_OF_NODES + 1) {
      cout << ++count << ": ";
      each.at(0)->printPath(each);
      int cost = each.at(0)->costOfPath(each);
      cout << " costs " << cost << "." << endl;
    }
  }
  return 0;
}
