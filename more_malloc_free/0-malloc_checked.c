#include "main.h"
#include <unistd.h>

/**
* malloc_checked - create a temp array with malloc
* @b: int passed to malloc_checked
*
* Return: A pointer
*/

void *malloc_checked(unsigned int b)
{
	char p*;

	p = malloc(sizeof(char) * b);

	if (p == NULL)
		exit(98);
}
