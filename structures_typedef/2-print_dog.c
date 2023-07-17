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
	else if(d->name == NULL)
		d->name = "(nil)";
	else if (d->age == 0)
		printf("Age: %f", d->age);
	else if (d->owner == NULL)
		d->owner = "(Nil)";		
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
