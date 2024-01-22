#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs a post-order traversal on a binary tree.
 *
 * Executes a given function on each node of the binary tree in post-order.
 * The function is applied first to the left child, then to the right child,
 * and finally to the current node.
 *
 * @tree: Pointer to the root of the binary tree to traverse.
 * @func: Pointer to the function to be applied to each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
