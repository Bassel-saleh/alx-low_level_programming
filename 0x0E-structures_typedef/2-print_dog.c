#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog info
 * @d: string which contain dog info
 */
void print_dog(struct dog *d)
{
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
