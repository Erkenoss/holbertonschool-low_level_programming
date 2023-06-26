#include "main.h"

/**
* *_strcpy - check the code
* @dest: a char pointer
* @src: a char pointer
*
* Return: Always 0.
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	
	while (src[len] <= '\0')
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
