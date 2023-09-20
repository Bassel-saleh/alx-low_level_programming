#include "main.h"
/**
 * _strncpy - copying characters from one string to another
 * @dest: is the destination
 * @src: is the string to be copied
 * @n: is the maximum number of bytes to be copied
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, h;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
