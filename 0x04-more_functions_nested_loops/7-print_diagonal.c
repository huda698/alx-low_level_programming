#include "main.h"

/**
 * print_diagonal - print diagonal.
 * @n: is the number of times the \ character should be printed.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == i)
					_putchar(92);
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
