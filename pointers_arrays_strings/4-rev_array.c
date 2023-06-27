#include "main.h"

/**
* reverse_array - check the code
* @a: an int array
* @n: nbr of int in a
*
* Return: Always 0.
*/

void reverse_array(int *a, int n)
{
	int len = 0;
	int rev = n - 1;
	int temp;

	while (len < rev)
	{
		temp = a[len];
		a[len] = a[rev];
		a[rev] = temp;

		len++;
		rev--;
	}
}
