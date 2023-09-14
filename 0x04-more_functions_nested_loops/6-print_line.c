#include "main.h"
/**
 * print_line - print a line using '_'
 * @n: is the number of '_' used
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = '0'; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
