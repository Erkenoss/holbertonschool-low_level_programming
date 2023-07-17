#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function use 3 variables and struct dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * @d: pointer point in struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: nil");
	if (d->age == 0)
		printf("Age: nil");
	if (d->owner == NULL)
		printf("Owner: nil");
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
