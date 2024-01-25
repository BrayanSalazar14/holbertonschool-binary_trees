#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 *
 * This function returns a pointer to the sibling of a given node in
 * a binary tree.
 * If the node has no sibling or is NULL, it returns NULL.
 *
 * @node: Pointer to the node for which to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling is found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);

		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
