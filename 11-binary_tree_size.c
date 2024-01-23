#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * This function recursively calculates the total number
 * of nodes in a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Size of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + 1 + right);
}
