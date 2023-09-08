#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char l = 'a';

	for (i = 0; i < 26; i++)
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0)
}
