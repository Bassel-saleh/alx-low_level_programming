#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct datatype - strct datatype
 * @datatpe: the data type to print correctly
 * @f: the function to be used
 */
typedef struct datatype
{
	char choice;
	void (*f)(char *list);
} datatype;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
