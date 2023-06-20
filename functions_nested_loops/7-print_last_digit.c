#include "main.h"

/**
* print_last_digit - check the code
* @n: imput int
*
* Return: Always 0.
*/

int print_last_digit(int n)
{
	int j = n % 10;

	if (j < 0)
	{
	j = j * -1;
	}
	_putchar(j + '0');
	return (j);
}
