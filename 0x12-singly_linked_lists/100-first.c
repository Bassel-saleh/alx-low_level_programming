#include <stdio.h>
void lf(void) __attribute__((constructor));

/**
 * lf - prints a string before main (ladies first)
 */
void lf(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
