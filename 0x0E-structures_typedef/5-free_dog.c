#include "dog.h"

/**
 * free_dog -free memory allocated
 * @d: pointer to dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
