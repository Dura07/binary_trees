#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;
	return (height_right > height_left ? height_right : height_left);
}
