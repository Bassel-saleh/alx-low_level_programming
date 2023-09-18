#include "main.h"
#include <stdio.h>
/**
 * print_array - 
 * @a: is the variable array to be printed
 * @n: is the number of arrays
 * Return: no return
 */
void print_array(int *a, int n)
{
	int num;

	for (num = '1'; num <= n; num++)
	{
		printf("%d, ", a[num]);
	}
}
