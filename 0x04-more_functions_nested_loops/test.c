#include <stdio.h>

int main(void)
{
	int c = 65;

	if (c >= 65 && c <= 90)
	{
		printf("%i: ", c);
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		printf("%i: ", c);
		return (0);
	}
}
