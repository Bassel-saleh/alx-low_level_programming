#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: a pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *crnt;

	while (head != 0)
	{
		crnt = head;
		head = head->next;
		free(crnt->n);
		free(crnt);
	}
}
