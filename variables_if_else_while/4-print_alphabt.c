#include <stdio.h>
#include <stdlib.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	int c;

	for (c = 65; c <= 122; c++)
	{
		if (c == 101)
		{
			c -= 1;
		}
		else if (c == 113)
		{
			c -= 1;
		}
		putchar(c);
	}
	return (0);
}
