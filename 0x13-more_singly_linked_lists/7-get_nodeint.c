#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * @head: the head of the linked list
 * @index: the number of nodes to be returned
 * Return: head or NULL if the node non exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != 0; i++)
		head = head->next;
	return (head);
}
