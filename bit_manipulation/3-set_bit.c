#include "main.h"

/**
 * set_bit - change the value of a bit by 1
 *
 * @n: pointer on an insigned long int
 * @index: where i need to go for change the bit
 *
 * Return: 1 if success or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * CHAR_BIT)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
