#include <stdio.h>

int main(void)
{
	char *dest = "hello";
	char *src = " world.";
	int i, h;

	printf("dest before: %s\n", dest);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	printf("i before incrementation: %d\n", i);

	h = 0;
	while (src[h] != '\0')
	{
		src[h] = dest[i];
		h++;
		i++;
	}

	printf("dest after: %s\n", dest);
	return (0);
}
