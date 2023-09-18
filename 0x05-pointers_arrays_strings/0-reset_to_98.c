#include "main.h"
/**
 * reset_to_98 -  updates the value of an int to 98
 * @n: the variable to be updated
 * Return: no return
 */
void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
