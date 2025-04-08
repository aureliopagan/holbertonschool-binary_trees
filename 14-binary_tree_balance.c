#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If the tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively find the height of the left and right subtrees */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* Return the greater height plus 1 for the current node */
	return (1 + (left_h > right_h ? left_h : right_h));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the tree. If the tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Get the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the difference between the left and right subtree heights */
	return (left_height - right_height);
}

