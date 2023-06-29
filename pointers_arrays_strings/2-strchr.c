#include "main.h"

/**
* _strchr - check the code
* @s: a char pointer
* @c: a char argum
*
* Return: s, the pointer
*/

char *_strchr(char *s, char c)
{
	if (c == '\0')
		return ("");

	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);

		s++;
	}
	return (NULL);
}
