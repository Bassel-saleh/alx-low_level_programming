#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a linked list
 * @head: double pointer to listint_t list
 * @n: the new elment to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (0);
	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;
	return (*head);
}
