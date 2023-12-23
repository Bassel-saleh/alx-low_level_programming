#include "hash_tables.h"
/**
 * hash_table_print - print any hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp;
	char f = 0;

	if (ht == NULL || htt->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			f = 1;
			temp = temp->next;
		}
	}
	print("}\n");
}
