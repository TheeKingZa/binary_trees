#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes with at least one child
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Return: The number of nodes with at least one child
 *		or 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* If the current node has at least one child */
/* return 1; otherwise, sum the nodes in subtrees */
if (tree->left || tree->right)
return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
else
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
