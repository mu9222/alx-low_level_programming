#include <stdlib.h>
#include "dog.h"
#include "main.h"


/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: nwe struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
