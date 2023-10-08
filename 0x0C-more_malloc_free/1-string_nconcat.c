#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *result;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	result = (char *)malloc(len + 1);
	if (result == 0)
		return (0);
	len = 0;
	for (i = 0; s1[i]; i++)
		result[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		result[len++] = s2[i];
	result[len] = '\0';
	return (result);
}
