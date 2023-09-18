#include "main.h"
/**
 * puts2 - print odds characters only
 * @str: is the string to be printed
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
			_putchar(*str[i]);

		i++;
	}
	_putchar('\n');
}
