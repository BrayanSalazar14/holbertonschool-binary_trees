#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * This function recursively calculates the total number
 * of leaves (nodes with no children) in a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Number of leaves in the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
