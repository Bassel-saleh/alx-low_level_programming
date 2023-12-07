#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of the list
 * @n: the new date
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!new || !head)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
		node->prev = node;
	}
	return (new);
}
