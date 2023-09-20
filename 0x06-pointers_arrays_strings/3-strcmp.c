#include "main.h"
/**
 * _strcmp - compares two strings
 * s1: is the first string
 * s2: is the second string
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i, r;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}
