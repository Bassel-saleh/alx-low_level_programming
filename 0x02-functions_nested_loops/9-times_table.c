#include "main.h"
/**
 * times_table - times table
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b);
			if (b == '0')
			{
				_putchar('0' + c);
			}
			else if (c <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			}
			else if (c > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
		}
		_putchar('\n');
	}
}
