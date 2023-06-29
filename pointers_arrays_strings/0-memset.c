#include "main.h"

/**
* _memset - check the code
* @s: a char pointer
* @b: const bytes pass in
* @n: nbr bytes
*
* Return: s, the pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
