#include "binary_trees.h"
/*
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the right-child in
 *@value:  value to store in the new node
 *Return: binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;
    binary_tree_t *tmp;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->left = NULL;
    new_node->n = value;
    tmp = parent->right;
    parent->right = new_node;
    new_node->right = tmp;
    new_node->parent = parent;
    if (tmp != NULL)
        tmp->parent = new_node;
    
    return (new_node);

}
