#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * This function recursively calculates the balance factor of a binary tree,
 * which is the difference between the height of the left and right subtrees.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: Balance factor of the binary tree, or 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (1);

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);
	return (left + right);
}
