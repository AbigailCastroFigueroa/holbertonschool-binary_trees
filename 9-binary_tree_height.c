#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree.
 * @tree: tree given.
 *
 * Return: the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int left_side, right_side;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
		if (right_side > left_side)
			return (right_side + 1);
		return (left_side + 1);
	}
	return (0);
}
