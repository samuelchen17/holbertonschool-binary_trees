#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - find height of binary tree
 * @tree: pointer to the root node
 * Return: height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right, height;

if (!tree)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

if (left > right)
height = left;
else
height = right;

return (height + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: 1 if perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height;

if (!tree)
return (0);

height = (int)binary_tree_height(tree);

/* recursive helper */

return ();
}
