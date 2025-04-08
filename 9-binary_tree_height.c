#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If the tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Check if the tree is a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively get the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the greater of the two subtree heights + 1 for the current node */
	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

