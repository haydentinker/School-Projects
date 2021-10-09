/*************************************************************************
 *
 * Project: ImdbGraph implementation
 *
 * File Name: ImdbGraph.cpp
 * Name:      ??
 * Course:    CPTR 242
 * Date:      ??
 *
 */
#include <iostream>
#include <list>
#include <queue>
#include <string>
#include <vector>
using namespace std;

#include "Bridges.h"
#include "DataSource.h"
#include "GraphAdjList.h"
#include "ImdbGraph.h"
#include "SLelement.h"
#include "data_src/ActorMovieIMDB.h"

using namespace bridges;

// Constructor
ImdbGraph::ImdbGraph() {}

// Destructor
ImdbGraph::~ImdbGraph() {}

// Function: Adds a vertex to the graph.
// Pre:  Graph has been initialized.
// Post: The actor or movie will be added as a vertex.
//          No duplicate vertics will be created.
void ImdbGraph::AddVertex(string actorOrMovie) {
  // TODO Add code here.
  auto vertices = graph.getVertices();
  if (vertices->empty()) {
    graph.addVertex(actorOrMovie, actorOrMovie);
  } else {

    auto checkIfIn = vertices->begin();
    checkIfIn = vertices->find(actorOrMovie);
    if (checkIfIn != vertices->begin()) {
      graph.addVertex(actorOrMovie, actorOrMovie);
    }
  }
}

// Function: Adds a edge to the graph.
// Pre:  Graph has been initialized.
//          Vertics have been already added to the graph.
// Post: The actor movie edge will be added to the graph.
//          No duplicate edges will be created.
void ImdbGraph::AddEdge(string actorOrMovie, string movieOrActor) {
  // TODO Add code here.

  // auto checkEdge = graph.getEdgeData(actorOrMovie, movieOrActor);
  // if (checkEdge.size()==0) {
  graph.addEdge(actorOrMovie, movieOrActor, "10");
  graph.addEdge(movieOrActor, actorOrMovie, "10");
  // }
}

// Function: Updates the visualization for to vertex.
// Pre:  Graph has been initialized.
//          Vertex is in the graph.
// Post: The vertex will display the new color.
void ImdbGraph::setVertexColor(string actorOrMovie, string color) {
  // TODO Add code here.
  graph.getVisualizer(actorOrMovie)->setColor(color);
  graph.getVisualizer(actorOrMovie)->setSize(50.0);
}

// Function: Updates the visualization for to edge.
// Pre:  Graph has been initialized.
//          Edge is in the graph.
// Post: The edge will display the new color.
void ImdbGraph::setEdgeColor(string actorOrMovie, string movieOrActor2,
                             string color) {
  // TODO Add code here.
  graph.getLinkVisualizer(actorOrMovie, movieOrActor2)->setColor(Color(color));
  graph.getLinkVisualizer(movieOrActor2, actorOrMovie)->setColor(Color(color));
}

// Function: Resets all visualizations to the default.
// Pre:  Graph has been initialized.
// Post: The vertics and edges will display the default color.
void ImdbGraph::ResetVisualizer() {
  // TODO Add code here.
  for (auto &vertex : *graph.getVertices()) {
    graph.getVisualizer(vertex.first)->setColor(Color("#4682b4"));
    // get adjacency list of vertex
    auto sl_list = graph.getAdjacencyList(vertex.first);
    for (auto sle = sl_list; sle != NULL; sle = sle->getNext()) {
      // get destination vertex
      auto destination = ((Edge<string>)sle->getValue()).to();
      graph.getLinkVisualizer(vertex.first, destination)
          ->setColor(Color("#4682b4"));
    }
  }
}

// Function: Calculates the Bacon Number for two actors.
//           In addition to returning the number, the graph is update to
//           highlight the path.
//           https://en.wikipedia.org/wiki/Six_Degrees_of_Kevin_Bacon
// Pre:  Graph has been initialized.
//          Vertices are in the graph.
//          Edges connect the actors in the graph.
// Post: The number returned will be lowest number of actor connections used
// to connect them.
//          The graph will visually show the path to connect the actors.
int ImdbGraph::GetBaconNumber(string sourceActor, string destinationActor) {
  // TODO Add code here.
  int baconNumber = 0;
  auto sourceVertex = graph.getAdjacencyList(sourceActor);
  map<string, int> distance;
  map<string, string> edgesMap;
  distance.insert(std::pair<string, int>(sourceActor, 0));
  queue<string> frontQ;
  // queue<string> adjacent;
  vector<string> visited;
  frontQ.push(sourceActor);
  string adjToDest;
  string currVer = sourceActor;
  string adjVer;
  while (!frontQ.empty()) {
    currVer = frontQ.front();
    frontQ.pop();
    for (SLelement<Edge<string>> *sle = graph.getAdjacencyList(currVer);
         sle != nullptr; sle = sle->getNext()) {
      Edge<string> edge = sle->getValue();
      adjVer = edge.to();
      bool found = false;
      for (int i = 0; i < visited.size(); i++) {
        if (adjVer == visited.at(i)) {
          found = true;
        }
      }
      if (found != true) {
        distance.insert(std::pair<string, int>(adjVer, distance[currVer] + 1));
        // edgesMap.insert(std::pair<string, string>(currVer,adjVer);
        frontQ.push(adjVer);
        visited.push_back(adjVer);
        if (adjVer == destinationActor) {
          adjToDest = currVer;
        }
      }
    }
  }

  baconNumber = distance.find(destinationActor)->second;
  currVer = destinationActor;
  setVertexColor(destinationActor, "red");
  setVertexColor(sourceActor, "red");
  for (int i = baconNumber; i > 0; i--) {
    for (SLelement<Edge<string>> *sle = graph.getAdjacencyList(currVer);
         sle != nullptr; sle = sle->getNext()) {
      auto edge = sle->getValue();
      if (distance.find(edge.to())->second == i) {
        setVertexColor(edge.to(), "red");
        setEdgeColor(currVer, edge.to(), "red");
        currVer = edge.to();
        break;
      }
    }
  }
  return baconNumber / 2;
}
