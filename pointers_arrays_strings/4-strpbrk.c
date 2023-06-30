#include "main.h"

/**
* _strpbrk - check the code
* @s: a char pointer
* @accept: a char pointern
*
* Return: s, the pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != *s && accept[i] != '\0')
		{
			i++;
		}
		if (accept[i] == *s)
			return (s);
		s++;
	}
	return (NULL);
}
