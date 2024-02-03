#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that checks an ancestor
 * @first: First node
 * @second: Second node
 * Return: the node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *p1, *p2;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return (first);
	}
	p1 = first->parent;
	p2 = second->parent;
	if (p1 == NULL || first == p2 || (!p1->parent && p2))
	{
		return (binary_trees_ancestor(first, p2));
	}
	else if (p2 == NULL || p1 == second || (!p2->parent && p1))
	{
		return (binary_trees_ancestor(p1, second));
	}
	return (binary_trees_ancestor(p1, p2));
}
