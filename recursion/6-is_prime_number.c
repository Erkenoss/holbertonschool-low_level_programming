#include "main.h"

/**
* is_prime_number - check the code
* @n: check if this integer is prime
*
* Return: Always 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (integer(n, 2));
}

/**
* integer - check the code
* @n: check if this integer is prime
*
* Return: Always 0.
*/

int integer(int n, int integ)
{
	if (n == integ)
		return (1);

	else if (n % integ == 0)
		return (0);
	return (integer(n, integ + 1));
}
