#include "binary_trees.h"

/**
 * binary_tree_balance - function that measure the balance
 *                       factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure
 *        the balance factor.
 *
 * Return: balance factor or 0 otherwise.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}


/**
 * binary_tree_height - measure the height of a binary tree.
 * @tree: tree given.
 *
 * Return: the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (right_side > left_side)
		return (right_side + 1);
	return (left_side + 1);
}
