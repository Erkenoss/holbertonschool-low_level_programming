#include "search_algos.h"

/**
 * binary_search - search a value in a index with binary search method
 *
 * @array: array give to the function
 * @size: size of the array
 * @value: value we have for found the index
 *
 * Return: index where the value is
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int left;
	unsigned int right;
	unsigned int middle;
	unsigned int index;

	if (array == NULL || size < 2)
		return (-1);

	left = 0;
	right = size - 1;
	index = 0;
	middle = 0;

	while (left <= right)
	{

		printf("Searching in array: ");
		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);

			if (index < right)
				printf(", ");
			else
				printf("\n");
		}

		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
