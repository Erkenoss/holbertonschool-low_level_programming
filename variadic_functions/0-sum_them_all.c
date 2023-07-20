#include "variadic_functions.h"

/**
 * sum_them_all - do the sum of all passed arguments
 *  @n: a constant unsigned number
 *
 *  Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list integer;
	unsigned int nbr_arg;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(integer, n);

	for (nbr_arg = 0; nbr_arg < n; nbr_arg++)
	{
		sum += va_arg(integer, int);
	}
	va_end(integer);
	return (sum);
}
