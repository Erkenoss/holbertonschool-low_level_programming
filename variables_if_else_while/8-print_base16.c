#include <stdio.h>
#include <stdlib.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (i == 58)
			i = 97;

		putchar(i);
	}
	putchar ('\n');
	return (0);
}
