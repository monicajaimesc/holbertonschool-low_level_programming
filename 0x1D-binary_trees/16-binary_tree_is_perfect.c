#include "binary_trees.h"
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
/**
 * binary_tree_is_perfect - counts the nodes with at least 1 child
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *
 * Return: nodes with at least 1 child
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
	{

		if (binary_tree_is_perfect(tree->left) ==
			binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
		else
		{
			return (0);
		}

	}
	return (0);
}
