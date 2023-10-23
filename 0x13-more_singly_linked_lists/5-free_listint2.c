#include "lists.h"
/**
 * free_listint2 - sets the head to NULL
 * @head: double pointer to list_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *crnt, *next;

	crnt = *head;
	while (crnt != 0)
	{
		next = crnt->next;
		free(crnt);
		crnt = next;
	}
	*head = NULL;
}
