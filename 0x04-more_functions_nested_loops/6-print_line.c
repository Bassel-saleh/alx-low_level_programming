#include "main.h"
/**
 * print_line - print a line using '_'
 * @n: is the number of '_' used
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = n; a >= '0'; a--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
