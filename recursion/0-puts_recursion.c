#include "main.h"

/**
* _puts-recursion - check the code
* @s: a char pointer to print 
*
* Return: dest, (the pointer)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
