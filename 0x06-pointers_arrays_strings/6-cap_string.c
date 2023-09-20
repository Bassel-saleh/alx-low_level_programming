#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @w: the string to be edited
 * Return: w
 */
char *cap_string(char *w)
{
	int i;

	i = 0;
	while (w[i] != '\0')
	{
		i++;
		if (w[i] == ' ' || w[i] == '\n' || w[i] == '.' || i == 0)
		{
			i++;
			if (w[i] >= 'a' && w[i] <= 'z')
				w[i] -= 32;
		}
	}
	return (w);
}
