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
	int len3;

	while (src[len] != '\0')
		len ++;

	while (dest[len2] != '\0')
	{
		len2++;
		len++;
	}
	len3 = (len + 1) + (len2 + 1);

	dest[len3] = '\0';
	return (dest);
}
