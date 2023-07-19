#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 *  main - check the code
 *  @argc: number of arguments
 *  @argv: arguments
 *
 *  Return: always 0
 */

int main(int argc, char *argv[])
{
	int first, second;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);

	if (strlen(argv[2]) != 1 || strcmp(argv[2], ".") == 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(first, second));

	return (0);
}
