#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 1 (success)
 */
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, text , sizeof(text) -1);
	return (1);
}
