#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a pre-order traversal on a binary tree.
 *
 * Executes a given function on each node of the binary tree in pre-order.
 * The function is applied first to the current node, then to its left child,
 * and finally to its right child.
 *
 * @tree: Pointer to the root of the binary tree to traverse.
 * @func: Pointer to the function to be applied to each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
