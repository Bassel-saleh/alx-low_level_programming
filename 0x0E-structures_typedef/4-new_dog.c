#include "dog.h"
#include <stdio.h>
/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 * Return: Length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str != 0)
		len++;
	return (0);
}

/**
 * _strdup - Create a duplicate of a string
 * @str: The input string
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	int len, i;
	char *dup;

	len = _strlen(str);
	dup = malloc(len + 1);
	if (dup == null)
		return (0);
	for (i = 0; i<= len; i++)
		dup[i] = str[i];
	return (dup);
}

/**
 * new_dog - adds a new dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog->name == 0 || new_dog->owner == 0)
		return (0);
	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);
	if (new_dog->name == 0 || new_dog->owner == 0)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	return (new_dog);
}
