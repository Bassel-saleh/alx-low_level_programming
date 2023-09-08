#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int n;

	for (n = '0'; n <= '9';)
	{
		putchar(n);
		n++;
	}
	for (n = 97; n <= 102;)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
