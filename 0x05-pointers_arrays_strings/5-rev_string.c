#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: the string to be reversed
 * Return: no return
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
