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
	int len2 = 0;
	int result;

	while ((s1[len] && s2[len2]) != '\0')
	{
		if (s1[len] < s2[len2])
			result = s1[len] - s2[len2];
		
		if (s1[len] == s2[len2])
			result = s1[len] - s2[len2];

		else	
			result = s1[len] - s2[len2];
		
		len++;
		len2++;

	}
	return (result);
}
