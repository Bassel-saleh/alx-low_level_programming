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
	if (a<0)
	{
		printf("$n is negative");
	}
	if (a==0)
	{
		printf("$n is zero");
	}
	if (a>0)
	{
		printf("$n is positive");
	}
	return (0);
}
