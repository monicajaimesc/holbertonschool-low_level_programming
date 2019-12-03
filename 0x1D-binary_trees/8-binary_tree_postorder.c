#include "binary_trees.h"
/*
 *
 * 
 * 
 * 
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    void (*function_call)(int) = func;

    if (tree->left != NULL)
    {
        binary_tree_postorder(tree->left, function_call);
    }

    if (tree->right != NULL)
    {
        binary_tree_postorder(tree->right, function_call);
    }

    function_call(tree->n);

}
