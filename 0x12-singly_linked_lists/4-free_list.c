#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: a pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *crnt;

	while (head != 0)
	{
		crnt = head;
		head = head->next;
		free(crnt->str);
		free(crnt);
	}
}
