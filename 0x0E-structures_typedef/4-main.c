#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *a, *b;
	float c;
	dog_t *my_dog;

	a = NULL;
	b = NULL;
	c = 0;
	my_dog = new_dog(a, c, b);
	printf("My name is %s, my owner is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->owner, my_dog->age);
	return (0);
}
