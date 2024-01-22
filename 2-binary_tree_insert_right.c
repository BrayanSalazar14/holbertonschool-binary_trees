#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new right child with the given value.
 *
 * Creates a new node with the provided value and inserts it as the right
 * child of the given parent. If the parent already has a right child, the
 * new node is inserted between the existing right child and the parent.
 *
 * @parent: Pointer to the parent node for the new right child.
 * @value:  Value to be assigned to the new right child.
 * Return:  Pointer to the new right child node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeRight;

	if (parent == NULL)
		return (NULL);

	nodeRight = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		nodeRight->right = parent->right;
		parent->right->parent = nodeRight;
	}
	parent->right = nodeRight;
	return (nodeRight);
}
