#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: i a number
 * Return: is the last digit of the given number
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (n % 10) * -1;
		_putchar(r + '0');
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
	}
	return (r);
}
