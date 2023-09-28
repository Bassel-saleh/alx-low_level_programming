#include "main.h"
/**
 * _puts_recursion - 
 * @s: 
 * Return: 
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
int main()
{
	char *s;

	_puts_recursion(s);
	return (0);
}
