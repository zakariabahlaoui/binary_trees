#include "binary_trees.h"

/**
 * binary_tree_node - create a binary node
 * @parent: the parent of node
 * @value: the value of the node
 *
 * Return:  return new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->item = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
