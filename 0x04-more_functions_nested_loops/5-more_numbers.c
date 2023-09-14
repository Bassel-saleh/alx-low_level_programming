#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 x10
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= 14; a++)
		{
			if (a > '9')
			{
				_putchar('1');
			}
			_putchar(a % 10 + '0');
		}
		_putchar(' ');
	}
}
