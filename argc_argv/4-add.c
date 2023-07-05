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
	int index = 0;
	char *s;
	int result = 0;
	int index2;
	while (index < argc)
	{
		s = argv[index];
		index2 = 0;

		while (s[index2] != '\0')
		{
			if (s[index2] <= '0' && s[index2] >= '9')
			{
				printf("Error\n");
				return (1);
			}
			index2++;
		}
		index++;
	}
	
	for (index = 1; index < argc; index++)
	{
		result = result + atoi(argv[index]);
	}
	printf("%d\n", result);
	return (0);
}
