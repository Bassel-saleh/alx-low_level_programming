#include "main.h"
/**
 * print_rev - print a string reversly
 * @s: is the string to be printed
 * Return: no return
 */
void print_rev(char *s)
{
	int i;

	while (*s[i] != '\0')
	{
		i++;
	}
	for (i >= '1'; i++)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
