#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	int len, i;
	char *strc;

	if (str == 0)
		return (0);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	strc = malloc((len + 1) * sizeof(char));
	if (strc == 0)
		return (0);
	for (i = 0; i <= len; i++)
	{
		strc[i] = str[i];
	}
	return (strc);
}
