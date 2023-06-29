#include "main.h"

/**
* _memcpy - check the code
* @dest: a char pointer destination
* @src: achr to cpy in dest
* @n: nbr bytes for src to dest
*
* Return: dest, (the pointer)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
