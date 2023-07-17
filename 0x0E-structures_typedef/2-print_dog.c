#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  prints a struct dog.
 * @d: struct dog.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : ("nail"));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : ("nail"));
	}
}
