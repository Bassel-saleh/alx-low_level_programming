#include "main.h"
/**
 * binary_to_uint - converts binary into unsigned int
 * @b: the string which contain the binary number
 * Return: the uint or 0 if b = NULL or there is a character
 * other than '1' & ''0' in string b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i, len = 0;

	if (b == 0)
		return (0);
	while (b[len] != '\0')
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);
		len++;
	}
	len -= 1;
	i = 0;
	while (b[i])
	{
		if (b[i] == '1')
			r += (1 * (1 << len));
		i++;
		len--;
	}
	return (r);
}
