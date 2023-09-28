#include "main.h"
/**
 * _sqrt_recursion_helper - help _sqrt_recursion
 * @n: main number
 * @guess: num
 * Return: result
 */
int _sqrt_recursion_helper(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
		return (guess);
	else if (square > n || guess > n)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: returns the natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_recursion_helper(n, 1));
}
