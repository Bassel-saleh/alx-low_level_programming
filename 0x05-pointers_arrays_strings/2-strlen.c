#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: is the character to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = '1';
	while (*s != '\0')
	{
		a++;
	}
	return (a);
}
