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

	for (len = 0; *(str + len); len++)
		;
	return (0);
}

/**
 * _strcpy - copy a string into another
 * @dest: destination string
 * @src: source string
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
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
	if (ndog == 0)
		return (0);
	ndog->age = age;
	if (name != 0)
	{
		namecpy = malloc(_strlen(name) + 1);
		if (namecpy == 0)
		{
			free(ndog);
			return (0);
		}
		ndog->name = _strcpy(namecpy, name);
	}
	else
		ndog->name = 0;

	if (owner != 0)
	{
		ownercpy = malloc(_strlen(owner) + 1);
		if (ownercpy == 0)
		{
			free(ndog);
			return (0);
		}
		ndog->owner = _strcpy(ownercpy, owner);
	}
	else
		ndog->owner = 0;
	return (ndog);
}
