#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: A pointer to the uncle node, or NULL if the node or its parent is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if the node or its parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Return the sibling of the parent (i.e., the uncle) */
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: A pointer to the sibling node, or NULL if the node or its parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the node or its parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If the node is the left child, return the right sibling */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If the node is the right child, return the left sibling */
	if (node->parent->right == node)
		return (node->parent->left);

	/* Return NULL if there is no sibling */
	return (NULL);
}

