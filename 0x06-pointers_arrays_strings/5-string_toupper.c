#include "main.h"
/**
 * string_toupper - changes lowercase of a string to uppercase
 * @c: is the array
 * Return: c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = '0';c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'a')
		{
			c[i] -= 32;
		}
	}
	return (c);
}
