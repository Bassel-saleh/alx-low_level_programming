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
	int i, j, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
	}
	i = 0;
	j = (size - 1);
	while (i < size)
	{
		y += a[j];
		i++;
		j--;
	}
	printf("%d, %d\n", x, y);
}
