#include "main.h"
#include <stdlib.h>
/**
 * create_array - creat array of char
 * @size: number of char
 * @c: the char input
 * Return: 0 if the size = 0 or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (0);

	arr = malloc(size * sizeof(char));
	if (arr == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
