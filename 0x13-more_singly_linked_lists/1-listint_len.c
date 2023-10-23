#include "lists.h"
/**
 * print_listint - print int linked list
 * @h: the list to be printed
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
