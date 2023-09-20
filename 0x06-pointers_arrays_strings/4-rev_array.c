#include "main.h"
/**
 * reverse_array - reverse the values of arrays
 * @a: is the array to be reversed
 * @n: is the number of elements of the array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, j, z;

	i = n - 1;
	j = 0;
	while (j < i)
	{
		z = a[i];
		a[i] = a[j];
		a[j] = z;
		i--;
		j++;
	}
}
