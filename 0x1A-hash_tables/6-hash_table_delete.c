#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *after;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			after = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = after;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
