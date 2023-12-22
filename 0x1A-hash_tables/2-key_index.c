#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @key: key to get index
 * @size: size of hash table
 * Return: index (key)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
