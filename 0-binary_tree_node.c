#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node with the given value.
 *
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to be assigned to the new node.
 *
 * Return: A pointer to the newly created binary tree node, or NULL if
 *         memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	return (newNode);
}

