#include "main.h"

/**
* _strncpy- check the code
* @dest: a char pointer
* @src: a char pointer
* @n: an int bytes
*
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (len < n && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
