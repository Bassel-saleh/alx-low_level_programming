#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 00 (success)
 */
int main(void)
{
	int a;
	int b;
	int d;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = a; c <= '9'; c++)
			{
				for (d = (a == c) ? (b + 1) : 0; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != '9' || b != '8' || c != '9' || d != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
