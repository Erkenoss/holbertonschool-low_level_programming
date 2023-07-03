#include "main.h"

/**
* _sqrt_recursion - check the code
* @n: an int
*
* Return: root of n
*/

int _sqrt_recursion(int n)
{
	return (sqtr_recursion2(n, 1));
}

/**
* sqtr_recursion2 - calcul square root and iterate index
* @n: an int
* @index: an int for iterate
*
* Return: root of n
*/

int sqtr_recursion2(int n, int index)
{
	if (index * index == n)
		return (index);

	else if (index * index > n)
		return (-1);

	return (sqtr_recursion2(n, index + 1));
}

