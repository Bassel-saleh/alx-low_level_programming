#include "main.h"
/**
 * swap_int - swaps the value of two variables
 * @a: first variable
 * @b: second variable
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c, d, *p, *q;

	p = &*a;
	q = &*b;
	c = *a;
	d = *b;
	*q = c;
	*p = d;
}
