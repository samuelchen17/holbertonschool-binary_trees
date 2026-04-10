#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_sibling - return sibling of a node
 * @node: pointer to the node
 * Return: returns sibling, else NULL if none
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

if (node == node->parent->left)
return (node->parent->right);

return (node->parent->left);
}
