#include "dog.h"
/**
 * init_dog - initializes struct dog
 *
 * @d: struct pointer
 * @name: string name
 * @age: age float
 * @owner: string owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
