#include "main.h"
/**
 * print_line - print a line using '_'
 * @n: is the number of '_' used
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n >= '1')
	{
		for (a = n; a >= '1'; a--)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
	else if (n <= '0')
	{
		_putchar('\n');
	}
}
