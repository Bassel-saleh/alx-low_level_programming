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
	int n; l = abs(n % 10);

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int l = abs(n % 10);

	if (l > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, l);
	}
	if (l == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, l);
	}
	if (0 < l < 6)
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
