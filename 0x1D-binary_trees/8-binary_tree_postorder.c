#include "binary_trees.h"
/**
 *binary_tree_postorder - goes through a binary tree using post-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 *Return: nothing, is a void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	void (*function_call)(int) = func;

	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left, function_call);
	}

	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right, function_call);
	}

	function_call(tree->n);

}
