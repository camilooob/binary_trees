#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that through a BT using pre-order traversal
 * @tree: Root node of the tree to traverse
 * @func: Function that print number
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	(func)(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
