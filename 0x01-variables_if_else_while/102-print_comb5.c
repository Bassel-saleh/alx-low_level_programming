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
		for (b = (a + 1); b <= '9'; b++)
		{
			for (c = (b + 1); c <= '9'; c++)
			{
				for (d = (c + 1); d <= '9'; d++)
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
