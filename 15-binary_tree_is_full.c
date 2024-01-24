#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * This function recursively determines whether a binary tree is full,
 * i.e., all nodes have either 0 or 2 children.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == right)
		return (1);
	else
		return (0);
}
