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

	if (str == NULL)
		return (NULL);
	
	t = malloc(sizeof(char));
	
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
