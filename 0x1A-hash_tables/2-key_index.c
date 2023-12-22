#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @key: key to get index
 * @size: size of hash table
 * Return: index (key)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	return (hash_djb2(key) % size);
}
