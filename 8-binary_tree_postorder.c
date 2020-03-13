#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that through a BT with post-order traversal
 * @tree: Root node of the tree to traverse
 * @func: Function that print number
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	(func)(tree->n);
}
