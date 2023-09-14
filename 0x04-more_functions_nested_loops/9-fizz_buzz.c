#include <stdio.h>
/**
 * main - prints numbers from 1 to  100
 * except numbers divisble by 3 instead prints Fizz
 * except numbers divisble by 5 instead prints Buzz
 * except numbers divisble by both 3 & 5 instead prints FizzBuzz
 * Return: void
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", a);
		}
		if (a != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
