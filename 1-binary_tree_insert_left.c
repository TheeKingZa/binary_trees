#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the node to insert the left child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

/* Check if the parent node is NULL, and return NULL if it is */
	if (parent == NULL)
		return (NULL);

/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));

/* Check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

/* Initialize the new node */
	new_node->n = value;
/* Assign the value */
	new_node->parent = parent;
/* Set the parent */
	new_node->left = parent->left;
/* The new node's left child is the existing left child */
	new_node->right = NULL;
/* Initialize the right child to NULL */

/* Update the parent of the existing left child if it exists */
	if (new_node->left != NULL)
	new_node->left->parent = new_node;

/* Update the parent's left child to point to the new node */
	parent->left = new_node;

/* Return a pointer to the newly created node */
	return (new_node);
}
