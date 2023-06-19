#include <stdlib.h>
#include <stdio.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar(10);
	return (0);
}
