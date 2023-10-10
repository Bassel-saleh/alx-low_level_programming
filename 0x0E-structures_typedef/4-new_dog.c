#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 * Return: Length of the string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * _strcpy - copy a string into another
 * @dest: destination string
 * @src: source string
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - adds a new dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Return: ndog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *namecpy, *ownercpy;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->age = age;
	if (name != NULL)
	{
		namecpy = malloc(_strlen(name) + 1);
		if (namecpy == NULL)
		{
			free(ndog);
			return (NULL);
		}
		ndog->name = _strcpy(namecpy, name);
	}
	else
		ndog->name = NULL;

	if (owner != NULL)
	{
		ownercpy = malloc(_strlen(owner) + 1);
		if (ownercpy == NULL)
		{
			free(ndog);
			return (NULL);
		}
		ndog->owner = _strcpy(ownercpy, owner);
	}
	else
		ndog->owner = NULL;

	return (ndog);
}
