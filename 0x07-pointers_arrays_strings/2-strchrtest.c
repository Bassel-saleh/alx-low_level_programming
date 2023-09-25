#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to be checked
 * @c: the character being located
 * Return: if c is located return c else return null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
		return (s);
	else
		return (0);
}
