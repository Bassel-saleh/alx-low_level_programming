#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int n = '0';

	while (n <= '15')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
