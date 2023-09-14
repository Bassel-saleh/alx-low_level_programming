#include "main.h"
/**
 * _isupper - checks if the variable is an uppercase
 * @c: it is the variable which is being checked
 * Return: 1 if it is uppercase 0 if it is lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
}
