#include "variadic_functions.h"

/**
 * print_strings - printf all the strings elements
 * @n: a constant unsigned, number of strings elements
 * @separator: const char pointer between string, like ','
 *
 * Return: no return, void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int nbr_arg;

	va_start(string, n);

	for (nbr_arg = 0; nbr_arg < n; nbr_arg++)
	{
		printf("%s", va_arg(string, char*));
		if (nbr_arg != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
