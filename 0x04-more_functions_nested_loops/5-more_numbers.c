#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int num, count, times;

	for (times = 0; times < 10; times++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
	}
	_putchar('\n');
}
