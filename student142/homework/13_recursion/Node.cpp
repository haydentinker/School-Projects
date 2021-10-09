/*************************************************************************
 *
 * Homework: Grand Tour
 *
 * File Name:   Node.cpp
 * Username:  	?
 * Course:      CPTR 142
 * Date:        ?
 *
 */
#include "Node.h"
#include <algorithm>
#include <deque>
#include <iostream> // for cin and cout
#include <map>
using namespace std;


// static variable to hold the next label
char Node::nextLabel = 'A';

// add a link to a node
void Node::addLinkTo(Node *node, int cost) {
  // check to see if the link already exists
  for (int i = 0; i < linkAndCostPairs.size(); ++i) {
    if (linkAndCostPairs.count(node) == 1) {
      return;
    }
  }
  // add the link to this node
  linkAndCostPairs.emplace(node, cost);
  // and add a mirror link to here from there
  node->addLinkTo(this, cost);
}

// print a node with its links
void Node::print() {
  cout << "node " << (char)this->getLabel() << " has links to" << endl;
  for (auto linkAndCostPair : linkAndCostPairs) {
    cout << "  " << (char)(linkAndCostPair.first)->getLabel()
         << " with cost of " << linkAndCostPair.second << endl;
  }
}

// return a map of cost and path from `this` to each of the remaining nodes
map<int, deque<Node *>> Node::costsAndPaths(deque<Node *> remaining,
                                            string indent) {
  // define a variable to hold the full result

  // visit each link from `this`

  // try to find the current link in the remaining list

  // if the link is not yet visited (that is, it is part of the remaining
  // nodes), then we can proceed

  // have we reached a base case where this link is all that remains to be
  // visited?

  // if so, add this link with its cost to the result

  // else, time for recursion!

  // remove the current link from `remaining` since it is being visited now

  // search from the link for the remaining nodes using recursion

  // add the current link and cost to each of the partial results from the
  // recursive call

  // add the current link back to `remaining` so it will be searched from other
  // links

  // return the full result
}
