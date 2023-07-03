#include "main.h"

/**
* _puts_recursion - check the code
* @s: a char pointer to print
*
* Return:
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		break;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
