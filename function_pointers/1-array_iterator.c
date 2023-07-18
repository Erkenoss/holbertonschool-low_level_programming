#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - initialize an array
 * @array: element of the array
 * @size: size of array
 * @action: pointer on a void fonction give an int
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || size == 0 || (*action) == NULL)
		return;
	for (index = 0; index < size; index++)
		(*action)(array[index]);
}
