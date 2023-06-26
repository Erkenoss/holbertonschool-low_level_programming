#include "main.h"

/**
* reset_to_98 - check the code
* @n: An int pointer
*
* Return: Always 0.
*/

void reset_to_98(int *n)
{
	int **p = &n;
	**p = 98;
}
