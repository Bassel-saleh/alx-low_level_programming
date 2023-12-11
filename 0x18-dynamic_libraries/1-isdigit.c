#include "main.h"
/**
 * _isdigit - checks if int is a digit
 * @c: is the int to be checked
 * Return: 1 if c is a digit 0 if c is not a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
