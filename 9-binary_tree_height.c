#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	size_t left_side, right_side;

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return(0);

	if (left_side < right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
