#include "main.h"

/**
* print_rev - check the code
* @dest: a char pointer
* @src: a char pointer
*
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int len;
	int len2;
	int len3;

	for (len = 0; src[len] != '\0'; len++)

	for (len2 = 0; dest[len] != '\0'; len++, len2++)
	{
		dest[len2] = src[len];
		len3 = len + len2;	
	}
	*dest = dest[len3] + '\0';

	return (dest);
}
