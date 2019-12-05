#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *
 * Return: nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (tree->left != NULL)
		size_left = (binary_tree_nodes(tree->left));
	else
		size_left = 0;
	if (tree->right != NULL)
		size_right = (binary_tree_nodes(tree->right));
	else
		size_right = 0;

	if (tree->right != NULL || tree->left != NULL)
		return ((size_left + size_right) + 1);

	/* or return (0) could be*/
	return (size_left + size_right);
}
