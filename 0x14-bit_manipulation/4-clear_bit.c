#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: positive numbers.
 * @index: bits.
 * Return: 1 (Worked) -1 (Error).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
