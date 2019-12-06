#include "binary_trees.h"
/**
 *binary_tree_sibling - function that finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *
 * Return: pointer with a sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
