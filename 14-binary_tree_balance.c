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
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - Calculates the height of a binary tree.
 *
 * Computes the height of the binary tree, which is the length of the
 * longest path from the root node to a leaf node.
 *
 * @tree: Pointer to the root of the binary tree.
 *
 * Return: Height of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
