#include "binary_trees.h"
/**
 *binary_tree_inorder - goes through a binary tree using in-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node.
 *Return: nothing, is a void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	void (*function_call)(int) = func;

	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_inorder(tree->left, function_call);
	}

	function_call(tree->n);

	if (tree->right != NULL)
	{
		binary_tree_inorder(tree->right, function_call);
	}

}
