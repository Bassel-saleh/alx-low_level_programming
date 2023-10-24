#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node in a listint_t
 * @head: is the head of the list
 * @idx: is the number of the element which the new node will be added to
 * @n: is element to be added
 * Return: newnode or NULLL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *crnt;

	if (head == 0)
		return (0);
	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (0);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	crnt = *head;
	for (i = 0; i < idx - 1 && crnt != 0; i++)
	{
		crnt = crnt->next;
	}
	if (crnt == 0)
	{
		free(newnode);
		return (0);
	}
	newnode->next = crnt->next;
	crnt->next = newnode;
	return (newnode);
}
