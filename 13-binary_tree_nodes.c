#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 *
 * This function recursively calculates the total number
 * of nodes in a binary tree (including the root).
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Number of nodes in the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + 1 + right);
}
