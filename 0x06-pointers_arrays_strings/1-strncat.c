#include "main.h"
/**
 * _strcat - append src string to dest string
 * @src: is the string to be appended onto dest
 * @dest: is the string appended on
 * @n: is 
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, h;

	h = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		h++;
	}
	for (i = 0; src[i] != '\0' && i < n;i++)
	{
		dest[i + h] = src[i];
	}
	dest[i + h] = '\0';
	return (dest);
}
