#include "main.h"
/**
 * print_square - print a square using '#'
 * @size: is the length of its side
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	if (size >= 1)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
