#include "binary_trees.h"

/**
 * binary_tree_height - Height
 * @tree: Root
 *
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t levelr = 0, levell = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		levell = binary_tree_height(tree->left);
		levell += 1;
	}
	if (tree->right)
	{
		levelr = binary_tree_height(tree->right);
		levelr += 1;
	}
	return (levelr > levell ? levelr : levell);
}

/**
 * binary_tree_is_full - Full
 * @tree: Root
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->right) &&
			binary_tree_is_full(tree->left));
	return (0);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Root node of the tree to check
 *
 * Return: 1 if is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		if (binary_tree_height(tree->left) ==
		    binary_tree_height(tree->right))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}
