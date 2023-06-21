#include "main.h"
#include <stdio.h>

/**
* print_to_98- show to 00.00 to 23.59 hours
* @n: is an int
* Return: Always 0.
*/


void print_to_98(int n)
{

	for (; n < 98; n++)
	{
		printf("%d, ", n);

	}

	for (; n > 98; n--)
	{
		printf("%d, ", n);

	}
	printf("%d\n", n);

}
