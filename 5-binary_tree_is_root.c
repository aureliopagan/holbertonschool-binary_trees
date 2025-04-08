#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of the tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is the root, otherwise 0. Returns 0 if node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if the node is NULL */
	if (node == NULL)
		return (0);

	/* Check if the node has no parent (i.e., it is the root) */
	if (node->parent == NULL)
		return (1);

	return (0);
}

