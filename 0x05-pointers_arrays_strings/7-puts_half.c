#include "main.h"
/**
 * puts_half - prints half a string
 * @str: the string to be printed
 * Return: no return
 */
void puts_half(char *str)
{
	int a;
	int b;

	a = 0;
	while (str[a])
	{
		a++;
	}

	b = a;

	if (a % '2' != '0')
		a = (b - 1) / 2;

	else
		a = b / 2;

	while (a <= b)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
