#include <stdio.h>
#include <stdlib.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	int i;

	for (i = 0; i < 48; i++)
	{
		if (i > 57)
			continue;	

		putchar(i);

	}
	return (0);
}
