#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h:
 * address of the head of the list
 * @idx: the index at wich the node is to be added
 * @n: the data to be contained in the new node
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *before, *after;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	before = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1 && before)
	{
		before = before->next;
		idx--;
	}
	if (before == NULL && idx != 0)
		return (NULL);

	if (before->next == NULL)
		return (add_dnodeint_end(h, n));

	after = before->next;
	before->next = new_node;
	after->prev = new_node;
	new_node->next = after;

	return (new_node);
}
