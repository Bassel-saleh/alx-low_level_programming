#include "lists.h"
/**
 * add_node - adds a new node at the beggining of any list
 * @head: double pointer to list_t list
 * @str: the new string to be added to the node
 * Return: new element address or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newnode;

	while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (0);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
