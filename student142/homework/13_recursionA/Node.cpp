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

#include <algorithm> // for find()
#include <iostream>  // for cin and cout
using namespace std;
#include "Node.h"
#include <map>
#include <vector>

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

int Node::costOfPath(deque<Node *> path) {
  int sum = 0;
  vector<pair<Node *, Node *>> CostPair;
  vector<Node *> Node;
  for (auto each : path) {
    Node.push_back(each);
  }
  for (int i = 1; i < Node.size(); i++) {
    CostPair.push_back(make_pair(Node.at(i - 1), Node.at(i)));
  }
  for (auto eachPair : CostPair) {
    for (auto linkFirst : eachPair.first->linkAndCostPairs) {
      if (eachPair.second->getLabel() == linkFirst.first->getLabel()) {
        sum += linkFirst.second;
      }
    }
  }
  // remove the current node from the front of the path
  // if nothing more, then return cost of zero
  if (path.size() == 0) {
    return 0;
  }
  // return cost to next node plus cost from there to end
  return sum;
}

void Node::printPath(deque<Node *> path) {
  // print the current label
  cout << path.front()->getLabel();
  // remove the current node from the front of the path
  path.pop_front();
  // if something more, then print it (recursion)
  if (path.size() == 0) {
    return;
  }
  // print a dash, then recurse to print remaining path
  cout << "-";
  printPath(path);
}
// add to a vector of paths leading back home
void Node::findPaths(deque<Node *> currentPath, vector<deque<Node *>> &allPaths,
                     string indent) {
  vector<Node *> checkDup;
  int countA = 0;
  int counter = 0;
  // cout << indent << "findPaths() - starting at " << label << endl;
  // BASE CASE 1: if `this` is not home but part of the current path, do nothing
  bool home = false;
  for (auto each : currentPath) {
    if (this->getLabel() == each->getLabel()) {
      home = true;
    }
    if (this->getLabel() != currentPath.front()->getLabel() && home) {
      return;
    }
  }
  // we are visiting a new node, so add `this` to end of the current path
  currentPath.push_back(this);
  for (auto each : currentPath) {
    checkDup.push_back(each);
  }
  for (auto each : checkDup) {
    if (each->getLabel() == this->getLabel() && this->getLabel() != 'A') {
      counter++;
    }
    if (each->getLabel() == 'A') {
      countA++;
    }
  }
  // BASE CASE 2: if we left home and got back, add currentPath to allPaths
  if (countA < 3 && counter < 2 && currentPath.size() != 1) {
    if (currentPath.front()->getLabel() == currentPath.back()->getLabel()) {
      allPaths.push_back(currentPath);
    }
  }
  // RECURSION: visit each child (link) and add any discovered paths
  for (auto link : this->linkAndCostPairs) {
    link.first->findPaths(currentPath, allPaths, indent);
  }
}
