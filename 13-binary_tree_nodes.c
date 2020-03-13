#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts nodes with at least 1 child in a BT
 * @tree: Root node of the tree to count the number of nodes
 *
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		child += 1;
	if (tree->left)
		child += binary_tree_nodes(tree->left);
	if (tree->right)
		child += binary_tree_nodes(tree->right);
	return (child);
}
