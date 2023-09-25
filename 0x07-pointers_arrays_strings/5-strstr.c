#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: points to string in search for needle
 * @needle: points to substring to find within haystack
 * Return: pointer or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack)
	{
		*a = haystack;
		*b = needle;
		while (*haystack && *b && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
