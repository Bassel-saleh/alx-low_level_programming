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
	unsigned int i, len1, len2;
	char *result;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	result = (char *)malloc(len1 + len2 + 1);
	if (result == 0)
		return (0);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; s2[i] && i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = '\0';
	return (result);
}
