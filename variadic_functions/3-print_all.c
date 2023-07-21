#include "variadic_functions.h"

/**
 * print_all - printf all the strings elements
 * @format: a constant string give the pattern we need for
 *
 * Return: no return, void function
 */

void print_all(const char * const format, ...)
{
	all_t tab[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int check = 0;
	int check2;
	va_list args;

	va_start(args, format);
	while (format[check] != '\0')
	{
		check2 = 0;
		while (tab[check2].str != NULL)
		{
			if (*tab[check2].str == format[check])
				tab[check2].f(args);
			check2++;
		}
		check++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - print a char
 * @args: argument of va_list
 * Return: Nothing
 */
void print_char(va_list args)
{
	int c = va_arg(args, int);

	printf("%c ", c);
}

/**
 * print_int - print an int
 * @args: argument of va_list
 * Return: Nothing
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d ", i);
}

/**
 * print_float - print a float
 * @args: argument of va_list
 * Return: Nothing
 */
void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f ", f);
}

/**
 * print_string - print a string
 * @args: argument of va_list
 * Return: Nothing
 */
void print_string(va_list args)
{
	const char *str = va_arg(args, const char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s ", str);
}
