#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
