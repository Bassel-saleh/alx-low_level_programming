#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to be checked
 * @c: the character being located
 * Return: if c is located return c else return null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
