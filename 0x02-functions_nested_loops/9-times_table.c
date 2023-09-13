#include "main.h"
/**
 * times_table - times table
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (b == '0')
			{
				c = a * b;
				_putchar('0' + c);
			}
			else if (c <= '9')
			{
				c = a * b;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			}
			else if (c > '9')
			{
				c = a * b;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c / 10);
				_putchar(c % 10);
			}
		}
		_putchar('\n');
	}
}
