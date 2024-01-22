#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree.
 *
 * Executes a given function on each node of the binary tree in in-order.
 * The function is applied first to the left child, then to the current node,
 * and finally to its right child.
 *
 * @tree: Pointer to the root of the binary tree to traverse.
 * @func: Pointer to the function to be applied to each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
