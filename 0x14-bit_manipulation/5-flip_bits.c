#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: positive numbers.
 * @m: positive numbers.
 * Return: the number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int i = 0;

	while (xor)
	{
		if (xor & 1ul)
			i++;
		xor = xor >> 1;
	}
	return (i);
}
