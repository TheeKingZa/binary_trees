#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The size (number of nodes) of the tree, or 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

    /* Recursively calculate the size of the left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

    /* Return the size of the current node plus the sizes of left and right subtrees */
	return (left_size + right_size + 1);
}

