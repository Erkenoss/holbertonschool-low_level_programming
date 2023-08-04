#include "main.h"

/**
 * get_bit - return the bit at index... index.
 *
 * @index: pos given to search the bit
 * @n: the binary number when search the index
 *
 * Return: the bit what we want to get
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned int bit = 0;

	if (index > sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	while (count < index)
	{
		count++;
		n = n >> 1;
	}
	bit = n & 1;
	return (bit);
}
