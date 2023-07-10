#include "main.h"
#include <unistd.h>

/**
* _strdup - create a temp array with malloc
* @str: the character passed to strdup
*
* Return: A pointer
*/

char *_strdup(char *str)
{
	char *t;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = 0;

	while (size != '\0')
	{
		size++;
	}
	t = malloc(sizeof(char) + size + 1);

	i = 0;

	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}
	if (t == NULL)
		return (NULL);
	return (t);

}
