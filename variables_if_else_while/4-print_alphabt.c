#include <stdio.h>
#include <stdlib.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
		putchar(10);
	}
	return (0);
}
