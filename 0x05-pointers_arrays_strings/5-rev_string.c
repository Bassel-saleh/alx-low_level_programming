#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: the string to be reversed
 * Return: no return
 */
void rev_string(char *s)
{
	int i;
	int j;
	int x;

	i = 0;
	while (s[i])
		i++;

	j = i / 2;
	x = 0;
	while (x != j)
	{
		char h = s[x];
		int y = i - x - 1;

		s[x] = s[y];
		s[y] = h;
		x++;
	}
}
