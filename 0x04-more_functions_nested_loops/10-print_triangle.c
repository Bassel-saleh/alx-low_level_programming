#include "main.h"
/**
 * print_triangle - prints a triangle using . & #
 * @size: is the siz of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (c = size; c > 0; c--)
	{
		for (a = 1; a <= size; a++)
		{
			if (a <= (size - c))
				_putchar(' ');
			else
				_putchar('#');
		}
	_putchar('\n');
	}
}
