#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 *Return: nothing, void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	void (*function_call)(int) = func;


	function_call(tree->n);
	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, function_call);
	}

	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, function_call);
	}

}
