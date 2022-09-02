#include "binary_trees.h"

/**
 * binary_tree_sibling - finds siblings of a node
 * @node: pointer to node to search for sibling
 *
 * Return: pointer to sibling or NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
  if (node == NULL || node->parent == NULL) {
    return (NULL);
  }
  if (node == node->parent->left) {
    return (node->parent->right);
  }
  
  return (node->parent->left);
}
