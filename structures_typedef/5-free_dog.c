#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * free_dog - create a new dog
 *
 * @d: pointer to dog_t
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
