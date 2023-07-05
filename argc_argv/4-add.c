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
	int index1 = 1;
	char *s;
	int result = 0;
	int index2;

	while (index1 < argc)
	{
		s = argv[index1];
		index2 = 0;

		while (s[index2] != '\0')
		{
			if (s[index2] < '0' || s[index2] > '9')
			{
				printf("Error\n");
				return (1);
			}
			index2++;
		}
		index1++;
	}
	for (index1 = 1; index1 < argc; index1++)
	{
		result = result + atoi(argv[index1]);
	}
	printf("%d\n", result);
	return (0);
}
