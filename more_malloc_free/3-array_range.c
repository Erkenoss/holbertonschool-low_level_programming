#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - return t after init all memb of size to 0
*
* @nmemb: nbr element in tab
* @size: size of each element
*
* Return: t
*/

int *array_range(int min, int max)
{
	int *t = NULL;
	int i = 0;

	if (min > max)
		return (NULL);

	t = malloc(sizeof(int) * (max - min + 1));

	if (t == NULL)
		return (NULL);

	while (min <= max)
	{
		t[i] = min;	
		min++;
		i++;
	}
	return (t);
}
