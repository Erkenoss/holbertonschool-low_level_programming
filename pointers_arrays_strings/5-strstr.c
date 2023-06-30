#include "main.h"

/**
* _strstrs- check the code
* @s: a char pointer
* @accept: a char pointern
*
* Return: s, the pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;

		while (needle[i] != *haystack && needle[i] != '\0')
		{
			i++;
		}
		if (needle[i] == *haystack)
			return (needle);
		haystack++;
	}
	return (NULL);
}
