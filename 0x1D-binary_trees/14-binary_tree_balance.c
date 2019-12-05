#include "binary_trees.h"
/**
 *binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height.
 *
 *Return: size_t of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (-1);

	if (tree->left != NULL)
		height_left = (binary_tree_height(tree->left) + 1);
	else
		height_left = 0;
	if (tree->right != NULL)
		height_right = (binary_tree_height(tree->right) + 1);
	else
		height_right = 0;
	/* if height_left is greter thatn right else return left or right */
	return (height_left > height_right ? height_left : height_right);
}
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *
 *Return: tree's balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);

	balance = binary_tree_height(tree->left) -
			  binary_tree_height(tree->right);

	return (balance);
}
