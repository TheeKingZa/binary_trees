#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise or if the tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

    /* If a node has no children, it's full. */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

    /* Recursively check the left and right subtrees. */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
