#include "variadic_functions.h"

/**
 * print_numbers - printf all the tab element
 * @n: a constant unsigned, number of ... (elements)
 * @separator: const char pointer between numbers, like ','
 *
 * Return: no return, void function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int nbr_arg;
	va_list integer;

	va_start(integer, n);

	for (nbr_arg = 0; nbr_arg < n; nbr_arg++)
	{
		printf("%d", va_arg(integer, int));
		if (nbr_arg != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(integer);
}
