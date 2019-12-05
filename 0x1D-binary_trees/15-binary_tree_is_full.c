#include "binary_trees.h"
/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *@tree: pointer to the root node of the tree to check
 *Return: integer to check if it's full or not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left;
	int full_right;

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left != NULL)
		full_left = (binary_tree_is_full(tree->left));
	else
		full_left = 0;
	if (tree->right != NULL)
		full_right = (binary_tree_is_full(tree->right));
	else
		full_right = 0;

	if (full_right == 0 && full_left == 0)
		return (0);

	else if (full_left != full_right)
		return (0);

	else
		return (1);
}
