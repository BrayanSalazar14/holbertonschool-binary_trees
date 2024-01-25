#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * This function recursively determines whether a binary tree is perfect,
 * i.e., all levels of the tree are completely filled.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right)
	{
		if (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);

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

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
