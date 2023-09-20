#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @w: the string to be edited
 * Return: w
 */
char *cap_string(char *w)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; w[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (w[i] == separators[j] && w[i + 1] >= 'a' && w[i + 1] <= 'z')
				w[i + 1] -= 32;
		}
	}
	return (w);
}
