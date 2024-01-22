#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 *
 * Determines whether the given node is a leaf (has no left or right child).
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
