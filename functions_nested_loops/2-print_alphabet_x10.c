#include "main.h"

/**
*  print_alphabet_x10 - Description pour main
*  Return: Always 0 (succes)
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 'a'; j < 'z'; j++)
			_putchar(j);
		i++;
		_putchar('\n');
	}
}
