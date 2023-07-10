#include "main.h"
#include <unistd.h>

/**
* create_array - create a temp array with malloc
* @size: the size of the array
* @c: the character passed to create_array
*
* Return: A pointer
*/

char *create_array(unsigned int size, char c)
{

	char *t;
	unsigned int i;


	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
