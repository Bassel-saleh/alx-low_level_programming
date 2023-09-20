#include "main.h"
/**
 * rot13 - replace some characters in a string to match ROT13
 * @w: is the string to be changed
 * Return: w
 */
char *rot13(char *w)
{
	char rotspeak[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotcode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; w[i] != '\0'; i++)
	{
		for (j = 0; rotspeak[j] != '\0'; j++)
		{
			if (w[i] == rotspeak[j])
			{
				w[i] = rotcode[j];
				break;
			}
		}
	}
	return (w);
}
