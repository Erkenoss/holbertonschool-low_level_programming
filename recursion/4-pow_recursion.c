#include "main.h"

/**
* _pow_recursion - check the code
* @x: an int
* @y: an int
* Return: Always 0.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x);
}
