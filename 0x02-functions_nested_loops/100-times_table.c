#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print the times table for a number
 * @n: is the number used
 */
void print_times_table(int n)
{
	int t;
	int r;

	if (n >= 0 && n <= 15)
	{
		for (t = 0; t <= 9; t++)
		{
			r = n * t;
			if (r <= 9 && r != 0)
			{
				printf(",   %i", r);
			}
			else if (r > 9 && r <= 99)
			{
				printf(",  %i", r);
			}
			else if (r > 99)
			{
				printf(", %i", r);
			}
			else if (t == 0)
			{
				putchar('0');
			}
			else if (r == 0)
			{
				printf(",   %i", r);
			}
		}
		_putchar('\n');
	}
}

