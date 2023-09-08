#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int n = '0';

	while (n <= 'F')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
