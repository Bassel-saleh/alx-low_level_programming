#include "main.h"
/**
 * print_sign - print the sign of any number
 * @n: a number
 * Return: 1 if positive 0 if it is a zero -1 if it is a negative
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
