#include "main.h"

/**
 * print_diagsums - check the code
 * @a: a int pointer
 * @size: a int argum
 *
 * Return: the pointer
 */
void print_diagsums(int *a, int size)
{
	int r = 0;
	int c = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (r < size)
	{
		sum1 += *(a + (r * size) + c);
		sum2 += *(a + (r * size) + (size - 1 - c));
		c++;
		r++;
	}
	printf("%d, %d\n", sum1, sum2);
}
