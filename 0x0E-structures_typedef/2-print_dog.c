#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * print_dog - function that prints a struct dog
 * @d: nwe struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		printf("nothing");
	}
	if (d->name == NULL)
		printf("Name: nil");
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0 )
		printf("nil");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("nil");
	else
		printf("Owner: %s\n", d->owner);
}
