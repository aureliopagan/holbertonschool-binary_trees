#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf (no children).
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, otherwise 0. Returns 0 if node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if the node is NULL */
	if (node == NULL)
		return (0);

	/* Check if the node has no children */
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

