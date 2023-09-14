#include "main.h"
/**
 * print_diagonal - print diagonal using '\'
 * @n: is the number of \ that will be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 1;
	int b;

	if (n >= 1)
	{
		while (a <= n)
		{
			for (b = a; b >= 1; b--)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
			a++;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n')
	}
}
