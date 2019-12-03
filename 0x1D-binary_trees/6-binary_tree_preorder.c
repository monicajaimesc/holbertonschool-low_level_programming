#include "binary_trees.h"
/*
 *
 * 
 * 
 * 
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
