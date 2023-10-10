#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog info
 * @d: string which contain dog info
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
