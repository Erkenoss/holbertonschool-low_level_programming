#include "main.h"

/**
* string_toupper - check the code
* @str: a char pointer
*
* Return: always 0.
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
