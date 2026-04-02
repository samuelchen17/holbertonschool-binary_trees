#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_balance - measures the balance factor of a node
 * @tree: pointer to the node to measure
 * Return: balance factor, height of left - right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
size_t balance = 0;

if (!tree)
return (0);

balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

return (balance);
}
