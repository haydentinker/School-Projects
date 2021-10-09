/*************************************************************************
 *
 * Project: UsgsTree implementation
 *
 * File Name: UsgsTree.cpp
 * Name:      ??
 * Course:    CPTR 242
 * Date:      ??
 *
 */
#include "UsgsTree.h"
#include "BSTElement.h"
#include "Bridges.h"
#include "DataSource.h"
#include "data_src/EarthquakeUSGS.h"
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace bridges;

// Function: Finds the smallest quake magnitude in a BST.
// Pre:  BST has been initialized and populated.
// Post: The smallest quake will be visualized and returned.
EarthquakeUSGS
UsgsTree::getLargestQuake(BSTElement<float, EarthquakeUSGS> *root,
                          std::string color) {
  if (root == nullptr) {
    return nullptr;
  } else if (root->getRight() != nullptr) {
    return getLargestQuake(root->getRight(), color);
  } else {
    root->getVisualizer()->setColor(color);
    return root->getValue();
  }
}

// Function: Finds the largest quake magnitude in a BST.
// Pre:  BST has been initialized and populated.
// Post: The largest quake will be visualized and returned.
EarthquakeUSGS
UsgsTree::getSmallestQuake(BSTElement<float, EarthquakeUSGS> *root,
                           std::string color) {
  if (root == nullptr) {
    return nullptr;
  } else if (root->getLeft() != nullptr) {
    return getSmallestQuake(root->getLeft(), color);
  } else {
    root->getVisualizer()->setColor(color);
    return root->getValue();
  }
}

// Function: Finds all nodes in the BST that are between the min and max
// parameters.
// Pre:  BST has been initialized and populated.
// Post: Returns the number of quakes in this range and visualizes them.
int UsgsTree::countRange(float min, float max,
                         BSTElement<float, EarthquakeUSGS> *root,
                         std::string color) {

  if (root == nullptr) {
    return 0;
  } else if (root->getKey() <= max && root->getKey() >= min) {
    root->getVisualizer()->setColor(color);
    return 1 + countRange(min, max, root->getRight(), color) +
           countRange(min, max, root->getLeft(), color);
  } else {
    return countRange(min, max, root->getRight(), color) +
           countRange(min, max, root->getLeft(), color);
  }
}

// Function:  Finds all nodes in the BST that in the specified location.
// Pre:  BST has been initialized and populated.
// Post: Returns the number of quakes in this location and visualizes them.
int UsgsTree::countByLocation(std::string location,
                              BSTElement<float, EarthquakeUSGS> *root,
                              std::string color) {
  if (root == nullptr) {
    return 0;
  } else {
    auto rootLocation = root->getValue().getLocation();
    auto compare = rootLocation.find(location);
    if (compare != -1) {
      root->getVisualizer()->setColor(color);
      return 1 + countByLocation(location, root->getRight(), color) +
             countByLocation(location, root->getLeft(), color);
    } else {
      return countByLocation(location, root->getRight(), color) +
             countByLocation(location, root->getLeft(), color);
    }
  }
}

// Function: Updates all nodes and edges with a visualization.
// Pre:  BST has been initialized and populated.
// Post: Returns the number of quakes in the BST and visualizes them.
int UsgsTree::countWithStyle(BSTElement<float, EarthquakeUSGS> *root,
                             std::string colorVertex, std::string colorEdge) {
  if (root == nullptr) {
    return 0;
  } else if (root->getRight() == nullptr && root->getLeft() == nullptr) {
    root->getVisualizer()->setColor(colorVertex);
    return 1;
  } else if (root->getRight() != nullptr && root->getLeft() == nullptr) {
    root->getVisualizer()->setColor(colorVertex);
    root->getLinkVisualizer(root->getRight())->setColor(colorEdge);
    return 1 + countWithStyle(root->getRight(), colorVertex, colorEdge);
  } else if (root->getRight() == nullptr && root->getLeft() != nullptr) {
    root->getVisualizer()->setColor(colorVertex);
    root->getLinkVisualizer(root->getLeft())->setColor(colorEdge);
    return 1 + countWithStyle(root->getLeft(), colorVertex, colorEdge);
  } else {
    root->getVisualizer()->setColor(colorVertex);
    root->getLinkVisualizer(root->getLeft())->setColor(colorEdge);
    root->getLinkVisualizer(root->getRight())->setColor(colorEdge);
    return 1 + countWithStyle(root->getLeft(), colorVertex, colorEdge) +
           countWithStyle(root->getRight(), colorVertex, colorEdge);
  }
}
int reseterFunction(BSTElement<float, EarthquakeUSGS> *root) {
  if (root == nullptr) {
    return 0;
  } else if (root->getRight() == nullptr && root->getLeft() == nullptr) {
    root->getVisualizer()->setColor("#4682b4");
    return 1;
  } else if (root->getRight() != nullptr && root->getLeft() == nullptr) {
    root->getVisualizer()->setColor("#4682b4");
    root->getLinkVisualizer(root->getRight())->setColor("#4682b4");
    return 1 + reseterFunction(root->getRight());
  } else if (root->getRight() == nullptr && root->getLeft() != nullptr) {
    root->getVisualizer()->setColor("#4682b4");
    root->getLinkVisualizer(root->getLeft())->setColor("#4682b4");
    return 1 + reseterFunction(root->getLeft());
  } else {
    root->getVisualizer()->setColor("#4682b4");
    root->getLinkVisualizer(root->getLeft())->setColor("#4682b4");
    root->getLinkVisualizer(root->getRight())->setColor("#4682b4");
    return 1 + reseterFunction(root->getLeft()) +
           reseterFunction(root->getRight());
  }
}
// Function: Resets the BST visualization back to the defaults.
// Pre:  BST has been initialized and populated.
// Post: The BST has no visualizations.
void UsgsTree::resetVisualization(BSTElement<float, EarthquakeUSGS> *root) {
  int temp = reseterFunction(root);
}
