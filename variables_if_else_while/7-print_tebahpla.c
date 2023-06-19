#include <stdio.h>
#include <stdlib.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar(10);
	return (0);
}
