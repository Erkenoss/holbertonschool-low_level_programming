#include "main.h"
#include <stdio.h>

/**
* print_to_98- show to 00.00 to 23.59 hours
* @n: is an int
* Return: Always 0.
*/


void print_to_98(int n)
{

	for (; n <= 97; n++)
	{
		printf("%d, ", n);

		if (n == 98)
			printf("%d\n", n);

	}
	if (n == 98)
		printf("%d\n", n);

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);

			if (n == 98)
				printf("%d\n", n);
		}
	}
}
