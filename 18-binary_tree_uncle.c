#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
/* Node, parent, or grandparent is NULL, so there's no uncle. */

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
/* Uncle is the right child of the grandparent. */

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
/* Uncle is the left child of the grandparent. */

	return (NULL);
/* Node's parent is not a direct child of its grandparent. */
}
