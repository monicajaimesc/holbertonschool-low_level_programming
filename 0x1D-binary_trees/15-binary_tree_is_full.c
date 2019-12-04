#include "binary_trees.h"
/**
 * 
 * 
 * 
 * 
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int full_left;
	int full_right;
    if (tree->left != NULL)
        full_left = (binary_tree_is_full(tree->left));
    else 
        full_left = 0;
    if (tree->right != NULL)
        full_right = (binary_tree_is_full(tree->right));
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