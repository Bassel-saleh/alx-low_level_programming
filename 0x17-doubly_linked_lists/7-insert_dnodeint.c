#include "lists.h"
/**
 * insert_dnodeint_at_index - nserts a new node at a given position.
 * @h: the head of the list
 * @idx: the index which the the new data to be inserted
 * @n: the data which will be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	new->next->prev = new;
	tmp->next = new;
	return (new);
}
