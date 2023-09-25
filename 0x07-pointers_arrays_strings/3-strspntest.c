#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer  which you want to search for characters from
 * @accept: pointer containing the set of characters you want to accept
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAccepted;
	char *a;

	while (*s != '\0')
	{
		isAccepted = 0;
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
			isAccepted = '1';
			break;
			}
			a++;
		}
		if (!isAccepted)
		{
			break;
		}
		count++;
		s++;
	}

return (count);
}
