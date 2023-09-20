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
		if (w[0] >= 97 && w[0] <= 122)
			w[0] = w[0] - 32;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (w[i] == separators[j] && w[(i + 1)] >= 97 && w[(i + 1)] <= 122)
			{
				w[i + 1] -= 32;
			}
		}
	}
	return (w);
}
