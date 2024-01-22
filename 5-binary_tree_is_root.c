#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree.
 *
 * Determines whether the given node is the root (no parent and has children).
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is the root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right != NULL && node->left != NULL && node->parent == NULL)
		return (1);

	return (0);
}
