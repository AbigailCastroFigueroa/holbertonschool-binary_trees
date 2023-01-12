#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts nodes with
 *        at least one child in a binary tree.
 * @tree: given tree.
 *
 * Return: the amount of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int left, right;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);

		return (1 + left + right);
	}
	return (0);
}
