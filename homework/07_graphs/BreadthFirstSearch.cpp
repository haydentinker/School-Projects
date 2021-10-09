/*************************************************************************
 *
 * Assignment: BreadthFirstSearch
 *
 * File Name: BreadthFirstSearch.cpp
 * Name:        ?
 * Course:      CPTR 242
 * Date:        ?
 */

#include "GraphType.h"
#include "QueueType.h"
#include <iostream>
#include <map>
#include <vector>
template <class VertexType>
map<VertexType, int>
// worked with quinton talking about the concepts
GraphType<VertexType>::BreadthFirstSearch(VertexType startVertex) {
  map<VertexType, int> distance;
  distance.insert(std::pair<VertexType, int>(startVertex, 0));
  QueueType<VertexType> frontQ;
  QueueType<VertexType> adjacent;
  vector<VertexType> visited;
  frontQ.Enqueue(startVertex);
  VertexType currVer;
  VertexType adjVer;

  while (!frontQ.IsEmpty()) {
    frontQ.Dequeue(currVer);
    GetToVertices(currVer, adjacent);
    visited.push_back(currVer);
    while (!adjacent.IsEmpty()) {
      adjacent.Dequeue(adjVer);
      bool found = false;
      for (int i = 0; i < visited.size(); i++) {
        if (adjVer == visited.at(i)) {
          found = true;
        }
      }
      if (found != true) {
        distance.insert(
            std::pair<VertexType, int>(adjVer, distance[currVer] + 1));
        frontQ.Enqueue(adjVer);
      }
    }
  }
  return distance;
}
// Keep this at the end of the file.
template class GraphType<int>;