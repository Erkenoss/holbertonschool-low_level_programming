#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: the string containt the number to convert
 *
 * Return: the binary convert in unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{		
		if (*b != '1' && *b != '0')
			return (0);
		convert = (convert << 1) + (*b - '0');
		b++;
	}
	return (convert);
}
