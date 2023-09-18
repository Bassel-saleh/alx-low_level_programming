#include "main.h"
/**
 * print_rev - print a string reversly
 * @s: is the string to be printed
 * Return: no return
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(*s[i]);
	}
	_putchar('\n');
}
