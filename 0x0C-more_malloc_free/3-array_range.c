#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value to start the array
 * @max: the maximum value to end the array
 * Return: arr
 */
int *array_range(int min, int max)
{
	int i, size, *arr;
	if (min > max)
		return (0);
	arr = 0;
	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == 0)
		return (0);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
