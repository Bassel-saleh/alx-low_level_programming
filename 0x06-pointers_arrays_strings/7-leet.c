#include "main.h"
/**
 * leet - replace some characters in a string to match leetspeak
 * @w: is the string to be changed
 * Return: w
 */
char *leet(char *w)
{
	char leetspeak[] = "aAeEoOtTlL";
	char leetcode[] = "443307711";
	int i, j;

	for (i = 0; w[i] != '\0'; i++)
	{
		for (j = 0; leetspeak[j] != '\0'; j++)
		{
			if (w[i] == leetspeak[j])
			{
				w[i] = leetcode[j];
			}
		}
	}
	return (w);
}
