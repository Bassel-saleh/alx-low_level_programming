#include "main.h"
/**
 * _atoi - convert string to int
 * @s: the string
 * Return: the value of the int
 */
int _atoi(char *s)
{
	int si = 1;
	unsigned int n = 0;

	do
	{

		if (*s == '-')
			si *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;
	}
	while (*s++);
	return (n * si);
}
