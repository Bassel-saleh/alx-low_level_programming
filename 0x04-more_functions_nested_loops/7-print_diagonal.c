#include "main.h"
/**
 * print_diagonal - print diagonal using '\'
 * @n: is the number of \ that will be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
