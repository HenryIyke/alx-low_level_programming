#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable
 * @d: variable type
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
