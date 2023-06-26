#include "main.h"

/**
* puts_half - check the code
* @str: a char pointer
*
* Return: Always 0.
*/

void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		for (half = ((len - 1) / 2); half != len; half++)
			_putchar(str[half]);
	}
	if (len % 2 == 0)
	{
		for (half = (len / 2); half != len; half++)
			_putchar(str[half]);
	}
	_putchar('\n');
}
