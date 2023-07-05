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
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int c = a * b;

		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
