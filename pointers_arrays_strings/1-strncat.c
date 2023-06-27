#include "main.h"

/**
* _strncat- check the code
* @dest: a char pointer
* @src: a char pointer
* @n: an int bytes
*
* Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;

	while (dest[len] != '\0')
		len++;

	while (src[len2] != '\0')
	{
		if (len2 < n)
			dest[len + len2] = src[len2];
		len2++;
	}
	return (dest);
}
