#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: result or null
 */
char *argstostr(int ac, char **av)
{
	int l, i, index, tl;
	char *result;

	if (ac == 0 || av == 0)
		return (0);
	tl = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != 0)
		{
			l = 0;
			while (av[i][l] != '\0')
			{
				l++;
			}
			tl += l + 1;
		}
	}
	result = (char *)malloc((tl + 1) * sizeof(char));
	if (result == 0)
		return (0);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != 0)
		{
			l = 0;
			while (av[i][l] != '\0')
			{
				result[index++] = av[i][l++];
			}
			result[index++] = '\n';
		}
	}
	result[index] = '\0';
	return (result);
}
