#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except for 2 & 4
 * Return: void
 */
void print_most_numbers(void)
{
	int a = '0';

	for (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a);
		}
		a++
	}
	_putchar('\n');
}
