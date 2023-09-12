#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int p = 0;

	while (str[p] != '\0')
	{
		char c = str[p];

		_putchar(c);
		p++;
	}
	putchar('\n');
	return (0);
}
