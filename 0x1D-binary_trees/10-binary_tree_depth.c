#include "binary_trees.h"
/**
 *binary_tree_depth - function that measures the depth of a node in a binary tree
 *@tree: pointer to the node to measure the depth
 *
 *Return: depth in size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depht = 0;
    if (tree->parent != NULL)
    {
        depht = (binary_tree_depth(tree->parent) + 1);
    }

    return (depht);


}