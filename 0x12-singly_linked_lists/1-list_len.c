#include "lists.h"
/**
 * list_len - return the number of elements of any lists
 * @h: to be counted
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
