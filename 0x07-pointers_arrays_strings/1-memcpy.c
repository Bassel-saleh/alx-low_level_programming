#include "main.h"
/**
 * _memcpy -
 * @dest: 
 * @src: 
 * @n: 
 * Return: 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
