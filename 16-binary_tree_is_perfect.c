#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height of.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the greater height plus 1 for the current node */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, perfect_nodes;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Get the height of the tree */
	height = binary_tree_height(tree);

	/* Get the number of nodes in the tree */
	nodes = binary_tree_size(tree);

	/* Calculate the number of nodes a perfect tree of this height should have */
	perfect_nodes = (1 << height) - 1;

	/* Return 1 if the number of nodes equals the perfect number of nodes */
	return (nodes == perfect_nodes);
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the tree */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

