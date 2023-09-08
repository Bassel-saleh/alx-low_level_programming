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
	char L = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(l);
		l++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(L);
		L++;
	}

	putchar('\n');

	return (0);
}
