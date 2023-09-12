#include "main.h"
/**
 * times_table - times table
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = a * b;

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (c <= '9')
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else 
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			b++;
		}
		a++;
	}
	_putchar('\n');
}
