#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: is the size o array
 * Return: hash table NULL if ERROR occured
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int x;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(size * sizeof(hash_table_t *));
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		hash->array[x] = NULL;
	return (hash);
}
