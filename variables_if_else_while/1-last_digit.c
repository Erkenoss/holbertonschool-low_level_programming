#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Description pour main
* Return: Always 0 (succes)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("The last digit %d " n " and is greater than 5\n", n);

	}
	else if (n < 6)
	{
		printf(" and is less than 6 and not 0\n", n);

	}
	else
	{
		printf(" and is 0\n", n);

	}
	return (0);
}
