#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the number of the node to be returned
 * Return: the nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	for (i = 0; i < index; i++)
	{
		if (!node)
			return (NULL);
		node = node->next;
	}
	return (node);
}
