#include "main.h"
/**
 * print_line - print a line using '_'
 * @n: is the number of '_' used
 * Return: void
 */
void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
	}
	_putchar('\n');
}