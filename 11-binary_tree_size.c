#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the tree */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

