#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - it initializes a structure
 * @d: a pointer
 * @name: name
 * @age: age
 * @owner: owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
