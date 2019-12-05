#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the binary tree's size
 *@tree: pointer to the root node of the tree to measure the size
 *
 * Return: binary's size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size_left = (binary_tree_size(tree->left));
	else
		size_left = 0;
	if (tree->right != NULL)
		size_right = (binary_tree_size(tree->right));
	else
		size_right = 0;

	/* if size_left is greter thatn right else return left or right */
	return ((size_left + size_right) + 1);
	}
