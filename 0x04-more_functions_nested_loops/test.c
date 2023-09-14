#include <stdio.h>

int main(void)
{
	int a;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= 14; a++)
		{
			if (a > '9')
			{
				putchar(a / 10 + '0');
			}
			putchar(a % 10 + '0');
		}
		putchar('\n');
	}
	return (0);
}
