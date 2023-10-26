#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number given
 * @index: is the index, starting from 0 of the
 * bit you want to get
 * Return: the bit number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	bit =(n & mask) ? 1 : 0;
	return (bit);
}
