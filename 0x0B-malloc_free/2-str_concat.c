#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int l1, l2, i;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	l1 = 0;
	l2 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == 0)
		return (0);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		s[l1 + i] = s2[i];
	}
	s[l1 + l2] = '\0';
	return (s);
}
