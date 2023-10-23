#include "lists.h"
/**
 * listint_len - return the number elments in a linked list
 * @h: the list to be printed
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
