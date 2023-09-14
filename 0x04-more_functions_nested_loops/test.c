#include <stdio.h>

int main(void)
{
	int size = 10;
	int a;
	int b;
	int c;

	if (size <= 0)
		putchar('\n');

	for (c = 1; c <= size; c++)
	{
		for (a = 1; a <= size; a++)
		{
			if (a <= (size - c))
				putchar(' ');
			else
				putchar('#');
		}
	putchar('\n');
	}
}
