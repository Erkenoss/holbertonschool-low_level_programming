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
	int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != *s && accept[i] != '\0')
		{
			i++;
			if (accept[i] == *s)
				byt++;
		}
		s++;
	}	
	return (byt);	

}
