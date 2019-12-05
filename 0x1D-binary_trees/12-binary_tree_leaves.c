#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 *@tree: pointer to the root node of the tree to measure the size
 *Return: leaves in size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (tree->left != NULL)
		size_left = (binary_tree_leaves(tree->left));
	else
		size_left = 0;
	if (tree->right != NULL)
		size_right = (binary_tree_leaves(tree->right));
	else
		size_right = 0;

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	/* if size_left is greter thatn right else return left or right */
	return (size_left + size_right);
}
