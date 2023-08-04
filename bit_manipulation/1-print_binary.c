#include "main.h"

/**
 * print_binary - print a unsigned long int in binary
 *
 * @n: nbr to convert in binary
 *
 * Return: No return, void function
 */

void print_binary(unsigned long int n)
{
	unsigned long int b = 1UL << (sizeof(n) * CHAR_BIT - 1);
	int start = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (b > 0)
	{
		if (n & b)
		{
			start = 0;
			_putchar('1');
		}
		else if (!start)
		{
			_putchar('0');
		}
		b = b >> 1;
	}
}
