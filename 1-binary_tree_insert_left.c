#include "binary_trees.h"

/**
 * binary_tree_node1 - create a binary tree node
 * @parent: parent node
 * @value: value to add
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node1(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	return (new_node);
}
/**
 * binary_tree_insert_left - adds a binary tree node to the left
 * @parent: pointer to node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: inter to the created node,
 *         NULL if fails or if
 *         @parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node1(parent, value);
	if (left_child == NULL)
		return (NULL);
	parent->left = left_child;
	return (left_child);
}
