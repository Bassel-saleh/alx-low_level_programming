#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of any list
 * @head: double pointer to list_t list
 * @n: is the new int to be added
 * Return: new element address or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (0);
	newnode->n = n;
	if (newnode->n == 0)
	{
		free(newnode);
		return (0);
	}
	newnode->next = 0;
	if (*head == 0)
		*head = newnode;
	else
	{
		tmp = *head;
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (newnode);
}
