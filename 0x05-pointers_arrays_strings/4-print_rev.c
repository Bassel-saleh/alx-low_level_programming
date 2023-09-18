#include "main.h"
/**
 * print_rev - print a string reversly
 * @s: is the string to be printed
 * Return: no return
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
