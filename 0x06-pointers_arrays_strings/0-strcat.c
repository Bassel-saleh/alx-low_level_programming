#include "main.h"
/**
 * _strcat - append src string to dest string
 * @src: is the string to be appended onto dest
 * @dest: is the string appended on
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, h;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}
	h = 0;
	while (src[h] != '\0')
	{
		src[h] = dest[i];
		h++;
		i++;
	}
	return (dest);
}
