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

/**
 * binary_tree_uncle - return uncle of a node
 * @node: pointer to the node
 * Return: returns uncle, else NULL if none
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

return (binary_tree_sibling(node->parent));
}
