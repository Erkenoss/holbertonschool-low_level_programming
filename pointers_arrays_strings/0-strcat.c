#include "main.h"

/**
* _strcat - check the code
* @dest: a char pointer
* @src: a char pointer
*
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (dest[len] != '\0')
		len++;

	while (src[len2] != '\0')
	{
		dest[len + len2] = src[len2];
		len2++;
	}
	return (dest);
}
