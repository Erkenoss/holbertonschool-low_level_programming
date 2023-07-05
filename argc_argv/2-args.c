#include<stdio.h>

/**
* main - check the code
* @argc: nbr of argu in main
* @argv: list of argument since 0, the name of the prog
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
