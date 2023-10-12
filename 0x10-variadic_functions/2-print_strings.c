#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings with separator between them
 * @separator: seprator string between strings
 * @n: number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != 0)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator != 0 && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
