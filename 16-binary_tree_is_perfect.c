#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if the tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

/* Check if left and right subtrees are of equal depth and perfect. */
	if (left_depth == right_depth)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
/* A leaf node is perfect. */
		return (
				binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)
			);
	}

	return (0);  /* Tree is not perfect. */
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

    /* Calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

    /* Return the greater height of left or right subtree */
    /* plus 1 for the current node */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
