#include "main.h"
/**
 * factorial - calculates the factorial of any number
 * @n: the input number
 * Return: the result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
