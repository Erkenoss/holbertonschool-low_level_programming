#include "main.h"

/**
 * flip_bits - count all the bit we need to flip for
 * passed between to unsigned long int
 *
 * @n: first int
 * @m: second
 *
 * Return: the number of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
