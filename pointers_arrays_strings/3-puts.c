#include "main.h"

/**
* swap_int - check the code
* @str: an char pointer
*
* Return: Always 0.
*/

void _puts(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
