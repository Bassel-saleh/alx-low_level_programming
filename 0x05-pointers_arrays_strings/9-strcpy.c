#include "main.h"
/**
 * *strcpy - hat copies the string pointed to by src
 * @dest: is a pointer to the destination buffer
 * @src: is a pointer to the source string that you want to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
