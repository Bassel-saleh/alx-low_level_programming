#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer to head of the node
 * Return: data or NULL if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (head != 0 && *head != 0)
	{
		tmp = *head;
		n = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
