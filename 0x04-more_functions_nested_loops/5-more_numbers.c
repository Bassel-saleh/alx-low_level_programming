#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 x10
 *
 * Return: no return
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
			_putchar('1');
			_putchar(a % 10 + '0');
		}
			_putchar('\n');
		}
}
