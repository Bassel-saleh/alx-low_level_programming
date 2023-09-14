#include "main.h"
/**
 * print_triangle - prints a triangle using . & #
 * @size: is the siz of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');

	for (c = size; c > 0; c--)
	{
		for (a = (c - 1); a > 0; a--)
		{
			_putchar(' ');
		}
		for (b = 0; b < c; b++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
