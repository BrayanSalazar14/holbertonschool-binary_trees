#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: Pointer to the node for which to measure the depth.
 *
 * Return: Depth of the node, or 0 if the tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;
	binary_tree_t *node;

	if (tree ==  NULL)
		return (0);

	node = tree->parent;
	while (node)
	{
		i++;
		node = node->parent;
	}
	return (i);
}
