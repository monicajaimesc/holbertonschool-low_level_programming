#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: new node's parent
 * @value: new node's value
 * Return: binary tree's node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	/* Allocate memory for new node */
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	/* Assign data to this node */
	node->n = value;
	node->parent = parent;
	/* Initialize left and right children as NULL */
	node->left = NULL;
	node->right = NULL;
	return (node);

}
