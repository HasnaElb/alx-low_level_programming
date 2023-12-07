#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node in a dlistint_t linked list
 * @head: the head pointer of the linked list
 * @index: index of the node to return
 * Return: the node if it exists otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int counter = 0;

	while (ptr != NULL)
	{
		if (counter == index)
		{
			return (ptr);
		}
		else
		{
			ptr = ptr->next;
			counter++;
		}
	}
	return (NULL);
}
