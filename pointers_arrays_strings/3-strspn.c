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
	unsigned int byt = 0;
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0', i++)
		{
			if (*s == accept[i])
				byt++;
			i++;
		}
		s++;
	}
	return (byt);
}
