#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char
 * @c: the character to be printed
 * Return: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
