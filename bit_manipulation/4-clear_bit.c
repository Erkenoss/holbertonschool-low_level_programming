#include "main.h"

/**
 * clear_bit - change the value of a bit to 0 if 1
 *
 * @n: pointer on an unsigned long int n
 * @index: the range when i need to go for change the bit
 *
 * Return: 1 if success -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * CHAR_BIT)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
