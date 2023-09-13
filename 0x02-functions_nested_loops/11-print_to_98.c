#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - count from any number to 98
 * @n: is the number given to count from
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	printf("98\n");
}
