#include<stdio.h>
#include<stdlib.h>

/**
* main - check the code
* @argc: nbr of argu in main
* @argv: list of argument since 0, the name of the prog
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	int c = a * b;

	if (argc == 3)
	{
		printf("%i\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
