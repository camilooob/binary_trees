#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that through a BT using in-order traversal
 * @tree: Root node of the tree to traverse
 * @func: Function that print number
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);
	(func)(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
