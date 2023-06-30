#include "main.h"

/**
* _atoi - check the code
* @s: a char pointer
*
* Return: an integer
*/

int _atoi(char *s)
{
	int i = 0;
	int number = 1;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		else if (s[i] == '-')
		{
			number *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
		if (s[i] < '0' || s[i] > '9')
		{
			result *= number;
			return (result);
		}
	}
	return (result);
}
