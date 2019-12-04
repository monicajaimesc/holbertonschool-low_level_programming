#include "binary_trees.h"

/**
 * binary_tree_is_perfect - counts the nodes with at least 1 child in a binary tree
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *  
 * Return: nodes with at least 1 child
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int full_left;
	int full_right;
    if (tree->left != NULL)
        full_left = (binary_tree_is_perfect(tree->left));
    else 
        full_left = 0;
    if (tree->right != NULL)
        full_right = (binary_tree_is_perfect(tree->right));
    else
        full_right = 0;
    
    if (tree->right != NULL && tree->left != NULL)
    {
        if (full_left != full_right)
            return (0);
        else
            return (1);
    }

	return (0);
}