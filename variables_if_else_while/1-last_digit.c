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

	int a = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, a);

	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);

	}
	else if (n == 0)
	{
		printf("last digit if %d is %d and is 0", n, a);

	}
	return (0);
}
