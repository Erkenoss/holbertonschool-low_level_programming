#include "main.h"

/**
* _strstr - check the code
* @s: a char pointer
* @accept: a char pointern
*
* Return: s, the pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;

		while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
		{
			j++;
		}
		if (needle[j] == '\0')
		       return (haystack + i);
		i++;
	}
	return (NULL);
}
