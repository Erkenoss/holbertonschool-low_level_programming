#include "main.h"

/**
* strcmp- check the code
*
* Return: Always 0.
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
		}
	return (str);
}
