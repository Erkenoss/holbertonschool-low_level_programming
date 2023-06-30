#include "main.h"

/**
 * _strstr - check the code
 * @haystack: a char pointer
 * @needle: a char pointer
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
