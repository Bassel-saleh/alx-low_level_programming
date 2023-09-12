#include "main.h"
/**
 * print_alphabet_x10 - print alphabet "10" times
 */
void print_alphabet_x10(void)
{
	char a;
	int x;

	x = '0';
	while (x < '9')
	{
		for (a = 'a'; a <= 'z';a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		x++;
	}
}
