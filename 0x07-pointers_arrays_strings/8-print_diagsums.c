#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - 
 * @a:
 * @size:
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		y += a[i];
		a -= size;
	}
	printf("%d, %d\n", x, y);
}
