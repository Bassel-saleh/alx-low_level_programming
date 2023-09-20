#include "main.h"
/**
 * _strcat - append src string to dest string
 * @src: is the string to be appended onto dest
 * @dest: is the string appended on
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}
	for (h = 0; src[h] <= '\0';h++)
	{
		dest[i] = src[h];
		i++;
	}
	return (0);
}
