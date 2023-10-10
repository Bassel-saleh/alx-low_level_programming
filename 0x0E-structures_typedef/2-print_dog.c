#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog info
 * @d: string which contain dog info
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
