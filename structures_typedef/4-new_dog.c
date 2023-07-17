#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len1 = 0, len2 = 0;
	dog_t *d;

	d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);
	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	d->name = malloc(sizeof(char) * (len1 + 1));
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
	d->owner = malloc(sizeof(char) * (len2 + 1));
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	d->age = age;

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	return (d);
}
