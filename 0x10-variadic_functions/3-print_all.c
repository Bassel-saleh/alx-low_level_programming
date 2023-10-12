#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - print char type data
 * @list: is the list of data types
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print int type data
 * @list: is the list of data types
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print float type data
 * @list: is the list of data types
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_str - print string type data
 * @list: is the list of data types
 */
void print_str(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == 0)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * pritn_all - prints everything
 * @format: the format to be printed
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j;
	va_list list;

	datatype type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};
	va_start (list, format);
	j = 0;
	while (format != 0 && format[j] != '\0')
	{
		i = 0;
		while (type[i].choice != '\0')
		{
			if (type[i].choice == format[j])
			{
				printf("%s", separator);				
				type[i].f(list);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(list);
	printf("\n");
}
