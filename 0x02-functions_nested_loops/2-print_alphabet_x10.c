#include "main.h"
/**
 * print_alphabet_x10 - print alphabet "10" times
 */
void print_alphabet_x10(void)
{
	char a;
	int x = 0;

	while (x < '9')
	{
		for (a = 'a'; a <= 'z';a++)
		{
			_putchar(a);
		}
		x++;
	}
	_putchar('\n');
}