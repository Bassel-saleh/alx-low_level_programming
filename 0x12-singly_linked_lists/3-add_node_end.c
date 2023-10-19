#include "lists.h"
/**
 * add_node_end - adds a new node at the end of any list
 * @head: double pointer to list_t list
 * @str: the new string to be added to the node
 * Return: new element address or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	unsigned int len = 0;

	if (str == 0)
		return (0);
	newnode = malloc(sizeof(list_t));
	if (newnode == 0)
		return (0);
	newnode->str = strdup(str);
	if (newnode->str == 0)
	{
		free(newnode);
		return (0);
	}
	while (str[len])
		len++;
	newnode->len = len;
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
