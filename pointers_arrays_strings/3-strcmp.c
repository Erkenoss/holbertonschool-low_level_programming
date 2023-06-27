#include "main.h"

/**
* _strcmp- check the code
* @s1: a char pointer
* @s2: a char pointer
*
* Return: Always 0.
*/

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while ((s1[len] && s2[len]) != '\0')
	{
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);
		len++;
	}
	return (0);
}
