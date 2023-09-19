#include "search_algos.h"

/**
 * linear_search - search an value in an index
 *
 * @array: array give to the function
 * @size: size of the array
 * @value: value we search
 *
 * Return: The index where the value is
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	if (array == NULL || size < 2)
		return (-1);

	index = 0;

	while (index < size)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
