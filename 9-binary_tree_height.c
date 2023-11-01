#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
<<<<<<< HEAD
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
=======
	if (tree)
	{
		size_t left_height = 0, right_height = 0;
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
>>>>>>> 2f78a5fe20d4f560af737f502b845973d6c0dbd5
}
