#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search an integer in array
 * @array: element of array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: an int compare with cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int index2;

	if (size <= 0 || array == 0 || (*cmp) == 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		index2 = (*cmp)(array[index]);
		if (index2 != 0)
			return (index);
	}
	return (-1);
}
