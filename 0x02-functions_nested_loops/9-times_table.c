#include "main.h"
/**
 * times_table - times table
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c;

	while (a <= '9')
	{
		c = a * b;
		while (b <= '9')
		{
			if (b = '0')
			{
				_putchar('0' + c);
			}
			else if (c <= '9')
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			}
			else 
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c / 10);
				_putchar(c % 10);
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
