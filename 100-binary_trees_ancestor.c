#include "binary_trees.h"

/**
 * binary_trees_ancestor -  function that finds the lowest common
 * ancestor of two nodes
 * @first: Pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the
 * two given nodes or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *senior, *junior;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	senior = first->parent, junior = second->parent;
	if (first == junior || !senior || (!senior->parent && junior))
		return (binary_trees_ancestor(first, junior));
	else if (senior == second || !junior || (!junior->parent && senior))
		return (binary_trees_ancestor(senior, second));
	return (binary_trees_ancestor(senior, junior));
}
