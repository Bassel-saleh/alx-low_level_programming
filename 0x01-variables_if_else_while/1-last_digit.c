#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n);
	}
	if (0 < n < 6)
	{
		printf("if the last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
