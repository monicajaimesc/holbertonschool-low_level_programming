#include "binary_trees.h"
/*
 *
 * 
 * 
 * 
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    void (*function_call)(int) = func;

    if (tree->left != NULL)
    {
        binary_tree_inorder(tree->left, function_call);
    }

    function_call(tree->n);

    if (tree->right != NULL)
    {
        binary_tree_inorder(tree->right, function_call);
    }

}
