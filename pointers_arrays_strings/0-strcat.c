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
	int len = 0;
	int len2 = 0;

	while (src[len] != '\0')
		len ++;

	while (dest[len2] != '\0')
	{
		dest[len2] = src[len];
		len2++;
		len++;
	}
	dest[len2] = '\0';
	return (dest);
}
