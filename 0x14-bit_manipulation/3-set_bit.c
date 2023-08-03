#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: positive numbers.
 * @index: bits.
 * Return: 1 (worked) -1 (error).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1l << index));
}
