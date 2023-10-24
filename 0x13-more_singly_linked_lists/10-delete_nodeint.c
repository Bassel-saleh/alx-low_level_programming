#include "lists.h"
/**
 * delete_nodeint_at_index - unction that deletes the node at index
 * from listint_t linked list
 * @head: double pointer to the head of the list
 * @index: the index which the elment wil be deleted
 * Return: 1 if succeed & -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *crnt, *tmp;
	unsigned int i;

	if (head == 0 || *head == 0)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	crnt = *head;
	for (i = 0; i < index - 1 && crnt != 0; i++)
		crnt = crnt->next;
	if (crnt == 0 || crnt->next == 0)
		return (-1);
	tmp = crnt->next;
	crnt->next = tmp->next;
	free(tmp);
	return (1);
}
