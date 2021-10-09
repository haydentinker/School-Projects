/****************************************************************************
 *
 * Homework: Implement three functions for counting tree nodes
 *
 * File Name:  CountNodes.cpp
 * Name:       ?
 * Course:     CPTR 242
 * Date:       ?
 * Time Taken: ?
 *
 */
#include "TreeType.h"
int RecursiveCount(TreeNode *tree) {
  if (tree == NULL) {
    return 0;
  }
  if (tree->right == NULL && tree->left == NULL) {
    return 1;
  } else {
    return RecursiveCount(tree->right) + RecursiveCount(tree->left);
  }
}
int SingleCount(TreeNode *tree) {
  if (tree == NULL) {
    return 0;
  }
  if (tree->right == NULL && tree->left != NULL) {
    return 1 + SingleCount(tree->right) + SingleCount(tree->left);
  } else if ((tree->right != NULL && tree->left == NULL)) {
    return 1 + SingleCount(tree->right) + SingleCount(tree->left);
  } else {
    return SingleCount(tree->right) + SingleCount(tree->left);
  }
}
int GreaterCount(ItemType value, TreeNode *tree) {
  if (tree == NULL) {
    return 0;
  }
  if (tree->info > value) {
    return 1 + GreaterCount(value, tree->right) +
           GreaterCount(value, tree->left);
  } else {
    return GreaterCount(value, tree->right) + GreaterCount(value, tree->left);
  }
}
// Post: Number of leaf nodes in the tree is returned.
// Calls recursive function to count the number of leaf nodes.
int TreeType::CountLeaves() {
  // TODO Implement function
  TreeNode *cur = root;
  int height = RecursiveCount(cur);
  return height;
}

// Calls recursive function SingleCount to count the number of
//   nodes with only one child.
int TreeType::CountSingleChildren() {
  // TODO Implement function
  TreeNode *cur = root;
  int height = SingleCount(cur);
  return height;
}

// Pre:  tree has been initialized.
// Post: Return value = the number of nodes in tree that
//       contain values that are greater than value.
int TreeType::CountGreaterThan(ItemType value) {
  // TODO Implement function
  TreeNode *cur = root;
  int height = GreaterCount(value, cur);
  return height;
}
