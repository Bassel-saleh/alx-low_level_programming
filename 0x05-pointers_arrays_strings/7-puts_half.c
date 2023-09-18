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

	while (str[a])
	{
		a++;
	}

	b = a / 2;
	while (b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
