#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function use 3 variables and struct dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * @d: pointer point in struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
