#include "main.h"
/**
 * is_divisible - help is_prime_number
 * @n: main number
 * @divisor: divisor
 * Return: result
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 2)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - check if the input is a prime number
 * @n: the number to be checked
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (is_divisible(n, n - 1));
}
