#include "main.h"
/**
 * print_rev - print a string reversly
 * @s: is the string to be printed
 * Return: no return
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= '1')
	{
		_putchar(*s);
		s++;
		i--;
	}
	_putchar('\n');
}
