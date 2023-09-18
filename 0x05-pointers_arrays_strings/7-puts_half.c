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
	a = b / 2;

	while (*str != '\0')
	{
		_putchar(str[a]);
		a++;
	}
}
