#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars
 * Return: converted numbers.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cnum = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		cnum = cnum * 2 + (*b++ - '0');
	}
	return (cnum);
}
