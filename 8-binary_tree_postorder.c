#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * This function applies the given function to each node of the binary tree
 * using post-order traversal, where the left and right subtrees are processed
 * before the parent node.
 *
 * If tree or func is NULL, it does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

    /* Recursively traverse the left subtree */
	binary_tree_postorder(tree->left, func);

    /* Recursively traverse the right subtree */
	binary_tree_postorder(tree->right, func);

    /* Call the given function on the current node's value */
	func(tree->n);
}
