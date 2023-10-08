#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb:
 * @size:
 * Return: 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, tsize;
	char *cptr;

	if (nmemb == 0 || size == 0)
		return (0);
	tsize = nmemb * size;
	ptr = malloc(tsize);
	if (ptr == 0)
		return (0);
	cptr = (char *)ptr;
	for (i = 0; i < tsize; i++)
		cptr[i] = 0;
	return (ptr);
}
