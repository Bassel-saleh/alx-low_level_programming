#include "main.h"
/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (a < 24)
	{
		while (b < 60)
		{
			_putchar(a / 10);
			_putchar(a % 10);
			_putchar(':');
			_putchar(b / 10);
			_putchar(b % 10);
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}
}
