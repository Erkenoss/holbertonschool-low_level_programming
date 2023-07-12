#include "main.h"
#include <stdlib.h>

/**
* _calloc - return t after init all memb of size to 0
*
* @nmemb: nbr element in tab
* @size: size of each element
*
* Return: t
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	t = malloc(size * nmemb);
		if (t == NULL)
			return (NULL);

	while (i < nmemb * size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
