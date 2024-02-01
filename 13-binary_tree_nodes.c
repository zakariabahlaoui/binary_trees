#include "binary_trees.h"

/**
 * binary_tree_nodes - function that returns # of nodes in a tree with children
 * @tree: tree pointer
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
			node = 1;

		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
	}

	return (node);
}
