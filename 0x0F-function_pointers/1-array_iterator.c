/**
 * array_iterator -  executes a function given as a parameter
 * @array: the array to be executed
 * @size: the size of the array to be executed
 * @action: the function to be excuted
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
