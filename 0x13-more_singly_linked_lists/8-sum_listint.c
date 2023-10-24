#include "lists.h"
/**
 * sum_listint - return the sum of listint_t
 * @head: the head of the list
 * Return: sum of the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
