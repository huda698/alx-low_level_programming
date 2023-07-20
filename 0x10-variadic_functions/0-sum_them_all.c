#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of all parameters.
 * @n: the number of the parameters.
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list c;

	va_start(c, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
			sum += va_arg(c, int);
	}
	va_end(c);
	return (sum);
}
