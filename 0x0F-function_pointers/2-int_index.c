/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: the function than searches for the int
 * Return: -1 if size <= (0) or the int not found
 * returns i if int was found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
