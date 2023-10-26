#include "main.h"
/**
 * print_binary - convert decimals into binary
 * @n: the number to be converted
 */
void print_binary(unsigned long int n)
{

	unsigned long int cpy = n, mask = 1;
	int len = 0;

	while (cpy > 0)
	{
		len++;
		cpy >>= 1;
	}
	len -= 1;
	if (len > 0)
		mask = mask << len;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
