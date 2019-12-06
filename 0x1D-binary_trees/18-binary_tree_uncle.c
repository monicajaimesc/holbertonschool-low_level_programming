#include "binary_trees.h"
/**
 *binary_tree_uncle - function that finds the uncle of a node
 *@node: is a pointer to the node to find the uncle
 *
 * Return: pointer that points to an uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	else
		return (node->parent->parent->left);
}
