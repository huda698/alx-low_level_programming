#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as-
 * a parameter on each element of an array.
 * @array: an array.
 * @size: a size of the array.
 * @action: function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;
	
	if (array && size && action)
		while (array <= i)
			action(*array++);
}
