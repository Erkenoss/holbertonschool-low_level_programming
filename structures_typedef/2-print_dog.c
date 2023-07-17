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
		d->name = "(nil)";
	if (d->age == 0)
		d->age = d->age;	
	if (d->owner == NULL)
		d->owner = "(nil)";		
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
