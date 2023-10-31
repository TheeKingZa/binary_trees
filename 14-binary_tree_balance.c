#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the tree, or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

/* Calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* Calculate and return the balance factor */
return (left_height - right_height);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if the tree is NULL
 */
int binary_tree_height(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

/* Calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* Return the greater height of left or right subtree */
/* plus 1 for the current node */
	return ((left_height > right_height ? left_height : right_height) +1);
}
