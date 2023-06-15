#include <stdio.h>
#include <stdlib.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void)
{
	printf("Size of a char: %lu bytes(s)", sizeof(char));
	printf("Size of an int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)", sizeof(float));
}
