#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 *
 * This function returns a pointer to the uncle (the sibling of the parent)
 * of a given node in a binary tree. If the node has no uncle or is NULL, it
 * returns NULL.
 *
 * @node: Pointer to the node for which to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle is found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->parent)
		return (NULL);

	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
	}
	return (NULL);
}
