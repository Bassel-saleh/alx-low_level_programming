#include "hash_tables.h"
/**
 * make_node - makes a new node
 * @key: key
 * @value: value
 * Return: new node
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: the data
 * Return: 1 when success NULL if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *temp;
	char *newValue;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			newValue = strdup(value);
			if (newValue == NULL)
				return (0);
			free(temp->value);
			temp->value = newValue;
			return (1);
		}
		temp = temp->next;
	}
	node = make_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
