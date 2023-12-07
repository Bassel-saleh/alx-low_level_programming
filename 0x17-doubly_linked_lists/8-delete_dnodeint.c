#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: the head of the list
 * @index: the index which the node will be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}
	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return(1);
}
