#include "dog.h"
#include <stdio.h>

/**
 * init_dog - intialises the name, age & dog owner variables.
 *
 * @d: main variable
 * @age: dogs age
 * @name: dogs name
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

