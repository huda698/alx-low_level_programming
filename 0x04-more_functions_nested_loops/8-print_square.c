#include "main.h"

/**
 * print_square - using the character # to print the square
 *
 * @size: the size of the square.
 */

void print_square(int size)
{
	int high, width;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (width = 1; width <= size; width++)
		{
			for (high = 1; high <= size; high++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
