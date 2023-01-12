#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a given node is a root.
 * @node: node given.
 *
 * Return: 1 if is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL && node->right != NULL)
		return (1);
	return (0);
}
