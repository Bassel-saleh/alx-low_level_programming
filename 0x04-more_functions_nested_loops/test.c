#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (a >= 10)
			{
				putchar(a / 10 - '0');
			}
			putchar(a % 10 - '0');
		}
		putchar('\n');
	}
	return (0);
}
