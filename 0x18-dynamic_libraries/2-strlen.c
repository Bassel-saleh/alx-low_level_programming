#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: is the character to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
