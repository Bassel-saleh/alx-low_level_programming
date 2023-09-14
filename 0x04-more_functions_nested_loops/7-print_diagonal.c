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

	if (n >= '1')
	{
		for (a = '1'; a <= n; a++)
		{
			for (b = a; b >= '1'; b--)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	else if (n <= '0')
	{
		_putchar('\n');
	}
}
