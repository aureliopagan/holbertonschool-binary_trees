#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a
 * binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of nodes with at least one child. If tree is NULL,
 * return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Check if the node has at least one child */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/* Return 0 if the node has no children */
	return (0);
}

