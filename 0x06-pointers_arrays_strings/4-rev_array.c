#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array parameter.
 *
 * @n: is the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int swp, b;

	for (i = 0, b = (n - 1); i < b; i++, b--)
	{
		swp = a[i];
		a[i] = a[b];
		a[b] = swp;
	}
}
