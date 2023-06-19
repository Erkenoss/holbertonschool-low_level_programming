#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative \n", n);

	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);

	}
	else
	{
		printf("%d is popsitive \n", n);
	}
	return (0);
}
