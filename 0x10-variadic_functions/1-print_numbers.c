#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print constant ints
 * @separators: are separators between numbers
 * @n: the number of constants
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start (args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != 0 && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
