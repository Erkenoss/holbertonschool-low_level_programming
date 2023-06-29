#include "main.h"

/**
* _strspn - check the code
* @s: a char pointer
* @accept: pointer for take count on bytes in
*
* Return: s, the pointer
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt;

	while (*s != '\0')
	{
		if (*s == *accept)
			byt++;
		s++;
	}
	return (byt);
}
